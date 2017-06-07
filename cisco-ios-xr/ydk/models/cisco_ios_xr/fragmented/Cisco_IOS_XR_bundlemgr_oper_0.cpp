
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {

LacpBundles::LacpBundles()
    :
    bundles(std::make_shared<LacpBundles::Bundles>())
{
    bundles->parent = this;

    yang_name = "lacp-bundles"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper";
}

LacpBundles::~LacpBundles()
{
}

bool LacpBundles::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data());
}

bool LacpBundles::has_operation() const
{
    return is_set(operation)
	|| (bundles !=  nullptr && bundles->has_operation());
}

std::string LacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles";

    return path_buffer.str();

}

const EntityPath LacpBundles::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<LacpBundles::Bundles>();
        }
        return bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundles != nullptr)
    {
        children["bundles"] = bundles;
    }

    return children;
}

void LacpBundles::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LacpBundles::clone_ptr() const
{
    return std::make_shared<LacpBundles>();
}

std::string LacpBundles::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LacpBundles::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LacpBundles::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

LacpBundles::Bundles::Bundles()
{
    yang_name = "bundles"; yang_parent_name = "lacp-bundles";
}

LacpBundles::Bundles::~Bundles()
{
}

bool LacpBundles::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundles::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LacpBundles::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LacpBundles::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LacpBundles::Bundles::set_value(const std::string & value_path, std::string value)
{
}

LacpBundles::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    data(std::make_shared<LacpBundles::Bundles::Bundle::Data>())
	,members(std::make_shared<LacpBundles::Bundles::Bundle::Members>())
{
    data->parent = this;

    members->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles";
}

LacpBundles::Bundles::Bundle::~Bundle()
{
}

bool LacpBundles::Bundles::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (data !=  nullptr && data->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool LacpBundles::Bundles::Bundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (data !=  nullptr && data->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string LacpBundles::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles/bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<LacpBundles::Bundles::Bundle::Data>();
        }
        return data;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<LacpBundles::Bundles::Bundle::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

LacpBundles::Bundles::Bundle::Data::Data()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData>())
	,bundle_system_id(std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId>())
{
    actor_bundle_data->parent = this;

    bundle_system_id->parent = this;

    yang_name = "data"; yang_parent_name = "bundle";
}

LacpBundles::Bundles::Bundle::Data::~Data()
{
}

bool LacpBundles::Bundles::Bundle::Data::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "data";
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::~ActorBundleData()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data";
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::~MacAddress()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data";
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
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

LacpBundles::Bundles::Bundle::Data::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "data";
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::~BundleSystemId()
{
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleSystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id";
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

LacpBundles::Bundles::Bundle::Members::Members()
{
    yang_name = "members"; yang_parent_name = "bundle";
}

LacpBundles::Bundles::Bundle::Members::~Members()
{
}

bool LacpBundles::Bundles::Bundle::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundles::Bundles::Bundle::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LacpBundles::Bundles::Bundle::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Members' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Members::set_value(const std::string & value_path, std::string value)
{
}

LacpBundles::Bundles::Bundle::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"},
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::Counters>())
	,link_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::LinkData>())
	,mac_address(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MacAddress>())
	,member_mux_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData>())
{
    counters->parent = this;

    link_data->parent = this;

    mac_address->parent = this;

    member_mux_data->parent = this;

    yang_name = "member"; yang_parent_name = "members";
}

LacpBundles::Bundles::Bundle::Members::Member::~Member()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::has_data() const
{
    return member_interface.is_set
	|| bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool LacpBundles::Bundles::Bundle::Members::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(bandwidth.operation)
	|| is_set(iccp_node.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_order_number.operation)
	|| is_set(member_name.operation)
	|| is_set(member_type.operation)
	|| is_set(port_number.operation)
	|| is_set(port_priority.operation)
	|| is_set(underlying_link_id.operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Members::Member::get_entity_path(Entity* ancestor) const
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

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.operation)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.operation)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.operation)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "member-type")
    {
        member_type = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
    }
}

LacpBundles::Bundles::Bundle::Members::Member::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{
    yang_name = "counters"; yang_parent_name = "member";
}

LacpBundles::Bundles::Bundle::Members::Member::Counters::~Counters()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(defaulted.operation)
	|| is_set(excess_lacpd_us_received.operation)
	|| is_set(excess_marker_packets_received.operation)
	|| is_set(expired.operation)
	|| is_set(illegal_packets_received.operation)
	|| is_set(lacpd_us_received.operation)
	|| is_set(lacpd_us_transmitted.operation)
	|| is_set(last_cleared_nsec.operation)
	|| is_set(last_cleared_sec.operation)
	|| is_set(marker_packets_received.operation)
	|| is_set(marker_responses_transmitted.operation);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Members::Member::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.operation)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.operation)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.operation)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.operation)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.operation)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.operation)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.operation)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.operation)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.operation)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.operation)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.operation)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
    }
    if(value_path == "expired")
    {
        expired = value;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
    }
}

LacpBundles::Bundles::Bundle::Members::Member::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "link-data"; yang_parent_name = "member";
}

LacpBundles::Bundles::Bundle::Members::Member::LinkData::~LinkData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(actor_port_id.operation)
	|| is_set(actor_port_priority.operation)
	|| is_set(actor_port_state.operation)
	|| is_set(actor_system_mac_address.operation)
	|| is_set(actor_system_priority.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_port_id.operation)
	|| is_set(partner_port_priority.operation)
	|| is_set(partner_port_state.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| is_set(selected_aggregator_id.operation);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.operation)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.operation)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.operation)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.operation)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.operation)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.operation)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.operation)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.operation)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::LinkData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member";
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::~MemberMuxData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(member_mux_state_reason.operation)
	|| is_set(member_state.operation)
	|| is_set(mux_state.operation)
	|| is_set(mux_state_reason.operation)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.operation)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.operation)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
    }
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data";
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_type.operation)
	|| is_set(severity.operation);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxStateReasonData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.operation)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

LacpBundles::Bundles::Bundle::Members::Member::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "member";
}

LacpBundles::Bundles::Bundle::Members::Member::MacAddress::~MacAddress()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_data() const
{
    return address.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::BundleInformation()
    :
    bfd_counters(std::make_shared<BundleInformation::BfdCounters>())
	,bundle(std::make_shared<BundleInformation::Bundle>())
	,bundle_briefs(std::make_shared<BundleInformation::BundleBriefs>())
	,events(std::make_shared<BundleInformation::Events>())
	,events_bdl(std::make_shared<BundleInformation::EventsBdl>())
	,events_mbr(std::make_shared<BundleInformation::EventsMbr>())
	,events_rg(std::make_shared<BundleInformation::EventsRg>())
	,lacp(std::make_shared<BundleInformation::Lacp>())
	,mac_allocation(std::make_shared<BundleInformation::MacAllocation>())
	,mlacp(std::make_shared<BundleInformation::Mlacp>())
	,mlacp_brief(std::make_shared<BundleInformation::MlacpBrief>())
	,mlacp_bundle_counters(std::make_shared<BundleInformation::MlacpBundleCounters>())
	,mlacp_iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters>())
	,mlacp_member_counters(std::make_shared<BundleInformation::MlacpMemberCounters>())
	,protect(std::make_shared<BundleInformation::Protect>())
	,scheduled_actions(std::make_shared<BundleInformation::ScheduledActions>())
	,system_id(std::make_shared<BundleInformation::SystemId>())
{
    bfd_counters->parent = this;

    bundle->parent = this;

    bundle_briefs->parent = this;

    events->parent = this;

    events_bdl->parent = this;

    events_mbr->parent = this;

    events_rg->parent = this;

    lacp->parent = this;

    mac_allocation->parent = this;

    mlacp->parent = this;

    mlacp_brief->parent = this;

    mlacp_bundle_counters->parent = this;

    mlacp_iccp_group_counters->parent = this;

    mlacp_member_counters->parent = this;

    protect->parent = this;

    scheduled_actions->parent = this;

    system_id->parent = this;

    yang_name = "bundle-information"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper";
}

BundleInformation::~BundleInformation()
{
}

