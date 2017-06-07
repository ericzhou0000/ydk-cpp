
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_invmgr_oper_6.hpp"
#include "Cisco_IOS_XR_invmgr_oper_7.hpp"

namespace ydk {
namespace Cisco_IOS_XR_invmgr_oper {

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::InvBasicBag()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "inv-basic-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvBasicBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvBasicBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::InvEepromInfo()
    :
    description{YType::str, "description"},
    has_eeprom{YType::uint32, "has-eeprom"},
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::has_data() const
{
    return description.is_set
	|| has_eeprom.is_set
	|| inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(has_eeprom.operation)
	|| is_set(inv_card_type.operation)
	|| is_set(opaque_data.operation)
	|| is_set(opaque_data_size.operation)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvEepromInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.operation)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (inv_card_type.is_set || is_set(inv_card_type.operation)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.operation)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.operation)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
    }
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Eeprom()
    :
    asset_alias{YType::str, "asset-alias"},
    asset_id{YType::str, "asset-id"},
    base_mac_address1{YType::str, "base-mac-address1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    block_checksum{YType::str, "block-checksum"},
    block_count{YType::str, "block-count"},
    block_length{YType::str, "block-length"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    chassis_sid{YType::str, "chassis-sid"},
    clei{YType::str, "clei"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    description{YType::str, "description"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    eci{YType::str, "eci"},
    eeprom_size{YType::str, "eeprom-size"},
    engineer_use{YType::str, "engineer-use"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    hw_version{YType::str, "hw-version"},
    hwid{YType::str, "hwid"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    manu_test_data{YType::str, "manu-test-data"},
    mfg_bits{YType::str, "mfg-bits"},
    mfg_deviation{YType::str, "mfg-deviation"},
    oem_string{YType::str, "oem-string"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    pid{YType::str, "pid"},
    power_consumption{YType::str, "power-consumption"},
    power_supply_type{YType::str, "power-supply-type"},
    product_id{YType::str, "product-id"},
    rma_code{YType::str, "rma-code"},
    serial_number{YType::str, "serial-number"},
    snmpoid{YType::str, "snmpoid"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    vid{YType::str, "vid"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eeprom' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    rma_history{YType::str, "rma-history"},
    rma_number{YType::str, "rma-number"},
    test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "eeprom";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rma' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Tsi5S::Tsi5::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    node_id{YType::uint32, "node-id"},
    vm_done{YType::int32, "vm-done"},
    vm_node_id{YType::uint32, "vm-node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold>())
{
    env_sensor_info->parent = this;

    env_sensor_info_xml->parent = this;

    fru_info->parent = this;

    inv_asset_bag->parent = this;

    inv_basic_bag->parent = this;

    inv_eeprom_info->parent = this;

    pwg_info->parent = this;

    threshold->parent = this;

    yang_name = "attributes"; yang_parent_name = "tsi4";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::has_data() const
{
    return module_done.is_set
	|| node_id.is_set
	|| vm_done.is_set
	|| vm_node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::has_operation() const
{
    return is_set(operation)
	|| is_set(module_done.operation)
	|| is_set(node_id.operation)
	|| is_set(vm_done.operation)
	|| is_set(vm_node_id.operation)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.operation)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.operation)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.operation)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-done")
    {
        module_done = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    age_time_stamp{YType::uint32, "age-time-stamp"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    device_description{YType::str, "device-description"},
    device_id{YType::uint32, "device-id"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    precision{YType::uint32, "precision"},
    scale{YType::uint32, "scale"},
    status{YType::uint32, "status"},
    units{YType::str, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::uint32, "value"}
{
    yang_name = "env-sensor-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::has_data() const
{
    return age_time_stamp.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| device_description.is_set
	|| device_id.is_set
	|| field_validity_bitmap.is_set
	|| precision.is_set
	|| scale.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(age_time_stamp.operation)
	|| is_set(alarm_type.operation)
	|| is_set(data_type.operation)
	|| is_set(device_description.operation)
	|| is_set(device_id.operation)
	|| is_set(field_validity_bitmap.operation)
	|| is_set(precision.operation)
	|| is_set(scale.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time_stamp.is_set || is_set(age_time_stamp.operation)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.operation)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.operation)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.operation)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (scale.is_set || is_set(scale.operation)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "device-description")
    {
        device_description = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "scale")
    {
        scale = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::PwgInfo()
    :
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"}
{
    yang_name = "pwg-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::has_data() const
{
    return power_group_available_current.is_set
	|| power_group_drawn_current.is_set
	|| power_group_power_units.is_set
	|| power_group_redundancy_mode.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(power_group_available_current.operation)
	|| is_set(power_group_drawn_current.operation)
	|| is_set(power_group_power_units.operation)
	|| is_set(power_group_redundancy_mode.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwgInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_available_current.is_set || is_set(power_group_available_current.operation)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.operation)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.operation)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.operation)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::PwgInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
    }
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    data_type{YType::enumeration, "data-type"},
    description{YType::str, "description"},
    status{YType::enumeration, "status"},
    units{YType::enumeration, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::str, "value"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::has_data() const
{
    return data_type.is_set
	|| description.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(description.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfoXml' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_name{YType::str, "threshold-name"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_value{YType::int32, "threshold-value"}
{
    yang_name = "threshold-array"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_name.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_name.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdArray' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_name.is_set || is_set(threshold_name.operation)) leaf_name_data.push_back(threshold_name.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-name")
    {
        threshold_name = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::InvAssetBag()
    :
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"},
    part_number{YType::str, "part-number"}
{
    yang_name = "inv-asset-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::has_data() const
{
    return manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| original_equipment_manufacturer_string.is_set
	|| part_number.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::has_operation() const
{
    return is_set(operation)
	|| is_set(manufacturer_assembly_number.operation)
	|| is_set(manufacturer_assembly_revision.operation)
	|| is_set(manufacturer_common_language_equipment_identifier.operation)
	|| is_set(manufacturer_firmware_identifier.operation)
	|| is_set(manufacturer_software_identifier.operation)
	|| is_set(original_equipment_manufacturer_string.operation)
	|| is_set(part_number.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvAssetBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.operation)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.operation)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.operation)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.operation)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.operation)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.operation)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvAssetBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::Threshold()
    :
    critical_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi>())
	,major_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo>())
{
    critical_hi->parent = this;

    critical_lo->parent = this;

    major_hi->parent = this;

    major_lo->parent = this;

    minor_hi->parent = this;

    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::has_data() const
{
    return (critical_hi !=  nullptr && critical_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (major_lo !=  nullptr && major_lo->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::has_operation() const
{
    return is_set(operation)
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::InvBasicBag()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "inv-basic-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvBasicBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvBasicBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::InvEepromInfo()
    :
    description{YType::str, "description"},
    has_eeprom{YType::uint32, "has-eeprom"},
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::has_data() const
{
    return description.is_set
	|| has_eeprom.is_set
	|| inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(has_eeprom.operation)
	|| is_set(inv_card_type.operation)
	|| is_set(opaque_data.operation)
	|| is_set(opaque_data_size.operation)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvEepromInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.operation)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (inv_card_type.is_set || is_set(inv_card_type.operation)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.operation)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.operation)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
    }
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Eeprom()
    :
    asset_alias{YType::str, "asset-alias"},
    asset_id{YType::str, "asset-id"},
    base_mac_address1{YType::str, "base-mac-address1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    block_checksum{YType::str, "block-checksum"},
    block_count{YType::str, "block-count"},
    block_length{YType::str, "block-length"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    chassis_sid{YType::str, "chassis-sid"},
    clei{YType::str, "clei"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    description{YType::str, "description"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    eci{YType::str, "eci"},
    eeprom_size{YType::str, "eeprom-size"},
    engineer_use{YType::str, "engineer-use"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    hw_version{YType::str, "hw-version"},
    hwid{YType::str, "hwid"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    manu_test_data{YType::str, "manu-test-data"},
    mfg_bits{YType::str, "mfg-bits"},
    mfg_deviation{YType::str, "mfg-deviation"},
    oem_string{YType::str, "oem-string"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    pid{YType::str, "pid"},
    power_consumption{YType::str, "power-consumption"},
    power_supply_type{YType::str, "power-supply-type"},
    product_id{YType::str, "product-id"},
    rma_code{YType::str, "rma-code"},
    serial_number{YType::str, "serial-number"},
    snmpoid{YType::str, "snmpoid"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    vid{YType::str, "vid"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eeprom' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    rma_history{YType::str, "rma-history"},
    rma_number{YType::str, "rma-number"},
    test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "eeprom";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rma' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Tsi4S::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    node_id{YType::uint32, "node-id"},
    vm_done{YType::int32, "vm-done"},
    vm_node_id{YType::uint32, "vm-node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold>())
{
    env_sensor_info->parent = this;

    env_sensor_info_xml->parent = this;

    fru_info->parent = this;

    inv_asset_bag->parent = this;

    inv_basic_bag->parent = this;

    inv_eeprom_info->parent = this;

    pwg_info->parent = this;

    threshold->parent = this;

    yang_name = "attributes"; yang_parent_name = "tsi3";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::has_data() const
{
    return module_done.is_set
	|| node_id.is_set
	|| vm_done.is_set
	|| vm_node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::has_operation() const
{
    return is_set(operation)
	|| is_set(module_done.operation)
	|| is_set(node_id.operation)
	|| is_set(vm_done.operation)
	|| is_set(vm_node_id.operation)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.operation)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.operation)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.operation)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-done")
    {
        module_done = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    age_time_stamp{YType::uint32, "age-time-stamp"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    device_description{YType::str, "device-description"},
    device_id{YType::uint32, "device-id"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    precision{YType::uint32, "precision"},
    scale{YType::uint32, "scale"},
    status{YType::uint32, "status"},
    units{YType::str, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::uint32, "value"}
{
    yang_name = "env-sensor-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::has_data() const
{
    return age_time_stamp.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| device_description.is_set
	|| device_id.is_set
	|| field_validity_bitmap.is_set
	|| precision.is_set
	|| scale.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(age_time_stamp.operation)
	|| is_set(alarm_type.operation)
	|| is_set(data_type.operation)
	|| is_set(device_description.operation)
	|| is_set(device_id.operation)
	|| is_set(field_validity_bitmap.operation)
	|| is_set(precision.operation)
	|| is_set(scale.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time_stamp.is_set || is_set(age_time_stamp.operation)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.operation)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.operation)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.operation)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (scale.is_set || is_set(scale.operation)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "device-description")
    {
        device_description = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "scale")
    {
        scale = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::PwgInfo()
    :
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"}
{
    yang_name = "pwg-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::has_data() const
{
    return power_group_available_current.is_set
	|| power_group_drawn_current.is_set
	|| power_group_power_units.is_set
	|| power_group_redundancy_mode.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(power_group_available_current.operation)
	|| is_set(power_group_drawn_current.operation)
	|| is_set(power_group_power_units.operation)
	|| is_set(power_group_redundancy_mode.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwgInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_available_current.is_set || is_set(power_group_available_current.operation)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.operation)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.operation)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.operation)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::PwgInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
    }
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    data_type{YType::enumeration, "data-type"},
    description{YType::str, "description"},
    status{YType::enumeration, "status"},
    units{YType::enumeration, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::str, "value"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::has_data() const
{
    return data_type.is_set
	|| description.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(description.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfoXml' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_name{YType::str, "threshold-name"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_value{YType::int32, "threshold-value"}
{
    yang_name = "threshold-array"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_name.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_name.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdArray' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_name.is_set || is_set(threshold_name.operation)) leaf_name_data.push_back(threshold_name.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-name")
    {
        threshold_name = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::InvAssetBag()
    :
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"},
    part_number{YType::str, "part-number"}
{
    yang_name = "inv-asset-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::has_data() const
{
    return manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| original_equipment_manufacturer_string.is_set
	|| part_number.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::has_operation() const
{
    return is_set(operation)
	|| is_set(manufacturer_assembly_number.operation)
	|| is_set(manufacturer_assembly_revision.operation)
	|| is_set(manufacturer_common_language_equipment_identifier.operation)
	|| is_set(manufacturer_firmware_identifier.operation)
	|| is_set(manufacturer_software_identifier.operation)
	|| is_set(original_equipment_manufacturer_string.operation)
	|| is_set(part_number.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvAssetBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.operation)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.operation)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.operation)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.operation)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.operation)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.operation)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvAssetBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::Threshold()
    :
    critical_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi>())
	,major_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo>())
{
    critical_hi->parent = this;

    critical_lo->parent = this;

    major_hi->parent = this;

    major_lo->parent = this;

    minor_hi->parent = this;

    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::has_data() const
{
    return (critical_hi !=  nullptr && critical_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (major_lo !=  nullptr && major_lo->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::has_operation() const
{
    return is_set(operation)
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::InvBasicBag()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "inv-basic-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvBasicBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvBasicBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::InvEepromInfo()
    :
    description{YType::str, "description"},
    has_eeprom{YType::uint32, "has-eeprom"},
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::has_data() const
{
    return description.is_set
	|| has_eeprom.is_set
	|| inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(has_eeprom.operation)
	|| is_set(inv_card_type.operation)
	|| is_set(opaque_data.operation)
	|| is_set(opaque_data_size.operation)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvEepromInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.operation)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (inv_card_type.is_set || is_set(inv_card_type.operation)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.operation)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.operation)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
    }
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Eeprom()
    :
    asset_alias{YType::str, "asset-alias"},
    asset_id{YType::str, "asset-id"},
    base_mac_address1{YType::str, "base-mac-address1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    block_checksum{YType::str, "block-checksum"},
    block_count{YType::str, "block-count"},
    block_length{YType::str, "block-length"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    chassis_sid{YType::str, "chassis-sid"},
    clei{YType::str, "clei"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    description{YType::str, "description"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    eci{YType::str, "eci"},
    eeprom_size{YType::str, "eeprom-size"},
    engineer_use{YType::str, "engineer-use"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    hw_version{YType::str, "hw-version"},
    hwid{YType::str, "hwid"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    manu_test_data{YType::str, "manu-test-data"},
    mfg_bits{YType::str, "mfg-bits"},
    mfg_deviation{YType::str, "mfg-deviation"},
    oem_string{YType::str, "oem-string"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    pid{YType::str, "pid"},
    power_consumption{YType::str, "power-consumption"},
    power_supply_type{YType::str, "power-supply-type"},
    product_id{YType::str, "product-id"},
    rma_code{YType::str, "rma-code"},
    serial_number{YType::str, "serial-number"},
    snmpoid{YType::str, "snmpoid"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    vid{YType::str, "vid"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eeprom' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    rma_history{YType::str, "rma-history"},
    rma_number{YType::str, "rma-number"},
    test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "eeprom";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rma' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Tsi3S::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    node_id{YType::uint32, "node-id"},
    vm_done{YType::int32, "vm-done"},
    vm_node_id{YType::uint32, "vm-node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold>())
{
    env_sensor_info->parent = this;

    env_sensor_info_xml->parent = this;

    fru_info->parent = this;

    inv_asset_bag->parent = this;

    inv_basic_bag->parent = this;

    inv_eeprom_info->parent = this;

    pwg_info->parent = this;

    threshold->parent = this;

    yang_name = "attributes"; yang_parent_name = "tsi2";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::has_data() const
{
    return module_done.is_set
	|| node_id.is_set
	|| vm_done.is_set
	|| vm_node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::has_operation() const
{
    return is_set(operation)
	|| is_set(module_done.operation)
	|| is_set(node_id.operation)
	|| is_set(vm_done.operation)
	|| is_set(vm_node_id.operation)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.operation)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.operation)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.operation)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-done")
    {
        module_done = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    age_time_stamp{YType::uint32, "age-time-stamp"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    device_description{YType::str, "device-description"},
    device_id{YType::uint32, "device-id"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    precision{YType::uint32, "precision"},
    scale{YType::uint32, "scale"},
    status{YType::uint32, "status"},
    units{YType::str, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::uint32, "value"}
{
    yang_name = "env-sensor-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::has_data() const
{
    return age_time_stamp.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| device_description.is_set
	|| device_id.is_set
	|| field_validity_bitmap.is_set
	|| precision.is_set
	|| scale.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(age_time_stamp.operation)
	|| is_set(alarm_type.operation)
	|| is_set(data_type.operation)
	|| is_set(device_description.operation)
	|| is_set(device_id.operation)
	|| is_set(field_validity_bitmap.operation)
	|| is_set(precision.operation)
	|| is_set(scale.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time_stamp.is_set || is_set(age_time_stamp.operation)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.operation)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.operation)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.operation)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (scale.is_set || is_set(scale.operation)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "device-description")
    {
        device_description = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "scale")
    {
        scale = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::PwgInfo()
    :
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"}
{
    yang_name = "pwg-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::has_data() const
{
    return power_group_available_current.is_set
	|| power_group_drawn_current.is_set
	|| power_group_power_units.is_set
	|| power_group_redundancy_mode.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(power_group_available_current.operation)
	|| is_set(power_group_drawn_current.operation)
	|| is_set(power_group_power_units.operation)
	|| is_set(power_group_redundancy_mode.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwgInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_available_current.is_set || is_set(power_group_available_current.operation)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.operation)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.operation)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.operation)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::PwgInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
    }
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    data_type{YType::enumeration, "data-type"},
    description{YType::str, "description"},
    status{YType::enumeration, "status"},
    units{YType::enumeration, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::str, "value"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::has_data() const
{
    return data_type.is_set
	|| description.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(description.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfoXml' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_name{YType::str, "threshold-name"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_value{YType::int32, "threshold-value"}
{
    yang_name = "threshold-array"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_name.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_name.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdArray' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_name.is_set || is_set(threshold_name.operation)) leaf_name_data.push_back(threshold_name.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-name")
    {
        threshold_name = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::InvAssetBag()
    :
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"},
    part_number{YType::str, "part-number"}
{
    yang_name = "inv-asset-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::has_data() const
{
    return manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| original_equipment_manufacturer_string.is_set
	|| part_number.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::has_operation() const
{
    return is_set(operation)
	|| is_set(manufacturer_assembly_number.operation)
	|| is_set(manufacturer_assembly_revision.operation)
	|| is_set(manufacturer_common_language_equipment_identifier.operation)
	|| is_set(manufacturer_firmware_identifier.operation)
	|| is_set(manufacturer_software_identifier.operation)
	|| is_set(original_equipment_manufacturer_string.operation)
	|| is_set(part_number.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvAssetBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.operation)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.operation)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.operation)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.operation)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.operation)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.operation)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvAssetBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::Threshold()
    :
    critical_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi>())
	,major_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo>())
{
    critical_hi->parent = this;

    critical_lo->parent = this;

    major_hi->parent = this;

    major_lo->parent = this;

    minor_hi->parent = this;

    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::has_data() const
{
    return (critical_hi !=  nullptr && critical_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (major_lo !=  nullptr && major_lo->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::has_operation() const
{
    return is_set(operation)
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::InvBasicBag()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "inv-basic-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvBasicBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvBasicBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::InvEepromInfo()
    :
    description{YType::str, "description"},
    has_eeprom{YType::uint32, "has-eeprom"},
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::has_data() const
{
    return description.is_set
	|| has_eeprom.is_set
	|| inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(has_eeprom.operation)
	|| is_set(inv_card_type.operation)
	|| is_set(opaque_data.operation)
	|| is_set(opaque_data_size.operation)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvEepromInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.operation)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (inv_card_type.is_set || is_set(inv_card_type.operation)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.operation)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.operation)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
    }
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Eeprom()
    :
    asset_alias{YType::str, "asset-alias"},
    asset_id{YType::str, "asset-id"},
    base_mac_address1{YType::str, "base-mac-address1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    block_checksum{YType::str, "block-checksum"},
    block_count{YType::str, "block-count"},
    block_length{YType::str, "block-length"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    chassis_sid{YType::str, "chassis-sid"},
    clei{YType::str, "clei"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    description{YType::str, "description"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    eci{YType::str, "eci"},
    eeprom_size{YType::str, "eeprom-size"},
    engineer_use{YType::str, "engineer-use"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    hw_version{YType::str, "hw-version"},
    hwid{YType::str, "hwid"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    manu_test_data{YType::str, "manu-test-data"},
    mfg_bits{YType::str, "mfg-bits"},
    mfg_deviation{YType::str, "mfg-deviation"},
    oem_string{YType::str, "oem-string"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    pid{YType::str, "pid"},
    power_consumption{YType::str, "power-consumption"},
    power_supply_type{YType::str, "power-supply-type"},
    product_id{YType::str, "product-id"},
    rma_code{YType::str, "rma-code"},
    serial_number{YType::str, "serial-number"},
    snmpoid{YType::str, "snmpoid"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    vid{YType::str, "vid"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eeprom' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    rma_history{YType::str, "rma-history"},
    rma_number{YType::str, "rma-number"},
    test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "eeprom";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rma' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Tsi2S::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    node_id{YType::uint32, "node-id"},
    vm_done{YType::int32, "vm-done"},
    vm_node_id{YType::uint32, "vm-node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold>())
{
    env_sensor_info->parent = this;

    env_sensor_info_xml->parent = this;

    fru_info->parent = this;

    inv_asset_bag->parent = this;

    inv_basic_bag->parent = this;

    inv_eeprom_info->parent = this;

    pwg_info->parent = this;

    threshold->parent = this;

    yang_name = "attributes"; yang_parent_name = "tsi1";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::has_data() const
{
    return module_done.is_set
	|| node_id.is_set
	|| vm_done.is_set
	|| vm_node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::has_operation() const
{
    return is_set(operation)
	|| is_set(module_done.operation)
	|| is_set(node_id.operation)
	|| is_set(vm_done.operation)
	|| is_set(vm_node_id.operation)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.operation)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.operation)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.operation)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-done")
    {
        module_done = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    age_time_stamp{YType::uint32, "age-time-stamp"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    device_description{YType::str, "device-description"},
    device_id{YType::uint32, "device-id"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    precision{YType::uint32, "precision"},
    scale{YType::uint32, "scale"},
    status{YType::uint32, "status"},
    units{YType::str, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::uint32, "value"}
{
    yang_name = "env-sensor-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::has_data() const
{
    return age_time_stamp.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| device_description.is_set
	|| device_id.is_set
	|| field_validity_bitmap.is_set
	|| precision.is_set
	|| scale.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(age_time_stamp.operation)
	|| is_set(alarm_type.operation)
	|| is_set(data_type.operation)
	|| is_set(device_description.operation)
	|| is_set(device_id.operation)
	|| is_set(field_validity_bitmap.operation)
	|| is_set(precision.operation)
	|| is_set(scale.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time_stamp.is_set || is_set(age_time_stamp.operation)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.operation)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.operation)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.operation)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (scale.is_set || is_set(scale.operation)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "device-description")
    {
        device_description = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "scale")
    {
        scale = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::PwgInfo()
    :
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"}
{
    yang_name = "pwg-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::has_data() const
{
    return power_group_available_current.is_set
	|| power_group_drawn_current.is_set
	|| power_group_power_units.is_set
	|| power_group_redundancy_mode.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(power_group_available_current.operation)
	|| is_set(power_group_drawn_current.operation)
	|| is_set(power_group_power_units.operation)
	|| is_set(power_group_redundancy_mode.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwgInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_available_current.is_set || is_set(power_group_available_current.operation)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.operation)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.operation)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.operation)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::PwgInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
    }
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    data_type{YType::enumeration, "data-type"},
    description{YType::str, "description"},
    status{YType::enumeration, "status"},
    units{YType::enumeration, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::str, "value"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::has_data() const
{
    return data_type.is_set
	|| description.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(description.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfoXml' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_name{YType::str, "threshold-name"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_value{YType::int32, "threshold-value"}
{
    yang_name = "threshold-array"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_name.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_name.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdArray' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_name.is_set || is_set(threshold_name.operation)) leaf_name_data.push_back(threshold_name.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-name")
    {
        threshold_name = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::InvAssetBag()
    :
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"},
    part_number{YType::str, "part-number"}
{
    yang_name = "inv-asset-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::has_data() const
{
    return manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| original_equipment_manufacturer_string.is_set
	|| part_number.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::has_operation() const
{
    return is_set(operation)
	|| is_set(manufacturer_assembly_number.operation)
	|| is_set(manufacturer_assembly_revision.operation)
	|| is_set(manufacturer_common_language_equipment_identifier.operation)
	|| is_set(manufacturer_firmware_identifier.operation)
	|| is_set(manufacturer_software_identifier.operation)
	|| is_set(original_equipment_manufacturer_string.operation)
	|| is_set(part_number.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvAssetBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.operation)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.operation)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.operation)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.operation)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.operation)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.operation)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvAssetBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::Threshold()
    :
    critical_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi>())
	,major_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo>())
{
    critical_hi->parent = this;

    critical_lo->parent = this;

    major_hi->parent = this;

    major_lo->parent = this;

    minor_hi->parent = this;

    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::has_data() const
{
    return (critical_hi !=  nullptr && critical_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (major_lo !=  nullptr && major_lo->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::has_operation() const
{
    return is_set(operation)
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::InvBasicBag()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "inv-basic-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::~InvBasicBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-basic-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvBasicBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvBasicBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::InvEepromInfo()
    :
    description{YType::str, "description"},
    has_eeprom{YType::uint32, "has-eeprom"},
    inv_card_type{YType::uint8, "inv-card-type"},
    opaque_data{YType::str, "opaque-data"},
    opaque_data_size{YType::uint32, "opaque-data-size"}
    	,
    eeprom(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom>())
{
    eeprom->parent = this;

    yang_name = "inv-eeprom-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::~InvEepromInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::has_data() const
{
    return description.is_set
	|| has_eeprom.is_set
	|| inv_card_type.is_set
	|| opaque_data.is_set
	|| opaque_data_size.is_set
	|| (eeprom !=  nullptr && eeprom->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(has_eeprom.operation)
	|| is_set(inv_card_type.operation)
	|| is_set(opaque_data.operation)
	|| is_set(opaque_data_size.operation)
	|| (eeprom !=  nullptr && eeprom->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-eeprom-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvEepromInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (has_eeprom.is_set || is_set(has_eeprom.operation)) leaf_name_data.push_back(has_eeprom.get_name_leafdata());
    if (inv_card_type.is_set || is_set(inv_card_type.operation)) leaf_name_data.push_back(inv_card_type.get_name_leafdata());
    if (opaque_data.is_set || is_set(opaque_data.operation)) leaf_name_data.push_back(opaque_data.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.operation)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom>();
        }
        return eeprom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "has-eeprom")
    {
        has_eeprom = value;
    }
    if(value_path == "inv-card-type")
    {
        inv_card_type = value;
    }
    if(value_path == "opaque-data")
    {
        opaque_data = value;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Eeprom()
    :
    asset_alias{YType::str, "asset-alias"},
    asset_id{YType::str, "asset-id"},
    base_mac_address1{YType::str, "base-mac-address1"},
    base_mac_address2{YType::str, "base-mac-address2"},
    base_mac_address3{YType::str, "base-mac-address3"},
    base_mac_address4{YType::str, "base-mac-address4"},
    block_checksum{YType::str, "block-checksum"},
    block_count{YType::str, "block-count"},
    block_length{YType::str, "block-length"},
    block_signature{YType::str, "block-signature"},
    block_version{YType::str, "block-version"},
    chassis_sid{YType::str, "chassis-sid"},
    clei{YType::str, "clei"},
    controller_family{YType::str, "controller-family"},
    controller_type{YType::str, "controller-type"},
    description{YType::str, "description"},
    dev_num1{YType::str, "dev-num1"},
    dev_num2{YType::str, "dev-num2"},
    dev_num3{YType::str, "dev-num3"},
    dev_num4{YType::str, "dev-num4"},
    dev_num5{YType::str, "dev-num5"},
    dev_num6{YType::str, "dev-num6"},
    dev_num7{YType::str, "dev-num7"},
    eci{YType::str, "eci"},
    eeprom_size{YType::str, "eeprom-size"},
    engineer_use{YType::str, "engineer-use"},
    fru_major_type{YType::str, "fru-major-type"},
    fru_minor_type{YType::str, "fru-minor-type"},
    hw_version{YType::str, "hw-version"},
    hwid{YType::str, "hwid"},
    idprom_format_rev{YType::str, "idprom-format-rev"},
    mac_add_blk_size1{YType::str, "mac-add-blk-size1"},
    mac_add_blk_size2{YType::str, "mac-add-blk-size2"},
    mac_add_blk_size3{YType::str, "mac-add-blk-size3"},
    mac_add_blk_size4{YType::str, "mac-add-blk-size4"},
    manu_test_data{YType::str, "manu-test-data"},
    mfg_bits{YType::str, "mfg-bits"},
    mfg_deviation{YType::str, "mfg-deviation"},
    oem_string{YType::str, "oem-string"},
    part_number{YType::str, "part-number"},
    part_revision{YType::str, "part-revision"},
    pca_num{YType::str, "pca-num"},
    pcavid{YType::str, "pcavid"},
    pcb_serial_num{YType::str, "pcb-serial-num"},
    pid{YType::str, "pid"},
    power_consumption{YType::str, "power-consumption"},
    power_supply_type{YType::str, "power-supply-type"},
    product_id{YType::str, "product-id"},
    rma_code{YType::str, "rma-code"},
    serial_number{YType::str, "serial-number"},
    snmpoid{YType::str, "snmpoid"},
    top_assem_part_num{YType::str, "top-assem-part-num"},
    top_assem_vid{YType::str, "top-assem-vid"},
    udi_description{YType::str, "udi-description"},
    udi_name{YType::str, "udi-name"},
    vid{YType::str, "vid"}
    	,
    rma(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma>())
{
    rma->parent = this;

    yang_name = "eeprom"; yang_parent_name = "inv-eeprom-info";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::~Eeprom()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::has_data() const
{
    return asset_alias.is_set
	|| asset_id.is_set
	|| base_mac_address1.is_set
	|| base_mac_address2.is_set
	|| base_mac_address3.is_set
	|| base_mac_address4.is_set
	|| block_checksum.is_set
	|| block_count.is_set
	|| block_length.is_set
	|| block_signature.is_set
	|| block_version.is_set
	|| chassis_sid.is_set
	|| clei.is_set
	|| controller_family.is_set
	|| controller_type.is_set
	|| description.is_set
	|| dev_num1.is_set
	|| dev_num2.is_set
	|| dev_num3.is_set
	|| dev_num4.is_set
	|| dev_num5.is_set
	|| dev_num6.is_set
	|| dev_num7.is_set
	|| eci.is_set
	|| eeprom_size.is_set
	|| engineer_use.is_set
	|| fru_major_type.is_set
	|| fru_minor_type.is_set
	|| hw_version.is_set
	|| hwid.is_set
	|| idprom_format_rev.is_set
	|| mac_add_blk_size1.is_set
	|| mac_add_blk_size2.is_set
	|| mac_add_blk_size3.is_set
	|| mac_add_blk_size4.is_set
	|| manu_test_data.is_set
	|| mfg_bits.is_set
	|| mfg_deviation.is_set
	|| oem_string.is_set
	|| part_number.is_set
	|| part_revision.is_set
	|| pca_num.is_set
	|| pcavid.is_set
	|| pcb_serial_num.is_set
	|| pid.is_set
	|| power_consumption.is_set
	|| power_supply_type.is_set
	|| product_id.is_set
	|| rma_code.is_set
	|| serial_number.is_set
	|| snmpoid.is_set
	|| top_assem_part_num.is_set
	|| top_assem_vid.is_set
	|| udi_description.is_set
	|| udi_name.is_set
	|| vid.is_set
	|| (rma !=  nullptr && rma->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::has_operation() const
{
    return is_set(operation)
	|| is_set(asset_alias.operation)
	|| is_set(asset_id.operation)
	|| is_set(base_mac_address1.operation)
	|| is_set(base_mac_address2.operation)
	|| is_set(base_mac_address3.operation)
	|| is_set(base_mac_address4.operation)
	|| is_set(block_checksum.operation)
	|| is_set(block_count.operation)
	|| is_set(block_length.operation)
	|| is_set(block_signature.operation)
	|| is_set(block_version.operation)
	|| is_set(chassis_sid.operation)
	|| is_set(clei.operation)
	|| is_set(controller_family.operation)
	|| is_set(controller_type.operation)
	|| is_set(description.operation)
	|| is_set(dev_num1.operation)
	|| is_set(dev_num2.operation)
	|| is_set(dev_num3.operation)
	|| is_set(dev_num4.operation)
	|| is_set(dev_num5.operation)
	|| is_set(dev_num6.operation)
	|| is_set(dev_num7.operation)
	|| is_set(eci.operation)
	|| is_set(eeprom_size.operation)
	|| is_set(engineer_use.operation)
	|| is_set(fru_major_type.operation)
	|| is_set(fru_minor_type.operation)
	|| is_set(hw_version.operation)
	|| is_set(hwid.operation)
	|| is_set(idprom_format_rev.operation)
	|| is_set(mac_add_blk_size1.operation)
	|| is_set(mac_add_blk_size2.operation)
	|| is_set(mac_add_blk_size3.operation)
	|| is_set(mac_add_blk_size4.operation)
	|| is_set(manu_test_data.operation)
	|| is_set(mfg_bits.operation)
	|| is_set(mfg_deviation.operation)
	|| is_set(oem_string.operation)
	|| is_set(part_number.operation)
	|| is_set(part_revision.operation)
	|| is_set(pca_num.operation)
	|| is_set(pcavid.operation)
	|| is_set(pcb_serial_num.operation)
	|| is_set(pid.operation)
	|| is_set(power_consumption.operation)
	|| is_set(power_supply_type.operation)
	|| is_set(product_id.operation)
	|| is_set(rma_code.operation)
	|| is_set(serial_number.operation)
	|| is_set(snmpoid.operation)
	|| is_set(top_assem_part_num.operation)
	|| is_set(top_assem_vid.operation)
	|| is_set(udi_description.operation)
	|| is_set(udi_name.operation)
	|| is_set(vid.operation)
	|| (rma !=  nullptr && rma->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eeprom' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asset_alias.is_set || is_set(asset_alias.operation)) leaf_name_data.push_back(asset_alias.get_name_leafdata());
    if (asset_id.is_set || is_set(asset_id.operation)) leaf_name_data.push_back(asset_id.get_name_leafdata());
    if (base_mac_address1.is_set || is_set(base_mac_address1.operation)) leaf_name_data.push_back(base_mac_address1.get_name_leafdata());
    if (base_mac_address2.is_set || is_set(base_mac_address2.operation)) leaf_name_data.push_back(base_mac_address2.get_name_leafdata());
    if (base_mac_address3.is_set || is_set(base_mac_address3.operation)) leaf_name_data.push_back(base_mac_address3.get_name_leafdata());
    if (base_mac_address4.is_set || is_set(base_mac_address4.operation)) leaf_name_data.push_back(base_mac_address4.get_name_leafdata());
    if (block_checksum.is_set || is_set(block_checksum.operation)) leaf_name_data.push_back(block_checksum.get_name_leafdata());
    if (block_count.is_set || is_set(block_count.operation)) leaf_name_data.push_back(block_count.get_name_leafdata());
    if (block_length.is_set || is_set(block_length.operation)) leaf_name_data.push_back(block_length.get_name_leafdata());
    if (block_signature.is_set || is_set(block_signature.operation)) leaf_name_data.push_back(block_signature.get_name_leafdata());
    if (block_version.is_set || is_set(block_version.operation)) leaf_name_data.push_back(block_version.get_name_leafdata());
    if (chassis_sid.is_set || is_set(chassis_sid.operation)) leaf_name_data.push_back(chassis_sid.get_name_leafdata());
    if (clei.is_set || is_set(clei.operation)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (controller_family.is_set || is_set(controller_family.operation)) leaf_name_data.push_back(controller_family.get_name_leafdata());
    if (controller_type.is_set || is_set(controller_type.operation)) leaf_name_data.push_back(controller_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dev_num1.is_set || is_set(dev_num1.operation)) leaf_name_data.push_back(dev_num1.get_name_leafdata());
    if (dev_num2.is_set || is_set(dev_num2.operation)) leaf_name_data.push_back(dev_num2.get_name_leafdata());
    if (dev_num3.is_set || is_set(dev_num3.operation)) leaf_name_data.push_back(dev_num3.get_name_leafdata());
    if (dev_num4.is_set || is_set(dev_num4.operation)) leaf_name_data.push_back(dev_num4.get_name_leafdata());
    if (dev_num5.is_set || is_set(dev_num5.operation)) leaf_name_data.push_back(dev_num5.get_name_leafdata());
    if (dev_num6.is_set || is_set(dev_num6.operation)) leaf_name_data.push_back(dev_num6.get_name_leafdata());
    if (dev_num7.is_set || is_set(dev_num7.operation)) leaf_name_data.push_back(dev_num7.get_name_leafdata());
    if (eci.is_set || is_set(eci.operation)) leaf_name_data.push_back(eci.get_name_leafdata());
    if (eeprom_size.is_set || is_set(eeprom_size.operation)) leaf_name_data.push_back(eeprom_size.get_name_leafdata());
    if (engineer_use.is_set || is_set(engineer_use.operation)) leaf_name_data.push_back(engineer_use.get_name_leafdata());
    if (fru_major_type.is_set || is_set(fru_major_type.operation)) leaf_name_data.push_back(fru_major_type.get_name_leafdata());
    if (fru_minor_type.is_set || is_set(fru_minor_type.operation)) leaf_name_data.push_back(fru_minor_type.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.operation)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (idprom_format_rev.is_set || is_set(idprom_format_rev.operation)) leaf_name_data.push_back(idprom_format_rev.get_name_leafdata());
    if (mac_add_blk_size1.is_set || is_set(mac_add_blk_size1.operation)) leaf_name_data.push_back(mac_add_blk_size1.get_name_leafdata());
    if (mac_add_blk_size2.is_set || is_set(mac_add_blk_size2.operation)) leaf_name_data.push_back(mac_add_blk_size2.get_name_leafdata());
    if (mac_add_blk_size3.is_set || is_set(mac_add_blk_size3.operation)) leaf_name_data.push_back(mac_add_blk_size3.get_name_leafdata());
    if (mac_add_blk_size4.is_set || is_set(mac_add_blk_size4.operation)) leaf_name_data.push_back(mac_add_blk_size4.get_name_leafdata());
    if (manu_test_data.is_set || is_set(manu_test_data.operation)) leaf_name_data.push_back(manu_test_data.get_name_leafdata());
    if (mfg_bits.is_set || is_set(mfg_bits.operation)) leaf_name_data.push_back(mfg_bits.get_name_leafdata());
    if (mfg_deviation.is_set || is_set(mfg_deviation.operation)) leaf_name_data.push_back(mfg_deviation.get_name_leafdata());
    if (oem_string.is_set || is_set(oem_string.operation)) leaf_name_data.push_back(oem_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (part_revision.is_set || is_set(part_revision.operation)) leaf_name_data.push_back(part_revision.get_name_leafdata());
    if (pca_num.is_set || is_set(pca_num.operation)) leaf_name_data.push_back(pca_num.get_name_leafdata());
    if (pcavid.is_set || is_set(pcavid.operation)) leaf_name_data.push_back(pcavid.get_name_leafdata());
    if (pcb_serial_num.is_set || is_set(pcb_serial_num.operation)) leaf_name_data.push_back(pcb_serial_num.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (power_consumption.is_set || is_set(power_consumption.operation)) leaf_name_data.push_back(power_consumption.get_name_leafdata());
    if (power_supply_type.is_set || is_set(power_supply_type.operation)) leaf_name_data.push_back(power_supply_type.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.operation)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (rma_code.is_set || is_set(rma_code.operation)) leaf_name_data.push_back(rma_code.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (snmpoid.is_set || is_set(snmpoid.operation)) leaf_name_data.push_back(snmpoid.get_name_leafdata());
    if (top_assem_part_num.is_set || is_set(top_assem_part_num.operation)) leaf_name_data.push_back(top_assem_part_num.get_name_leafdata());
    if (top_assem_vid.is_set || is_set(top_assem_vid.operation)) leaf_name_data.push_back(top_assem_vid.get_name_leafdata());
    if (udi_description.is_set || is_set(udi_description.operation)) leaf_name_data.push_back(udi_description.get_name_leafdata());
    if (udi_name.is_set || is_set(udi_name.operation)) leaf_name_data.push_back(udi_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rma")
    {
        if(rma == nullptr)
        {
            rma = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma>();
        }
        return rma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rma != nullptr)
    {
        children["rma"] = rma;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asset-alias")
    {
        asset_alias = value;
    }
    if(value_path == "asset-id")
    {
        asset_id = value;
    }
    if(value_path == "base-mac-address1")
    {
        base_mac_address1 = value;
    }
    if(value_path == "base-mac-address2")
    {
        base_mac_address2 = value;
    }
    if(value_path == "base-mac-address3")
    {
        base_mac_address3 = value;
    }
    if(value_path == "base-mac-address4")
    {
        base_mac_address4 = value;
    }
    if(value_path == "block-checksum")
    {
        block_checksum = value;
    }
    if(value_path == "block-count")
    {
        block_count = value;
    }
    if(value_path == "block-length")
    {
        block_length = value;
    }
    if(value_path == "block-signature")
    {
        block_signature = value;
    }
    if(value_path == "block-version")
    {
        block_version = value;
    }
    if(value_path == "chassis-sid")
    {
        chassis_sid = value;
    }
    if(value_path == "clei")
    {
        clei = value;
    }
    if(value_path == "controller-family")
    {
        controller_family = value;
    }
    if(value_path == "controller-type")
    {
        controller_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dev-num1")
    {
        dev_num1 = value;
    }
    if(value_path == "dev-num2")
    {
        dev_num2 = value;
    }
    if(value_path == "dev-num3")
    {
        dev_num3 = value;
    }
    if(value_path == "dev-num4")
    {
        dev_num4 = value;
    }
    if(value_path == "dev-num5")
    {
        dev_num5 = value;
    }
    if(value_path == "dev-num6")
    {
        dev_num6 = value;
    }
    if(value_path == "dev-num7")
    {
        dev_num7 = value;
    }
    if(value_path == "eci")
    {
        eci = value;
    }
    if(value_path == "eeprom-size")
    {
        eeprom_size = value;
    }
    if(value_path == "engineer-use")
    {
        engineer_use = value;
    }
    if(value_path == "fru-major-type")
    {
        fru_major_type = value;
    }
    if(value_path == "fru-minor-type")
    {
        fru_minor_type = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "hwid")
    {
        hwid = value;
    }
    if(value_path == "idprom-format-rev")
    {
        idprom_format_rev = value;
    }
    if(value_path == "mac-add-blk-size1")
    {
        mac_add_blk_size1 = value;
    }
    if(value_path == "mac-add-blk-size2")
    {
        mac_add_blk_size2 = value;
    }
    if(value_path == "mac-add-blk-size3")
    {
        mac_add_blk_size3 = value;
    }
    if(value_path == "mac-add-blk-size4")
    {
        mac_add_blk_size4 = value;
    }
    if(value_path == "manu-test-data")
    {
        manu_test_data = value;
    }
    if(value_path == "mfg-bits")
    {
        mfg_bits = value;
    }
    if(value_path == "mfg-deviation")
    {
        mfg_deviation = value;
    }
    if(value_path == "oem-string")
    {
        oem_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
    if(value_path == "part-revision")
    {
        part_revision = value;
    }
    if(value_path == "pca-num")
    {
        pca_num = value;
    }
    if(value_path == "pcavid")
    {
        pcavid = value;
    }
    if(value_path == "pcb-serial-num")
    {
        pcb_serial_num = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "power-consumption")
    {
        power_consumption = value;
    }
    if(value_path == "power-supply-type")
    {
        power_supply_type = value;
    }
    if(value_path == "product-id")
    {
        product_id = value;
    }
    if(value_path == "rma-code")
    {
        rma_code = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "snmpoid")
    {
        snmpoid = value;
    }
    if(value_path == "top-assem-part-num")
    {
        top_assem_part_num = value;
    }
    if(value_path == "top-assem-vid")
    {
        top_assem_vid = value;
    }
    if(value_path == "udi-description")
    {
        udi_description = value;
    }
    if(value_path == "udi-name")
    {
        udi_name = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::Rma()
    :
    rma_history{YType::str, "rma-history"},
    rma_number{YType::str, "rma-number"},
    test_history{YType::str, "test-history"}
{
    yang_name = "rma"; yang_parent_name = "eeprom";
}

Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::~Rma()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::has_data() const
{
    return rma_history.is_set
	|| rma_number.is_set
	|| test_history.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::has_operation() const
{
    return is_set(operation)
	|| is_set(rma_history.operation)
	|| is_set(rma_number.operation)
	|| is_set(test_history.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rma";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rma' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rma_history.is_set || is_set(rma_history.operation)) leaf_name_data.push_back(rma_history.get_name_leafdata());
    if (rma_number.is_set || is_set(rma_number.operation)) leaf_name_data.push_back(rma_number.get_name_leafdata());
    if (test_history.is_set || is_set(test_history.operation)) leaf_name_data.push_back(test_history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Tsi1S::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rma-history")
    {
        rma_history = value;
    }
    if(value_path == "rma-number")
    {
        rma_number = value;
    }
    if(value_path == "test-history")
    {
        test_history = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Attributes()
    :
    module_done{YType::int32, "module-done"},
    node_id{YType::uint32, "node-id"},
    vm_done{YType::int32, "vm-done"},
    vm_node_id{YType::uint32, "vm-node-id"}
    	,
    env_sensor_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo>())
	,env_sensor_info_xml(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo>())
	,inv_asset_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag>())
	,inv_basic_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::InvBasicBag>())
	,inv_eeprom_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::InvEepromInfo>())
	,pwg_info(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo>())
	,threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold>())
{
    env_sensor_info->parent = this;

    env_sensor_info_xml->parent = this;

    fru_info->parent = this;

    inv_asset_bag->parent = this;

    inv_basic_bag->parent = this;

    inv_eeprom_info->parent = this;

    pwg_info->parent = this;

    threshold->parent = this;

    yang_name = "attributes"; yang_parent_name = "slot";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::~Attributes()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::has_data() const
{
    return module_done.is_set
	|| node_id.is_set
	|| vm_done.is_set
	|| vm_node_id.is_set
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_data())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_data())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_data())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_data())
	|| (pwg_info !=  nullptr && pwg_info->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::has_operation() const
{
    return is_set(operation)
	|| is_set(module_done.operation)
	|| is_set(node_id.operation)
	|| is_set(vm_done.operation)
	|| is_set(vm_node_id.operation)
	|| (env_sensor_info !=  nullptr && env_sensor_info->has_operation())
	|| (env_sensor_info_xml !=  nullptr && env_sensor_info_xml->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation())
	|| (inv_asset_bag !=  nullptr && inv_asset_bag->has_operation())
	|| (inv_basic_bag !=  nullptr && inv_basic_bag->has_operation())
	|| (inv_eeprom_info !=  nullptr && inv_eeprom_info->has_operation())
	|| (pwg_info !=  nullptr && pwg_info->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_done.is_set || is_set(module_done.operation)) leaf_name_data.push_back(module_done.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (vm_done.is_set || is_set(vm_done.operation)) leaf_name_data.push_back(vm_done.get_name_leafdata());
    if (vm_node_id.is_set || is_set(vm_node_id.operation)) leaf_name_data.push_back(vm_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-sensor-info")
    {
        if(env_sensor_info == nullptr)
        {
            env_sensor_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo>();
        }
        return env_sensor_info;
    }

    if(child_yang_name == "env-sensor-info-xml")
    {
        if(env_sensor_info_xml == nullptr)
        {
            env_sensor_info_xml = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml>();
        }
        return env_sensor_info_xml;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo>();
        }
        return fru_info;
    }

    if(child_yang_name == "inv-asset-bag")
    {
        if(inv_asset_bag == nullptr)
        {
            inv_asset_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag>();
        }
        return inv_asset_bag;
    }

    if(child_yang_name == "inv-basic-bag")
    {
        if(inv_basic_bag == nullptr)
        {
            inv_basic_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::InvBasicBag>();
        }
        return inv_basic_bag;
    }

    if(child_yang_name == "inv-eeprom-info")
    {
        if(inv_eeprom_info == nullptr)
        {
            inv_eeprom_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::InvEepromInfo>();
        }
        return inv_eeprom_info;
    }

    if(child_yang_name == "pwg-info")
    {
        if(pwg_info == nullptr)
        {
            pwg_info = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo>();
        }
        return pwg_info;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(env_sensor_info != nullptr)
    {
        children["env-sensor-info"] = env_sensor_info;
    }

    if(env_sensor_info_xml != nullptr)
    {
        children["env-sensor-info-xml"] = env_sensor_info_xml;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    if(inv_asset_bag != nullptr)
    {
        children["inv-asset-bag"] = inv_asset_bag;
    }

    if(inv_basic_bag != nullptr)
    {
        children["inv-basic-bag"] = inv_basic_bag;
    }

    if(inv_eeprom_info != nullptr)
    {
        children["inv-eeprom-info"] = inv_eeprom_info;
    }

    if(pwg_info != nullptr)
    {
        children["pwg-info"] = pwg_info;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module-done")
    {
        module_done = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "vm-done")
    {
        vm_done = value;
    }
    if(value_path == "vm-node-id")
    {
        vm_node_id = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::EnvSensorInfo()
    :
    age_time_stamp{YType::uint32, "age-time-stamp"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    device_description{YType::str, "device-description"},
    device_id{YType::uint32, "device-id"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    precision{YType::uint32, "precision"},
    scale{YType::uint32, "scale"},
    status{YType::uint32, "status"},
    units{YType::str, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::uint32, "value"}
{
    yang_name = "env-sensor-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::~EnvSensorInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::has_data() const
{
    return age_time_stamp.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| device_description.is_set
	|| device_id.is_set
	|| field_validity_bitmap.is_set
	|| precision.is_set
	|| scale.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(age_time_stamp.operation)
	|| is_set(alarm_type.operation)
	|| is_set(data_type.operation)
	|| is_set(device_description.operation)
	|| is_set(device_id.operation)
	|| is_set(field_validity_bitmap.operation)
	|| is_set(precision.operation)
	|| is_set(scale.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time_stamp.is_set || is_set(age_time_stamp.operation)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.operation)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.operation)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.operation)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (scale.is_set || is_set(scale.operation)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "device-description")
    {
        device_description = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "scale")
    {
        scale = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::PwgInfo()
    :
    power_group_available_current{YType::int32, "power-group-available-current"},
    power_group_drawn_current{YType::int32, "power-group-drawn-current"},
    power_group_power_units{YType::str, "power-group-power-units"},
    power_group_redundancy_mode{YType::int32, "power-group-redundancy-mode"}
{
    yang_name = "pwg-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::~PwgInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::has_data() const
{
    return power_group_available_current.is_set
	|| power_group_drawn_current.is_set
	|| power_group_power_units.is_set
	|| power_group_redundancy_mode.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(power_group_available_current.operation)
	|| is_set(power_group_drawn_current.operation)
	|| is_set(power_group_power_units.operation)
	|| is_set(power_group_redundancy_mode.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwg-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwgInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_group_available_current.is_set || is_set(power_group_available_current.operation)) leaf_name_data.push_back(power_group_available_current.get_name_leafdata());
    if (power_group_drawn_current.is_set || is_set(power_group_drawn_current.operation)) leaf_name_data.push_back(power_group_drawn_current.get_name_leafdata());
    if (power_group_power_units.is_set || is_set(power_group_power_units.operation)) leaf_name_data.push_back(power_group_power_units.get_name_leafdata());
    if (power_group_redundancy_mode.is_set || is_set(power_group_redundancy_mode.operation)) leaf_name_data.push_back(power_group_redundancy_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::PwgInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "power-group-available-current")
    {
        power_group_available_current = value;
    }
    if(value_path == "power-group-drawn-current")
    {
        power_group_drawn_current = value;
    }
    if(value_path == "power-group-power-units")
    {
        power_group_power_units = value;
    }
    if(value_path == "power-group-redundancy-mode")
    {
        power_group_redundancy_mode = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::EnvSensorInfoXml()
    :
    data_type{YType::enumeration, "data-type"},
    description{YType::str, "description"},
    status{YType::enumeration, "status"},
    units{YType::enumeration, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::str, "value"}
    	,
    threshold(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold>())
{
    threshold->parent = this;

    yang_name = "env-sensor-info-xml"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::~EnvSensorInfoXml()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::has_data() const
{
    return data_type.is_set
	|| description.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(description.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-sensor-info-xml";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnvSensorInfoXml' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "env-sensor-info-xml";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::has_data() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::has_operation() const
{
    for (std::size_t index=0; index<threshold_array.size(); index++)
    {
        if(threshold_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-array")
    {
        for(auto const & c : threshold_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray>();
        c->parent = this;
        threshold_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::ThresholdArray()
    :
    threshold_name{YType::str, "threshold-name"},
    threshold_relation{YType::enumeration, "threshold-relation"},
    threshold_severity{YType::enumeration, "threshold-severity"},
    threshold_value{YType::int32, "threshold-value"}
{
    yang_name = "threshold-array"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::~ThresholdArray()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_data() const
{
    return threshold_name.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_name.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-array";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdArray' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_name.is_set || is_set(threshold_name.operation)) leaf_name_data.push_back(threshold_name.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-name")
    {
        threshold_name = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::InvAssetBag()
    :
    manufacturer_assembly_number{YType::str, "manufacturer-assembly-number"},
    manufacturer_assembly_revision{YType::str, "manufacturer-assembly-revision"},
    manufacturer_common_language_equipment_identifier{YType::str, "manufacturer-common-language-equipment-identifier"},
    manufacturer_firmware_identifier{YType::str, "manufacturer-firmware-identifier"},
    manufacturer_software_identifier{YType::str, "manufacturer-software-identifier"},
    original_equipment_manufacturer_string{YType::str, "original-equipment-manufacturer-string"},
    part_number{YType::str, "part-number"}
{
    yang_name = "inv-asset-bag"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::~InvAssetBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::has_data() const
{
    return manufacturer_assembly_number.is_set
	|| manufacturer_assembly_revision.is_set
	|| manufacturer_common_language_equipment_identifier.is_set
	|| manufacturer_firmware_identifier.is_set
	|| manufacturer_software_identifier.is_set
	|| original_equipment_manufacturer_string.is_set
	|| part_number.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::has_operation() const
{
    return is_set(operation)
	|| is_set(manufacturer_assembly_number.operation)
	|| is_set(manufacturer_assembly_revision.operation)
	|| is_set(manufacturer_common_language_equipment_identifier.operation)
	|| is_set(manufacturer_firmware_identifier.operation)
	|| is_set(manufacturer_software_identifier.operation)
	|| is_set(original_equipment_manufacturer_string.operation)
	|| is_set(part_number.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inv-asset-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvAssetBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manufacturer_assembly_number.is_set || is_set(manufacturer_assembly_number.operation)) leaf_name_data.push_back(manufacturer_assembly_number.get_name_leafdata());
    if (manufacturer_assembly_revision.is_set || is_set(manufacturer_assembly_revision.operation)) leaf_name_data.push_back(manufacturer_assembly_revision.get_name_leafdata());
    if (manufacturer_common_language_equipment_identifier.is_set || is_set(manufacturer_common_language_equipment_identifier.operation)) leaf_name_data.push_back(manufacturer_common_language_equipment_identifier.get_name_leafdata());
    if (manufacturer_firmware_identifier.is_set || is_set(manufacturer_firmware_identifier.operation)) leaf_name_data.push_back(manufacturer_firmware_identifier.get_name_leafdata());
    if (manufacturer_software_identifier.is_set || is_set(manufacturer_software_identifier.operation)) leaf_name_data.push_back(manufacturer_software_identifier.get_name_leafdata());
    if (original_equipment_manufacturer_string.is_set || is_set(original_equipment_manufacturer_string.operation)) leaf_name_data.push_back(original_equipment_manufacturer_string.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.operation)) leaf_name_data.push_back(part_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::InvAssetBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "manufacturer-assembly-number")
    {
        manufacturer_assembly_number = value;
    }
    if(value_path == "manufacturer-assembly-revision")
    {
        manufacturer_assembly_revision = value;
    }
    if(value_path == "manufacturer-common-language-equipment-identifier")
    {
        manufacturer_common_language_equipment_identifier = value;
    }
    if(value_path == "manufacturer-firmware-identifier")
    {
        manufacturer_firmware_identifier = value;
    }
    if(value_path == "manufacturer-software-identifier")
    {
        manufacturer_software_identifier = value;
    }
    if(value_path == "original-equipment-manufacturer-string")
    {
        original_equipment_manufacturer_string = value;
    }
    if(value_path == "part-number")
    {
        part_number = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::Threshold()
    :
    critical_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi>())
	,critical_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo>())
	,major_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi>())
	,major_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo>())
	,minor_hi(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi>())
	,minor_lo(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo>())
{
    critical_hi->parent = this;

    critical_lo->parent = this;

    major_hi->parent = this;

    major_lo->parent = this;

    minor_hi->parent = this;

    minor_lo->parent = this;

    yang_name = "threshold"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::~Threshold()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::has_data() const
{
    return (critical_hi !=  nullptr && critical_hi->has_data())
	|| (critical_lo !=  nullptr && critical_lo->has_data())
	|| (major_hi !=  nullptr && major_hi->has_data())
	|| (major_lo !=  nullptr && major_lo->has_data())
	|| (minor_hi !=  nullptr && minor_hi->has_data())
	|| (minor_lo !=  nullptr && minor_lo->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::has_operation() const
{
    return is_set(operation)
	|| (critical_hi !=  nullptr && critical_hi->has_operation())
	|| (critical_lo !=  nullptr && critical_lo->has_operation())
	|| (major_hi !=  nullptr && major_hi->has_operation())
	|| (major_lo !=  nullptr && major_lo->has_operation())
	|| (minor_hi !=  nullptr && minor_hi->has_operation())
	|| (minor_lo !=  nullptr && minor_lo->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-hi")
    {
        if(critical_hi == nullptr)
        {
            critical_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi>();
        }
        return critical_hi;
    }

    if(child_yang_name == "critical-lo")
    {
        if(critical_lo == nullptr)
        {
            critical_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo>();
        }
        return critical_lo;
    }

    if(child_yang_name == "major-hi")
    {
        if(major_hi == nullptr)
        {
            major_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi>();
        }
        return major_hi;
    }

    if(child_yang_name == "major-lo")
    {
        if(major_lo == nullptr)
        {
            major_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo>();
        }
        return major_lo;
    }

    if(child_yang_name == "minor-hi")
    {
        if(minor_hi == nullptr)
        {
            minor_hi = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi>();
        }
        return minor_hi;
    }

    if(child_yang_name == "minor-lo")
    {
        if(minor_lo == nullptr)
        {
            minor_lo = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo>();
        }
        return minor_lo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_hi != nullptr)
    {
        children["critical-hi"] = critical_hi;
    }

    if(critical_lo != nullptr)
    {
        children["critical-lo"] = critical_lo;
    }

    if(major_hi != nullptr)
    {
        children["major-hi"] = major_hi;
    }

    if(major_lo != nullptr)
    {
        children["major-lo"] = major_lo;
    }

    if(minor_hi != nullptr)
    {
        children["minor-hi"] = minor_hi;
    }

    if(minor_lo != nullptr)
    {
        children["minor-lo"] = minor_lo;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::MajorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::~MajorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::CriticalHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::~CriticalHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::MinorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::~MinorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::MajorHi()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "major-hi"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::~MajorHi()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major-hi";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MajorHi' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "major-hi";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MajorHi::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::CriticalLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "critical-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::~CriticalLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "critical-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::CriticalLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::MinorLo()
    :
    thresh_bag(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag>())
{
    thresh_bag->parent = this;

    yang_name = "minor-lo"; yang_parent_name = "threshold";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::~MinorLo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::has_data() const
{
    return (thresh_bag !=  nullptr && thresh_bag->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::has_operation() const
{
    return is_set(operation)
	|| (thresh_bag !=  nullptr && thresh_bag->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minor-lo";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinorLo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresh-bag")
    {
        if(thresh_bag == nullptr)
        {
            thresh_bag = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag>();
        }
        return thresh_bag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresh_bag != nullptr)
    {
        children["thresh-bag"] = thresh_bag;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::ThreshBag()
    :
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "thresh-bag"; yang_parent_name = "minor-lo";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::~ThreshBag()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::has_data() const
{
    return threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresh-bag";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreshBag' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::Threshold::MinorLo::ThreshBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "attributes";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Fantray::Slot::Attributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}


}
}