bool BundleInformation::has_data() const
{
    return (bfd_counters !=  nullptr && bfd_counters->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (bundle_briefs !=  nullptr && bundle_briefs->has_data())
	|| (events !=  nullptr && events->has_data())
	|| (events_bdl !=  nullptr && events_bdl->has_data())
	|| (events_mbr !=  nullptr && events_mbr->has_data())
	|| (events_rg !=  nullptr && events_rg->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (mac_allocation !=  nullptr && mac_allocation->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (mlacp_brief !=  nullptr && mlacp_brief->has_data())
	|| (mlacp_bundle_counters !=  nullptr && mlacp_bundle_counters->has_data())
	|| (mlacp_iccp_group_counters !=  nullptr && mlacp_iccp_group_counters->has_data())
	|| (mlacp_member_counters !=  nullptr && mlacp_member_counters->has_data())
	|| (protect !=  nullptr && protect->has_data())
	|| (scheduled_actions !=  nullptr && scheduled_actions->has_data())
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::has_operation() const
{
    return is_set(operation)
	|| (bfd_counters !=  nullptr && bfd_counters->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (bundle_briefs !=  nullptr && bundle_briefs->has_operation())
	|| (events !=  nullptr && events->has_operation())
	|| (events_bdl !=  nullptr && events_bdl->has_operation())
	|| (events_mbr !=  nullptr && events_mbr->has_operation())
	|| (events_rg !=  nullptr && events_rg->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (mac_allocation !=  nullptr && mac_allocation->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (mlacp_brief !=  nullptr && mlacp_brief->has_operation())
	|| (mlacp_bundle_counters !=  nullptr && mlacp_bundle_counters->has_operation())
	|| (mlacp_iccp_group_counters !=  nullptr && mlacp_iccp_group_counters->has_operation())
	|| (mlacp_member_counters !=  nullptr && mlacp_member_counters->has_operation())
	|| (protect !=  nullptr && protect->has_operation())
	|| (scheduled_actions !=  nullptr && scheduled_actions->has_operation())
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information";

    return path_buffer.str();

}

const EntityPath BundleInformation::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters")
    {
        if(bfd_counters == nullptr)
        {
            bfd_counters = std::make_shared<BundleInformation::BfdCounters>();
        }
        return bfd_counters;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<BundleInformation::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "bundle-briefs")
    {
        if(bundle_briefs == nullptr)
        {
            bundle_briefs = std::make_shared<BundleInformation::BundleBriefs>();
        }
        return bundle_briefs;
    }

    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<BundleInformation::Events>();
        }
        return events;
    }

    if(child_yang_name == "events-bdl")
    {
        if(events_bdl == nullptr)
        {
            events_bdl = std::make_shared<BundleInformation::EventsBdl>();
        }
        return events_bdl;
    }

    if(child_yang_name == "events-mbr")
    {
        if(events_mbr == nullptr)
        {
            events_mbr = std::make_shared<BundleInformation::EventsMbr>();
        }
        return events_mbr;
    }

    if(child_yang_name == "events-rg")
    {
        if(events_rg == nullptr)
        {
            events_rg = std::make_shared<BundleInformation::EventsRg>();
        }
        return events_rg;
    }

    if(child_yang_name == "lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<BundleInformation::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "mac-allocation")
    {
        if(mac_allocation == nullptr)
        {
            mac_allocation = std::make_shared<BundleInformation::MacAllocation>();
        }
        return mac_allocation;
    }

    if(child_yang_name == "mlacp")
    {
        if(mlacp == nullptr)
        {
            mlacp = std::make_shared<BundleInformation::Mlacp>();
        }
        return mlacp;
    }

    if(child_yang_name == "mlacp-brief")
    {
        if(mlacp_brief == nullptr)
        {
            mlacp_brief = std::make_shared<BundleInformation::MlacpBrief>();
        }
        return mlacp_brief;
    }

    if(child_yang_name == "mlacp-bundle-counters")
    {
        if(mlacp_bundle_counters == nullptr)
        {
            mlacp_bundle_counters = std::make_shared<BundleInformation::MlacpBundleCounters>();
        }
        return mlacp_bundle_counters;
    }

    if(child_yang_name == "mlacp-iccp-group-counters")
    {
        if(mlacp_iccp_group_counters == nullptr)
        {
            mlacp_iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters>();
        }
        return mlacp_iccp_group_counters;
    }

    if(child_yang_name == "mlacp-member-counters")
    {
        if(mlacp_member_counters == nullptr)
        {
            mlacp_member_counters = std::make_shared<BundleInformation::MlacpMemberCounters>();
        }
        return mlacp_member_counters;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<BundleInformation::Protect>();
        }
        return protect;
    }

    if(child_yang_name == "scheduled-actions")
    {
        if(scheduled_actions == nullptr)
        {
            scheduled_actions = std::make_shared<BundleInformation::ScheduledActions>();
        }
        return scheduled_actions;
    }

    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters != nullptr)
    {
        children["bfd-counters"] = bfd_counters;
    }

    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    if(bundle_briefs != nullptr)
    {
        children["bundle-briefs"] = bundle_briefs;
    }

    if(events != nullptr)
    {
        children["events"] = events;
    }

    if(events_bdl != nullptr)
    {
        children["events-bdl"] = events_bdl;
    }

    if(events_mbr != nullptr)
    {
        children["events-mbr"] = events_mbr;
    }

    if(events_rg != nullptr)
    {
        children["events-rg"] = events_rg;
    }

    if(lacp != nullptr)
    {
        children["lacp"] = lacp;
    }

    if(mac_allocation != nullptr)
    {
        children["mac-allocation"] = mac_allocation;
    }

    if(mlacp != nullptr)
    {
        children["mlacp"] = mlacp;
    }

    if(mlacp_brief != nullptr)
    {
        children["mlacp-brief"] = mlacp_brief;
    }

    if(mlacp_bundle_counters != nullptr)
    {
        children["mlacp-bundle-counters"] = mlacp_bundle_counters;
    }

    if(mlacp_iccp_group_counters != nullptr)
    {
        children["mlacp-iccp-group-counters"] = mlacp_iccp_group_counters;
    }

    if(mlacp_member_counters != nullptr)
    {
        children["mlacp-member-counters"] = mlacp_member_counters;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    if(scheduled_actions != nullptr)
    {
        children["scheduled-actions"] = scheduled_actions;
    }

    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> BundleInformation::clone_ptr() const
{
    return std::make_shared<BundleInformation>();
}

std::string BundleInformation::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BundleInformation::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BundleInformation::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

BundleInformation::BfdCounters::BfdCounters()
    :
    bfd_counters_bundles(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles>())
	,bfd_counters_members(std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers>())
{
    bfd_counters_bundles->parent = this;

    bfd_counters_members->parent = this;

    yang_name = "bfd-counters"; yang_parent_name = "bundle-information";
}

BundleInformation::BfdCounters::~BfdCounters()
{
}

bool BundleInformation::BfdCounters::has_data() const
{
    return (bfd_counters_bundles !=  nullptr && bfd_counters_bundles->has_data())
	|| (bfd_counters_members !=  nullptr && bfd_counters_members->has_data());
}

bool BundleInformation::BfdCounters::has_operation() const
{
    return is_set(operation)
	|| (bfd_counters_bundles !=  nullptr && bfd_counters_bundles->has_operation())
	|| (bfd_counters_members !=  nullptr && bfd_counters_members->has_operation());
}

std::string BundleInformation::BfdCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundles")
    {
        if(bfd_counters_bundles == nullptr)
        {
            bfd_counters_bundles = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles>();
        }
        return bfd_counters_bundles;
    }

    if(child_yang_name == "bfd-counters-members")
    {
        if(bfd_counters_members == nullptr)
        {
            bfd_counters_members = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers>();
        }
        return bfd_counters_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters_bundles != nullptr)
    {
        children["bfd-counters-bundles"] = bfd_counters_bundles;
    }

    if(bfd_counters_members != nullptr)
    {
        children["bfd-counters-members"] = bfd_counters_members;
    }

    return children;
}

void BundleInformation::BfdCounters::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundles()
{
    yang_name = "bfd-counters-bundles"; yang_parent_name = "bfd-counters";
}

BundleInformation::BfdCounters::BfdCountersBundles::~BfdCountersBundles()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_data() const
{
    for (std::size_t index=0; index<bfd_counters_bundle.size(); index++)
    {
        if(bfd_counters_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_bundle.size(); index++)
    {
        if(bfd_counters_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle")
    {
        for(auto const & c : bfd_counters_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle>();
        c->parent = this;
        bfd_counters_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counters_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bfd_counters_bundle_children_members(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers>())
	,bfd_counters_bundle_descendant(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant>())
	,bfd_counters_bundle_item(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem>())
{
    bfd_counters_bundle_children_members->parent = this;

    bfd_counters_bundle_descendant->parent = this;

    bfd_counters_bundle_item->parent = this;

    yang_name = "bfd-counters-bundle"; yang_parent_name = "bfd-counters-bundles";
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::~BfdCountersBundle()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_data() const
{
    return bundle_interface.is_set
	|| (bfd_counters_bundle_children_members !=  nullptr && bfd_counters_bundle_children_members->has_data())
	|| (bfd_counters_bundle_descendant !=  nullptr && bfd_counters_bundle_descendant->has_data())
	|| (bfd_counters_bundle_item !=  nullptr && bfd_counters_bundle_item->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (bfd_counters_bundle_children_members !=  nullptr && bfd_counters_bundle_children_members->has_operation())
	|| (bfd_counters_bundle_descendant !=  nullptr && bfd_counters_bundle_descendant->has_operation())
	|| (bfd_counters_bundle_item !=  nullptr && bfd_counters_bundle_item->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/bfd-counters-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle-children-members")
    {
        if(bfd_counters_bundle_children_members == nullptr)
        {
            bfd_counters_bundle_children_members = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers>();
        }
        return bfd_counters_bundle_children_members;
    }

    if(child_yang_name == "bfd-counters-bundle-descendant")
    {
        if(bfd_counters_bundle_descendant == nullptr)
        {
            bfd_counters_bundle_descendant = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant>();
        }
        return bfd_counters_bundle_descendant;
    }

    if(child_yang_name == "bfd-counters-bundle-item")
    {
        if(bfd_counters_bundle_item == nullptr)
        {
            bfd_counters_bundle_item = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem>();
        }
        return bfd_counters_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters_bundle_children_members != nullptr)
    {
        children["bfd-counters-bundle-children-members"] = bfd_counters_bundle_children_members;
    }

    if(bfd_counters_bundle_descendant != nullptr)
    {
        children["bfd-counters-bundle-descendant"] = bfd_counters_bundle_descendant;
    }

    if(bfd_counters_bundle_item != nullptr)
    {
        children["bfd-counters-bundle-item"] = bfd_counters_bundle_item;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCountersBundleDescendant()
    :
    bundle_name(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName>())
{
    bundle_name->parent = this;

    yang_name = "bfd-counters-bundle-descendant"; yang_parent_name = "bfd-counters-bundle";
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::~BfdCountersBundleDescendant()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<bfd_counter.size(); index++)
    {
        if(bfd_counter[index]->has_data())
            return true;
    }
    return (bundle_name !=  nullptr && bundle_name->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<bfd_counter.size(); index++)
    {
        if(bfd_counter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_name !=  nullptr && bundle_name->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-descendant";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCountersBundleDescendant' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counter")
    {
        for(auto const & c : bfd_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter>();
        c->parent = this;
        bfd_counter.push_back(c);
        return c;
    }

    if(child_yang_name == "bundle-name")
    {
        if(bundle_name == nullptr)
        {
            bundle_name = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName>();
        }
        return bundle_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counter)
    {
        children[c->get_segment_path()] = c;
    }

    if(bundle_name != nullptr)
    {
        children["bundle-name"] = bundle_name;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::BundleName()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "bundle-name"; yang_parent_name = "bfd-counters-bundle-descendant";
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::~BundleName()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_data() const
{
    return item_name.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_operation() const
{
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-name";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleName' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::BfdCounter()
    :
    down{YType::uint32, "down"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    member_name{YType::str, "member-name"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    start_timeouts{YType::uint32, "start-timeouts"},
    starting{YType::uint32, "starting"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    up{YType::uint32, "up"}
{
    yang_name = "bfd-counter"; yang_parent_name = "bfd-counters-bundle-descendant";
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::~BfdCounter()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_data() const
{
    return down.is_set
	|| last_time_cleared.is_set
	|| member_name.is_set
	|| neighbor_unconfigured.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| start_timeouts.is_set
	|| starting.is_set
	|| time_since_cleared.is_set
	|| up.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(member_name.operation)
	|| is_set(neighbor_unconfigured.operation)
	|| is_set(neighbor_unconfigured_timeouts.operation)
	|| is_set(start_timeouts.operation)
	|| is_set(starting.operation)
	|| is_set(time_since_cleared.operation)
	|| is_set(up.operation);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counter";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCounter' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.operation)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.operation)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.operation)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (starting.is_set || is_set(starting.operation)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
    }
    if(value_path == "starting")
    {
        starting = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMembers()
{
    yang_name = "bfd-counters-bundle-children-members"; yang_parent_name = "bfd-counters-bundle";
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::~BfdCountersBundleChildrenMembers()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<bfd_counters_bundle_children_member.size(); index++)
    {
        if(bfd_counters_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_bundle_children_member.size(); index++)
    {
        if(bfd_counters_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-children-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCountersBundleChildrenMembers' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle-children-member")
    {
        for(auto const & c : bfd_counters_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember>();
        c->parent = this;
        bfd_counters_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counters_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::BfdCountersBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    down{YType::uint32, "down"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    member_name{YType::str, "member-name"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    start_timeouts{YType::uint32, "start-timeouts"},
    starting{YType::uint32, "starting"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    up{YType::uint32, "up"}
{
    yang_name = "bfd-counters-bundle-children-member"; yang_parent_name = "bfd-counters-bundle-children-members";
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::~BfdCountersBundleChildrenMember()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_data() const
{
    return member_interface.is_set
	|| down.is_set
	|| last_time_cleared.is_set
	|| member_name.is_set
	|| neighbor_unconfigured.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| start_timeouts.is_set
	|| starting.is_set
	|| time_since_cleared.is_set
	|| up.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(down.operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(member_name.operation)
	|| is_set(neighbor_unconfigured.operation)
	|| is_set(neighbor_unconfigured_timeouts.operation)
	|| is_set(start_timeouts.operation)
	|| is_set(starting.operation)
	|| is_set(time_since_cleared.operation)
	|| is_set(up.operation);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCountersBundleChildrenMember' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.operation)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.operation)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.operation)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (starting.is_set || is_set(starting.operation)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
    }
    if(value_path == "starting")
    {
        starting = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::BfdCountersBundleItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "bfd-counters-bundle-item"; yang_parent_name = "bfd-counters-bundle";
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::~BfdCountersBundleItem()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_data() const
{
    return item_name.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_operation() const
{
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCountersBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMembers()
{
    yang_name = "bfd-counters-members"; yang_parent_name = "bfd-counters";
}

BundleInformation::BfdCounters::BfdCountersMembers::~BfdCountersMembers()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_data() const
{
    for (std::size_t index=0; index<bfd_counters_member.size(); index++)
    {
        if(bfd_counters_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_member.size(); index++)
    {
        if(bfd_counters_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-member")
    {
        for(auto const & c : bfd_counters_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember>();
        c->parent = this;
        bfd_counters_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counters_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    bfd_counters_member_item(std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem>())
{
    bfd_counters_member_item->parent = this;

    yang_name = "bfd-counters-member"; yang_parent_name = "bfd-counters-members";
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::~BfdCountersMember()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_data() const
{
    return member_interface.is_set
	|| (bfd_counters_member_item !=  nullptr && bfd_counters_member_item->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (bfd_counters_member_item !=  nullptr && bfd_counters_member_item->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/bfd-counters-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-member-item")
    {
        if(bfd_counters_member_item == nullptr)
        {
            bfd_counters_member_item = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem>();
        }
        return bfd_counters_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters_member_item != nullptr)
    {
        children["bfd-counters-member-item"] = bfd_counters_member_item;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::BfdCountersMemberItem()
    :
    down{YType::uint32, "down"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    member_name{YType::str, "member-name"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    start_timeouts{YType::uint32, "start-timeouts"},
    starting{YType::uint32, "starting"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    up{YType::uint32, "up"}
{
    yang_name = "bfd-counters-member-item"; yang_parent_name = "bfd-counters-member";
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::~BfdCountersMemberItem()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_data() const
{
    return down.is_set
	|| last_time_cleared.is_set
	|| member_name.is_set
	|| neighbor_unconfigured.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| start_timeouts.is_set
	|| starting.is_set
	|| time_since_cleared.is_set
	|| up.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(member_name.operation)
	|| is_set(neighbor_unconfigured.operation)
	|| is_set(neighbor_unconfigured_timeouts.operation)
	|| is_set(start_timeouts.operation)
	|| is_set(starting.operation)
	|| is_set(time_since_cleared.operation)
	|| is_set(up.operation);
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-member-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCountersMemberItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.operation)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.operation)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.operation)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (starting.is_set || is_set(starting.operation)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
    }
    if(value_path == "starting")
    {
        starting = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

BundleInformation::ScheduledActions::ScheduledActions()
    :
    scheduled_actions_bundles(std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles>())
{
    scheduled_actions_bundles->parent = this;

    yang_name = "scheduled-actions"; yang_parent_name = "bundle-information";
}

BundleInformation::ScheduledActions::~ScheduledActions()
{
}

bool BundleInformation::ScheduledActions::has_data() const
{
    return (scheduled_actions_bundles !=  nullptr && scheduled_actions_bundles->has_data());
}

bool BundleInformation::ScheduledActions::has_operation() const
{
    return is_set(operation)
	|| (scheduled_actions_bundles !=  nullptr && scheduled_actions_bundles->has_operation());
}

std::string BundleInformation::ScheduledActions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions";

    return path_buffer.str();

}

const EntityPath BundleInformation::ScheduledActions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundles")
    {
        if(scheduled_actions_bundles == nullptr)
        {
            scheduled_actions_bundles = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles>();
        }
        return scheduled_actions_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scheduled_actions_bundles != nullptr)
    {
        children["scheduled-actions-bundles"] = scheduled_actions_bundles;
    }

    return children;
}

void BundleInformation::ScheduledActions::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundles()
{
    yang_name = "scheduled-actions-bundles"; yang_parent_name = "scheduled-actions";
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::~ScheduledActionsBundles()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_data() const
{
    for (std::size_t index=0; index<scheduled_actions_bundle.size(); index++)
    {
        if(scheduled_actions_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_operation() const
{
    for (std::size_t index=0; index<scheduled_actions_bundle.size(); index++)
    {
        if(scheduled_actions_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::ScheduledActions::ScheduledActionsBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/scheduled-actions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundle")
    {
        for(auto const & c : scheduled_actions_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle>();
        c->parent = this;
        scheduled_actions_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : scheduled_actions_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    scheduled_actions_bundle_item(std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem>())
{
    scheduled_actions_bundle_item->parent = this;

    yang_name = "scheduled-actions-bundle"; yang_parent_name = "scheduled-actions-bundles";
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::~ScheduledActionsBundle()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_data() const
{
    return bundle_interface.is_set
	|| (scheduled_actions_bundle_item !=  nullptr && scheduled_actions_bundle_item->has_data());
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (scheduled_actions_bundle_item !=  nullptr && scheduled_actions_bundle_item->has_operation());
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/scheduled-actions/scheduled-actions-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundle-item")
    {
        if(scheduled_actions_bundle_item == nullptr)
        {
            scheduled_actions_bundle_item = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem>();
        }
        return scheduled_actions_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scheduled_actions_bundle_item != nullptr)
    {
        children["scheduled-actions-bundle-item"] = scheduled_actions_bundle_item;
    }

    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledActionsBundleItem()
    :
    bundle_name{YType::str, "bundle-name"}
{
    yang_name = "scheduled-actions-bundle-item"; yang_parent_name = "scheduled-actions-bundle";
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::~ScheduledActionsBundleItem()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_data() const
{
    for (std::size_t index=0; index<scheduled_action.size(); index++)
    {
        if(scheduled_action[index]->has_data())
            return true;
    }
    return bundle_name.is_set;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_operation() const
{
    for (std::size_t index=0; index<scheduled_action.size(); index++)
    {
        if(scheduled_action[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bundle_name.operation);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundle-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ScheduledActionsBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-action")
    {
        for(auto const & c : scheduled_action)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction>();
        c->parent = this;
        scheduled_action.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : scheduled_action)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::ScheduledAction()
    :
    action_state{YType::enumeration, "action-state"},
    mlacp_action{YType::enumeration, "mlacp-action"},
    time_remaining{YType::uint64, "time-remaining"}
{
    yang_name = "scheduled-action"; yang_parent_name = "scheduled-actions-bundle-item";
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::~ScheduledAction()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_data() const
{
    return action_state.is_set
	|| mlacp_action.is_set
	|| time_remaining.is_set;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_operation() const
{
    return is_set(operation)
	|| is_set(action_state.operation)
	|| is_set(mlacp_action.operation)
	|| is_set(time_remaining.operation);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-action";

    return path_buffer.str();

}

const EntityPath BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ScheduledAction' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_state.is_set || is_set(action_state.operation)) leaf_name_data.push_back(action_state.get_name_leafdata());
    if (mlacp_action.is_set || is_set(mlacp_action.operation)) leaf_name_data.push_back(mlacp_action.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-state")
    {
        action_state = value;
    }
    if(value_path == "mlacp-action")
    {
        mlacp_action = value;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
}

BundleInformation::Bundle::Bundle()
    :
    bundle_bundles(std::make_shared<BundleInformation::Bundle::BundleBundles>())
	,bundle_members(std::make_shared<BundleInformation::Bundle::BundleMembers>())
{
    bundle_bundles->parent = this;

    bundle_members->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundle-information";
}

BundleInformation::Bundle::~Bundle()
{
}

bool BundleInformation::Bundle::has_data() const
{
    return (bundle_bundles !=  nullptr && bundle_bundles->has_data())
	|| (bundle_members !=  nullptr && bundle_members->has_data());
}

bool BundleInformation::Bundle::has_operation() const
{
    return is_set(operation)
	|| (bundle_bundles !=  nullptr && bundle_bundles->has_operation())
	|| (bundle_members !=  nullptr && bundle_members->has_operation());
}

std::string BundleInformation::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundles")
    {
        if(bundle_bundles == nullptr)
        {
            bundle_bundles = std::make_shared<BundleInformation::Bundle::BundleBundles>();
        }
        return bundle_bundles;
    }

    if(child_yang_name == "bundle-members")
    {
        if(bundle_members == nullptr)
        {
            bundle_members = std::make_shared<BundleInformation::Bundle::BundleMembers>();
        }
        return bundle_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_bundles != nullptr)
    {
        children["bundle-bundles"] = bundle_bundles;
    }

    if(bundle_members != nullptr)
    {
        children["bundle-members"] = bundle_members;
    }

    return children;
}

void BundleInformation::Bundle::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Bundle::BundleBundles::BundleBundles()
{
    yang_name = "bundle-bundles"; yang_parent_name = "bundle";
}

BundleInformation::Bundle::BundleBundles::~BundleBundles()
{
}

bool BundleInformation::Bundle::BundleBundles::has_data() const
{
    for (std::size_t index=0; index<bundle_bundle.size(); index++)
    {
        if(bundle_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleBundles::has_operation() const
{
    for (std::size_t index=0; index<bundle_bundle.size(); index++)
    {
        if(bundle_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Bundle::BundleBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle")
    {
        for(auto const & c : bundle_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle>();
        c->parent = this;
        bundle_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_bundle_children_members(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers>())
	,bundle_bundle_descendant(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant>())
	,bundle_bundle_item(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem>())
{
    bundle_bundle_children_members->parent = this;

    bundle_bundle_descendant->parent = this;

    bundle_bundle_item->parent = this;

    yang_name = "bundle-bundle"; yang_parent_name = "bundle-bundles";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::~BundleBundle()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_bundle_children_members !=  nullptr && bundle_bundle_children_members->has_data())
	|| (bundle_bundle_descendant !=  nullptr && bundle_bundle_descendant->has_data())
	|| (bundle_bundle_item !=  nullptr && bundle_bundle_item->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (bundle_bundle_children_members !=  nullptr && bundle_bundle_children_members->has_operation())
	|| (bundle_bundle_descendant !=  nullptr && bundle_bundle_descendant->has_operation())
	|| (bundle_bundle_item !=  nullptr && bundle_bundle_item->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/bundle-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle-children-members")
    {
        if(bundle_bundle_children_members == nullptr)
        {
            bundle_bundle_children_members = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers>();
        }
        return bundle_bundle_children_members;
    }

    if(child_yang_name == "bundle-bundle-descendant")
    {
        if(bundle_bundle_descendant == nullptr)
        {
            bundle_bundle_descendant = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant>();
        }
        return bundle_bundle_descendant;
    }

    if(child_yang_name == "bundle-bundle-item")
    {
        if(bundle_bundle_item == nullptr)
        {
            bundle_bundle_item = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem>();
        }
        return bundle_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_bundle_children_members != nullptr)
    {
        children["bundle-bundle-children-members"] = bundle_bundle_children_members;
    }

    if(bundle_bundle_descendant != nullptr)
    {
        children["bundle-bundle-descendant"] = bundle_bundle_descendant;
    }

    if(bundle_bundle_item != nullptr)
    {
        children["bundle-bundle-item"] = bundle_bundle_item;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleBundleDescendant()
    :
    bundle_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "bundle-bundle-descendant"; yang_parent_name = "bundle-bundle";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::~BundleBundleDescendant()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-descendant";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleBundleDescendant' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "bundle-bundle-descendant";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::~BundleData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "bundle-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
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

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberData()
    :
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData>())
{
    counters->parent = this;

    link_data->parent = this;

    mac_address->parent = this;

    member_mux_data->parent = this;

    yang_name = "member-data"; yang_parent_name = "bundle-bundle-descendant";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::~MemberData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_data() const
{
    return bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(iccp_node.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_order_number.operation)
	|| is_set(member_name.operation)
	|| is_set(member_type.operation)
	|| is_set(port_number.operation)
	|| is_set(port_priority.operation)
	|| is_set(underlying_link_id.operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.operation)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.operation)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.operation)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "member-type")
    {
        member_type = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{
    yang_name = "counters"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(defaulted.operation)
	|| is_set(excess_lacpd_us_received.operation)
	|| is_set(excess_marker_packets_received.operation)
	|| is_set(expired.operation)
	|| is_set(illegal_packets_received.operation)
	|| is_set(lacpd_us_received.operation)
	|| is_set(lacpd_us_transmitted.operation)
	|| is_set(last_cleared_nsec.operation)
	|| is_set(last_cleared_sec.operation)
	|| is_set(marker_packets_received.operation)
	|| is_set(marker_responses_transmitted.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.operation)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.operation)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.operation)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.operation)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.operation)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.operation)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.operation)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.operation)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.operation)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.operation)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.operation)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
    }
    if(value_path == "expired")
    {
        expired = value;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "link-data"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(actor_port_id.operation)
	|| is_set(actor_port_priority.operation)
	|| is_set(actor_port_state.operation)
	|| is_set(actor_system_mac_address.operation)
	|| is_set(actor_system_priority.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_port_id.operation)
	|| is_set(partner_port_priority.operation)
	|| is_set(partner_port_state.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| is_set(selected_aggregator_id.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.operation)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.operation)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.operation)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.operation)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.operation)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.operation)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.operation)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.operation)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(member_mux_state_reason.operation)
	|| is_set(member_state.operation)
	|| is_set(mux_state.operation)
	|| is_set(mux_state_reason.operation)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.operation)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.operation)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_type.operation)
	|| is_set(severity.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxStateReasonData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.operation)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMembers()
{
    yang_name = "bundle-bundle-children-members"; yang_parent_name = "bundle-bundle";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::~BundleBundleChildrenMembers()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<bundle_bundle_children_member.size(); index++)
    {
        if(bundle_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<bundle_bundle_children_member.size(); index++)
    {
        if(bundle_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-children-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleBundleChildrenMembers' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle-children-member")
    {
        for(auto const & c : bundle_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember>();
        c->parent = this;
        bundle_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::BundleBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData>())
{
    counters->parent = this;

    link_data->parent = this;

    mac_address->parent = this;

    member_mux_data->parent = this;

    yang_name = "bundle-bundle-children-member"; yang_parent_name = "bundle-bundle-children-members";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::~BundleBundleChildrenMember()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_data() const
{
    return member_interface.is_set
	|| bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(bandwidth.operation)
	|| is_set(iccp_node.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_order_number.operation)
	|| is_set(member_name.operation)
	|| is_set(member_type.operation)
	|| is_set(port_number.operation)
	|| is_set(port_priority.operation)
	|| is_set(underlying_link_id.operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleBundleChildrenMember' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.operation)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.operation)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.operation)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "member-type")
    {
        member_type = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{
    yang_name = "counters"; yang_parent_name = "bundle-bundle-children-member";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(defaulted.operation)
	|| is_set(excess_lacpd_us_received.operation)
	|| is_set(excess_marker_packets_received.operation)
	|| is_set(expired.operation)
	|| is_set(illegal_packets_received.operation)
	|| is_set(lacpd_us_received.operation)
	|| is_set(lacpd_us_transmitted.operation)
	|| is_set(last_cleared_nsec.operation)
	|| is_set(last_cleared_sec.operation)
	|| is_set(marker_packets_received.operation)
	|| is_set(marker_responses_transmitted.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.operation)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.operation)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.operation)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.operation)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.operation)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.operation)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.operation)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.operation)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.operation)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.operation)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.operation)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
    }
    if(value_path == "expired")
    {
        expired = value;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "link-data"; yang_parent_name = "bundle-bundle-children-member";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(actor_port_id.operation)
	|| is_set(actor_port_priority.operation)
	|| is_set(actor_port_state.operation)
	|| is_set(actor_system_mac_address.operation)
	|| is_set(actor_system_priority.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_port_id.operation)
	|| is_set(partner_port_priority.operation)
	|| is_set(partner_port_state.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| is_set(selected_aggregator_id.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.operation)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.operation)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.operation)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.operation)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.operation)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.operation)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.operation)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.operation)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "bundle-bundle-children-member";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(member_mux_state_reason.operation)
	|| is_set(member_state.operation)
	|| is_set(mux_state.operation)
	|| is_set(mux_state_reason.operation)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.operation)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.operation)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_type.operation)
	|| is_set(severity.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxStateReasonData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.operation)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "bundle-bundle-children-member";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BundleBundleItem()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-bundle-item"; yang_parent_name = "bundle-bundle";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::~BundleBundleItem()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "bundle-bundle-item";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-bundle-item";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
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

BundleInformation::Bundle::BundleMembers::BundleMembers()
{
    yang_name = "bundle-members"; yang_parent_name = "bundle";
}

BundleInformation::Bundle::BundleMembers::~BundleMembers()
{
}

bool BundleInformation::Bundle::BundleMembers::has_data() const
{
    for (std::size_t index=0; index<bundle_member.size(); index++)
    {
        if(bundle_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleMembers::has_operation() const
{
    for (std::size_t index=0; index<bundle_member.size(); index++)
    {
        if(bundle_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Bundle::BundleMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-member")
    {
        for(auto const & c : bundle_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember>();
        c->parent = this;
        bundle_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    bundle_member_ancestor(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor>())
	,bundle_member_item(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem>())
{
    bundle_member_ancestor->parent = this;

    bundle_member_item->parent = this;

    yang_name = "bundle-member"; yang_parent_name = "bundle-members";
}

BundleInformation::Bundle::BundleMembers::BundleMember::~BundleMember()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_data() const
{
    return member_interface.is_set
	|| (bundle_member_ancestor !=  nullptr && bundle_member_ancestor->has_data())
	|| (bundle_member_item !=  nullptr && bundle_member_item->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (bundle_member_ancestor !=  nullptr && bundle_member_ancestor->has_operation())
	|| (bundle_member_item !=  nullptr && bundle_member_item->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/bundle-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-member-ancestor")
    {
        if(bundle_member_ancestor == nullptr)
        {
            bundle_member_ancestor = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor>();
        }
        return bundle_member_ancestor;
    }

    if(child_yang_name == "bundle-member-item")
    {
        if(bundle_member_item == nullptr)
        {
            bundle_member_item = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem>();
        }
        return bundle_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_member_ancestor != nullptr)
    {
        children["bundle-member-ancestor"] = bundle_member_ancestor;
    }

    if(bundle_member_item != nullptr)
    {
        children["bundle-member-item"] = bundle_member_item;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleMemberAncestor()
    :
    bundle_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "bundle-member-ancestor"; yang_parent_name = "bundle-member";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::~BundleMemberAncestor()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member-ancestor";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleMemberAncestor' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "bundle-member-ancestor";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::~BundleData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "bundle-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
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

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberData()
    :
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData>())
{
    counters->parent = this;

    link_data->parent = this;

    mac_address->parent = this;

    member_mux_data->parent = this;

    yang_name = "member-data"; yang_parent_name = "bundle-member-ancestor";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::~MemberData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_data() const
{
    return bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(iccp_node.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_order_number.operation)
	|| is_set(member_name.operation)
	|| is_set(member_type.operation)
	|| is_set(port_number.operation)
	|| is_set(port_priority.operation)
	|| is_set(underlying_link_id.operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.operation)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.operation)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.operation)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "member-type")
    {
        member_type = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{
    yang_name = "counters"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(defaulted.operation)
	|| is_set(excess_lacpd_us_received.operation)
	|| is_set(excess_marker_packets_received.operation)
	|| is_set(expired.operation)
	|| is_set(illegal_packets_received.operation)
	|| is_set(lacpd_us_received.operation)
	|| is_set(lacpd_us_transmitted.operation)
	|| is_set(last_cleared_nsec.operation)
	|| is_set(last_cleared_sec.operation)
	|| is_set(marker_packets_received.operation)
	|| is_set(marker_responses_transmitted.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.operation)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.operation)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.operation)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.operation)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.operation)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.operation)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.operation)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.operation)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.operation)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.operation)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.operation)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
    }
    if(value_path == "expired")
    {
        expired = value;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "link-data"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(actor_port_id.operation)
	|| is_set(actor_port_priority.operation)
	|| is_set(actor_port_state.operation)
	|| is_set(actor_system_mac_address.operation)
	|| is_set(actor_system_priority.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_port_id.operation)
	|| is_set(partner_port_priority.operation)
	|| is_set(partner_port_state.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| is_set(selected_aggregator_id.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.operation)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.operation)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.operation)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.operation)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.operation)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.operation)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.operation)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.operation)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(member_mux_state_reason.operation)
	|| is_set(member_state.operation)
	|| is_set(mux_state.operation)
	|| is_set(mux_state_reason.operation)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.operation)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.operation)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_type.operation)
	|| is_set(severity.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxStateReasonData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.operation)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "member-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::BundleMemberItem()
    :
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData>())
{
    counters->parent = this;

    link_data->parent = this;

    mac_address->parent = this;

    member_mux_data->parent = this;

    yang_name = "bundle-member-item"; yang_parent_name = "bundle-member";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::~BundleMemberItem()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_data() const
{
    return bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(iccp_node.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_order_number.operation)
	|| is_set(member_name.operation)
	|| is_set(member_type.operation)
	|| is_set(port_number.operation)
	|| is_set(port_priority.operation)
	|| is_set(underlying_link_id.operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleMemberItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.operation)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.operation)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.operation)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "member-type")
    {
        member_type = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{
    yang_name = "counters"; yang_parent_name = "bundle-member-item";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(defaulted.operation)
	|| is_set(excess_lacpd_us_received.operation)
	|| is_set(excess_marker_packets_received.operation)
	|| is_set(expired.operation)
	|| is_set(illegal_packets_received.operation)
	|| is_set(lacpd_us_received.operation)
	|| is_set(lacpd_us_transmitted.operation)
	|| is_set(last_cleared_nsec.operation)
	|| is_set(last_cleared_sec.operation)
	|| is_set(marker_packets_received.operation)
	|| is_set(marker_responses_transmitted.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.operation)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.operation)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.operation)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.operation)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.operation)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.operation)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.operation)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.operation)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.operation)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.operation)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.operation)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
    }
    if(value_path == "expired")
    {
        expired = value;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "link-data"; yang_parent_name = "bundle-member-item";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(actor_port_id.operation)
	|| is_set(actor_port_priority.operation)
	|| is_set(actor_port_state.operation)
	|| is_set(actor_system_mac_address.operation)
	|| is_set(actor_system_priority.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_port_id.operation)
	|| is_set(partner_port_priority.operation)
	|| is_set(partner_port_state.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| is_set(selected_aggregator_id.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.operation)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.operation)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.operation)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.operation)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.operation)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.operation)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.operation)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.operation)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "bundle-member-item";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(member_mux_state_reason.operation)
	|| is_set(member_state.operation)
	|| is_set(mux_state.operation)
	|| is_set(mux_state_reason.operation)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.operation)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.operation)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_type.operation)
	|| is_set(severity.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxStateReasonData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.operation)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "bundle-member-item";
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::EventsRg::EventsRg()
    :
    events_rg_bundles(std::make_shared<BundleInformation::EventsRg::EventsRgBundles>())
	,events_rg_iccp_groups(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups>())
	,events_rg_members(std::make_shared<BundleInformation::EventsRg::EventsRgMembers>())
{
    events_rg_bundles->parent = this;

    events_rg_iccp_groups->parent = this;

    events_rg_members->parent = this;

    yang_name = "events-rg"; yang_parent_name = "bundle-information";
}

BundleInformation::EventsRg::~EventsRg()
{
}

bool BundleInformation::EventsRg::has_data() const
{
    return (events_rg_bundles !=  nullptr && events_rg_bundles->has_data())
	|| (events_rg_iccp_groups !=  nullptr && events_rg_iccp_groups->has_data())
	|| (events_rg_members !=  nullptr && events_rg_members->has_data());
}

bool BundleInformation::EventsRg::has_operation() const
{
    return is_set(operation)
	|| (events_rg_bundles !=  nullptr && events_rg_bundles->has_operation())
	|| (events_rg_iccp_groups !=  nullptr && events_rg_iccp_groups->has_operation())
	|| (events_rg_members !=  nullptr && events_rg_members->has_operation());
}

std::string BundleInformation::EventsRg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundles")
    {
        if(events_rg_bundles == nullptr)
        {
            events_rg_bundles = std::make_shared<BundleInformation::EventsRg::EventsRgBundles>();
        }
        return events_rg_bundles;
    }

    if(child_yang_name == "events-rg-iccp-groups")
    {
        if(events_rg_iccp_groups == nullptr)
        {
            events_rg_iccp_groups = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups>();
        }
        return events_rg_iccp_groups;
    }

    if(child_yang_name == "events-rg-members")
    {
        if(events_rg_members == nullptr)
        {
            events_rg_members = std::make_shared<BundleInformation::EventsRg::EventsRgMembers>();
        }
        return events_rg_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_bundles != nullptr)
    {
        children["events-rg-bundles"] = events_rg_bundles;
    }

    if(events_rg_iccp_groups != nullptr)
    {
        children["events-rg-iccp-groups"] = events_rg_iccp_groups;
    }

    if(events_rg_members != nullptr)
    {
        children["events-rg-members"] = events_rg_members;
    }

    return children;
}

void BundleInformation::EventsRg::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMembers()
{
    yang_name = "events-rg-members"; yang_parent_name = "events-rg";
}

BundleInformation::EventsRg::EventsRgMembers::~EventsRgMembers()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::has_data() const
{
    for (std::size_t index=0; index<events_rg_member.size(); index++)
    {
        if(events_rg_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgMembers::has_operation() const
{
    for (std::size_t index=0; index<events_rg_member.size(); index++)
    {
        if(events_rg_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsRg::EventsRgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-member")
    {
        for(auto const & c : events_rg_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember>();
        c->parent = this;
        events_rg_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_rg_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_rg_member_ancestor(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor>())
{
    events_rg_member_ancestor->parent = this;

    yang_name = "events-rg-member"; yang_parent_name = "events-rg-members";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::~EventsRgMember()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_data() const
{
    return member_interface.is_set
	|| (events_rg_member_ancestor !=  nullptr && events_rg_member_ancestor->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (events_rg_member_ancestor !=  nullptr && events_rg_member_ancestor->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-member-ancestor")
    {
        if(events_rg_member_ancestor == nullptr)
        {
            events_rg_member_ancestor = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor>();
        }
        return events_rg_member_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_member_ancestor != nullptr)
    {
        children["events-rg-member-ancestor"] = events_rg_member_ancestor;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::EventsRgMemberAncestor()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-rg-member-ancestor"; yang_parent_name = "events-rg-member";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::~EventsRgMemberAncestor()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-member-ancestor";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsRgMemberAncestor' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-member-ancestor";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroups()
{
    yang_name = "events-rg-iccp-groups"; yang_parent_name = "events-rg";
}

BundleInformation::EventsRg::EventsRgIccpGroups::~EventsRgIccpGroups()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_rg_iccp_group.size(); index++)
    {
        if(events_rg_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_rg_iccp_group.size(); index++)
    {
        if(events_rg_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-iccp-groups";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-iccp-group")
    {
        for(auto const & c : events_rg_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup>();
        c->parent = this;
        events_rg_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_rg_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    events_rg_bundle_item_iccp_group(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup>())
{
    events_rg_bundle_item_iccp_group->parent = this;

    yang_name = "events-rg-iccp-group"; yang_parent_name = "events-rg-iccp-groups";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::~EventsRgIccpGroup()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (events_rg_bundle_item_iccp_group !=  nullptr && events_rg_bundle_item_iccp_group->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (events_rg_bundle_item_iccp_group !=  nullptr && events_rg_bundle_item_iccp_group->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-iccp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle-item-iccp-group")
    {
        if(events_rg_bundle_item_iccp_group == nullptr)
        {
            events_rg_bundle_item_iccp_group = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup>();
        }
        return events_rg_bundle_item_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_bundle_item_iccp_group != nullptr)
    {
        children["events-rg-bundle-item-iccp-group"] = events_rg_bundle_item_iccp_group;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::EventsRgBundleItemIccpGroup()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-rg-bundle-item-iccp-group"; yang_parent_name = "events-rg-iccp-group";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::~EventsRgBundleItemIccpGroup()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle-item-iccp-group";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsRgBundleItemIccpGroup' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-bundle-item-iccp-group";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundles()
{
    yang_name = "events-rg-bundles"; yang_parent_name = "events-rg";
}

BundleInformation::EventsRg::EventsRgBundles::~EventsRgBundles()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::has_data() const
{
    for (std::size_t index=0; index<events_rg_bundle.size(); index++)
    {
        if(events_rg_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgBundles::has_operation() const
{
    for (std::size_t index=0; index<events_rg_bundle.size(); index++)
    {
        if(events_rg_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsRg::EventsRgBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle")
    {
        for(auto const & c : events_rg_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle>();
        c->parent = this;
        events_rg_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_rg_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_rg_bundle_ancestor(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor>())
{
    events_rg_bundle_ancestor->parent = this;

    yang_name = "events-rg-bundle"; yang_parent_name = "events-rg-bundles";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::~EventsRgBundle()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_rg_bundle_ancestor !=  nullptr && events_rg_bundle_ancestor->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (events_rg_bundle_ancestor !=  nullptr && events_rg_bundle_ancestor->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle-ancestor")
    {
        if(events_rg_bundle_ancestor == nullptr)
        {
            events_rg_bundle_ancestor = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor>();
        }
        return events_rg_bundle_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_bundle_ancestor != nullptr)
    {
        children["events-rg-bundle-ancestor"] = events_rg_bundle_ancestor;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::EventsRgBundleAncestor()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-rg-bundle-ancestor"; yang_parent_name = "events-rg-bundle";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::~EventsRgBundleAncestor()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle-ancestor";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsRgBundleAncestor' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-bundle-ancestor";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Lacp::Lacp()
    :
    lacp_bundles(std::make_shared<BundleInformation::Lacp::LacpBundles>())
	,lacp_members(std::make_shared<BundleInformation::Lacp::LacpMembers>())
{
    lacp_bundles->parent = this;

    lacp_members->parent = this;

    yang_name = "lacp"; yang_parent_name = "bundle-information";
}

BundleInformation::Lacp::~Lacp()
{
}

bool BundleInformation::Lacp::has_data() const
{
    return (lacp_bundles !=  nullptr && lacp_bundles->has_data())
	|| (lacp_members !=  nullptr && lacp_members->has_data());
}

bool BundleInformation::Lacp::has_operation() const
{
    return is_set(operation)
	|| (lacp_bundles !=  nullptr && lacp_bundles->has_operation())
	|| (lacp_members !=  nullptr && lacp_members->has_operation());
}

std::string BundleInformation::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundles")
    {
        if(lacp_bundles == nullptr)
        {
            lacp_bundles = std::make_shared<BundleInformation::Lacp::LacpBundles>();
        }
        return lacp_bundles;
    }

    if(child_yang_name == "lacp-members")
    {
        if(lacp_members == nullptr)
        {
            lacp_members = std::make_shared<BundleInformation::Lacp::LacpMembers>();
        }
        return lacp_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lacp_bundles != nullptr)
    {
        children["lacp-bundles"] = lacp_bundles;
    }

    if(lacp_members != nullptr)
    {
        children["lacp-members"] = lacp_members;
    }

    return children;
}

void BundleInformation::Lacp::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Lacp::LacpBundles::LacpBundles()
{
    yang_name = "lacp-bundles"; yang_parent_name = "lacp";
}

BundleInformation::Lacp::LacpBundles::~LacpBundles()
{
}

bool BundleInformation::Lacp::LacpBundles::has_data() const
{
    for (std::size_t index=0; index<lacp_bundle.size(); index++)
    {
        if(lacp_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpBundles::has_operation() const
{
    for (std::size_t index=0; index<lacp_bundle.size(); index++)
    {
        if(lacp_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Lacp::LacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle")
    {
        for(auto const & c : lacp_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle>();
        c->parent = this;
        lacp_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lacp_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    lacp_bundle_children_members(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers>())
	,lacp_bundle_descendant(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant>())
	,lacp_bundle_item(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem>())
{
    lacp_bundle_children_members->parent = this;

    lacp_bundle_descendant->parent = this;

    lacp_bundle_item->parent = this;

    yang_name = "lacp-bundle"; yang_parent_name = "lacp-bundles";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::~LacpBundle()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_data() const
{
    return bundle_interface.is_set
	|| (lacp_bundle_children_members !=  nullptr && lacp_bundle_children_members->has_data())
	|| (lacp_bundle_descendant !=  nullptr && lacp_bundle_descendant->has_data())
	|| (lacp_bundle_item !=  nullptr && lacp_bundle_item->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (lacp_bundle_children_members !=  nullptr && lacp_bundle_children_members->has_operation())
	|| (lacp_bundle_descendant !=  nullptr && lacp_bundle_descendant->has_operation())
	|| (lacp_bundle_item !=  nullptr && lacp_bundle_item->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/lacp-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle-children-members")
    {
        if(lacp_bundle_children_members == nullptr)
        {
            lacp_bundle_children_members = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers>();
        }
        return lacp_bundle_children_members;
    }

    if(child_yang_name == "lacp-bundle-descendant")
    {
        if(lacp_bundle_descendant == nullptr)
        {
            lacp_bundle_descendant = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant>();
        }
        return lacp_bundle_descendant;
    }

    if(child_yang_name == "lacp-bundle-item")
    {
        if(lacp_bundle_item == nullptr)
        {
            lacp_bundle_item = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem>();
        }
        return lacp_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lacp_bundle_children_members != nullptr)
    {
        children["lacp-bundle-children-members"] = lacp_bundle_children_members;
    }

    if(lacp_bundle_descendant != nullptr)
    {
        children["lacp-bundle-descendant"] = lacp_bundle_descendant;
    }

    if(lacp_bundle_item != nullptr)
    {
        children["lacp-bundle-item"] = lacp_bundle_item;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::LacpBundleItem()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData>())
	,bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId>())
{
    actor_bundle_data->parent = this;

    bundle_system_id->parent = this;

    yang_name = "lacp-bundle-item"; yang_parent_name = "lacp-bundle";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::~LacpBundleItem()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LacpBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "lacp-bundle-item";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
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

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "lacp-bundle-item";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleSystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::LacpBundleDescendant()
    :
    bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "lacp-bundle-descendant"; yang_parent_name = "lacp-bundle";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::~LacpBundleDescendant()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-descendant";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LacpBundleDescendant' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData>())
	,bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId>())
{
    actor_bundle_data->parent = this;

    bundle_system_id->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "lacp-bundle-descendant";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::~BundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "bundle-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
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

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "bundle-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleSystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::MemberData()
    :
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo>())
{
    actor_info->parent = this;

    additional_info->parent = this;

    partner_info->parent = this;

    yang_name = "member-data"; yang_parent_name = "lacp-bundle-descendant";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::~MemberData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_data() const
{
    return actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_churn_state.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(mux_state.operation)
	|| is_set(partner_churn_state.operation)
	|| is_set(period_state.operation)
	|| is_set(receive_machine_state.operation)
	|| is_set(selected_aggregator_id.operation)
	|| is_set(selection_state.operation)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn_state.is_set || is_set(actor_churn_state.operation)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.operation)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.operation)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.operation)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.operation)) leaf_name_data.push_back(selection_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo>();
        }
        return additional_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo>();
        }
        return partner_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
    }
    if(value_path == "period-state")
    {
        period_state = value;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "member-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System>())
{
    port->parent = this;

    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "member-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PartnerInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System>())
{
    port->parent = this;

    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local>())
{
    foreign->parent = this;

    local->parent = this;

    yang_name = "additional-info"; yang_parent_name = "member-data";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(mbr_type.operation)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.operation)) leaf_name_data.push_back(mbr_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "local"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{
    yang_name = "foreign"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(operation)
	|| is_set(member_name.operation)
	|| is_set(peer_address.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Foreign' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMembers()
{
    yang_name = "lacp-bundle-children-members"; yang_parent_name = "lacp-bundle";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::~LacpBundleChildrenMembers()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<lacp_bundle_children_member.size(); index++)
    {
        if(lacp_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<lacp_bundle_children_member.size(); index++)
    {
        if(lacp_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-children-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LacpBundleChildrenMembers' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle-children-member")
    {
        for(auto const & c : lacp_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember>();
        c->parent = this;
        lacp_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lacp_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::LacpBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo>())
{
    actor_info->parent = this;

    additional_info->parent = this;

    partner_info->parent = this;

    yang_name = "lacp-bundle-children-member"; yang_parent_name = "lacp-bundle-children-members";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::~LacpBundleChildrenMember()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_data() const
{
    return member_interface.is_set
	|| actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(actor_churn_state.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(mux_state.operation)
	|| is_set(partner_churn_state.operation)
	|| is_set(period_state.operation)
	|| is_set(receive_machine_state.operation)
	|| is_set(selected_aggregator_id.operation)
	|| is_set(selection_state.operation)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LacpBundleChildrenMember' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (actor_churn_state.is_set || is_set(actor_churn_state.operation)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.operation)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.operation)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.operation)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.operation)) leaf_name_data.push_back(selection_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo>();
        }
        return additional_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo>();
        }
        return partner_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
    }
    if(value_path == "period-state")
    {
        period_state = value;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "lacp-bundle-children-member";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System>())
{
    port->parent = this;

    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "lacp-bundle-children-member";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PartnerInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

const Enum::YLeaf BmdMlacpSwitchoverEnum::bmd_mlacp_switchover_nonrevertive {0, "bmd-mlacp-switchover-nonrevertive"};
const Enum::YLeaf BmdMlacpSwitchoverEnum::bmd_mlacp_switchover_brute_force {1, "bmd-mlacp-switchover-brute-force"};
const Enum::YLeaf BmdMlacpSwitchoverEnum::bmd_mlacp_switchover_revertive {2, "bmd-mlacp-switchover-revertive"};
const Enum::YLeaf BmdMlacpSwitchoverEnum::bmd_mlacp_switchover_count {3, "bmd-mlacp-switchover-count"};

const Enum::YLeaf LoadBalanceEnum::default_ {0, "default"};
const Enum::YLeaf LoadBalanceEnum::auto_ {1, "auto"};
const Enum::YLeaf LoadBalanceEnum::value_ {2, "value"};
const Enum::YLeaf LoadBalanceEnum::source_ip {3, "source-ip"};
const Enum::YLeaf LoadBalanceEnum::destination_ip {4, "destination-ip"};
const Enum::YLeaf LoadBalanceEnum::unknown {5, "unknown"};

const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_admin_down {0, "bm-bdl-state-admin-down"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_down {1, "bm-bdl-state-down"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_client_down {2, "bm-bdl-state-client-down"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_ptnr_down {3, "bm-bdl-state-ptnr-down"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_bundle_shutdown {4, "bm-bdl-state-bundle-shutdown"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_pe_isolated {5, "bm-bdl-state-pe-isolated"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_nak {6, "bm-bdl-state-nak"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_up_active {7, "bm-bdl-state-up-active"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_mlacp_hot_standby {8, "bm-bdl-state-mlacp-hot-standby"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_mlacp_cold_standby {9, "bm-bdl-state-mlacp-cold-standby"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_unknown {10, "bm-bdl-state-unknown"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_cold_standby {11, "bm-bdl-state-cold-standby"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_error_disabled {12, "bm-bdl-state-error-disabled"};
const Enum::YLeaf BmBdlStateEnum::bm_bdl_state_efd_disabled {13, "bm-bdl-state-efd-disabled"};

const Enum::YLeaf LacpPeriodStateEnum::period_s_low {0, "period-s-low"};
const Enum::YLeaf LacpPeriodStateEnum::period_fast {1, "period-fast"};
const Enum::YLeaf LacpPeriodStateEnum::period_none {2, "period-none"};

const Enum::YLeaf BundleMediaEnum::bundle_media_ethernet {0, "bundle-media-ethernet"};
const Enum::YLeaf BundleMediaEnum::bundle_media_pos {1, "bundle-media-pos"};
const Enum::YLeaf BundleMediaEnum::bundle_media_count {2, "bundle-media-count"};

const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_nak {0, "bdl-state-nak"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_unknown {1, "bdl-state-unknown"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_no_sync {2, "bdl-state-no-sync"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_rec_delay {3, "bdl-state-rec-delay"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_up {4, "bdl-state-up"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_down {5, "bdl-state-down"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_admin_down {6, "bdl-state-admin-down"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_test {7, "bdl-state-test"};
const Enum::YLeaf BmdMlacpBdlStateEnumEnum::bdl_state_error {8, "bdl-state-error"};

const Enum::YLeaf BundleMedia1Enum::ethernet {0, "ethernet"};
const Enum::YLeaf BundleMedia1Enum::pos {1, "pos"};

const Enum::YLeaf RxstatesEnum::current_rx {1, "current-rx"};
const Enum::YLeaf RxstatesEnum::expired {2, "expired"};
const Enum::YLeaf RxstatesEnum::defaulted {3, "defaulted"};
const Enum::YLeaf RxstatesEnum::initialize {4, "initialize"};
const Enum::YLeaf RxstatesEnum::lacp_disabled {5, "lacp-disabled"};
const Enum::YLeaf RxstatesEnum::port_disabled {6, "port-disabled"};

const Enum::YLeaf LacpChurnstatesEnum::no_churn {1, "no-churn"};
const Enum::YLeaf LacpChurnstatesEnum::churn {2, "churn"};
const Enum::YLeaf LacpChurnstatesEnum::churn_monitor {3, "churn-monitor"};

const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_idb_create {0, "bmd-event-mbr-idb-create"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_bdl_add {1, "bmd-event-mbr-bdl-add"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_im_state {2, "bmd-event-mbr-im-state"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_sel_logic {3, "bmd-event-mbr-sel-logic"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_mux {4, "bmd-event-mbr-mux"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_bfd {5, "bmd-event-mbr-bfd"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_expired {6, "bmd-event-mbr-expired"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_defaulted {7, "bmd-event-mbr-defaulted"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_first_retry {8, "bmd-event-mbr-first-retry"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_msg {9, "bmd-event-mbr-msg"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_error {10, "bmd-event-mbr-error"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_mlacp_tlv {11, "bmd-event-mbr-mlacp-tlv"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_redundancy_role {12, "bmd-event-mbr-redundancy-role"};
const Enum::YLeaf BmdBagEventMbrItemEnum::bmd_event_mbr_count {13, "bmd-event-mbr-count"};

const Enum::YLeaf BmdBagEventDataEnum::bmd_bag_evt_data_none {0, "bmd-bag-evt-data-none"};
const Enum::YLeaf BmdBagEventDataEnum::bmd_bag_evt_data_error {1, "bmd-bag-evt-data-error"};
const Enum::YLeaf BmdBagEventDataEnum::bmd_bag_evt_data_string {2, "bmd-bag-evt-data-string"};

const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_none {0, "bm-switch-reason-none"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_noop {1, "bm-switch-reason-noop"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_not_mlacp {2, "bm-switch-reason-not-mlacp"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_revertive {3, "bm-switch-reason-revertive"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_bdl_down {4, "bm-switch-reason-bdl-down"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_recovery {5, "bm-switch-reason-recovery"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_preceding_error {6, "bm-switch-reason-preceding-error"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_wrong_order {7, "bm-switch-reason-wrong-order"};
const Enum::YLeaf BmdSwitchReasonEnum::bm_switch_reason_singleton {8, "bm-switch-reason-singleton"};

const Enum::YLeaf BmdMemberTypeEnumEnum::bmd_mbr_local {0, "bmd-mbr-local"};
const Enum::YLeaf BmdMemberTypeEnumEnum::bmd_mbr_foreign {1, "bmd-mbr-foreign"};
const Enum::YLeaf BmdMemberTypeEnumEnum::bmd_mbr_unknown {2, "bmd-mbr-unknown"};

const Enum::YLeaf BmAfIdEnum::bm_af_id_ipv4 {1136568623, "bm-af-id-ipv4"};
const Enum::YLeaf BmAfIdEnum::bm_af_id_ipv6 {1136568624, "bm-af-id-ipv6"};

const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_unknown {0, "bm-mbr-state-reason-unknown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_unselectable_unknown {1, "bm-mbr-state-reason-unselectable-unknown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_link_down {2, "bm-mbr-state-reason-link-down"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_link_deleting {3, "bm-mbr-state-reason-link-deleting"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_creating {4, "bm-mbr-state-reason-creating"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_creating {5, "bm-mbr-state-reason-bundle-creating"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_deleting {6, "bm-mbr-state-reason-bundle-deleting"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_admin_down {7, "bm-mbr-state-reason-bundle-admin-down"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_replicating {8, "bm-mbr-state-reason-replicating"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bandwidth {9, "bm-mbr-state-reason-bandwidth"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_loop_back {10, "bm-mbr-state-reason-loop-back"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_activity_type {11, "bm-mbr-state-reason-activity-type"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_shutdown {12, "bm-mbr-state-reason-bundle-shutdown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_min_selected {13, "bm-mbr-state-reason-min-selected"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_max_selected {14, "bm-mbr-state-reason-max-selected"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_link_limit {15, "bm-mbr-state-reason-link-limit"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_active_limit {16, "bm-mbr-state-reason-active-limit"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_standby_unknown {17, "bm-mbr-state-reason-standby-unknown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_expired {18, "bm-mbr-state-reason-expired"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_defaulted {19, "bm-mbr-state-reason-defaulted"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_act_or_not_agg {20, "bm-mbr-state-reason-act-or-not-agg"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_partner_not_agg {21, "bm-mbr-state-reason-partner-not-agg"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_lagid {22, "bm-mbr-state-reason-lagid"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_not_cfgd {23, "bm-mbr-state-reason-bundle-not-cfgd"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_not_ready {24, "bm-mbr-state-reason-bundle-not-ready"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_partner_ood {25, "bm-mbr-state-reason-partner-ood"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_partner_not_in_sync {26, "bm-mbr-state-reason-partner-not-in-sync"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_foreign_partner_oos {27, "bm-mbr-state-reason-foreign-partner-oos"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_attach_unknown {28, "bm-mbr-state-reason-attach-unknown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_partner_not_collecting {29, "bm-mbr-state-reason-partner-not-collecting"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_collect_unknown {30, "bm-mbr-state-reason-collect-unknown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_standby_foreign {31, "bm-mbr-state-reason-standby-foreign"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bfd_starting {32, "bm-mbr-state-reason-bfd-starting"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bfd_down {33, "bm-mbr-state-reason-bfd-down"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bfd_nbr_unconfig {34, "bm-mbr-state-reason-bfd-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp {35, "bm-mbr-state-reason-mlacp"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_pe_isolated {36, "bm-mbr-state-reason-pe-isolated"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_forced_switchover {37, "bm-mbr-state-reason-forced-switchover"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_errdis_unknown {38, "bm-mbr-state-reason-errdis-unknown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_no_mbr_state_info {39, "bm-mbr-state-reason-mlacp-no-mbr-state-info"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_active {40, "bm-mbr-state-reason-active"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_no_bdl_state_info {41, "bm-mbr-state-reason-mlacp-no-bdl-state-info"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_no_bdl_config_info {42, "bm-mbr-state-reason-mlacp-no-bdl-config-info"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_no_bdl_sync {43, "bm-mbr-state-reason-mlacp-no-bdl-sync"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_bdl_has_no_peer {44, "bm-mbr-state-reason-mlacp-bdl-has-no-peer"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_nak {45, "bm-mbr-state-reason-mlacp-nak"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_transport_unavailable {46, "bm-mbr-state-reason-mlacp-transport-unavailable"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_not_configured {47, "bm-mbr-state-reason-mlacp-not-configured"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_recovery_timer {48, "bm-mbr-state-reason-recovery-timer"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_standby {49, "bm-mbr-state-reason-mlacp-standby"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_maximized_out {50, "bm-mbr-state-reason-maximized-out"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_peer_selected {51, "bm-mbr-state-reason-mlacp-peer-selected"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_mlacp_connect_timer_running {52, "bm-mbr-state-reason-mlacp-connect-timer-running"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_not_mlacp {53, "bm-mbr-state-reason-bundle-not-mlacp"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_no_lon {54, "bm-mbr-state-reason-no-lon"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_cumul_rel_bw_limit {55, "bm-mbr-state-reason-cumul-rel-bw-limit"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_no_mac {56, "bm-mbr-state-reason-no-mac"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_no_system_id {57, "bm-mbr-state-reason-no-system-id"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_link_shutdown {58, "bm-mbr-state-reason-link-shutdown"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_activity_mlacp {59, "bm-mbr-state-reason-activity-mlacp"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_activity_iccp {60, "bm-mbr-state-reason-activity-iccp"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_icpe_mlacp {61, "bm-mbr-state-reason-bundle-icpe-mlacp"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_no_link_num {62, "bm-mbr-state-reason-no-link-num"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_standby_peer_higher_prio {63, "bm-mbr-state-reason-standby-peer-higher-prio"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_red_state_standby {64, "bm-mbr-state-reason-red-state-standby"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_other_red_state_standby {65, "bm-mbr-state-reason-other-red-state-standby"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_hold_ing {66, "bm-mbr-state-reason-hold-ing"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_error_disabled {67, "bm-mbr-state-reason-bundle-error-disabled"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bundle_efd_disabled {68, "bm-mbr-state-reason-bundle-efd-disabled"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_singleton_pe_isolated {69, "bm-mbr-state-reason-singleton-pe-isolated"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bfd_ipv6_starting {70, "bm-mbr-state-reason-bfd-ipv6-starting"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bfd_ipv6_down {71, "bm-mbr-state-reason-bfd-ipv6-down"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_bfd_ipv6_nbr_unconfig {72, "bm-mbr-state-reason-bfd-ipv6-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_timer_running {73, "bm-mbr-state-reason-timer-running"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_client_bundle_ctrl {74, "bm-mbr-state-reason-client-bundle-ctrl"};
const Enum::YLeaf BmMbrStateReasonEnum::bm_mbr_state_reason_count {75, "bm-mbr-state-reason-count"};

const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_idb_create {0, "bmd-event-bdl-idb-create"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_configured {1, "bmd-event-bdl-configured"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_im_state {2, "bmd-event-bdl-im-state"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_mbr_added {3, "bmd-event-bdl-mbr-added"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_mbr_deleted {4, "bmd-event-bdl-mbr-deleted"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_mac_addr {5, "bmd-event-bdl-mac-addr"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_first_retry {6, "bmd-event-bdl-first-retry"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_user_config {7, "bmd-event-bdl-user-config"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_error {8, "bmd-event-bdl-error"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_mlacp_tlv {9, "bmd-event-bdl-mlacp-tlv"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_redundancy_role {10, "bmd-event-bdl-redundancy-role"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bdl_bfd_state_change {11, "bdl-bfd-state-change"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_icl {12, "bmd-event-bdl-icl"};
const Enum::YLeaf BmdBagEventBdlItemEnum::bmd_event_bdl_count {13, "bmd-event-bdl-count"};

const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_incomplete {0, "node-state-incomplete"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_conn_rejected {1, "node-state-conn-rejected"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_connect_sent {2, "node-state-connect-sent"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_unconfigured {3, "node-state-unconfigured"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_unreachable {4, "node-state-unreachable"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_iccp_down {5, "node-state-iccp-down"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_nak {6, "node-state-nak"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_unknown {7, "node-state-unknown"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_mlacp_down {8, "node-state-mlacp-down"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_admin_down {9, "node-state-admin-down"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_pe_isolated {10, "node-state-pe-isolated"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_error {11, "node-state-error"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_test {12, "node-state-test"};
const Enum::YLeaf BmdMlacpNodeStateEnumEnum::node_state_up {13, "node-state-up"};

const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_idb_create {0, "bmd-event-rg-idb-create"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_configured {1, "bmd-event-rg-configured"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_user_config {2, "bmd-event-rg-user-config"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_connect_ion {3, "bmd-event-rg-connect-ion"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_data {4, "bmd-event-rg-data"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_sync {5, "bmd-event-rg-sync"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_first_retry {6, "bmd-event-rg-first-retry"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_error {7, "bmd-event-rg-error"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_mlacp_tlv {8, "bmd-event-rg-mlacp-tlv"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_iccp_event {9, "bmd-event-rg-iccp-event"};
const Enum::YLeaf BmdBagEventRgItemEnum::bmd_event_rg_count {10, "bmd-event-rg-count"};

const Enum::YLeaf BmWhichSystemEnum::bm_which_system_actr {0, "bm-which-system-actr"};
const Enum::YLeaf BmWhichSystemEnum::bm_which_system_ptnr {1, "bm-which-system-ptnr"};

const Enum::YLeaf BmdBfdBdlStateEnum::bmd_bfd_bdl_down {0, "bmd-bfd-bdl-down"};
const Enum::YLeaf BmdBfdBdlStateEnum::bmd_bfd_bdl_unknown {1, "bmd-bfd-bdl-unknown"};
const Enum::YLeaf BmdBfdBdlStateEnum::bmd_bfd_bdl_up {2, "bmd-bfd-bdl-up"};
const Enum::YLeaf BmdBfdBdlStateEnum::bmd_bfd_bdl_count {3, "bmd-bfd-bdl-count"};

const Enum::YLeaf BmdMlacpMbrStateEnumEnum::mbr_state_nak {0, "mbr-state-nak"};
const Enum::YLeaf BmdMlacpMbrStateEnumEnum::mbr_state_unknown {1, "mbr-state-unknown"};
const Enum::YLeaf BmdMlacpMbrStateEnumEnum::mbr_state_up {2, "mbr-state-up"};
const Enum::YLeaf BmdMlacpMbrStateEnumEnum::mbr_state_down {3, "mbr-state-down"};
const Enum::YLeaf BmdMlacpMbrStateEnumEnum::mbr_state_admin_down {4, "mbr-state-admin-down"};
const Enum::YLeaf BmdMlacpMbrStateEnumEnum::mbr_state_test {5, "mbr-state-test"};
const Enum::YLeaf BmdMlacpMbrStateEnumEnum::mbr_state_error {6, "mbr-state-error"};

const Enum::YLeaf BmdBagTargetEnum::bm_bag_target_mbr {0, "bm-bag-target-mbr"};
const Enum::YLeaf BmdBagTargetEnum::bm_bag_target_bdl {1, "bm-bag-target-bdl"};
const Enum::YLeaf BmdBagTargetEnum::bm_bag_target_node {2, "bm-bag-target-node"};
const Enum::YLeaf BmdBagTargetEnum::bm_bag_target_rg {3, "bm-bag-target-rg"};

const Enum::YLeaf BmMuxstateEnum::detached {1, "detached"};
const Enum::YLeaf BmMuxstateEnum::waiting {2, "waiting"};
const Enum::YLeaf BmMuxstateEnum::attached {3, "attached"};
const Enum::YLeaf BmMuxstateEnum::collecting {4, "collecting"};
const Enum::YLeaf BmMuxstateEnum::distributing {5, "distributing"};
const Enum::YLeaf BmMuxstateEnum::collecting_distributing {6, "collecting-distributing"};

const Enum::YLeaf LacpSelStateEnum::unselected {0, "unselected"};
const Enum::YLeaf LacpSelStateEnum::standby {1, "standby"};
const Enum::YLeaf LacpSelStateEnum::selected {2, "selected"};

const Enum::YLeaf BmdMemberStateEnum::bmd_mbr_state_configured {1, "bmd-mbr-state-configured"};
const Enum::YLeaf BmdMemberStateEnum::bmd_mbr_state_standby {2, "bmd-mbr-state-standby"};
const Enum::YLeaf BmdMemberStateEnum::bmd_mbr_state_hot_standby {3, "bmd-mbr-state-hot-standby"};
const Enum::YLeaf BmdMemberStateEnum::bmd_mbr_state_negotiating {4, "bmd-mbr-state-negotiating"};
const Enum::YLeaf BmdMemberStateEnum::bmd_mbr_state_bfd_running {5, "bmd-mbr-state-bfd-running"};
const Enum::YLeaf BmdMemberStateEnum::bmd_mbr_state_active {6, "bmd-mbr-state-active"};

const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_no_reason {0, "bm-mux-reason-no-reason"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_link_down {1, "bm-mux-reason-link-down"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_link_deleted {2, "bm-mux-reason-link-deleted"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_duplex {3, "bm-mux-reason-duplex"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_bandwidth {4, "bm-mux-reason-bandwidth"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_loop_back {5, "bm-mux-reason-loop-back"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_activity_type {6, "bm-mux-reason-activity-type"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_link_limit {7, "bm-mux-reason-link-limit"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_shared {8, "bm-mux-reason-shared"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_lagid {9, "bm-mux-reason-lagid"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_no_bundle {10, "bm-mux-reason-no-bundle"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_no_primary {11, "bm-mux-reason-no-primary"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_bundle_down {12, "bm-mux-reason-bundle-down"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_individual {13, "bm-mux-reason-individual"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_defaulted {14, "bm-mux-reason-defaulted"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_in_sync {15, "bm-mux-reason-in-sync"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_collecting {16, "bm-mux-reason-collecting"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_active_link_limit {17, "bm-mux-reason-active-link-limit"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_distributing {18, "bm-mux-reason-distributing"};
const Enum::YLeaf BmMuxreasonEnum::bm_mux_reason_count {19, "bm-mux-reason-count"};

const Enum::YLeaf BmFeatureStatusEnum::bm_feature_not_configured {0, "bm-feature-not-configured"};
const Enum::YLeaf BmFeatureStatusEnum::bm_feature_not_operational {1, "bm-feature-not-operational"};
const Enum::YLeaf BmFeatureStatusEnum::bm_feature_operational {2, "bm-feature-operational"};

const Enum::YLeaf BmSeverityEnum::ok {0, "ok"};
const Enum::YLeaf BmSeverityEnum::information {1, "information"};
const Enum::YLeaf BmSeverityEnum::misconfiguration {2, "misconfiguration"};
const Enum::YLeaf BmSeverityEnum::warning {3, "warning"};
const Enum::YLeaf BmSeverityEnum::error {5, "error"};

const Enum::YLeaf BundleMlacpModeEnum::bundle_mlacp_mode_standby {0, "bundle-mlacp-mode-standby"};
const Enum::YLeaf BundleMlacpModeEnum::bundle_mlacp_mode_active {1, "bundle-mlacp-mode-active"};
const Enum::YLeaf BundleMlacpModeEnum::bundle_mlacp_mode_count {2, "bundle-mlacp-mode-count"};

const Enum::YLeaf BmdBagMlacpSchActionItemEnum::switchover {0, "switchover"};
const Enum::YLeaf BmdBagMlacpSchActionItemEnum::switchback {1, "switchback"};

const Enum::YLeaf BmStateReasonTargetEnum::member_reason {0, "member-reason"};
const Enum::YLeaf BmStateReasonTargetEnum::bundle_reason {1, "bundle-reason"};

const Enum::YLeaf BmdMlacpNodeSyncEnumEnum::node_sync_req {0, "node-sync-req"};
const Enum::YLeaf BmdMlacpNodeSyncEnumEnum::node_sync_done {1, "node-sync-done"};
const Enum::YLeaf BmdMlacpNodeSyncEnumEnum::node_sync_start {2, "node-sync-start"};
const Enum::YLeaf BmdMlacpNodeSyncEnumEnum::node_sync_init {3, "node-sync-init"};
const Enum::YLeaf BmdMlacpNodeSyncEnumEnum::node_sync_singleton {4, "node-sync-singleton"};

const Enum::YLeaf BmBdlMacSourceEnum::bm_bdl_mac_source_unknown {0, "bm-bdl-mac-source-unknown"};
const Enum::YLeaf BmBdlMacSourceEnum::bm_bdl_mac_source_chassis {1, "bm-bdl-mac-source-chassis"};
const Enum::YLeaf BmBdlMacSourceEnum::bm_bdl_mac_source_configured {2, "bm-bdl-mac-source-configured"};
const Enum::YLeaf BmBdlMacSourceEnum::bm_bdl_mac_source_member {3, "bm-bdl-mac-source-member"};
const Enum::YLeaf BmBdlMacSourceEnum::bm_bdl_mac_source_peer {4, "bm-bdl-mac-source-peer"};


}
}

