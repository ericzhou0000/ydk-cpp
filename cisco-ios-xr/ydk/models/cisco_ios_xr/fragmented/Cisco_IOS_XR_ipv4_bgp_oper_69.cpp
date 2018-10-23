
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_69.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Notification()
    :
    tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx>())
    , rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx>())
{
    tx->parent = this;
    rx->parent = this;

    yang_name = "notification"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::~Notification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::has_data() const
{
    if (is_presence_container) return true;
    return (tx !=  nullptr && tx->has_data())
	|| (rx !=  nullptr && rx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::has_operation() const
{
    return is_set(yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (rx !=  nullptr && rx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx>();
        }
        return rx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    if(rx != nullptr)
    {
        _children["rx"] = rx;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "rx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::Tx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::Rx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Update()
    :
    tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>())
    , rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>())
{
    tx->parent = this;
    rx->parent = this;

    yang_name = "update"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::~Update()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::has_data() const
{
    if (is_presence_container) return true;
    return (tx !=  nullptr && tx->has_data())
	|| (rx !=  nullptr && rx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::has_operation() const
{
    return is_set(yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (rx !=  nullptr && rx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>();
        }
        return rx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    if(rx != nullptr)
    {
        _children["rx"] = rx;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "rx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::Tx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::Rx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Keepalive()
    :
    tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx>())
    , rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx>())
{
    tx->parent = this;
    rx->parent = this;

    yang_name = "keepalive"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::~Keepalive()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return (tx !=  nullptr && tx->has_data())
	|| (rx !=  nullptr && rx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (rx !=  nullptr && rx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx>();
        }
        return rx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    if(rx != nullptr)
    {
        _children["rx"] = rx;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "rx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::Tx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "keepalive"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::Rx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "keepalive"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::RouteRefresh()
    :
    tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>())
    , rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>())
{
    tx->parent = this;
    rx->parent = this;

    yang_name = "route-refresh"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::~RouteRefresh()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_data() const
{
    if (is_presence_container) return true;
    return (tx !=  nullptr && tx->has_data())
	|| (rx !=  nullptr && rx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (rx !=  nullptr && rx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>();
        }
        return rx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    if(rx != nullptr)
    {
        _children["rx"] = rx;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "rx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::Tx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "route-refresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::Rx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "route-refresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Total()
    :
    tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>())
    , rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>())
{
    tx->parent = this;
    rx->parent = this;

    yang_name = "total"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::~Total()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::has_data() const
{
    if (is_presence_container) return true;
    return (tx !=  nullptr && tx->has_data())
	|| (rx !=  nullptr && rx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::has_operation() const
{
    return is_set(yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (rx !=  nullptr && rx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>();
        }
        return rx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    if(rx != nullptr)
    {
        _children["rx"] = rx;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "rx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::Tx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::Rx()
    :
    count{YType::uint32, "count"}
        ,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_time_spec != nullptr)
    {
        _children["last-time-spec"] = last_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::LastTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::TcpInitSyncTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "tcp-init-sync-time-spec"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::~TcpInitSyncTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::TcpInitSyncPhaseTwoTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "tcp-init-sync-phase-two-time-spec"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::~TcpInitSyncPhaseTwoTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-phase-two-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::TcpInitSyncDoneTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "tcp-init-sync-done-time-spec"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::~TcpInitSyncDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-done-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenance()
    :
    gshut_exists{YType::boolean, "gshut-exists"},
    gshut_local_active{YType::boolean, "gshut-local-active"},
    gshut_active{YType::boolean, "gshut-active"},
    gshut_locpref_set{YType::boolean, "gshut-locpref-set"},
    gshut_locpref{YType::uint32, "gshut-locpref"},
    gshut_prepends{YType::uint8, "gshut-prepends"}
{

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::has_data() const
{
    if (is_presence_container) return true;
    return gshut_exists.is_set
	|| gshut_local_active.is_set
	|| gshut_active.is_set
	|| gshut_locpref_set.is_set
	|| gshut_locpref.is_set
	|| gshut_prepends.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_exists.yfilter)
	|| ydk::is_set(gshut_local_active.yfilter)
	|| ydk::is_set(gshut_active.yfilter)
	|| ydk::is_set(gshut_locpref_set.yfilter)
	|| ydk::is_set(gshut_locpref.yfilter)
	|| ydk::is_set(gshut_prepends.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_exists.is_set || is_set(gshut_exists.yfilter)) leaf_name_data.push_back(gshut_exists.get_name_leafdata());
    if (gshut_local_active.is_set || is_set(gshut_local_active.yfilter)) leaf_name_data.push_back(gshut_local_active.get_name_leafdata());
    if (gshut_active.is_set || is_set(gshut_active.yfilter)) leaf_name_data.push_back(gshut_active.get_name_leafdata());
    if (gshut_locpref_set.is_set || is_set(gshut_locpref_set.yfilter)) leaf_name_data.push_back(gshut_locpref_set.get_name_leafdata());
    if (gshut_locpref.is_set || is_set(gshut_locpref.yfilter)) leaf_name_data.push_back(gshut_locpref.get_name_leafdata());
    if (gshut_prepends.is_set || is_set(gshut_prepends.yfilter)) leaf_name_data.push_back(gshut_prepends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-exists")
    {
        gshut_exists = value;
        gshut_exists.value_namespace = name_space;
        gshut_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active = value;
        gshut_local_active.value_namespace = name_space;
        gshut_local_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-active")
    {
        gshut_active = value;
        gshut_active.value_namespace = name_space;
        gshut_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set = value;
        gshut_locpref_set.value_namespace = name_space;
        gshut_locpref_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref = value;
        gshut_locpref.value_namespace = name_space;
        gshut_locpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends = value;
        gshut_prepends.value_namespace = name_space;
        gshut_prepends.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-exists")
    {
        gshut_exists.yfilter = yfilter;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active.yfilter = yfilter;
    }
    if(value_path == "gshut-active")
    {
        gshut_active.yfilter = yfilter;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set.yfilter = yfilter;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-exists" || name == "gshut-local-active" || name == "gshut-active" || name == "gshut-locpref-set" || name == "gshut-locpref" || name == "gshut-prepends")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::AfData()
    :
    af_name{YType::enumeration, "af-name"},
    is_neighbor_route_reflector_client{YType::boolean, "is-neighbor-route-reflector-client"},
    is_legacy_pe_rt{YType::boolean, "is-legacy-pe-rt"},
    is_neighbor_af_capable{YType::boolean, "is-neighbor-af-capable"},
    is_soft_reconfiguration_inbound_allowed{YType::boolean, "is-soft-reconfiguration-inbound-allowed"},
    is_use_soft_reconfiguration_always_on{YType::boolean, "is-use-soft-reconfiguration-always-on"},
    remove_private_as_from_updates{YType::boolean, "remove-private-as-from-updates"},
    remove_private_as_entire_aspath_from_updates{YType::boolean, "remove-private-as-entire-aspath-from-updates"},
    remove_private_as_from_inbound_updates{YType::boolean, "remove-private-as-from-inbound-updates"},
    remove_private_as_entire_aspath_from_inbound_updates{YType::boolean, "remove-private-as-entire-aspath-from-inbound-updates"},
    flowspec_validation_d_isable{YType::boolean, "flowspec-validation-d-isable"},
    flowspec_redirect_validation_d_isable{YType::boolean, "flowspec-redirect-validation-d-isable"},
    orr_group_name{YType::str, "orr-group-name"},
    orr_group_index{YType::uint32, "orr-group-index"},
    is_orr_root_address_configured{YType::boolean, "is-orr-root-address-configured"},
    advertise_afi{YType::boolean, "advertise-afi"},
    advertise_afi_reorg{YType::boolean, "advertise-afi-reorg"},
    advertise_afi_disable{YType::boolean, "advertise-afi-disable"},
    encapsulation_type{YType::uint32, "encapsulation-type"},
    advertise_rt_type{YType::uint8, "advertise-rt-type"},
    advertise_afi_def_vrf_imp_disable{YType::boolean, "advertise-afi-def-vrf-imp-disable"},
    advertise_evpnv4_afi_def_vrf_imp_disable{YType::boolean, "advertise-evpnv4-afi-def-vrf-imp-disable"},
    advertise_evpnv6_afi_def_vrf_imp_disable{YType::boolean, "advertise-evpnv6-afi-def-vrf-imp-disable"},
    advertise_afi_vrf_re_imp_disable{YType::boolean, "advertise-afi-vrf-re-imp-disable"},
    advertise_evpnv4_afi_vrf_re_imp_disable{YType::boolean, "advertise-evpnv4-afi-vrf-re-imp-disable"},
    advertise_evpnv6_afi_vrf_re_imp_disable{YType::boolean, "advertise-evpnv6-afi-vrf-re-imp-disable"},
    advertise_afi_eo_r_ready{YType::boolean, "advertise-afi-eo-r-ready"},
    always_use_next_hop_local{YType::boolean, "always-use-next-hop-local"},
    sent_community_to_neighbor{YType::boolean, "sent-community-to-neighbor"},
    sent_gshut_community_to_neighbor{YType::boolean, "sent-gshut-community-to-neighbor"},
    sent_extended_community_to_neighbor{YType::boolean, "sent-extended-community-to-neighbor"},
    neighbor_default_originate{YType::boolean, "neighbor-default-originate"},
    is_orf_sent{YType::boolean, "is-orf-sent"},
    is_update_deferred{YType::boolean, "is-update-deferred"},
    is_orf_send_scheduled{YType::boolean, "is-orf-send-scheduled"},
    update_group_number{YType::uint32, "update-group-number"},
    filter_group_index{YType::uint32, "filter-group-index"},
    is_update_throttled{YType::boolean, "is-update-throttled"},
    is_update_leaving{YType::boolean, "is-update-leaving"},
    vpn_update_gen_enabled{YType::boolean, "vpn-update-gen-enabled"},
    vpn_update_gen_trigger_enabled{YType::boolean, "vpn-update-gen-trigger-enabled"},
    is_addpath_send_operational{YType::boolean, "is-addpath-send-operational"},
    is_addpath_receive_operational{YType::boolean, "is-addpath-receive-operational"},
    neighbor_version{YType::uint32, "neighbor-version"},
    weight{YType::uint32, "weight"},
    max_prefix_limit{YType::uint32, "max-prefix-limit"},
    use_max_prefix_warning_only{YType::boolean, "use-max-prefix-warning-only"},
    max_prefix_discard_extra_paths{YType::boolean, "max-prefix-discard-extra-paths"},
    max_prefix_exceed_discard_paths{YType::boolean, "max-prefix-exceed-discard-paths"},
    max_prefix_threshold_percent{YType::uint8, "max-prefix-threshold-percent"},
    max_prefix_restart_time{YType::uint16, "max-prefix-restart-time"},
    prefixes_accepted{YType::uint32, "prefixes-accepted"},
    prefixes_synced{YType::uint32, "prefixes-synced"},
    prefixes_withdrawn_not_found{YType::uint32, "prefixes-withdrawn-not-found"},
    prefixes_denied{YType::uint32, "prefixes-denied"},
    prefixes_denied_no_policy{YType::uint32, "prefixes-denied-no-policy"},
    prefixes_denied_rt_permit{YType::uint32, "prefixes-denied-rt-permit"},
    prefixes_denied_orf_policy{YType::uint32, "prefixes-denied-orf-policy"},
    prefixes_denied_policy{YType::uint32, "prefixes-denied-policy"},
    number_of_bestpaths{YType::uint32, "number-of-bestpaths"},
    number_of_best_externalpaths{YType::uint32, "number-of-best-externalpaths"},
    prefixes_advertised{YType::uint32, "prefixes-advertised"},
    prefixes_be_advertised{YType::uint32, "prefixes-be-advertised"},
    prefixes_suppressed{YType::uint32, "prefixes-suppressed"},
    prefixes_withdrawn{YType::uint32, "prefixes-withdrawn"},
    is_peer_orf_capable{YType::boolean, "is-peer-orf-capable"},
    is_advertised_orf_send{YType::boolean, "is-advertised-orf-send"},
    is_received_orf_send_capable{YType::boolean, "is-received-orf-send-capable"},
    is_advertised_orf_receive{YType::boolean, "is-advertised-orf-receive"},
    is_received_orf_receive_capable{YType::boolean, "is-received-orf-receive-capable"},
    is_advertised_graceful_restart{YType::boolean, "is-advertised-graceful-restart"},
    is_graceful_restart_state_flag{YType::boolean, "is-graceful-restart-state-flag"},
    is_received_graceful_restart_capable{YType::boolean, "is-received-graceful-restart-capable"},
    is_add_path_send_capability_advertised{YType::boolean, "is-add-path-send-capability-advertised"},
    is_add_path_send_capability_received{YType::boolean, "is-add-path-send-capability-received"},
    is_add_path_receive_capability_advertised{YType::boolean, "is-add-path-receive-capability-advertised"},
    is_add_path_receive_capability_received{YType::boolean, "is-add-path-receive-capability-received"},
    is_ext_nh_encoding_capability_received{YType::boolean, "is-ext-nh-encoding-capability-received"},
    is_ext_nh_encoding_capability_sent{YType::boolean, "is-ext-nh-encoding-capability-sent"},
    restart_time{YType::uint32, "restart-time"},
    local_restart_time{YType::uint32, "local-restart-time"},
    stale_path_timeout{YType::uint32, "stale-path-timeout"},
    rib_purge_timeout_value{YType::uint32, "rib-purge-timeout-value"},
    neighbor_preserved_forwarding_state{YType::boolean, "neighbor-preserved-forwarding-state"},
    long_lived_graceful_restart_stale_time_configured{YType::boolean, "long-lived-graceful-restart-stale-time-configured"},
    long_lived_graceful_restart_stale_time_sent{YType::uint32, "long-lived-graceful-restart-stale-time-sent"},
    long_lived_graceful_restart_stale_time_accept{YType::uint32, "long-lived-graceful-restart-stale-time-accept"},
    long_lived_graceful_restart_capability_received{YType::boolean, "long-lived-graceful-restart-capability-received"},
    long_lived_graceful_restart_stale_time_received{YType::uint32, "long-lived-graceful-restart-stale-time-received"},
    neighbor_preserved_long_lived_forwarding_state{YType::boolean, "neighbor-preserved-long-lived-forwarding-state"},
    neighbor_long_lived_graceful_restart_capable{YType::boolean, "neighbor-long-lived-graceful-restart-capable"},
    neighbor_long_lived_graceful_restart_time_remaining{YType::uint32, "neighbor-long-lived-graceful-restart-time-remaining"},
    route_refreshes_received{YType::uint32, "route-refreshes-received"},
    route_refreshes_sent{YType::uint32, "route-refreshes-sent"},
    refresh_target_version{YType::uint32, "refresh-target-version"},
    refresh_version{YType::uint32, "refresh-version"},
    refresh_acked_version{YType::uint32, "refresh-acked-version"},
    is_prefix_orf_present{YType::boolean, "is-prefix-orf-present"},
    orf_entries_received{YType::uint32, "orf-entries-received"},
    is_default_originate_sent{YType::boolean, "is-default-originate-sent"},
    route_policy_prefix_orf{YType::str, "route-policy-prefix-orf"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_policy_default_originate{YType::str, "route-policy-default-originate"},
    is_neighbor_ebgp_without_inbound_policy{YType::boolean, "is-neighbor-ebgp-without-inbound-policy"},
    is_neighbor_ebgp_without_outbound_policy{YType::boolean, "is-neighbor-ebgp-without-outbound-policy"},
    is_as_override_set{YType::boolean, "is-as-override-set"},
    is_allow_as_in_set{YType::boolean, "is-allow-as-in-set"},
    allow_as_in_count{YType::uint32, "allow-as-in-count"},
    address_family_long_lived_time{YType::uint32, "address-family-long-lived-time"},
    eo_r_received_in_read_only{YType::boolean, "eo-r-received-in-read-only"},
    acked_version{YType::uint32, "acked-version"},
    synced_acked_version{YType::uint32, "synced-acked-version"},
    outstanding_version{YType::uint32, "outstanding-version"},
    outstanding_refresh_version{YType::uint32, "outstanding-refresh-version"},
    outstanding_version_max{YType::uint32, "outstanding-version-max"},
    is_aigp_set{YType::boolean, "is-aigp-set"},
    is_rt_present{YType::boolean, "is-rt-present"},
    is_rt_present_standby{YType::boolean, "is-rt-present-standby"},
    accept_own_enabled{YType::boolean, "accept-own-enabled"},
    selective_multipath_eligible{YType::boolean, "selective-multipath-eligible"},
    afrpki_disable{YType::boolean, "afrpki-disable"},
    afrpki_use_validity{YType::boolean, "afrpki-use-validity"},
    afrpki_allow_invalid{YType::boolean, "afrpki-allow-invalid"},
    afrpki_signal_ibgp{YType::boolean, "afrpki-signal-ibgp"},
    is_advertise_permanent_network{YType::boolean, "is-advertise-permanent-network"},
    is_send_mcast_attr{YType::boolean, "is-send-mcast-attr"},
    import_stitching{YType::boolean, "import-stitching"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    advertise_v4_flags{YType::uint32, "advertise-v4-flags"},
    advertise_v6_flags{YType::uint32, "advertise-v6-flags"},
    advertise_local_labeled_route_unicast{YType::boolean, "advertise-local-labeled-route-unicast"},
    prefixes_denied_non_cumulative{YType::uint32, "prefixes-denied-non-cumulative"},
    enable_label_stack{YType::boolean, "enable-label-stack"}
        ,
    neighbor_af_performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics>())
    , extended_community(this, {})
    , extended_community_standby(this, {})
{
    neighbor_af_performance_statistics->parent = this;

    yang_name = "af-data"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::~AfData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.len(); index++)
    {
        if(extended_community_standby[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| is_neighbor_route_reflector_client.is_set
	|| is_legacy_pe_rt.is_set
	|| is_neighbor_af_capable.is_set
	|| is_soft_reconfiguration_inbound_allowed.is_set
	|| is_use_soft_reconfiguration_always_on.is_set
	|| remove_private_as_from_updates.is_set
	|| remove_private_as_entire_aspath_from_updates.is_set
	|| remove_private_as_from_inbound_updates.is_set
	|| remove_private_as_entire_aspath_from_inbound_updates.is_set
	|| flowspec_validation_d_isable.is_set
	|| flowspec_redirect_validation_d_isable.is_set
	|| orr_group_name.is_set
	|| orr_group_index.is_set
	|| is_orr_root_address_configured.is_set
	|| advertise_afi.is_set
	|| advertise_afi_reorg.is_set
	|| advertise_afi_disable.is_set
	|| encapsulation_type.is_set
	|| advertise_rt_type.is_set
	|| advertise_afi_def_vrf_imp_disable.is_set
	|| advertise_evpnv4_afi_def_vrf_imp_disable.is_set
	|| advertise_evpnv6_afi_def_vrf_imp_disable.is_set
	|| advertise_afi_vrf_re_imp_disable.is_set
	|| advertise_evpnv4_afi_vrf_re_imp_disable.is_set
	|| advertise_evpnv6_afi_vrf_re_imp_disable.is_set
	|| advertise_afi_eo_r_ready.is_set
	|| always_use_next_hop_local.is_set
	|| sent_community_to_neighbor.is_set
	|| sent_gshut_community_to_neighbor.is_set
	|| sent_extended_community_to_neighbor.is_set
	|| neighbor_default_originate.is_set
	|| is_orf_sent.is_set
	|| is_update_deferred.is_set
	|| is_orf_send_scheduled.is_set
	|| update_group_number.is_set
	|| filter_group_index.is_set
	|| is_update_throttled.is_set
	|| is_update_leaving.is_set
	|| vpn_update_gen_enabled.is_set
	|| vpn_update_gen_trigger_enabled.is_set
	|| is_addpath_send_operational.is_set
	|| is_addpath_receive_operational.is_set
	|| neighbor_version.is_set
	|| weight.is_set
	|| max_prefix_limit.is_set
	|| use_max_prefix_warning_only.is_set
	|| max_prefix_discard_extra_paths.is_set
	|| max_prefix_exceed_discard_paths.is_set
	|| max_prefix_threshold_percent.is_set
	|| max_prefix_restart_time.is_set
	|| prefixes_accepted.is_set
	|| prefixes_synced.is_set
	|| prefixes_withdrawn_not_found.is_set
	|| prefixes_denied.is_set
	|| prefixes_denied_no_policy.is_set
	|| prefixes_denied_rt_permit.is_set
	|| prefixes_denied_orf_policy.is_set
	|| prefixes_denied_policy.is_set
	|| number_of_bestpaths.is_set
	|| number_of_best_externalpaths.is_set
	|| prefixes_advertised.is_set
	|| prefixes_be_advertised.is_set
	|| prefixes_suppressed.is_set
	|| prefixes_withdrawn.is_set
	|| is_peer_orf_capable.is_set
	|| is_advertised_orf_send.is_set
	|| is_received_orf_send_capable.is_set
	|| is_advertised_orf_receive.is_set
	|| is_received_orf_receive_capable.is_set
	|| is_advertised_graceful_restart.is_set
	|| is_graceful_restart_state_flag.is_set
	|| is_received_graceful_restart_capable.is_set
	|| is_add_path_send_capability_advertised.is_set
	|| is_add_path_send_capability_received.is_set
	|| is_add_path_receive_capability_advertised.is_set
	|| is_add_path_receive_capability_received.is_set
	|| is_ext_nh_encoding_capability_received.is_set
	|| is_ext_nh_encoding_capability_sent.is_set
	|| restart_time.is_set
	|| local_restart_time.is_set
	|| stale_path_timeout.is_set
	|| rib_purge_timeout_value.is_set
	|| neighbor_preserved_forwarding_state.is_set
	|| long_lived_graceful_restart_stale_time_configured.is_set
	|| long_lived_graceful_restart_stale_time_sent.is_set
	|| long_lived_graceful_restart_stale_time_accept.is_set
	|| long_lived_graceful_restart_capability_received.is_set
	|| long_lived_graceful_restart_stale_time_received.is_set
	|| neighbor_preserved_long_lived_forwarding_state.is_set
	|| neighbor_long_lived_graceful_restart_capable.is_set
	|| neighbor_long_lived_graceful_restart_time_remaining.is_set
	|| route_refreshes_received.is_set
	|| route_refreshes_sent.is_set
	|| refresh_target_version.is_set
	|| refresh_version.is_set
	|| refresh_acked_version.is_set
	|| is_prefix_orf_present.is_set
	|| orf_entries_received.is_set
	|| is_default_originate_sent.is_set
	|| route_policy_prefix_orf.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_policy_default_originate.is_set
	|| is_neighbor_ebgp_without_inbound_policy.is_set
	|| is_neighbor_ebgp_without_outbound_policy.is_set
	|| is_as_override_set.is_set
	|| is_allow_as_in_set.is_set
	|| allow_as_in_count.is_set
	|| address_family_long_lived_time.is_set
	|| eo_r_received_in_read_only.is_set
	|| acked_version.is_set
	|| synced_acked_version.is_set
	|| outstanding_version.is_set
	|| outstanding_refresh_version.is_set
	|| outstanding_version_max.is_set
	|| is_aigp_set.is_set
	|| is_rt_present.is_set
	|| is_rt_present_standby.is_set
	|| accept_own_enabled.is_set
	|| selective_multipath_eligible.is_set
	|| afrpki_disable.is_set
	|| afrpki_use_validity.is_set
	|| afrpki_allow_invalid.is_set
	|| afrpki_signal_ibgp.is_set
	|| is_advertise_permanent_network.is_set
	|| is_send_mcast_attr.is_set
	|| import_stitching.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| advertise_v4_flags.is_set
	|| advertise_v6_flags.is_set
	|| advertise_local_labeled_route_unicast.is_set
	|| prefixes_denied_non_cumulative.is_set
	|| enable_label_stack.is_set
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::has_operation() const
{
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.len(); index++)
    {
        if(extended_community_standby[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(is_neighbor_route_reflector_client.yfilter)
	|| ydk::is_set(is_legacy_pe_rt.yfilter)
	|| ydk::is_set(is_neighbor_af_capable.yfilter)
	|| ydk::is_set(is_soft_reconfiguration_inbound_allowed.yfilter)
	|| ydk::is_set(is_use_soft_reconfiguration_always_on.yfilter)
	|| ydk::is_set(remove_private_as_from_updates.yfilter)
	|| ydk::is_set(remove_private_as_entire_aspath_from_updates.yfilter)
	|| ydk::is_set(remove_private_as_from_inbound_updates.yfilter)
	|| ydk::is_set(remove_private_as_entire_aspath_from_inbound_updates.yfilter)
	|| ydk::is_set(flowspec_validation_d_isable.yfilter)
	|| ydk::is_set(flowspec_redirect_validation_d_isable.yfilter)
	|| ydk::is_set(orr_group_name.yfilter)
	|| ydk::is_set(orr_group_index.yfilter)
	|| ydk::is_set(is_orr_root_address_configured.yfilter)
	|| ydk::is_set(advertise_afi.yfilter)
	|| ydk::is_set(advertise_afi_reorg.yfilter)
	|| ydk::is_set(advertise_afi_disable.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(advertise_rt_type.yfilter)
	|| ydk::is_set(advertise_afi_def_vrf_imp_disable.yfilter)
	|| ydk::is_set(advertise_evpnv4_afi_def_vrf_imp_disable.yfilter)
	|| ydk::is_set(advertise_evpnv6_afi_def_vrf_imp_disable.yfilter)
	|| ydk::is_set(advertise_afi_vrf_re_imp_disable.yfilter)
	|| ydk::is_set(advertise_evpnv4_afi_vrf_re_imp_disable.yfilter)
	|| ydk::is_set(advertise_evpnv6_afi_vrf_re_imp_disable.yfilter)
	|| ydk::is_set(advertise_afi_eo_r_ready.yfilter)
	|| ydk::is_set(always_use_next_hop_local.yfilter)
	|| ydk::is_set(sent_community_to_neighbor.yfilter)
	|| ydk::is_set(sent_gshut_community_to_neighbor.yfilter)
	|| ydk::is_set(sent_extended_community_to_neighbor.yfilter)
	|| ydk::is_set(neighbor_default_originate.yfilter)
	|| ydk::is_set(is_orf_sent.yfilter)
	|| ydk::is_set(is_update_deferred.yfilter)
	|| ydk::is_set(is_orf_send_scheduled.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| ydk::is_set(filter_group_index.yfilter)
	|| ydk::is_set(is_update_throttled.yfilter)
	|| ydk::is_set(is_update_leaving.yfilter)
	|| ydk::is_set(vpn_update_gen_enabled.yfilter)
	|| ydk::is_set(vpn_update_gen_trigger_enabled.yfilter)
	|| ydk::is_set(is_addpath_send_operational.yfilter)
	|| ydk::is_set(is_addpath_receive_operational.yfilter)
	|| ydk::is_set(neighbor_version.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(max_prefix_limit.yfilter)
	|| ydk::is_set(use_max_prefix_warning_only.yfilter)
	|| ydk::is_set(max_prefix_discard_extra_paths.yfilter)
	|| ydk::is_set(max_prefix_exceed_discard_paths.yfilter)
	|| ydk::is_set(max_prefix_threshold_percent.yfilter)
	|| ydk::is_set(max_prefix_restart_time.yfilter)
	|| ydk::is_set(prefixes_accepted.yfilter)
	|| ydk::is_set(prefixes_synced.yfilter)
	|| ydk::is_set(prefixes_withdrawn_not_found.yfilter)
	|| ydk::is_set(prefixes_denied.yfilter)
	|| ydk::is_set(prefixes_denied_no_policy.yfilter)
	|| ydk::is_set(prefixes_denied_rt_permit.yfilter)
	|| ydk::is_set(prefixes_denied_orf_policy.yfilter)
	|| ydk::is_set(prefixes_denied_policy.yfilter)
	|| ydk::is_set(number_of_bestpaths.yfilter)
	|| ydk::is_set(number_of_best_externalpaths.yfilter)
	|| ydk::is_set(prefixes_advertised.yfilter)
	|| ydk::is_set(prefixes_be_advertised.yfilter)
	|| ydk::is_set(prefixes_suppressed.yfilter)
	|| ydk::is_set(prefixes_withdrawn.yfilter)
	|| ydk::is_set(is_peer_orf_capable.yfilter)
	|| ydk::is_set(is_advertised_orf_send.yfilter)
	|| ydk::is_set(is_received_orf_send_capable.yfilter)
	|| ydk::is_set(is_advertised_orf_receive.yfilter)
	|| ydk::is_set(is_received_orf_receive_capable.yfilter)
	|| ydk::is_set(is_advertised_graceful_restart.yfilter)
	|| ydk::is_set(is_graceful_restart_state_flag.yfilter)
	|| ydk::is_set(is_received_graceful_restart_capable.yfilter)
	|| ydk::is_set(is_add_path_send_capability_advertised.yfilter)
	|| ydk::is_set(is_add_path_send_capability_received.yfilter)
	|| ydk::is_set(is_add_path_receive_capability_advertised.yfilter)
	|| ydk::is_set(is_add_path_receive_capability_received.yfilter)
	|| ydk::is_set(is_ext_nh_encoding_capability_received.yfilter)
	|| ydk::is_set(is_ext_nh_encoding_capability_sent.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(local_restart_time.yfilter)
	|| ydk::is_set(stale_path_timeout.yfilter)
	|| ydk::is_set(rib_purge_timeout_value.yfilter)
	|| ydk::is_set(neighbor_preserved_forwarding_state.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_configured.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_sent.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_accept.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_capability_received.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_received.yfilter)
	|| ydk::is_set(neighbor_preserved_long_lived_forwarding_state.yfilter)
	|| ydk::is_set(neighbor_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(neighbor_long_lived_graceful_restart_time_remaining.yfilter)
	|| ydk::is_set(route_refreshes_received.yfilter)
	|| ydk::is_set(route_refreshes_sent.yfilter)
	|| ydk::is_set(refresh_target_version.yfilter)
	|| ydk::is_set(refresh_version.yfilter)
	|| ydk::is_set(refresh_acked_version.yfilter)
	|| ydk::is_set(is_prefix_orf_present.yfilter)
	|| ydk::is_set(orf_entries_received.yfilter)
	|| ydk::is_set(is_default_originate_sent.yfilter)
	|| ydk::is_set(route_policy_prefix_orf.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_policy_default_originate.yfilter)
	|| ydk::is_set(is_neighbor_ebgp_without_inbound_policy.yfilter)
	|| ydk::is_set(is_neighbor_ebgp_without_outbound_policy.yfilter)
	|| ydk::is_set(is_as_override_set.yfilter)
	|| ydk::is_set(is_allow_as_in_set.yfilter)
	|| ydk::is_set(allow_as_in_count.yfilter)
	|| ydk::is_set(address_family_long_lived_time.yfilter)
	|| ydk::is_set(eo_r_received_in_read_only.yfilter)
	|| ydk::is_set(acked_version.yfilter)
	|| ydk::is_set(synced_acked_version.yfilter)
	|| ydk::is_set(outstanding_version.yfilter)
	|| ydk::is_set(outstanding_refresh_version.yfilter)
	|| ydk::is_set(outstanding_version_max.yfilter)
	|| ydk::is_set(is_aigp_set.yfilter)
	|| ydk::is_set(is_rt_present.yfilter)
	|| ydk::is_set(is_rt_present_standby.yfilter)
	|| ydk::is_set(accept_own_enabled.yfilter)
	|| ydk::is_set(selective_multipath_eligible.yfilter)
	|| ydk::is_set(afrpki_disable.yfilter)
	|| ydk::is_set(afrpki_use_validity.yfilter)
	|| ydk::is_set(afrpki_allow_invalid.yfilter)
	|| ydk::is_set(afrpki_signal_ibgp.yfilter)
	|| ydk::is_set(is_advertise_permanent_network.yfilter)
	|| ydk::is_set(is_send_mcast_attr.yfilter)
	|| ydk::is_set(import_stitching.yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(advertise_v4_flags.yfilter)
	|| ydk::is_set(advertise_v6_flags.yfilter)
	|| ydk::is_set(advertise_local_labeled_route_unicast.yfilter)
	|| ydk::is_set(prefixes_denied_non_cumulative.yfilter)
	|| ydk::is_set(enable_label_stack.yfilter)
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (is_neighbor_route_reflector_client.is_set || is_set(is_neighbor_route_reflector_client.yfilter)) leaf_name_data.push_back(is_neighbor_route_reflector_client.get_name_leafdata());
    if (is_legacy_pe_rt.is_set || is_set(is_legacy_pe_rt.yfilter)) leaf_name_data.push_back(is_legacy_pe_rt.get_name_leafdata());
    if (is_neighbor_af_capable.is_set || is_set(is_neighbor_af_capable.yfilter)) leaf_name_data.push_back(is_neighbor_af_capable.get_name_leafdata());
    if (is_soft_reconfiguration_inbound_allowed.is_set || is_set(is_soft_reconfiguration_inbound_allowed.yfilter)) leaf_name_data.push_back(is_soft_reconfiguration_inbound_allowed.get_name_leafdata());
    if (is_use_soft_reconfiguration_always_on.is_set || is_set(is_use_soft_reconfiguration_always_on.yfilter)) leaf_name_data.push_back(is_use_soft_reconfiguration_always_on.get_name_leafdata());
    if (remove_private_as_from_updates.is_set || is_set(remove_private_as_from_updates.yfilter)) leaf_name_data.push_back(remove_private_as_from_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_updates.is_set || is_set(remove_private_as_entire_aspath_from_updates.yfilter)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_updates.get_name_leafdata());
    if (remove_private_as_from_inbound_updates.is_set || is_set(remove_private_as_from_inbound_updates.yfilter)) leaf_name_data.push_back(remove_private_as_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_inbound_updates.is_set || is_set(remove_private_as_entire_aspath_from_inbound_updates.yfilter)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_inbound_updates.get_name_leafdata());
    if (flowspec_validation_d_isable.is_set || is_set(flowspec_validation_d_isable.yfilter)) leaf_name_data.push_back(flowspec_validation_d_isable.get_name_leafdata());
    if (flowspec_redirect_validation_d_isable.is_set || is_set(flowspec_redirect_validation_d_isable.yfilter)) leaf_name_data.push_back(flowspec_redirect_validation_d_isable.get_name_leafdata());
    if (orr_group_name.is_set || is_set(orr_group_name.yfilter)) leaf_name_data.push_back(orr_group_name.get_name_leafdata());
    if (orr_group_index.is_set || is_set(orr_group_index.yfilter)) leaf_name_data.push_back(orr_group_index.get_name_leafdata());
    if (is_orr_root_address_configured.is_set || is_set(is_orr_root_address_configured.yfilter)) leaf_name_data.push_back(is_orr_root_address_configured.get_name_leafdata());
    if (advertise_afi.is_set || is_set(advertise_afi.yfilter)) leaf_name_data.push_back(advertise_afi.get_name_leafdata());
    if (advertise_afi_reorg.is_set || is_set(advertise_afi_reorg.yfilter)) leaf_name_data.push_back(advertise_afi_reorg.get_name_leafdata());
    if (advertise_afi_disable.is_set || is_set(advertise_afi_disable.yfilter)) leaf_name_data.push_back(advertise_afi_disable.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (advertise_rt_type.is_set || is_set(advertise_rt_type.yfilter)) leaf_name_data.push_back(advertise_rt_type.get_name_leafdata());
    if (advertise_afi_def_vrf_imp_disable.is_set || is_set(advertise_afi_def_vrf_imp_disable.yfilter)) leaf_name_data.push_back(advertise_afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evpnv4_afi_def_vrf_imp_disable.is_set || is_set(advertise_evpnv4_afi_def_vrf_imp_disable.yfilter)) leaf_name_data.push_back(advertise_evpnv4_afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evpnv6_afi_def_vrf_imp_disable.is_set || is_set(advertise_evpnv6_afi_def_vrf_imp_disable.yfilter)) leaf_name_data.push_back(advertise_evpnv6_afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_afi_vrf_re_imp_disable.is_set || is_set(advertise_afi_vrf_re_imp_disable.yfilter)) leaf_name_data.push_back(advertise_afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evpnv4_afi_vrf_re_imp_disable.is_set || is_set(advertise_evpnv4_afi_vrf_re_imp_disable.yfilter)) leaf_name_data.push_back(advertise_evpnv4_afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evpnv6_afi_vrf_re_imp_disable.is_set || is_set(advertise_evpnv6_afi_vrf_re_imp_disable.yfilter)) leaf_name_data.push_back(advertise_evpnv6_afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_afi_eo_r_ready.is_set || is_set(advertise_afi_eo_r_ready.yfilter)) leaf_name_data.push_back(advertise_afi_eo_r_ready.get_name_leafdata());
    if (always_use_next_hop_local.is_set || is_set(always_use_next_hop_local.yfilter)) leaf_name_data.push_back(always_use_next_hop_local.get_name_leafdata());
    if (sent_community_to_neighbor.is_set || is_set(sent_community_to_neighbor.yfilter)) leaf_name_data.push_back(sent_community_to_neighbor.get_name_leafdata());
    if (sent_gshut_community_to_neighbor.is_set || is_set(sent_gshut_community_to_neighbor.yfilter)) leaf_name_data.push_back(sent_gshut_community_to_neighbor.get_name_leafdata());
    if (sent_extended_community_to_neighbor.is_set || is_set(sent_extended_community_to_neighbor.yfilter)) leaf_name_data.push_back(sent_extended_community_to_neighbor.get_name_leafdata());
    if (neighbor_default_originate.is_set || is_set(neighbor_default_originate.yfilter)) leaf_name_data.push_back(neighbor_default_originate.get_name_leafdata());
    if (is_orf_sent.is_set || is_set(is_orf_sent.yfilter)) leaf_name_data.push_back(is_orf_sent.get_name_leafdata());
    if (is_update_deferred.is_set || is_set(is_update_deferred.yfilter)) leaf_name_data.push_back(is_update_deferred.get_name_leafdata());
    if (is_orf_send_scheduled.is_set || is_set(is_orf_send_scheduled.yfilter)) leaf_name_data.push_back(is_orf_send_scheduled.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());
    if (filter_group_index.is_set || is_set(filter_group_index.yfilter)) leaf_name_data.push_back(filter_group_index.get_name_leafdata());
    if (is_update_throttled.is_set || is_set(is_update_throttled.yfilter)) leaf_name_data.push_back(is_update_throttled.get_name_leafdata());
    if (is_update_leaving.is_set || is_set(is_update_leaving.yfilter)) leaf_name_data.push_back(is_update_leaving.get_name_leafdata());
    if (vpn_update_gen_enabled.is_set || is_set(vpn_update_gen_enabled.yfilter)) leaf_name_data.push_back(vpn_update_gen_enabled.get_name_leafdata());
    if (vpn_update_gen_trigger_enabled.is_set || is_set(vpn_update_gen_trigger_enabled.yfilter)) leaf_name_data.push_back(vpn_update_gen_trigger_enabled.get_name_leafdata());
    if (is_addpath_send_operational.is_set || is_set(is_addpath_send_operational.yfilter)) leaf_name_data.push_back(is_addpath_send_operational.get_name_leafdata());
    if (is_addpath_receive_operational.is_set || is_set(is_addpath_receive_operational.yfilter)) leaf_name_data.push_back(is_addpath_receive_operational.get_name_leafdata());
    if (neighbor_version.is_set || is_set(neighbor_version.yfilter)) leaf_name_data.push_back(neighbor_version.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (max_prefix_limit.is_set || is_set(max_prefix_limit.yfilter)) leaf_name_data.push_back(max_prefix_limit.get_name_leafdata());
    if (use_max_prefix_warning_only.is_set || is_set(use_max_prefix_warning_only.yfilter)) leaf_name_data.push_back(use_max_prefix_warning_only.get_name_leafdata());
    if (max_prefix_discard_extra_paths.is_set || is_set(max_prefix_discard_extra_paths.yfilter)) leaf_name_data.push_back(max_prefix_discard_extra_paths.get_name_leafdata());
    if (max_prefix_exceed_discard_paths.is_set || is_set(max_prefix_exceed_discard_paths.yfilter)) leaf_name_data.push_back(max_prefix_exceed_discard_paths.get_name_leafdata());
    if (max_prefix_threshold_percent.is_set || is_set(max_prefix_threshold_percent.yfilter)) leaf_name_data.push_back(max_prefix_threshold_percent.get_name_leafdata());
    if (max_prefix_restart_time.is_set || is_set(max_prefix_restart_time.yfilter)) leaf_name_data.push_back(max_prefix_restart_time.get_name_leafdata());
    if (prefixes_accepted.is_set || is_set(prefixes_accepted.yfilter)) leaf_name_data.push_back(prefixes_accepted.get_name_leafdata());
    if (prefixes_synced.is_set || is_set(prefixes_synced.yfilter)) leaf_name_data.push_back(prefixes_synced.get_name_leafdata());
    if (prefixes_withdrawn_not_found.is_set || is_set(prefixes_withdrawn_not_found.yfilter)) leaf_name_data.push_back(prefixes_withdrawn_not_found.get_name_leafdata());
    if (prefixes_denied.is_set || is_set(prefixes_denied.yfilter)) leaf_name_data.push_back(prefixes_denied.get_name_leafdata());
    if (prefixes_denied_no_policy.is_set || is_set(prefixes_denied_no_policy.yfilter)) leaf_name_data.push_back(prefixes_denied_no_policy.get_name_leafdata());
    if (prefixes_denied_rt_permit.is_set || is_set(prefixes_denied_rt_permit.yfilter)) leaf_name_data.push_back(prefixes_denied_rt_permit.get_name_leafdata());
    if (prefixes_denied_orf_policy.is_set || is_set(prefixes_denied_orf_policy.yfilter)) leaf_name_data.push_back(prefixes_denied_orf_policy.get_name_leafdata());
    if (prefixes_denied_policy.is_set || is_set(prefixes_denied_policy.yfilter)) leaf_name_data.push_back(prefixes_denied_policy.get_name_leafdata());
    if (number_of_bestpaths.is_set || is_set(number_of_bestpaths.yfilter)) leaf_name_data.push_back(number_of_bestpaths.get_name_leafdata());
    if (number_of_best_externalpaths.is_set || is_set(number_of_best_externalpaths.yfilter)) leaf_name_data.push_back(number_of_best_externalpaths.get_name_leafdata());
    if (prefixes_advertised.is_set || is_set(prefixes_advertised.yfilter)) leaf_name_data.push_back(prefixes_advertised.get_name_leafdata());
    if (prefixes_be_advertised.is_set || is_set(prefixes_be_advertised.yfilter)) leaf_name_data.push_back(prefixes_be_advertised.get_name_leafdata());
    if (prefixes_suppressed.is_set || is_set(prefixes_suppressed.yfilter)) leaf_name_data.push_back(prefixes_suppressed.get_name_leafdata());
    if (prefixes_withdrawn.is_set || is_set(prefixes_withdrawn.yfilter)) leaf_name_data.push_back(prefixes_withdrawn.get_name_leafdata());
    if (is_peer_orf_capable.is_set || is_set(is_peer_orf_capable.yfilter)) leaf_name_data.push_back(is_peer_orf_capable.get_name_leafdata());
    if (is_advertised_orf_send.is_set || is_set(is_advertised_orf_send.yfilter)) leaf_name_data.push_back(is_advertised_orf_send.get_name_leafdata());
    if (is_received_orf_send_capable.is_set || is_set(is_received_orf_send_capable.yfilter)) leaf_name_data.push_back(is_received_orf_send_capable.get_name_leafdata());
    if (is_advertised_orf_receive.is_set || is_set(is_advertised_orf_receive.yfilter)) leaf_name_data.push_back(is_advertised_orf_receive.get_name_leafdata());
    if (is_received_orf_receive_capable.is_set || is_set(is_received_orf_receive_capable.yfilter)) leaf_name_data.push_back(is_received_orf_receive_capable.get_name_leafdata());
    if (is_advertised_graceful_restart.is_set || is_set(is_advertised_graceful_restart.yfilter)) leaf_name_data.push_back(is_advertised_graceful_restart.get_name_leafdata());
    if (is_graceful_restart_state_flag.is_set || is_set(is_graceful_restart_state_flag.yfilter)) leaf_name_data.push_back(is_graceful_restart_state_flag.get_name_leafdata());
    if (is_received_graceful_restart_capable.is_set || is_set(is_received_graceful_restart_capable.yfilter)) leaf_name_data.push_back(is_received_graceful_restart_capable.get_name_leafdata());
    if (is_add_path_send_capability_advertised.is_set || is_set(is_add_path_send_capability_advertised.yfilter)) leaf_name_data.push_back(is_add_path_send_capability_advertised.get_name_leafdata());
    if (is_add_path_send_capability_received.is_set || is_set(is_add_path_send_capability_received.yfilter)) leaf_name_data.push_back(is_add_path_send_capability_received.get_name_leafdata());
    if (is_add_path_receive_capability_advertised.is_set || is_set(is_add_path_receive_capability_advertised.yfilter)) leaf_name_data.push_back(is_add_path_receive_capability_advertised.get_name_leafdata());
    if (is_add_path_receive_capability_received.is_set || is_set(is_add_path_receive_capability_received.yfilter)) leaf_name_data.push_back(is_add_path_receive_capability_received.get_name_leafdata());
    if (is_ext_nh_encoding_capability_received.is_set || is_set(is_ext_nh_encoding_capability_received.yfilter)) leaf_name_data.push_back(is_ext_nh_encoding_capability_received.get_name_leafdata());
    if (is_ext_nh_encoding_capability_sent.is_set || is_set(is_ext_nh_encoding_capability_sent.yfilter)) leaf_name_data.push_back(is_ext_nh_encoding_capability_sent.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (local_restart_time.is_set || is_set(local_restart_time.yfilter)) leaf_name_data.push_back(local_restart_time.get_name_leafdata());
    if (stale_path_timeout.is_set || is_set(stale_path_timeout.yfilter)) leaf_name_data.push_back(stale_path_timeout.get_name_leafdata());
    if (rib_purge_timeout_value.is_set || is_set(rib_purge_timeout_value.yfilter)) leaf_name_data.push_back(rib_purge_timeout_value.get_name_leafdata());
    if (neighbor_preserved_forwarding_state.is_set || is_set(neighbor_preserved_forwarding_state.yfilter)) leaf_name_data.push_back(neighbor_preserved_forwarding_state.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_configured.is_set || is_set(long_lived_graceful_restart_stale_time_configured.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_configured.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_sent.is_set || is_set(long_lived_graceful_restart_stale_time_sent.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_sent.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_accept.is_set || is_set(long_lived_graceful_restart_stale_time_accept.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_accept.get_name_leafdata());
    if (long_lived_graceful_restart_capability_received.is_set || is_set(long_lived_graceful_restart_capability_received.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_capability_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_received.is_set || is_set(long_lived_graceful_restart_stale_time_received.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_received.get_name_leafdata());
    if (neighbor_preserved_long_lived_forwarding_state.is_set || is_set(neighbor_preserved_long_lived_forwarding_state.yfilter)) leaf_name_data.push_back(neighbor_preserved_long_lived_forwarding_state.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_capable.is_set || is_set(neighbor_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_capable.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_time_remaining.is_set || is_set(neighbor_long_lived_graceful_restart_time_remaining.yfilter)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_time_remaining.get_name_leafdata());
    if (route_refreshes_received.is_set || is_set(route_refreshes_received.yfilter)) leaf_name_data.push_back(route_refreshes_received.get_name_leafdata());
    if (route_refreshes_sent.is_set || is_set(route_refreshes_sent.yfilter)) leaf_name_data.push_back(route_refreshes_sent.get_name_leafdata());
    if (refresh_target_version.is_set || is_set(refresh_target_version.yfilter)) leaf_name_data.push_back(refresh_target_version.get_name_leafdata());
    if (refresh_version.is_set || is_set(refresh_version.yfilter)) leaf_name_data.push_back(refresh_version.get_name_leafdata());
    if (refresh_acked_version.is_set || is_set(refresh_acked_version.yfilter)) leaf_name_data.push_back(refresh_acked_version.get_name_leafdata());
    if (is_prefix_orf_present.is_set || is_set(is_prefix_orf_present.yfilter)) leaf_name_data.push_back(is_prefix_orf_present.get_name_leafdata());
    if (orf_entries_received.is_set || is_set(orf_entries_received.yfilter)) leaf_name_data.push_back(orf_entries_received.get_name_leafdata());
    if (is_default_originate_sent.is_set || is_set(is_default_originate_sent.yfilter)) leaf_name_data.push_back(is_default_originate_sent.get_name_leafdata());
    if (route_policy_prefix_orf.is_set || is_set(route_policy_prefix_orf.yfilter)) leaf_name_data.push_back(route_policy_prefix_orf.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_policy_default_originate.is_set || is_set(route_policy_default_originate.yfilter)) leaf_name_data.push_back(route_policy_default_originate.get_name_leafdata());
    if (is_neighbor_ebgp_without_inbound_policy.is_set || is_set(is_neighbor_ebgp_without_inbound_policy.yfilter)) leaf_name_data.push_back(is_neighbor_ebgp_without_inbound_policy.get_name_leafdata());
    if (is_neighbor_ebgp_without_outbound_policy.is_set || is_set(is_neighbor_ebgp_without_outbound_policy.yfilter)) leaf_name_data.push_back(is_neighbor_ebgp_without_outbound_policy.get_name_leafdata());
    if (is_as_override_set.is_set || is_set(is_as_override_set.yfilter)) leaf_name_data.push_back(is_as_override_set.get_name_leafdata());
    if (is_allow_as_in_set.is_set || is_set(is_allow_as_in_set.yfilter)) leaf_name_data.push_back(is_allow_as_in_set.get_name_leafdata());
    if (allow_as_in_count.is_set || is_set(allow_as_in_count.yfilter)) leaf_name_data.push_back(allow_as_in_count.get_name_leafdata());
    if (address_family_long_lived_time.is_set || is_set(address_family_long_lived_time.yfilter)) leaf_name_data.push_back(address_family_long_lived_time.get_name_leafdata());
    if (eo_r_received_in_read_only.is_set || is_set(eo_r_received_in_read_only.yfilter)) leaf_name_data.push_back(eo_r_received_in_read_only.get_name_leafdata());
    if (acked_version.is_set || is_set(acked_version.yfilter)) leaf_name_data.push_back(acked_version.get_name_leafdata());
    if (synced_acked_version.is_set || is_set(synced_acked_version.yfilter)) leaf_name_data.push_back(synced_acked_version.get_name_leafdata());
    if (outstanding_version.is_set || is_set(outstanding_version.yfilter)) leaf_name_data.push_back(outstanding_version.get_name_leafdata());
    if (outstanding_refresh_version.is_set || is_set(outstanding_refresh_version.yfilter)) leaf_name_data.push_back(outstanding_refresh_version.get_name_leafdata());
    if (outstanding_version_max.is_set || is_set(outstanding_version_max.yfilter)) leaf_name_data.push_back(outstanding_version_max.get_name_leafdata());
    if (is_aigp_set.is_set || is_set(is_aigp_set.yfilter)) leaf_name_data.push_back(is_aigp_set.get_name_leafdata());
    if (is_rt_present.is_set || is_set(is_rt_present.yfilter)) leaf_name_data.push_back(is_rt_present.get_name_leafdata());
    if (is_rt_present_standby.is_set || is_set(is_rt_present_standby.yfilter)) leaf_name_data.push_back(is_rt_present_standby.get_name_leafdata());
    if (accept_own_enabled.is_set || is_set(accept_own_enabled.yfilter)) leaf_name_data.push_back(accept_own_enabled.get_name_leafdata());
    if (selective_multipath_eligible.is_set || is_set(selective_multipath_eligible.yfilter)) leaf_name_data.push_back(selective_multipath_eligible.get_name_leafdata());
    if (afrpki_disable.is_set || is_set(afrpki_disable.yfilter)) leaf_name_data.push_back(afrpki_disable.get_name_leafdata());
    if (afrpki_use_validity.is_set || is_set(afrpki_use_validity.yfilter)) leaf_name_data.push_back(afrpki_use_validity.get_name_leafdata());
    if (afrpki_allow_invalid.is_set || is_set(afrpki_allow_invalid.yfilter)) leaf_name_data.push_back(afrpki_allow_invalid.get_name_leafdata());
    if (afrpki_signal_ibgp.is_set || is_set(afrpki_signal_ibgp.yfilter)) leaf_name_data.push_back(afrpki_signal_ibgp.get_name_leafdata());
    if (is_advertise_permanent_network.is_set || is_set(is_advertise_permanent_network.yfilter)) leaf_name_data.push_back(is_advertise_permanent_network.get_name_leafdata());
    if (is_send_mcast_attr.is_set || is_set(is_send_mcast_attr.yfilter)) leaf_name_data.push_back(is_send_mcast_attr.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (advertise_v4_flags.is_set || is_set(advertise_v4_flags.yfilter)) leaf_name_data.push_back(advertise_v4_flags.get_name_leafdata());
    if (advertise_v6_flags.is_set || is_set(advertise_v6_flags.yfilter)) leaf_name_data.push_back(advertise_v6_flags.get_name_leafdata());
    if (advertise_local_labeled_route_unicast.is_set || is_set(advertise_local_labeled_route_unicast.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route_unicast.get_name_leafdata());
    if (prefixes_denied_non_cumulative.is_set || is_set(prefixes_denied_non_cumulative.yfilter)) leaf_name_data.push_back(prefixes_denied_non_cumulative.get_name_leafdata());
    if (enable_label_stack.is_set || is_set(enable_label_stack.yfilter)) leaf_name_data.push_back(enable_label_stack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-af-performance-statistics")
    {
        if(neighbor_af_performance_statistics == nullptr)
        {
            neighbor_af_performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics>();
        }
        return neighbor_af_performance_statistics;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community-standby")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby>();
        ent_->parent = this;
        extended_community_standby.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_af_performance_statistics != nullptr)
    {
        _children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community_standby.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client = value;
        is_neighbor_route_reflector_client.value_namespace = name_space;
        is_neighbor_route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt = value;
        is_legacy_pe_rt.value_namespace = name_space;
        is_legacy_pe_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable = value;
        is_neighbor_af_capable.value_namespace = name_space;
        is_neighbor_af_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed = value;
        is_soft_reconfiguration_inbound_allowed.value_namespace = name_space;
        is_soft_reconfiguration_inbound_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on = value;
        is_use_soft_reconfiguration_always_on.value_namespace = name_space;
        is_use_soft_reconfiguration_always_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates = value;
        remove_private_as_from_updates.value_namespace = name_space;
        remove_private_as_from_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates = value;
        remove_private_as_entire_aspath_from_updates.value_namespace = name_space;
        remove_private_as_entire_aspath_from_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates = value;
        remove_private_as_from_inbound_updates.value_namespace = name_space;
        remove_private_as_from_inbound_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates = value;
        remove_private_as_entire_aspath_from_inbound_updates.value_namespace = name_space;
        remove_private_as_entire_aspath_from_inbound_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable = value;
        flowspec_validation_d_isable.value_namespace = name_space;
        flowspec_validation_d_isable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable = value;
        flowspec_redirect_validation_d_isable.value_namespace = name_space;
        flowspec_redirect_validation_d_isable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name = value;
        orr_group_name.value_namespace = name_space;
        orr_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index = value;
        orr_group_index.value_namespace = name_space;
        orr_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured = value;
        is_orr_root_address_configured.value_namespace = name_space;
        is_orr_root_address_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi = value;
        advertise_afi.value_namespace = name_space;
        advertise_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg = value;
        advertise_afi_reorg.value_namespace = name_space;
        advertise_afi_reorg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable = value;
        advertise_afi_disable.value_namespace = name_space;
        advertise_afi_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-rt-type")
    {
        advertise_rt_type = value;
        advertise_rt_type.value_namespace = name_space;
        advertise_rt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-def-vrf-imp-disable")
    {
        advertise_afi_def_vrf_imp_disable = value;
        advertise_afi_def_vrf_imp_disable.value_namespace = name_space;
        advertise_afi_def_vrf_imp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-evpnv4-afi-def-vrf-imp-disable")
    {
        advertise_evpnv4_afi_def_vrf_imp_disable = value;
        advertise_evpnv4_afi_def_vrf_imp_disable.value_namespace = name_space;
        advertise_evpnv4_afi_def_vrf_imp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-evpnv6-afi-def-vrf-imp-disable")
    {
        advertise_evpnv6_afi_def_vrf_imp_disable = value;
        advertise_evpnv6_afi_def_vrf_imp_disable.value_namespace = name_space;
        advertise_evpnv6_afi_def_vrf_imp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-vrf-re-imp-disable")
    {
        advertise_afi_vrf_re_imp_disable = value;
        advertise_afi_vrf_re_imp_disable.value_namespace = name_space;
        advertise_afi_vrf_re_imp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-evpnv4-afi-vrf-re-imp-disable")
    {
        advertise_evpnv4_afi_vrf_re_imp_disable = value;
        advertise_evpnv4_afi_vrf_re_imp_disable.value_namespace = name_space;
        advertise_evpnv4_afi_vrf_re_imp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-evpnv6-afi-vrf-re-imp-disable")
    {
        advertise_evpnv6_afi_vrf_re_imp_disable = value;
        advertise_evpnv6_afi_vrf_re_imp_disable.value_namespace = name_space;
        advertise_evpnv6_afi_vrf_re_imp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-eo-r-ready")
    {
        advertise_afi_eo_r_ready = value;
        advertise_afi_eo_r_ready.value_namespace = name_space;
        advertise_afi_eo_r_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local = value;
        always_use_next_hop_local.value_namespace = name_space;
        always_use_next_hop_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor = value;
        sent_community_to_neighbor.value_namespace = name_space;
        sent_community_to_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor = value;
        sent_gshut_community_to_neighbor.value_namespace = name_space;
        sent_gshut_community_to_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor = value;
        sent_extended_community_to_neighbor.value_namespace = name_space;
        sent_extended_community_to_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate = value;
        neighbor_default_originate.value_namespace = name_space;
        neighbor_default_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent = value;
        is_orf_sent.value_namespace = name_space;
        is_orf_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred = value;
        is_update_deferred.value_namespace = name_space;
        is_update_deferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled = value;
        is_orf_send_scheduled.value_namespace = name_space;
        is_orf_send_scheduled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group-index")
    {
        filter_group_index = value;
        filter_group_index.value_namespace = name_space;
        filter_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-update-throttled")
    {
        is_update_throttled = value;
        is_update_throttled.value_namespace = name_space;
        is_update_throttled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-update-leaving")
    {
        is_update_leaving = value;
        is_update_leaving.value_namespace = name_space;
        is_update_leaving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled = value;
        vpn_update_gen_enabled.value_namespace = name_space;
        vpn_update_gen_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled = value;
        vpn_update_gen_trigger_enabled.value_namespace = name_space;
        vpn_update_gen_trigger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational = value;
        is_addpath_send_operational.value_namespace = name_space;
        is_addpath_send_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational = value;
        is_addpath_receive_operational.value_namespace = name_space;
        is_addpath_receive_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-version")
    {
        neighbor_version = value;
        neighbor_version.value_namespace = name_space;
        neighbor_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit = value;
        max_prefix_limit.value_namespace = name_space;
        max_prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only = value;
        use_max_prefix_warning_only.value_namespace = name_space;
        use_max_prefix_warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths = value;
        max_prefix_discard_extra_paths.value_namespace = name_space;
        max_prefix_discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths = value;
        max_prefix_exceed_discard_paths.value_namespace = name_space;
        max_prefix_exceed_discard_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent = value;
        max_prefix_threshold_percent.value_namespace = name_space;
        max_prefix_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time = value;
        max_prefix_restart_time.value_namespace = name_space;
        max_prefix_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-accepted")
    {
        prefixes_accepted = value;
        prefixes_accepted.value_namespace = name_space;
        prefixes_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-synced")
    {
        prefixes_synced = value;
        prefixes_synced.value_namespace = name_space;
        prefixes_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-withdrawn-not-found")
    {
        prefixes_withdrawn_not_found = value;
        prefixes_withdrawn_not_found.value_namespace = name_space;
        prefixes_withdrawn_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-denied")
    {
        prefixes_denied = value;
        prefixes_denied.value_namespace = name_space;
        prefixes_denied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-denied-no-policy")
    {
        prefixes_denied_no_policy = value;
        prefixes_denied_no_policy.value_namespace = name_space;
        prefixes_denied_no_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-denied-rt-permit")
    {
        prefixes_denied_rt_permit = value;
        prefixes_denied_rt_permit.value_namespace = name_space;
        prefixes_denied_rt_permit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-denied-orf-policy")
    {
        prefixes_denied_orf_policy = value;
        prefixes_denied_orf_policy.value_namespace = name_space;
        prefixes_denied_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-denied-policy")
    {
        prefixes_denied_policy = value;
        prefixes_denied_policy.value_namespace = name_space;
        prefixes_denied_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bestpaths")
    {
        number_of_bestpaths = value;
        number_of_bestpaths.value_namespace = name_space;
        number_of_bestpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-best-externalpaths")
    {
        number_of_best_externalpaths = value;
        number_of_best_externalpaths.value_namespace = name_space;
        number_of_best_externalpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-advertised")
    {
        prefixes_advertised = value;
        prefixes_advertised.value_namespace = name_space;
        prefixes_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-be-advertised")
    {
        prefixes_be_advertised = value;
        prefixes_be_advertised.value_namespace = name_space;
        prefixes_be_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-suppressed")
    {
        prefixes_suppressed = value;
        prefixes_suppressed.value_namespace = name_space;
        prefixes_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-withdrawn")
    {
        prefixes_withdrawn = value;
        prefixes_withdrawn.value_namespace = name_space;
        prefixes_withdrawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable = value;
        is_peer_orf_capable.value_namespace = name_space;
        is_peer_orf_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send = value;
        is_advertised_orf_send.value_namespace = name_space;
        is_advertised_orf_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable = value;
        is_received_orf_send_capable.value_namespace = name_space;
        is_received_orf_send_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive = value;
        is_advertised_orf_receive.value_namespace = name_space;
        is_advertised_orf_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable = value;
        is_received_orf_receive_capable.value_namespace = name_space;
        is_received_orf_receive_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart = value;
        is_advertised_graceful_restart.value_namespace = name_space;
        is_advertised_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag = value;
        is_graceful_restart_state_flag.value_namespace = name_space;
        is_graceful_restart_state_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable = value;
        is_received_graceful_restart_capable.value_namespace = name_space;
        is_received_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised = value;
        is_add_path_send_capability_advertised.value_namespace = name_space;
        is_add_path_send_capability_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received = value;
        is_add_path_send_capability_received.value_namespace = name_space;
        is_add_path_send_capability_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised = value;
        is_add_path_receive_capability_advertised.value_namespace = name_space;
        is_add_path_receive_capability_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received = value;
        is_add_path_receive_capability_received.value_namespace = name_space;
        is_add_path_receive_capability_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ext-nh-encoding-capability-received")
    {
        is_ext_nh_encoding_capability_received = value;
        is_ext_nh_encoding_capability_received.value_namespace = name_space;
        is_ext_nh_encoding_capability_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ext-nh-encoding-capability-sent")
    {
        is_ext_nh_encoding_capability_sent = value;
        is_ext_nh_encoding_capability_sent.value_namespace = name_space;
        is_ext_nh_encoding_capability_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time = value;
        local_restart_time.value_namespace = name_space;
        local_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout = value;
        stale_path_timeout.value_namespace = name_space;
        stale_path_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value = value;
        rib_purge_timeout_value.value_namespace = name_space;
        rib_purge_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state = value;
        neighbor_preserved_forwarding_state.value_namespace = name_space;
        neighbor_preserved_forwarding_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured = value;
        long_lived_graceful_restart_stale_time_configured.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent = value;
        long_lived_graceful_restart_stale_time_sent.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept = value;
        long_lived_graceful_restart_stale_time_accept.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received = value;
        long_lived_graceful_restart_capability_received.value_namespace = name_space;
        long_lived_graceful_restart_capability_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received = value;
        long_lived_graceful_restart_stale_time_received.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state = value;
        neighbor_preserved_long_lived_forwarding_state.value_namespace = name_space;
        neighbor_preserved_long_lived_forwarding_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable = value;
        neighbor_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining = value;
        neighbor_long_lived_graceful_restart_time_remaining.value_namespace = name_space;
        neighbor_long_lived_graceful_restart_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-refreshes-received")
    {
        route_refreshes_received = value;
        route_refreshes_received.value_namespace = name_space;
        route_refreshes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-refreshes-sent")
    {
        route_refreshes_sent = value;
        route_refreshes_sent.value_namespace = name_space;
        route_refreshes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-target-version")
    {
        refresh_target_version = value;
        refresh_target_version.value_namespace = name_space;
        refresh_target_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-version")
    {
        refresh_version = value;
        refresh_version.value_namespace = name_space;
        refresh_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-acked-version")
    {
        refresh_acked_version = value;
        refresh_acked_version.value_namespace = name_space;
        refresh_acked_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present = value;
        is_prefix_orf_present.value_namespace = name_space;
        is_prefix_orf_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received = value;
        orf_entries_received.value_namespace = name_space;
        orf_entries_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-originate-sent")
    {
        is_default_originate_sent = value;
        is_default_originate_sent.value_namespace = name_space;
        is_default_originate_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf = value;
        route_policy_prefix_orf.value_namespace = name_space;
        route_policy_prefix_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate = value;
        route_policy_default_originate.value_namespace = name_space;
        route_policy_default_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy = value;
        is_neighbor_ebgp_without_inbound_policy.value_namespace = name_space;
        is_neighbor_ebgp_without_inbound_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy = value;
        is_neighbor_ebgp_without_outbound_policy.value_namespace = name_space;
        is_neighbor_ebgp_without_outbound_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set = value;
        is_as_override_set.value_namespace = name_space;
        is_as_override_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set = value;
        is_allow_as_in_set.value_namespace = name_space;
        is_allow_as_in_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count = value;
        allow_as_in_count.value_namespace = name_space;
        allow_as_in_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time = value;
        address_family_long_lived_time.value_namespace = name_space;
        address_family_long_lived_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eo-r-received-in-read-only")
    {
        eo_r_received_in_read_only = value;
        eo_r_received_in_read_only.value_namespace = name_space;
        eo_r_received_in_read_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acked-version")
    {
        acked_version = value;
        acked_version.value_namespace = name_space;
        acked_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synced-acked-version")
    {
        synced_acked_version = value;
        synced_acked_version.value_namespace = name_space;
        synced_acked_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstanding-version")
    {
        outstanding_version = value;
        outstanding_version.value_namespace = name_space;
        outstanding_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstanding-refresh-version")
    {
        outstanding_refresh_version = value;
        outstanding_refresh_version.value_namespace = name_space;
        outstanding_refresh_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstanding-version-max")
    {
        outstanding_version_max = value;
        outstanding_version_max.value_namespace = name_space;
        outstanding_version_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set = value;
        is_aigp_set.value_namespace = name_space;
        is_aigp_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present = value;
        is_rt_present.value_namespace = name_space;
        is_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby = value;
        is_rt_present_standby.value_namespace = name_space;
        is_rt_present_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled = value;
        accept_own_enabled.value_namespace = name_space;
        accept_own_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible = value;
        selective_multipath_eligible.value_namespace = name_space;
        selective_multipath_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable = value;
        afrpki_disable.value_namespace = name_space;
        afrpki_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity = value;
        afrpki_use_validity.value_namespace = name_space;
        afrpki_use_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid = value;
        afrpki_allow_invalid.value_namespace = name_space;
        afrpki_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp = value;
        afrpki_signal_ibgp.value_namespace = name_space;
        afrpki_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network = value;
        is_advertise_permanent_network.value_namespace = name_space;
        is_advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr = value;
        is_send_mcast_attr.value_namespace = name_space;
        is_send_mcast_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags = value;
        advertise_v4_flags.value_namespace = name_space;
        advertise_v4_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags = value;
        advertise_v6_flags.value_namespace = name_space;
        advertise_v6_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route-unicast")
    {
        advertise_local_labeled_route_unicast = value;
        advertise_local_labeled_route_unicast.value_namespace = name_space;
        advertise_local_labeled_route_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-denied-non-cumulative")
    {
        prefixes_denied_non_cumulative = value;
        prefixes_denied_non_cumulative.value_namespace = name_space;
        prefixes_denied_non_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-label-stack")
    {
        enable_label_stack = value;
        enable_label_stack.value_namespace = name_space;
        enable_label_stack.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable.yfilter = yfilter;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed.yfilter = yfilter;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable.yfilter = yfilter;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable.yfilter = yfilter;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name.yfilter = yfilter;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index.yfilter = yfilter;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured.yfilter = yfilter;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "advertise-rt-type")
    {
        advertise_rt_type.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-def-vrf-imp-disable")
    {
        advertise_afi_def_vrf_imp_disable.yfilter = yfilter;
    }
    if(value_path == "advertise-evpnv4-afi-def-vrf-imp-disable")
    {
        advertise_evpnv4_afi_def_vrf_imp_disable.yfilter = yfilter;
    }
    if(value_path == "advertise-evpnv6-afi-def-vrf-imp-disable")
    {
        advertise_evpnv6_afi_def_vrf_imp_disable.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-vrf-re-imp-disable")
    {
        advertise_afi_vrf_re_imp_disable.yfilter = yfilter;
    }
    if(value_path == "advertise-evpnv4-afi-vrf-re-imp-disable")
    {
        advertise_evpnv4_afi_vrf_re_imp_disable.yfilter = yfilter;
    }
    if(value_path == "advertise-evpnv6-afi-vrf-re-imp-disable")
    {
        advertise_evpnv6_afi_vrf_re_imp_disable.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-eo-r-ready")
    {
        advertise_afi_eo_r_ready.yfilter = yfilter;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local.yfilter = yfilter;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor.yfilter = yfilter;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor.yfilter = yfilter;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor.yfilter = yfilter;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate.yfilter = yfilter;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent.yfilter = yfilter;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred.yfilter = yfilter;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
    if(value_path == "filter-group-index")
    {
        filter_group_index.yfilter = yfilter;
    }
    if(value_path == "is-update-throttled")
    {
        is_update_throttled.yfilter = yfilter;
    }
    if(value_path == "is-update-leaving")
    {
        is_update_leaving.yfilter = yfilter;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled.yfilter = yfilter;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled.yfilter = yfilter;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational.yfilter = yfilter;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational.yfilter = yfilter;
    }
    if(value_path == "neighbor-version")
    {
        neighbor_version.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit.yfilter = yfilter;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only.yfilter = yfilter;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths.yfilter = yfilter;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time.yfilter = yfilter;
    }
    if(value_path == "prefixes-accepted")
    {
        prefixes_accepted.yfilter = yfilter;
    }
    if(value_path == "prefixes-synced")
    {
        prefixes_synced.yfilter = yfilter;
    }
    if(value_path == "prefixes-withdrawn-not-found")
    {
        prefixes_withdrawn_not_found.yfilter = yfilter;
    }
    if(value_path == "prefixes-denied")
    {
        prefixes_denied.yfilter = yfilter;
    }
    if(value_path == "prefixes-denied-no-policy")
    {
        prefixes_denied_no_policy.yfilter = yfilter;
    }
    if(value_path == "prefixes-denied-rt-permit")
    {
        prefixes_denied_rt_permit.yfilter = yfilter;
    }
    if(value_path == "prefixes-denied-orf-policy")
    {
        prefixes_denied_orf_policy.yfilter = yfilter;
    }
    if(value_path == "prefixes-denied-policy")
    {
        prefixes_denied_policy.yfilter = yfilter;
    }
    if(value_path == "number-of-bestpaths")
    {
        number_of_bestpaths.yfilter = yfilter;
    }
    if(value_path == "number-of-best-externalpaths")
    {
        number_of_best_externalpaths.yfilter = yfilter;
    }
    if(value_path == "prefixes-advertised")
    {
        prefixes_advertised.yfilter = yfilter;
    }
    if(value_path == "prefixes-be-advertised")
    {
        prefixes_be_advertised.yfilter = yfilter;
    }
    if(value_path == "prefixes-suppressed")
    {
        prefixes_suppressed.yfilter = yfilter;
    }
    if(value_path == "prefixes-withdrawn")
    {
        prefixes_withdrawn.yfilter = yfilter;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable.yfilter = yfilter;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send.yfilter = yfilter;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable.yfilter = yfilter;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive.yfilter = yfilter;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable.yfilter = yfilter;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag.yfilter = yfilter;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised.yfilter = yfilter;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received.yfilter = yfilter;
    }
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised.yfilter = yfilter;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received.yfilter = yfilter;
    }
    if(value_path == "is-ext-nh-encoding-capability-received")
    {
        is_ext_nh_encoding_capability_received.yfilter = yfilter;
    }
    if(value_path == "is-ext-nh-encoding-capability-sent")
    {
        is_ext_nh_encoding_capability_sent.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout.yfilter = yfilter;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value.yfilter = yfilter;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received.yfilter = yfilter;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining.yfilter = yfilter;
    }
    if(value_path == "route-refreshes-received")
    {
        route_refreshes_received.yfilter = yfilter;
    }
    if(value_path == "route-refreshes-sent")
    {
        route_refreshes_sent.yfilter = yfilter;
    }
    if(value_path == "refresh-target-version")
    {
        refresh_target_version.yfilter = yfilter;
    }
    if(value_path == "refresh-version")
    {
        refresh_version.yfilter = yfilter;
    }
    if(value_path == "refresh-acked-version")
    {
        refresh_acked_version.yfilter = yfilter;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present.yfilter = yfilter;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received.yfilter = yfilter;
    }
    if(value_path == "is-default-originate-sent")
    {
        is_default_originate_sent.yfilter = yfilter;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy.yfilter = yfilter;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set.yfilter = yfilter;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set.yfilter = yfilter;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count.yfilter = yfilter;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time.yfilter = yfilter;
    }
    if(value_path == "eo-r-received-in-read-only")
    {
        eo_r_received_in_read_only.yfilter = yfilter;
    }
    if(value_path == "acked-version")
    {
        acked_version.yfilter = yfilter;
    }
    if(value_path == "synced-acked-version")
    {
        synced_acked_version.yfilter = yfilter;
    }
    if(value_path == "outstanding-version")
    {
        outstanding_version.yfilter = yfilter;
    }
    if(value_path == "outstanding-refresh-version")
    {
        outstanding_refresh_version.yfilter = yfilter;
    }
    if(value_path == "outstanding-version-max")
    {
        outstanding_version_max.yfilter = yfilter;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set.yfilter = yfilter;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present.yfilter = yfilter;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby.yfilter = yfilter;
    }
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled.yfilter = yfilter;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible.yfilter = yfilter;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable.yfilter = yfilter;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity.yfilter = yfilter;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags.yfilter = yfilter;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route-unicast")
    {
        advertise_local_labeled_route_unicast.yfilter = yfilter;
    }
    if(value_path == "prefixes-denied-non-cumulative")
    {
        prefixes_denied_non_cumulative.yfilter = yfilter;
    }
    if(value_path == "enable-label-stack")
    {
        enable_label_stack.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-af-performance-statistics" || name == "extended-community" || name == "extended-community-standby" || name == "af-name" || name == "is-neighbor-route-reflector-client" || name == "is-legacy-pe-rt" || name == "is-neighbor-af-capable" || name == "is-soft-reconfiguration-inbound-allowed" || name == "is-use-soft-reconfiguration-always-on" || name == "remove-private-as-from-updates" || name == "remove-private-as-entire-aspath-from-updates" || name == "remove-private-as-from-inbound-updates" || name == "remove-private-as-entire-aspath-from-inbound-updates" || name == "flowspec-validation-d-isable" || name == "flowspec-redirect-validation-d-isable" || name == "orr-group-name" || name == "orr-group-index" || name == "is-orr-root-address-configured" || name == "advertise-afi" || name == "advertise-afi-reorg" || name == "advertise-afi-disable" || name == "encapsulation-type" || name == "advertise-rt-type" || name == "advertise-afi-def-vrf-imp-disable" || name == "advertise-evpnv4-afi-def-vrf-imp-disable" || name == "advertise-evpnv6-afi-def-vrf-imp-disable" || name == "advertise-afi-vrf-re-imp-disable" || name == "advertise-evpnv4-afi-vrf-re-imp-disable" || name == "advertise-evpnv6-afi-vrf-re-imp-disable" || name == "advertise-afi-eo-r-ready" || name == "always-use-next-hop-local" || name == "sent-community-to-neighbor" || name == "sent-gshut-community-to-neighbor" || name == "sent-extended-community-to-neighbor" || name == "neighbor-default-originate" || name == "is-orf-sent" || name == "is-update-deferred" || name == "is-orf-send-scheduled" || name == "update-group-number" || name == "filter-group-index" || name == "is-update-throttled" || name == "is-update-leaving" || name == "vpn-update-gen-enabled" || name == "vpn-update-gen-trigger-enabled" || name == "is-addpath-send-operational" || name == "is-addpath-receive-operational" || name == "neighbor-version" || name == "weight" || name == "max-prefix-limit" || name == "use-max-prefix-warning-only" || name == "max-prefix-discard-extra-paths" || name == "max-prefix-exceed-discard-paths" || name == "max-prefix-threshold-percent" || name == "max-prefix-restart-time" || name == "prefixes-accepted" || name == "prefixes-synced" || name == "prefixes-withdrawn-not-found" || name == "prefixes-denied" || name == "prefixes-denied-no-policy" || name == "prefixes-denied-rt-permit" || name == "prefixes-denied-orf-policy" || name == "prefixes-denied-policy" || name == "number-of-bestpaths" || name == "number-of-best-externalpaths" || name == "prefixes-advertised" || name == "prefixes-be-advertised" || name == "prefixes-suppressed" || name == "prefixes-withdrawn" || name == "is-peer-orf-capable" || name == "is-advertised-orf-send" || name == "is-received-orf-send-capable" || name == "is-advertised-orf-receive" || name == "is-received-orf-receive-capable" || name == "is-advertised-graceful-restart" || name == "is-graceful-restart-state-flag" || name == "is-received-graceful-restart-capable" || name == "is-add-path-send-capability-advertised" || name == "is-add-path-send-capability-received" || name == "is-add-path-receive-capability-advertised" || name == "is-add-path-receive-capability-received" || name == "is-ext-nh-encoding-capability-received" || name == "is-ext-nh-encoding-capability-sent" || name == "restart-time" || name == "local-restart-time" || name == "stale-path-timeout" || name == "rib-purge-timeout-value" || name == "neighbor-preserved-forwarding-state" || name == "long-lived-graceful-restart-stale-time-configured" || name == "long-lived-graceful-restart-stale-time-sent" || name == "long-lived-graceful-restart-stale-time-accept" || name == "long-lived-graceful-restart-capability-received" || name == "long-lived-graceful-restart-stale-time-received" || name == "neighbor-preserved-long-lived-forwarding-state" || name == "neighbor-long-lived-graceful-restart-capable" || name == "neighbor-long-lived-graceful-restart-time-remaining" || name == "route-refreshes-received" || name == "route-refreshes-sent" || name == "refresh-target-version" || name == "refresh-version" || name == "refresh-acked-version" || name == "is-prefix-orf-present" || name == "orf-entries-received" || name == "is-default-originate-sent" || name == "route-policy-prefix-orf" || name == "route-policy-in" || name == "route-policy-out" || name == "route-policy-default-originate" || name == "is-neighbor-ebgp-without-inbound-policy" || name == "is-neighbor-ebgp-without-outbound-policy" || name == "is-as-override-set" || name == "is-allow-as-in-set" || name == "allow-as-in-count" || name == "address-family-long-lived-time" || name == "eo-r-received-in-read-only" || name == "acked-version" || name == "synced-acked-version" || name == "outstanding-version" || name == "outstanding-refresh-version" || name == "outstanding-version-max" || name == "is-aigp-set" || name == "is-rt-present" || name == "is-rt-present-standby" || name == "accept-own-enabled" || name == "selective-multipath-eligible" || name == "afrpki-disable" || name == "afrpki-use-validity" || name == "afrpki-allow-invalid" || name == "afrpki-signal-ibgp" || name == "is-advertise-permanent-network" || name == "is-send-mcast-attr" || name == "import-stitching" || name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "advertise-v4-flags" || name == "advertise-v6-flags" || name == "advertise-local-labeled-route-unicast" || name == "prefixes-denied-non-cumulative" || name == "enable-label-stack")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::NeighborAfPerformanceStatistics()
    :
    sub_group_pending_message_count{YType::uint32, "sub-group-pending-message-count"},
    processed_messages{YType::uint32, "processed-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    split_horizon_update_transmit{YType::uint32, "split-horizon-update-transmit"},
    split_horizon_update_blocked{YType::uint32, "split-horizon-update-blocked"},
    split_horizon_withdraw_transmit{YType::uint32, "split-horizon-withdraw-transmit"},
    split_horizon_withdraw_blocked{YType::uint32, "split-horizon-withdraw-blocked"}
{

    yang_name = "neighbor-af-performance-statistics"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::~NeighborAfPerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_pending_message_count.is_set
	|| processed_messages.is_set
	|| sent_messages.is_set
	|| split_horizon_update_transmit.is_set
	|| split_horizon_update_blocked.is_set
	|| split_horizon_withdraw_transmit.is_set
	|| split_horizon_withdraw_blocked.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_pending_message_count.yfilter)
	|| ydk::is_set(processed_messages.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(split_horizon_update_transmit.yfilter)
	|| ydk::is_set(split_horizon_update_blocked.yfilter)
	|| ydk::is_set(split_horizon_withdraw_transmit.yfilter)
	|| ydk::is_set(split_horizon_withdraw_blocked.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_pending_message_count.is_set || is_set(sub_group_pending_message_count.yfilter)) leaf_name_data.push_back(sub_group_pending_message_count.get_name_leafdata());
    if (processed_messages.is_set || is_set(processed_messages.yfilter)) leaf_name_data.push_back(processed_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (split_horizon_update_transmit.is_set || is_set(split_horizon_update_transmit.yfilter)) leaf_name_data.push_back(split_horizon_update_transmit.get_name_leafdata());
    if (split_horizon_update_blocked.is_set || is_set(split_horizon_update_blocked.yfilter)) leaf_name_data.push_back(split_horizon_update_blocked.get_name_leafdata());
    if (split_horizon_withdraw_transmit.is_set || is_set(split_horizon_withdraw_transmit.yfilter)) leaf_name_data.push_back(split_horizon_withdraw_transmit.get_name_leafdata());
    if (split_horizon_withdraw_blocked.is_set || is_set(split_horizon_withdraw_blocked.yfilter)) leaf_name_data.push_back(split_horizon_withdraw_blocked.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-pending-message-count")
    {
        sub_group_pending_message_count = value;
        sub_group_pending_message_count.value_namespace = name_space;
        sub_group_pending_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-messages")
    {
        processed_messages = value;
        processed_messages.value_namespace = name_space;
        processed_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-update-transmit")
    {
        split_horizon_update_transmit = value;
        split_horizon_update_transmit.value_namespace = name_space;
        split_horizon_update_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-update-blocked")
    {
        split_horizon_update_blocked = value;
        split_horizon_update_blocked.value_namespace = name_space;
        split_horizon_update_blocked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-withdraw-transmit")
    {
        split_horizon_withdraw_transmit = value;
        split_horizon_withdraw_transmit.value_namespace = name_space;
        split_horizon_withdraw_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-withdraw-blocked")
    {
        split_horizon_withdraw_blocked = value;
        split_horizon_withdraw_blocked.value_namespace = name_space;
        split_horizon_withdraw_blocked.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-pending-message-count")
    {
        sub_group_pending_message_count.yfilter = yfilter;
    }
    if(value_path == "processed-messages")
    {
        processed_messages.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "split-horizon-update-transmit")
    {
        split_horizon_update_transmit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-update-blocked")
    {
        split_horizon_update_blocked.yfilter = yfilter;
    }
    if(value_path == "split-horizon-withdraw-transmit")
    {
        split_horizon_withdraw_transmit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-withdraw-blocked")
    {
        split_horizon_withdraw_blocked.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-group-pending-message-count" || name == "processed-messages" || name == "sent-messages" || name == "split-horizon-update-transmit" || name == "split-horizon-update-blocked" || name == "split-horizon-withdraw-transmit" || name == "split-horizon-withdraw-blocked")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::ExtendedCommunityStandby()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community-standby"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::~ExtendedCommunityStandby()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::NextHopVrf()
    :
    total_processing_time{YType::uint32, "total-processing-time"},
    max_proc_notification_time{YType::uint32, "max-proc-notification-time"},
    max_notification_bestpath_deletes{YType::uint32, "max-notification-bestpath-deletes"},
    max_notification_bestpath_changes{YType::uint32, "max-notification-bestpath-changes"},
    maximum_processing_time{YType::uint32, "maximum-processing-time"},
    last_notificationication_time{YType::uint32, "last-notificationication-time"},
    last_notification_processing_time{YType::uint32, "last-notification-processing-time"}
{

    yang_name = "next-hop-vrf"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::~NextHopVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::has_data() const
{
    if (is_presence_container) return true;
    return total_processing_time.is_set
	|| max_proc_notification_time.is_set
	|| max_notification_bestpath_deletes.is_set
	|| max_notification_bestpath_changes.is_set
	|| maximum_processing_time.is_set
	|| last_notificationication_time.is_set
	|| last_notification_processing_time.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_processing_time.yfilter)
	|| ydk::is_set(max_proc_notification_time.yfilter)
	|| ydk::is_set(max_notification_bestpath_deletes.yfilter)
	|| ydk::is_set(max_notification_bestpath_changes.yfilter)
	|| ydk::is_set(maximum_processing_time.yfilter)
	|| ydk::is_set(last_notificationication_time.yfilter)
	|| ydk::is_set(last_notification_processing_time.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_processing_time.is_set || is_set(total_processing_time.yfilter)) leaf_name_data.push_back(total_processing_time.get_name_leafdata());
    if (max_proc_notification_time.is_set || is_set(max_proc_notification_time.yfilter)) leaf_name_data.push_back(max_proc_notification_time.get_name_leafdata());
    if (max_notification_bestpath_deletes.is_set || is_set(max_notification_bestpath_deletes.yfilter)) leaf_name_data.push_back(max_notification_bestpath_deletes.get_name_leafdata());
    if (max_notification_bestpath_changes.is_set || is_set(max_notification_bestpath_changes.yfilter)) leaf_name_data.push_back(max_notification_bestpath_changes.get_name_leafdata());
    if (maximum_processing_time.is_set || is_set(maximum_processing_time.yfilter)) leaf_name_data.push_back(maximum_processing_time.get_name_leafdata());
    if (last_notificationication_time.is_set || is_set(last_notificationication_time.yfilter)) leaf_name_data.push_back(last_notificationication_time.get_name_leafdata());
    if (last_notification_processing_time.is_set || is_set(last_notification_processing_time.yfilter)) leaf_name_data.push_back(last_notification_processing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-processing-time")
    {
        total_processing_time = value;
        total_processing_time.value_namespace = name_space;
        total_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-proc-notification-time")
    {
        max_proc_notification_time = value;
        max_proc_notification_time.value_namespace = name_space;
        max_proc_notification_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-notification-bestpath-deletes")
    {
        max_notification_bestpath_deletes = value;
        max_notification_bestpath_deletes.value_namespace = name_space;
        max_notification_bestpath_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-notification-bestpath-changes")
    {
        max_notification_bestpath_changes = value;
        max_notification_bestpath_changes.value_namespace = name_space;
        max_notification_bestpath_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-processing-time")
    {
        maximum_processing_time = value;
        maximum_processing_time.value_namespace = name_space;
        maximum_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-notificationication-time")
    {
        last_notificationication_time = value;
        last_notificationication_time.value_namespace = name_space;
        last_notificationication_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-notification-processing-time")
    {
        last_notification_processing_time = value;
        last_notification_processing_time.value_namespace = name_space;
        last_notification_processing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-processing-time")
    {
        total_processing_time.yfilter = yfilter;
    }
    if(value_path == "max-proc-notification-time")
    {
        max_proc_notification_time.yfilter = yfilter;
    }
    if(value_path == "max-notification-bestpath-deletes")
    {
        max_notification_bestpath_deletes.yfilter = yfilter;
    }
    if(value_path == "max-notification-bestpath-changes")
    {
        max_notification_bestpath_changes.yfilter = yfilter;
    }
    if(value_path == "maximum-processing-time")
    {
        maximum_processing_time.yfilter = yfilter;
    }
    if(value_path == "last-notificationication-time")
    {
        last_notificationication_time.yfilter = yfilter;
    }
    if(value_path == "last-notification-processing-time")
    {
        last_notification_processing_time.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-processing-time" || name == "max-proc-notification-time" || name == "max-notification-bestpath-deletes" || name == "max-notification-bestpath-changes" || name == "maximum-processing-time" || name == "last-notificationication-time" || name == "last-notification-processing-time")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRanges()
    :
    neighbor_range(this, {"neighbor_range_address"})
{

    yang_name = "neighbor-ranges"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::~NeighborRanges()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_range.len(); index++)
    {
        if(neighbor_range[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::has_operation() const
{
    for (std::size_t index=0; index<neighbor_range.len(); index++)
    {
        if(neighbor_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-range")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange>();
        ent_->parent = this;
        neighbor_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-range")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::NeighborRange()
    :
    neighbor_range_address{YType::str, "neighbor-range-address"},
    speaker_id{YType::uint8, "speaker-id"},
    description{YType::str, "description"},
    local_as{YType::uint32, "local-as"},
    remote_as{YType::uint32, "remote-as"},
    has_internal_link{YType::boolean, "has-internal-link"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    neighbor_range_prefix_length{YType::uint8, "neighbor-range-prefix-length"},
    is_administratively_shut_down{YType::boolean, "is-administratively-shut-down"},
    is_neighbor_max_prefix_shutdown{YType::boolean, "is-neighbor-max-prefix-shutdown"},
    is_out_of_memory_forced_up{YType::boolean, "is-out-of-memory-forced-up"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    suppress4_byte_as{YType::boolean, "suppress4-byte-as"},
    bfd_session_enable_mode{YType::enumeration, "bfd-session-enable-mode"},
    bfd_minintervalval{YType::uint32, "bfd-minintervalval"},
    bfd_multiplierval{YType::uint32, "bfd-multiplierval"},
    ebgp_time_to_live{YType::uint32, "ebgp-time-to-live"},
    is_ebgp_multihop_bgp_mpls_forwarding_disabled{YType::boolean, "is-ebgp-multihop-bgp-mpls-forwarding-disabled"},
    tcpmss{YType::uint32, "tcpmss"},
    msg_log_in{YType::uint32, "msg-log-in"},
    msg_log_out{YType::uint32, "msg-log-out"},
    neighbor_local_as{YType::uint32, "neighbor-local-as"},
    local_as_no_prepend{YType::boolean, "local-as-no-prepend"},
    is_capability_negotiation_performed{YType::boolean, "is-capability-negotiation-performed"},
    configured_hold_time{YType::uint16, "configured-hold-time"},
    configured_keepalive{YType::uint16, "configured-keepalive"},
    configured_min_acc_hold_time{YType::uint16, "configured-min-acc-hold-time"},
    min_advertise_interval{YType::uint32, "min-advertise-interval"},
    min_advertise_interval_msecs{YType::uint32, "min-advertise-interval-msecs"},
    min_origination_interval{YType::uint16, "min-origination-interval"},
    remote_as_number{YType::uint32, "remote-as-number"},
    dmz_link_bandwidth{YType::uint32, "dmz-link-bandwidth"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_mode{YType::enumeration, "ebgp-send-dmz-mode"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    tcp_session_open_mode{YType::enumeration, "tcp-session-open-mode"},
    vrf_name{YType::str, "vrf-name"},
    standby_rp{YType::boolean, "standby-rp"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    graceful_restart_enabled_nbr{YType::boolean, "graceful-restart-enabled-nbr"},
    gr_restart_time{YType::uint32, "gr-restart-time"},
    gr_stale_path_time{YType::uint32, "gr-stale-path-time"},
    is_passive_close{YType::boolean, "is-passive-close"},
    nbr_enforce_first_as{YType::boolean, "nbr-enforce-first-as"},
    active_bmp_servers{YType::uint8, "active-bmp-servers"},
    nbr_cluster_id{YType::uint32, "nbr-cluster-id"},
    nbr_in_cluster{YType::uint8, "nbr-in-cluster"},
    ignore_connected{YType::boolean, "ignore-connected"},
    internal_vpn_client{YType::boolean, "internal-vpn-client"},
    local_as_replace_as{YType::boolean, "local-as-replace-as"},
    local_as_dual_as{YType::boolean, "local-as-dual-as"},
    local_as_dual_as_mode_native{YType::boolean, "local-as-dual-as-mode-native"},
    egress_peer_engineering_enabled{YType::boolean, "egress-peer-engineering-enabled"},
    discard_as4_path{YType::uint32, "discard-as4-path"},
    rpki_disable{YType::boolean, "rpki-disable"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"},
    remote_as_list_name{YType::str, "remote-as-list-name"},
    nbr_rcv_size{YType::uint32, "nbr-rcv-size"},
    nbr_send_size{YType::uint32, "nbr-send-size"},
    islocal_address_cfg{YType::boolean, "islocal-address-cfg"},
    update_source{YType::str, "update-source"},
    addpath_send_enable{YType::boolean, "addpath-send-enable"},
    addpath_receive_enable{YType::boolean, "addpath-receive-enable"},
    addpath_send_disable{YType::boolean, "addpath-send-disable"},
    addpath_receive_disable{YType::boolean, "addpath-receive-disable"},
    upd_errh_noreset{YType::boolean, "upd-errh-noreset"},
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_bug_circular{YType::boolean, "msg-bug-circular"},
    syslog_enable{YType::boolean, "syslog-enable"},
    oper_attrf_enable{YType::boolean, "oper-attrf-enable"},
    attrf_group_name{YType::str, "attrf-group-name"},
    max_peers{YType::uint32, "max-peers"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    current_peers{YType::uint32, "current-peers"},
    range_open_match{YType::uint32, "range-open-match"},
    range_open_accepted{YType::uint32, "range-open-accepted"},
    range_max_drop{YType::uint32, "range-max-drop"},
    range_inst_error{YType::uint32, "range-inst-error"}
        ,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress>())
    , connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress>())
    , graceful_maintenance(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance>())
    , cfg_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress>())
    , af_data(this, {})
    , instance(this, {})
{
    connection_local_address->parent = this;
    connection_remote_address->parent = this;
    graceful_maintenance->parent = this;
    cfg_local_address->parent = this;

    yang_name = "neighbor-range"; yang_parent_name = "neighbor-ranges"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::~NeighborRange()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_data.len(); index++)
    {
        if(af_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return neighbor_range_address.is_set
	|| speaker_id.is_set
	|| description.is_set
	|| local_as.is_set
	|| remote_as.is_set
	|| has_internal_link.is_set
	|| is_local_address_configured.is_set
	|| neighbor_range_prefix_length.is_set
	|| is_administratively_shut_down.is_set
	|| is_neighbor_max_prefix_shutdown.is_set
	|| is_out_of_memory_forced_up.is_set
	|| ttl_security_enabled.is_set
	|| suppress4_byte_as.is_set
	|| bfd_session_enable_mode.is_set
	|| bfd_minintervalval.is_set
	|| bfd_multiplierval.is_set
	|| ebgp_time_to_live.is_set
	|| is_ebgp_multihop_bgp_mpls_forwarding_disabled.is_set
	|| tcpmss.is_set
	|| msg_log_in.is_set
	|| msg_log_out.is_set
	|| neighbor_local_as.is_set
	|| local_as_no_prepend.is_set
	|| is_capability_negotiation_performed.is_set
	|| configured_hold_time.is_set
	|| configured_keepalive.is_set
	|| configured_min_acc_hold_time.is_set
	|| min_advertise_interval.is_set
	|| min_advertise_interval_msecs.is_set
	|| min_origination_interval.is_set
	|| remote_as_number.is_set
	|| dmz_link_bandwidth.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_mode.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| tcp_session_open_mode.is_set
	|| vrf_name.is_set
	|| standby_rp.is_set
	|| nsr_enabled.is_set
	|| graceful_restart_enabled_nbr.is_set
	|| gr_restart_time.is_set
	|| gr_stale_path_time.is_set
	|| is_passive_close.is_set
	|| nbr_enforce_first_as.is_set
	|| active_bmp_servers.is_set
	|| nbr_cluster_id.is_set
	|| nbr_in_cluster.is_set
	|| ignore_connected.is_set
	|| internal_vpn_client.is_set
	|| local_as_replace_as.is_set
	|| local_as_dual_as.is_set
	|| local_as_dual_as_mode_native.is_set
	|| egress_peer_engineering_enabled.is_set
	|| discard_as4_path.is_set
	|| rpki_disable.is_set
	|| rpki_use_validity.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_signal_ibgp.is_set
	|| remote_as_list_name.is_set
	|| nbr_rcv_size.is_set
	|| nbr_send_size.is_set
	|| islocal_address_cfg.is_set
	|| update_source.is_set
	|| addpath_send_enable.is_set
	|| addpath_receive_enable.is_set
	|| addpath_send_disable.is_set
	|| addpath_receive_disable.is_set
	|| upd_errh_noreset.is_set
	|| msg_buf_count.is_set
	|| msg_bug_circular.is_set
	|| syslog_enable.is_set
	|| oper_attrf_enable.is_set
	|| attrf_group_name.is_set
	|| max_peers.is_set
	|| idle_watch_time.is_set
	|| current_peers.is_set
	|| range_open_match.is_set
	|| range_open_accepted.is_set
	|| range_max_drop.is_set
	|| range_inst_error.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (cfg_local_address !=  nullptr && cfg_local_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::has_operation() const
{
    for (std::size_t index=0; index<af_data.len(); index++)
    {
        if(af_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_range_address.yfilter)
	|| ydk::is_set(speaker_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(has_internal_link.yfilter)
	|| ydk::is_set(is_local_address_configured.yfilter)
	|| ydk::is_set(neighbor_range_prefix_length.yfilter)
	|| ydk::is_set(is_administratively_shut_down.yfilter)
	|| ydk::is_set(is_neighbor_max_prefix_shutdown.yfilter)
	|| ydk::is_set(is_out_of_memory_forced_up.yfilter)
	|| ydk::is_set(ttl_security_enabled.yfilter)
	|| ydk::is_set(suppress4_byte_as.yfilter)
	|| ydk::is_set(bfd_session_enable_mode.yfilter)
	|| ydk::is_set(bfd_minintervalval.yfilter)
	|| ydk::is_set(bfd_multiplierval.yfilter)
	|| ydk::is_set(ebgp_time_to_live.yfilter)
	|| ydk::is_set(is_ebgp_multihop_bgp_mpls_forwarding_disabled.yfilter)
	|| ydk::is_set(tcpmss.yfilter)
	|| ydk::is_set(msg_log_in.yfilter)
	|| ydk::is_set(msg_log_out.yfilter)
	|| ydk::is_set(neighbor_local_as.yfilter)
	|| ydk::is_set(local_as_no_prepend.yfilter)
	|| ydk::is_set(is_capability_negotiation_performed.yfilter)
	|| ydk::is_set(configured_hold_time.yfilter)
	|| ydk::is_set(configured_keepalive.yfilter)
	|| ydk::is_set(configured_min_acc_hold_time.yfilter)
	|| ydk::is_set(min_advertise_interval.yfilter)
	|| ydk::is_set(min_advertise_interval_msecs.yfilter)
	|| ydk::is_set(min_origination_interval.yfilter)
	|| ydk::is_set(remote_as_number.yfilter)
	|| ydk::is_set(dmz_link_bandwidth.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(ebgp_send_dmz_mode.yfilter)
	|| ydk::is_set(tos_type.yfilter)
	|| ydk::is_set(tos_value.yfilter)
	|| ydk::is_set(tcp_session_open_mode.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(standby_rp.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(graceful_restart_enabled_nbr.yfilter)
	|| ydk::is_set(gr_restart_time.yfilter)
	|| ydk::is_set(gr_stale_path_time.yfilter)
	|| ydk::is_set(is_passive_close.yfilter)
	|| ydk::is_set(nbr_enforce_first_as.yfilter)
	|| ydk::is_set(active_bmp_servers.yfilter)
	|| ydk::is_set(nbr_cluster_id.yfilter)
	|| ydk::is_set(nbr_in_cluster.yfilter)
	|| ydk::is_set(ignore_connected.yfilter)
	|| ydk::is_set(internal_vpn_client.yfilter)
	|| ydk::is_set(local_as_replace_as.yfilter)
	|| ydk::is_set(local_as_dual_as.yfilter)
	|| ydk::is_set(local_as_dual_as_mode_native.yfilter)
	|| ydk::is_set(egress_peer_engineering_enabled.yfilter)
	|| ydk::is_set(discard_as4_path.yfilter)
	|| ydk::is_set(rpki_disable.yfilter)
	|| ydk::is_set(rpki_use_validity.yfilter)
	|| ydk::is_set(rpki_allow_invalid.yfilter)
	|| ydk::is_set(rpki_signal_ibgp.yfilter)
	|| ydk::is_set(remote_as_list_name.yfilter)
	|| ydk::is_set(nbr_rcv_size.yfilter)
	|| ydk::is_set(nbr_send_size.yfilter)
	|| ydk::is_set(islocal_address_cfg.yfilter)
	|| ydk::is_set(update_source.yfilter)
	|| ydk::is_set(addpath_send_enable.yfilter)
	|| ydk::is_set(addpath_receive_enable.yfilter)
	|| ydk::is_set(addpath_send_disable.yfilter)
	|| ydk::is_set(addpath_receive_disable.yfilter)
	|| ydk::is_set(upd_errh_noreset.yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_bug_circular.yfilter)
	|| ydk::is_set(syslog_enable.yfilter)
	|| ydk::is_set(oper_attrf_enable.yfilter)
	|| ydk::is_set(attrf_group_name.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(current_peers.yfilter)
	|| ydk::is_set(range_open_match.yfilter)
	|| ydk::is_set(range_open_accepted.yfilter)
	|| ydk::is_set(range_max_drop.yfilter)
	|| ydk::is_set(range_inst_error.yfilter)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (cfg_local_address !=  nullptr && cfg_local_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-range";
    ADD_KEY_TOKEN(neighbor_range_address, "neighbor-range-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_range_address.is_set || is_set(neighbor_range_address.yfilter)) leaf_name_data.push_back(neighbor_range_address.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.yfilter)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (has_internal_link.is_set || is_set(has_internal_link.yfilter)) leaf_name_data.push_back(has_internal_link.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.yfilter)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (neighbor_range_prefix_length.is_set || is_set(neighbor_range_prefix_length.yfilter)) leaf_name_data.push_back(neighbor_range_prefix_length.get_name_leafdata());
    if (is_administratively_shut_down.is_set || is_set(is_administratively_shut_down.yfilter)) leaf_name_data.push_back(is_administratively_shut_down.get_name_leafdata());
    if (is_neighbor_max_prefix_shutdown.is_set || is_set(is_neighbor_max_prefix_shutdown.yfilter)) leaf_name_data.push_back(is_neighbor_max_prefix_shutdown.get_name_leafdata());
    if (is_out_of_memory_forced_up.is_set || is_set(is_out_of_memory_forced_up.yfilter)) leaf_name_data.push_back(is_out_of_memory_forced_up.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.yfilter)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (suppress4_byte_as.is_set || is_set(suppress4_byte_as.yfilter)) leaf_name_data.push_back(suppress4_byte_as.get_name_leafdata());
    if (bfd_session_enable_mode.is_set || is_set(bfd_session_enable_mode.yfilter)) leaf_name_data.push_back(bfd_session_enable_mode.get_name_leafdata());
    if (bfd_minintervalval.is_set || is_set(bfd_minintervalval.yfilter)) leaf_name_data.push_back(bfd_minintervalval.get_name_leafdata());
    if (bfd_multiplierval.is_set || is_set(bfd_multiplierval.yfilter)) leaf_name_data.push_back(bfd_multiplierval.get_name_leafdata());
    if (ebgp_time_to_live.is_set || is_set(ebgp_time_to_live.yfilter)) leaf_name_data.push_back(ebgp_time_to_live.get_name_leafdata());
    if (is_ebgp_multihop_bgp_mpls_forwarding_disabled.is_set || is_set(is_ebgp_multihop_bgp_mpls_forwarding_disabled.yfilter)) leaf_name_data.push_back(is_ebgp_multihop_bgp_mpls_forwarding_disabled.get_name_leafdata());
    if (tcpmss.is_set || is_set(tcpmss.yfilter)) leaf_name_data.push_back(tcpmss.get_name_leafdata());
    if (msg_log_in.is_set || is_set(msg_log_in.yfilter)) leaf_name_data.push_back(msg_log_in.get_name_leafdata());
    if (msg_log_out.is_set || is_set(msg_log_out.yfilter)) leaf_name_data.push_back(msg_log_out.get_name_leafdata());
    if (neighbor_local_as.is_set || is_set(neighbor_local_as.yfilter)) leaf_name_data.push_back(neighbor_local_as.get_name_leafdata());
    if (local_as_no_prepend.is_set || is_set(local_as_no_prepend.yfilter)) leaf_name_data.push_back(local_as_no_prepend.get_name_leafdata());
    if (is_capability_negotiation_performed.is_set || is_set(is_capability_negotiation_performed.yfilter)) leaf_name_data.push_back(is_capability_negotiation_performed.get_name_leafdata());
    if (configured_hold_time.is_set || is_set(configured_hold_time.yfilter)) leaf_name_data.push_back(configured_hold_time.get_name_leafdata());
    if (configured_keepalive.is_set || is_set(configured_keepalive.yfilter)) leaf_name_data.push_back(configured_keepalive.get_name_leafdata());
    if (configured_min_acc_hold_time.is_set || is_set(configured_min_acc_hold_time.yfilter)) leaf_name_data.push_back(configured_min_acc_hold_time.get_name_leafdata());
    if (min_advertise_interval.is_set || is_set(min_advertise_interval.yfilter)) leaf_name_data.push_back(min_advertise_interval.get_name_leafdata());
    if (min_advertise_interval_msecs.is_set || is_set(min_advertise_interval_msecs.yfilter)) leaf_name_data.push_back(min_advertise_interval_msecs.get_name_leafdata());
    if (min_origination_interval.is_set || is_set(min_origination_interval.yfilter)) leaf_name_data.push_back(min_origination_interval.get_name_leafdata());
    if (remote_as_number.is_set || is_set(remote_as_number.yfilter)) leaf_name_data.push_back(remote_as_number.get_name_leafdata());
    if (dmz_link_bandwidth.is_set || is_set(dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(dmz_link_bandwidth.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_mode.is_set || is_set(ebgp_send_dmz_mode.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_mode.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.yfilter)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.yfilter)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (tcp_session_open_mode.is_set || is_set(tcp_session_open_mode.yfilter)) leaf_name_data.push_back(tcp_session_open_mode.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (standby_rp.is_set || is_set(standby_rp.yfilter)) leaf_name_data.push_back(standby_rp.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (graceful_restart_enabled_nbr.is_set || is_set(graceful_restart_enabled_nbr.yfilter)) leaf_name_data.push_back(graceful_restart_enabled_nbr.get_name_leafdata());
    if (gr_restart_time.is_set || is_set(gr_restart_time.yfilter)) leaf_name_data.push_back(gr_restart_time.get_name_leafdata());
    if (gr_stale_path_time.is_set || is_set(gr_stale_path_time.yfilter)) leaf_name_data.push_back(gr_stale_path_time.get_name_leafdata());
    if (is_passive_close.is_set || is_set(is_passive_close.yfilter)) leaf_name_data.push_back(is_passive_close.get_name_leafdata());
    if (nbr_enforce_first_as.is_set || is_set(nbr_enforce_first_as.yfilter)) leaf_name_data.push_back(nbr_enforce_first_as.get_name_leafdata());
    if (active_bmp_servers.is_set || is_set(active_bmp_servers.yfilter)) leaf_name_data.push_back(active_bmp_servers.get_name_leafdata());
    if (nbr_cluster_id.is_set || is_set(nbr_cluster_id.yfilter)) leaf_name_data.push_back(nbr_cluster_id.get_name_leafdata());
    if (nbr_in_cluster.is_set || is_set(nbr_in_cluster.yfilter)) leaf_name_data.push_back(nbr_in_cluster.get_name_leafdata());
    if (ignore_connected.is_set || is_set(ignore_connected.yfilter)) leaf_name_data.push_back(ignore_connected.get_name_leafdata());
    if (internal_vpn_client.is_set || is_set(internal_vpn_client.yfilter)) leaf_name_data.push_back(internal_vpn_client.get_name_leafdata());
    if (local_as_replace_as.is_set || is_set(local_as_replace_as.yfilter)) leaf_name_data.push_back(local_as_replace_as.get_name_leafdata());
    if (local_as_dual_as.is_set || is_set(local_as_dual_as.yfilter)) leaf_name_data.push_back(local_as_dual_as.get_name_leafdata());
    if (local_as_dual_as_mode_native.is_set || is_set(local_as_dual_as_mode_native.yfilter)) leaf_name_data.push_back(local_as_dual_as_mode_native.get_name_leafdata());
    if (egress_peer_engineering_enabled.is_set || is_set(egress_peer_engineering_enabled.yfilter)) leaf_name_data.push_back(egress_peer_engineering_enabled.get_name_leafdata());
    if (discard_as4_path.is_set || is_set(discard_as4_path.yfilter)) leaf_name_data.push_back(discard_as4_path.get_name_leafdata());
    if (rpki_disable.is_set || is_set(rpki_disable.yfilter)) leaf_name_data.push_back(rpki_disable.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.yfilter)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());
    if (remote_as_list_name.is_set || is_set(remote_as_list_name.yfilter)) leaf_name_data.push_back(remote_as_list_name.get_name_leafdata());
    if (nbr_rcv_size.is_set || is_set(nbr_rcv_size.yfilter)) leaf_name_data.push_back(nbr_rcv_size.get_name_leafdata());
    if (nbr_send_size.is_set || is_set(nbr_send_size.yfilter)) leaf_name_data.push_back(nbr_send_size.get_name_leafdata());
    if (islocal_address_cfg.is_set || is_set(islocal_address_cfg.yfilter)) leaf_name_data.push_back(islocal_address_cfg.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.yfilter)) leaf_name_data.push_back(update_source.get_name_leafdata());
    if (addpath_send_enable.is_set || is_set(addpath_send_enable.yfilter)) leaf_name_data.push_back(addpath_send_enable.get_name_leafdata());
    if (addpath_receive_enable.is_set || is_set(addpath_receive_enable.yfilter)) leaf_name_data.push_back(addpath_receive_enable.get_name_leafdata());
    if (addpath_send_disable.is_set || is_set(addpath_send_disable.yfilter)) leaf_name_data.push_back(addpath_send_disable.get_name_leafdata());
    if (addpath_receive_disable.is_set || is_set(addpath_receive_disable.yfilter)) leaf_name_data.push_back(addpath_receive_disable.get_name_leafdata());
    if (upd_errh_noreset.is_set || is_set(upd_errh_noreset.yfilter)) leaf_name_data.push_back(upd_errh_noreset.get_name_leafdata());
    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_bug_circular.is_set || is_set(msg_bug_circular.yfilter)) leaf_name_data.push_back(msg_bug_circular.get_name_leafdata());
    if (syslog_enable.is_set || is_set(syslog_enable.yfilter)) leaf_name_data.push_back(syslog_enable.get_name_leafdata());
    if (oper_attrf_enable.is_set || is_set(oper_attrf_enable.yfilter)) leaf_name_data.push_back(oper_attrf_enable.get_name_leafdata());
    if (attrf_group_name.is_set || is_set(attrf_group_name.yfilter)) leaf_name_data.push_back(attrf_group_name.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (current_peers.is_set || is_set(current_peers.yfilter)) leaf_name_data.push_back(current_peers.get_name_leafdata());
    if (range_open_match.is_set || is_set(range_open_match.yfilter)) leaf_name_data.push_back(range_open_match.get_name_leafdata());
    if (range_open_accepted.is_set || is_set(range_open_accepted.yfilter)) leaf_name_data.push_back(range_open_accepted.get_name_leafdata());
    if (range_max_drop.is_set || is_set(range_max_drop.yfilter)) leaf_name_data.push_back(range_max_drop.get_name_leafdata());
    if (range_inst_error.is_set || is_set(range_inst_error.yfilter)) leaf_name_data.push_back(range_inst_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address == nullptr)
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress>();
        }
        return connection_local_address;
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address == nullptr)
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress>();
        }
        return connection_remote_address;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "cfg-local-address")
    {
        if(cfg_local_address == nullptr)
        {
            cfg_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress>();
        }
        return cfg_local_address;
    }

    if(child_yang_name == "af-data")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData>();
        ent_->parent = this;
        af_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connection_local_address != nullptr)
    {
        _children["connection-local-address"] = connection_local_address;
    }

    if(connection_remote_address != nullptr)
    {
        _children["connection-remote-address"] = connection_remote_address;
    }

    if(graceful_maintenance != nullptr)
    {
        _children["graceful-maintenance"] = graceful_maintenance;
    }

    if(cfg_local_address != nullptr)
    {
        _children["cfg-local-address"] = cfg_local_address;
    }

    count_ = 0;
    for (auto ent_ : af_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-range-address")
    {
        neighbor_range_address = value;
        neighbor_range_address.value_namespace = name_space;
        neighbor_range_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
        speaker_id.value_namespace = name_space;
        speaker_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-internal-link")
    {
        has_internal_link = value;
        has_internal_link.value_namespace = name_space;
        has_internal_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
        is_local_address_configured.value_namespace = name_space;
        is_local_address_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-range-prefix-length")
    {
        neighbor_range_prefix_length = value;
        neighbor_range_prefix_length.value_namespace = name_space;
        neighbor_range_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-administratively-shut-down")
    {
        is_administratively_shut_down = value;
        is_administratively_shut_down.value_namespace = name_space;
        is_administratively_shut_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-max-prefix-shutdown")
    {
        is_neighbor_max_prefix_shutdown = value;
        is_neighbor_max_prefix_shutdown.value_namespace = name_space;
        is_neighbor_max_prefix_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-out-of-memory-forced-up")
    {
        is_out_of_memory_forced_up = value;
        is_out_of_memory_forced_up.value_namespace = name_space;
        is_out_of_memory_forced_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
        ttl_security_enabled.value_namespace = name_space;
        ttl_security_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress4-byte-as")
    {
        suppress4_byte_as = value;
        suppress4_byte_as.value_namespace = name_space;
        suppress4_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-enable-mode")
    {
        bfd_session_enable_mode = value;
        bfd_session_enable_mode.value_namespace = name_space;
        bfd_session_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minintervalval")
    {
        bfd_minintervalval = value;
        bfd_minintervalval.value_namespace = name_space;
        bfd_minintervalval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplierval")
    {
        bfd_multiplierval = value;
        bfd_multiplierval.value_namespace = name_space;
        bfd_multiplierval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-time-to-live")
    {
        ebgp_time_to_live = value;
        ebgp_time_to_live.value_namespace = name_space;
        ebgp_time_to_live.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ebgp-multihop-bgp-mpls-forwarding-disabled")
    {
        is_ebgp_multihop_bgp_mpls_forwarding_disabled = value;
        is_ebgp_multihop_bgp_mpls_forwarding_disabled.value_namespace = name_space;
        is_ebgp_multihop_bgp_mpls_forwarding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpmss")
    {
        tcpmss = value;
        tcpmss.value_namespace = name_space;
        tcpmss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-in")
    {
        msg_log_in = value;
        msg_log_in.value_namespace = name_space;
        msg_log_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-out")
    {
        msg_log_out = value;
        msg_log_out.value_namespace = name_space;
        msg_log_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-local-as")
    {
        neighbor_local_as = value;
        neighbor_local_as.value_namespace = name_space;
        neighbor_local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as-no-prepend")
    {
        local_as_no_prepend = value;
        local_as_no_prepend.value_namespace = name_space;
        local_as_no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-capability-negotiation-performed")
    {
        is_capability_negotiation_performed = value;
        is_capability_negotiation_performed.value_namespace = name_space;
        is_capability_negotiation_performed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-hold-time")
    {
        configured_hold_time = value;
        configured_hold_time.value_namespace = name_space;
        configured_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-keepalive")
    {
        configured_keepalive = value;
        configured_keepalive.value_namespace = name_space;
        configured_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-acc-hold-time")
    {
        configured_min_acc_hold_time = value;
        configured_min_acc_hold_time.value_namespace = name_space;
        configured_min_acc_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-advertise-interval")
    {
        min_advertise_interval = value;
        min_advertise_interval.value_namespace = name_space;
        min_advertise_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-advertise-interval-msecs")
    {
        min_advertise_interval_msecs = value;
        min_advertise_interval_msecs.value_namespace = name_space;
        min_advertise_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-origination-interval")
    {
        min_origination_interval = value;
        min_origination_interval.value_namespace = name_space;
        min_origination_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-number")
    {
        remote_as_number = value;
        remote_as_number.value_namespace = name_space;
        remote_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmz-link-bandwidth")
    {
        dmz_link_bandwidth = value;
        dmz_link_bandwidth.value_namespace = name_space;
        dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-mode")
    {
        ebgp_send_dmz_mode = value;
        ebgp_send_dmz_mode.value_namespace = name_space;
        ebgp_send_dmz_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
        tos_type.value_namespace = name_space;
        tos_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
        tos_value.value_namespace = name_space;
        tos_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-session-open-mode")
    {
        tcp_session_open_mode = value;
        tcp_session_open_mode.value_namespace = name_space;
        tcp_session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-rp")
    {
        standby_rp = value;
        standby_rp.value_namespace = name_space;
        standby_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
        nsr_enabled.value_namespace = name_space;
        nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-enabled-nbr")
    {
        graceful_restart_enabled_nbr = value;
        graceful_restart_enabled_nbr.value_namespace = name_space;
        graceful_restart_enabled_nbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gr-restart-time")
    {
        gr_restart_time = value;
        gr_restart_time.value_namespace = name_space;
        gr_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gr-stale-path-time")
    {
        gr_stale_path_time = value;
        gr_stale_path_time.value_namespace = name_space;
        gr_stale_path_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive-close")
    {
        is_passive_close = value;
        is_passive_close.value_namespace = name_space;
        is_passive_close.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-enforce-first-as")
    {
        nbr_enforce_first_as = value;
        nbr_enforce_first_as.value_namespace = name_space;
        nbr_enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-bmp-servers")
    {
        active_bmp_servers = value;
        active_bmp_servers.value_namespace = name_space;
        active_bmp_servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-cluster-id")
    {
        nbr_cluster_id = value;
        nbr_cluster_id.value_namespace = name_space;
        nbr_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-in-cluster")
    {
        nbr_in_cluster = value;
        nbr_in_cluster.value_namespace = name_space;
        nbr_in_cluster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected")
    {
        ignore_connected = value;
        ignore_connected.value_namespace = name_space;
        ignore_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client")
    {
        internal_vpn_client = value;
        internal_vpn_client.value_namespace = name_space;
        internal_vpn_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as = value;
        local_as_replace_as.value_namespace = name_space;
        local_as_replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as-dual-as")
    {
        local_as_dual_as = value;
        local_as_dual_as.value_namespace = name_space;
        local_as_dual_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as-dual-as-mode-native")
    {
        local_as_dual_as_mode_native = value;
        local_as_dual_as_mode_native.value_namespace = name_space;
        local_as_dual_as_mode_native.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering-enabled")
    {
        egress_peer_engineering_enabled = value;
        egress_peer_engineering_enabled.value_namespace = name_space;
        egress_peer_engineering_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-as4-path")
    {
        discard_as4_path = value;
        discard_as4_path.value_namespace = name_space;
        discard_as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-disable")
    {
        rpki_disable = value;
        rpki_disable.value_namespace = name_space;
        rpki_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
        rpki_use_validity.value_namespace = name_space;
        rpki_use_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
        rpki_allow_invalid.value_namespace = name_space;
        rpki_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
        rpki_signal_ibgp.value_namespace = name_space;
        rpki_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list-name")
    {
        remote_as_list_name = value;
        remote_as_list_name.value_namespace = name_space;
        remote_as_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-rcv-size")
    {
        nbr_rcv_size = value;
        nbr_rcv_size.value_namespace = name_space;
        nbr_rcv_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-send-size")
    {
        nbr_send_size = value;
        nbr_send_size.value_namespace = name_space;
        nbr_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "islocal-address-cfg")
    {
        islocal_address_cfg = value;
        islocal_address_cfg.value_namespace = name_space;
        islocal_address_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source")
    {
        update_source = value;
        update_source.value_namespace = name_space;
        update_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addpath-send-enable")
    {
        addpath_send_enable = value;
        addpath_send_enable.value_namespace = name_space;
        addpath_send_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addpath-receive-enable")
    {
        addpath_receive_enable = value;
        addpath_receive_enable.value_namespace = name_space;
        addpath_receive_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addpath-send-disable")
    {
        addpath_send_disable = value;
        addpath_send_disable.value_namespace = name_space;
        addpath_send_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addpath-receive-disable")
    {
        addpath_receive_disable = value;
        addpath_receive_disable.value_namespace = name_space;
        addpath_receive_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upd-errh-noreset")
    {
        upd_errh_noreset = value;
        upd_errh_noreset.value_namespace = name_space;
        upd_errh_noreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-bug-circular")
    {
        msg_bug_circular = value;
        msg_bug_circular.value_namespace = name_space;
        msg_bug_circular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog-enable")
    {
        syslog_enable = value;
        syslog_enable.value_namespace = name_space;
        syslog_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-attrf-enable")
    {
        oper_attrf_enable = value;
        oper_attrf_enable.value_namespace = name_space;
        oper_attrf_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrf-group-name")
    {
        attrf_group_name = value;
        attrf_group_name.value_namespace = name_space;
        attrf_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-peers")
    {
        current_peers = value;
        current_peers.value_namespace = name_space;
        current_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-open-match")
    {
        range_open_match = value;
        range_open_match.value_namespace = name_space;
        range_open_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-open-accepted")
    {
        range_open_accepted = value;
        range_open_accepted.value_namespace = name_space;
        range_open_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-max-drop")
    {
        range_max_drop = value;
        range_max_drop.value_namespace = name_space;
        range_max_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-inst-error")
    {
        range_inst_error = value;
        range_inst_error.value_namespace = name_space;
        range_inst_error.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-range-address")
    {
        neighbor_range_address.yfilter = yfilter;
    }
    if(value_path == "speaker-id")
    {
        speaker_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "has-internal-link")
    {
        has_internal_link.yfilter = yfilter;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured.yfilter = yfilter;
    }
    if(value_path == "neighbor-range-prefix-length")
    {
        neighbor_range_prefix_length.yfilter = yfilter;
    }
    if(value_path == "is-administratively-shut-down")
    {
        is_administratively_shut_down.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-max-prefix-shutdown")
    {
        is_neighbor_max_prefix_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-out-of-memory-forced-up")
    {
        is_out_of_memory_forced_up.yfilter = yfilter;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled.yfilter = yfilter;
    }
    if(value_path == "suppress4-byte-as")
    {
        suppress4_byte_as.yfilter = yfilter;
    }
    if(value_path == "bfd-session-enable-mode")
    {
        bfd_session_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-minintervalval")
    {
        bfd_minintervalval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplierval")
    {
        bfd_multiplierval.yfilter = yfilter;
    }
    if(value_path == "ebgp-time-to-live")
    {
        ebgp_time_to_live.yfilter = yfilter;
    }
    if(value_path == "is-ebgp-multihop-bgp-mpls-forwarding-disabled")
    {
        is_ebgp_multihop_bgp_mpls_forwarding_disabled.yfilter = yfilter;
    }
    if(value_path == "tcpmss")
    {
        tcpmss.yfilter = yfilter;
    }
    if(value_path == "msg-log-in")
    {
        msg_log_in.yfilter = yfilter;
    }
    if(value_path == "msg-log-out")
    {
        msg_log_out.yfilter = yfilter;
    }
    if(value_path == "neighbor-local-as")
    {
        neighbor_local_as.yfilter = yfilter;
    }
    if(value_path == "local-as-no-prepend")
    {
        local_as_no_prepend.yfilter = yfilter;
    }
    if(value_path == "is-capability-negotiation-performed")
    {
        is_capability_negotiation_performed.yfilter = yfilter;
    }
    if(value_path == "configured-hold-time")
    {
        configured_hold_time.yfilter = yfilter;
    }
    if(value_path == "configured-keepalive")
    {
        configured_keepalive.yfilter = yfilter;
    }
    if(value_path == "configured-min-acc-hold-time")
    {
        configured_min_acc_hold_time.yfilter = yfilter;
    }
    if(value_path == "min-advertise-interval")
    {
        min_advertise_interval.yfilter = yfilter;
    }
    if(value_path == "min-advertise-interval-msecs")
    {
        min_advertise_interval_msecs.yfilter = yfilter;
    }
    if(value_path == "min-origination-interval")
    {
        min_origination_interval.yfilter = yfilter;
    }
    if(value_path == "remote-as-number")
    {
        remote_as_number.yfilter = yfilter;
    }
    if(value_path == "dmz-link-bandwidth")
    {
        dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-mode")
    {
        ebgp_send_dmz_mode.yfilter = yfilter;
    }
    if(value_path == "tos-type")
    {
        tos_type.yfilter = yfilter;
    }
    if(value_path == "tos-value")
    {
        tos_value.yfilter = yfilter;
    }
    if(value_path == "tcp-session-open-mode")
    {
        tcp_session_open_mode.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "standby-rp")
    {
        standby_rp.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-enabled-nbr")
    {
        graceful_restart_enabled_nbr.yfilter = yfilter;
    }
    if(value_path == "gr-restart-time")
    {
        gr_restart_time.yfilter = yfilter;
    }
    if(value_path == "gr-stale-path-time")
    {
        gr_stale_path_time.yfilter = yfilter;
    }
    if(value_path == "is-passive-close")
    {
        is_passive_close.yfilter = yfilter;
    }
    if(value_path == "nbr-enforce-first-as")
    {
        nbr_enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "active-bmp-servers")
    {
        active_bmp_servers.yfilter = yfilter;
    }
    if(value_path == "nbr-cluster-id")
    {
        nbr_cluster_id.yfilter = yfilter;
    }
    if(value_path == "nbr-in-cluster")
    {
        nbr_in_cluster.yfilter = yfilter;
    }
    if(value_path == "ignore-connected")
    {
        ignore_connected.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client")
    {
        internal_vpn_client.yfilter = yfilter;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as.yfilter = yfilter;
    }
    if(value_path == "local-as-dual-as")
    {
        local_as_dual_as.yfilter = yfilter;
    }
    if(value_path == "local-as-dual-as-mode-native")
    {
        local_as_dual_as_mode_native.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering-enabled")
    {
        egress_peer_engineering_enabled.yfilter = yfilter;
    }
    if(value_path == "discard-as4-path")
    {
        discard_as4_path.yfilter = yfilter;
    }
    if(value_path == "rpki-disable")
    {
        rpki_disable.yfilter = yfilter;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity.yfilter = yfilter;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "remote-as-list-name")
    {
        remote_as_list_name.yfilter = yfilter;
    }
    if(value_path == "nbr-rcv-size")
    {
        nbr_rcv_size.yfilter = yfilter;
    }
    if(value_path == "nbr-send-size")
    {
        nbr_send_size.yfilter = yfilter;
    }
    if(value_path == "islocal-address-cfg")
    {
        islocal_address_cfg.yfilter = yfilter;
    }
    if(value_path == "update-source")
    {
        update_source.yfilter = yfilter;
    }
    if(value_path == "addpath-send-enable")
    {
        addpath_send_enable.yfilter = yfilter;
    }
    if(value_path == "addpath-receive-enable")
    {
        addpath_receive_enable.yfilter = yfilter;
    }
    if(value_path == "addpath-send-disable")
    {
        addpath_send_disable.yfilter = yfilter;
    }
    if(value_path == "addpath-receive-disable")
    {
        addpath_receive_disable.yfilter = yfilter;
    }
    if(value_path == "upd-errh-noreset")
    {
        upd_errh_noreset.yfilter = yfilter;
    }
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-bug-circular")
    {
        msg_bug_circular.yfilter = yfilter;
    }
    if(value_path == "syslog-enable")
    {
        syslog_enable.yfilter = yfilter;
    }
    if(value_path == "oper-attrf-enable")
    {
        oper_attrf_enable.yfilter = yfilter;
    }
    if(value_path == "attrf-group-name")
    {
        attrf_group_name.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "current-peers")
    {
        current_peers.yfilter = yfilter;
    }
    if(value_path == "range-open-match")
    {
        range_open_match.yfilter = yfilter;
    }
    if(value_path == "range-open-accepted")
    {
        range_open_accepted.yfilter = yfilter;
    }
    if(value_path == "range-max-drop")
    {
        range_max_drop.yfilter = yfilter;
    }
    if(value_path == "range-inst-error")
    {
        range_inst_error.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-local-address" || name == "connection-remote-address" || name == "graceful-maintenance" || name == "cfg-local-address" || name == "af-data" || name == "instance" || name == "neighbor-range-address" || name == "speaker-id" || name == "description" || name == "local-as" || name == "remote-as" || name == "has-internal-link" || name == "is-local-address-configured" || name == "neighbor-range-prefix-length" || name == "is-administratively-shut-down" || name == "is-neighbor-max-prefix-shutdown" || name == "is-out-of-memory-forced-up" || name == "ttl-security-enabled" || name == "suppress4-byte-as" || name == "bfd-session-enable-mode" || name == "bfd-minintervalval" || name == "bfd-multiplierval" || name == "ebgp-time-to-live" || name == "is-ebgp-multihop-bgp-mpls-forwarding-disabled" || name == "tcpmss" || name == "msg-log-in" || name == "msg-log-out" || name == "neighbor-local-as" || name == "local-as-no-prepend" || name == "is-capability-negotiation-performed" || name == "configured-hold-time" || name == "configured-keepalive" || name == "configured-min-acc-hold-time" || name == "min-advertise-interval" || name == "min-advertise-interval-msecs" || name == "min-origination-interval" || name == "remote-as-number" || name == "dmz-link-bandwidth" || name == "ebgp-recv-dmz" || name == "ebgp-send-dmz-mode" || name == "tos-type" || name == "tos-value" || name == "tcp-session-open-mode" || name == "vrf-name" || name == "standby-rp" || name == "nsr-enabled" || name == "graceful-restart-enabled-nbr" || name == "gr-restart-time" || name == "gr-stale-path-time" || name == "is-passive-close" || name == "nbr-enforce-first-as" || name == "active-bmp-servers" || name == "nbr-cluster-id" || name == "nbr-in-cluster" || name == "ignore-connected" || name == "internal-vpn-client" || name == "local-as-replace-as" || name == "local-as-dual-as" || name == "local-as-dual-as-mode-native" || name == "egress-peer-engineering-enabled" || name == "discard-as4-path" || name == "rpki-disable" || name == "rpki-use-validity" || name == "rpki-allow-invalid" || name == "rpki-signal-ibgp" || name == "remote-as-list-name" || name == "nbr-rcv-size" || name == "nbr-send-size" || name == "islocal-address-cfg" || name == "update-source" || name == "addpath-send-enable" || name == "addpath-receive-enable" || name == "addpath-send-disable" || name == "addpath-receive-disable" || name == "upd-errh-noreset" || name == "msg-buf-count" || name == "msg-bug-circular" || name == "syslog-enable" || name == "oper-attrf-enable" || name == "attrf-group-name" || name == "max-peers" || name == "idle-watch-time" || name == "current-peers" || name == "range-open-match" || name == "range-open-accepted" || name == "range-max-drop" || name == "range-inst-error")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "connection-local-address"; yang_parent_name = "neighbor-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "connection-remote-address"; yang_parent_name = "neighbor-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::GracefulMaintenance()
    :
    gshut_exists{YType::boolean, "gshut-exists"},
    gshut_local_active{YType::boolean, "gshut-local-active"},
    gshut_active{YType::boolean, "gshut-active"},
    gshut_locpref_set{YType::boolean, "gshut-locpref-set"},
    gshut_locpref{YType::uint32, "gshut-locpref"},
    gshut_prepends{YType::uint8, "gshut-prepends"}
{

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::has_data() const
{
    if (is_presence_container) return true;
    return gshut_exists.is_set
	|| gshut_local_active.is_set
	|| gshut_active.is_set
	|| gshut_locpref_set.is_set
	|| gshut_locpref.is_set
	|| gshut_prepends.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_exists.yfilter)
	|| ydk::is_set(gshut_local_active.yfilter)
	|| ydk::is_set(gshut_active.yfilter)
	|| ydk::is_set(gshut_locpref_set.yfilter)
	|| ydk::is_set(gshut_locpref.yfilter)
	|| ydk::is_set(gshut_prepends.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_exists.is_set || is_set(gshut_exists.yfilter)) leaf_name_data.push_back(gshut_exists.get_name_leafdata());
    if (gshut_local_active.is_set || is_set(gshut_local_active.yfilter)) leaf_name_data.push_back(gshut_local_active.get_name_leafdata());
    if (gshut_active.is_set || is_set(gshut_active.yfilter)) leaf_name_data.push_back(gshut_active.get_name_leafdata());
    if (gshut_locpref_set.is_set || is_set(gshut_locpref_set.yfilter)) leaf_name_data.push_back(gshut_locpref_set.get_name_leafdata());
    if (gshut_locpref.is_set || is_set(gshut_locpref.yfilter)) leaf_name_data.push_back(gshut_locpref.get_name_leafdata());
    if (gshut_prepends.is_set || is_set(gshut_prepends.yfilter)) leaf_name_data.push_back(gshut_prepends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-exists")
    {
        gshut_exists = value;
        gshut_exists.value_namespace = name_space;
        gshut_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active = value;
        gshut_local_active.value_namespace = name_space;
        gshut_local_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-active")
    {
        gshut_active = value;
        gshut_active.value_namespace = name_space;
        gshut_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set = value;
        gshut_locpref_set.value_namespace = name_space;
        gshut_locpref_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref = value;
        gshut_locpref.value_namespace = name_space;
        gshut_locpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends = value;
        gshut_prepends.value_namespace = name_space;
        gshut_prepends.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-exists")
    {
        gshut_exists.yfilter = yfilter;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active.yfilter = yfilter;
    }
    if(value_path == "gshut-active")
    {
        gshut_active.yfilter = yfilter;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set.yfilter = yfilter;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-exists" || name == "gshut-local-active" || name == "gshut-active" || name == "gshut-locpref-set" || name == "gshut-locpref" || name == "gshut-prepends")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::CfgLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "cfg-local-address"; yang_parent_name = "neighbor-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::~CfgLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfg-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "cfg-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "cfg-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "cfg-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "cfg-local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::AfData()
    :
    af_name{YType::enumeration, "af-name"},
    is_neighbor_route_reflector_client{YType::boolean, "is-neighbor-route-reflector-client"},
    is_legacy_pe_rt{YType::boolean, "is-legacy-pe-rt"},
    is_neighbor_af_capable{YType::boolean, "is-neighbor-af-capable"},
    is_soft_reconfiguration_inbound_allowed{YType::boolean, "is-soft-reconfiguration-inbound-allowed"},
    is_use_soft_reconfiguration_always_on{YType::boolean, "is-use-soft-reconfiguration-always-on"},
    remove_private_as_from_updates{YType::boolean, "remove-private-as-from-updates"},
    remove_private_as_entire_aspath_from_updates{YType::boolean, "remove-private-as-entire-aspath-from-updates"},
    remove_private_as_from_inbound_updates{YType::boolean, "remove-private-as-from-inbound-updates"},
    remove_private_as_entire_aspath_from_inbound_updates{YType::boolean, "remove-private-as-entire-aspath-from-inbound-updates"},
    flowspec_validation_d_isable{YType::boolean, "flowspec-validation-d-isable"},
    flowspec_redirect_validation_d_isable{YType::boolean, "flowspec-redirect-validation-d-isable"},
    orr_group_name{YType::str, "orr-group-name"},
    orr_group_index{YType::uint32, "orr-group-index"},
    is_orr_root_address_configured{YType::boolean, "is-orr-root-address-configured"},
    advertise_afi{YType::boolean, "advertise-afi"},
    advertise_afi_reorg{YType::boolean, "advertise-afi-reorg"},
    advertise_afi_local{YType::boolean, "advertise-afi-local"},
    advertise_afi_disable{YType::boolean, "advertise-afi-disable"},
    always_use_next_hop_local{YType::boolean, "always-use-next-hop-local"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    sent_community_to_neighbor{YType::boolean, "sent-community-to-neighbor"},
    sent_gshut_community_to_neighbor{YType::boolean, "sent-gshut-community-to-neighbor"},
    sent_extended_community_to_neighbor{YType::boolean, "sent-extended-community-to-neighbor"},
    neighbor_default_originate{YType::boolean, "neighbor-default-originate"},
    is_orf_sent{YType::boolean, "is-orf-sent"},
    is_update_deferred{YType::boolean, "is-update-deferred"},
    is_orf_send_scheduled{YType::boolean, "is-orf-send-scheduled"},
    vpn_update_gen_enabled{YType::boolean, "vpn-update-gen-enabled"},
    vpn_update_gen_trigger_enabled{YType::boolean, "vpn-update-gen-trigger-enabled"},
    is_addpath_send_operational{YType::boolean, "is-addpath-send-operational"},
    is_addpath_receive_operational{YType::boolean, "is-addpath-receive-operational"},
    weight{YType::uint32, "weight"},
    max_prefix_limit{YType::uint32, "max-prefix-limit"},
    use_max_prefix_warning_only{YType::boolean, "use-max-prefix-warning-only"},
    max_prefix_discard_extra_paths{YType::boolean, "max-prefix-discard-extra-paths"},
    max_prefix_exceed_discard_paths{YType::boolean, "max-prefix-exceed-discard-paths"},
    max_prefix_threshold_percent{YType::uint8, "max-prefix-threshold-percent"},
    max_prefix_restart_time{YType::uint16, "max-prefix-restart-time"},
    is_peer_orf_capable{YType::boolean, "is-peer-orf-capable"},
    is_advertised_orf_send{YType::boolean, "is-advertised-orf-send"},
    is_received_orf_send_capable{YType::boolean, "is-received-orf-send-capable"},
    is_advertised_orf_receive{YType::boolean, "is-advertised-orf-receive"},
    is_received_orf_receive_capable{YType::boolean, "is-received-orf-receive-capable"},
    is_advertised_graceful_restart{YType::boolean, "is-advertised-graceful-restart"},
    is_graceful_restart_state_flag{YType::boolean, "is-graceful-restart-state-flag"},
    is_received_graceful_restart_capable{YType::boolean, "is-received-graceful-restart-capable"},
    is_add_path_send_capability_advertised{YType::boolean, "is-add-path-send-capability-advertised"},
    is_add_path_send_capability_received{YType::boolean, "is-add-path-send-capability-received"},
    is_add_path_receive_capability_advertised{YType::boolean, "is-add-path-receive-capability-advertised"},
    is_add_path_receive_capability_received{YType::boolean, "is-add-path-receive-capability-received"},
    restart_time{YType::uint32, "restart-time"},
    local_restart_time{YType::uint32, "local-restart-time"},
    stale_path_timeout{YType::uint32, "stale-path-timeout"},
    rib_purge_timeout_value{YType::uint32, "rib-purge-timeout-value"},
    neighbor_preserved_forwarding_state{YType::boolean, "neighbor-preserved-forwarding-state"},
    long_lived_graceful_restart_stale_time_configured{YType::boolean, "long-lived-graceful-restart-stale-time-configured"},
    long_lived_graceful_restart_stale_time_sent{YType::uint32, "long-lived-graceful-restart-stale-time-sent"},
    long_lived_graceful_restart_stale_time_accept{YType::uint32, "long-lived-graceful-restart-stale-time-accept"},
    long_lived_graceful_restart_capability_received{YType::boolean, "long-lived-graceful-restart-capability-received"},
    long_lived_graceful_restart_stale_time_received{YType::uint32, "long-lived-graceful-restart-stale-time-received"},
    neighbor_preserved_long_lived_forwarding_state{YType::boolean, "neighbor-preserved-long-lived-forwarding-state"},
    neighbor_long_lived_graceful_restart_capable{YType::boolean, "neighbor-long-lived-graceful-restart-capable"},
    neighbor_long_lived_graceful_restart_time_remaining{YType::uint32, "neighbor-long-lived-graceful-restart-time-remaining"},
    is_prefix_orf_present{YType::boolean, "is-prefix-orf-present"},
    orf_entries_received{YType::uint32, "orf-entries-received"},
    route_policy_prefix_orf{YType::str, "route-policy-prefix-orf"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_policy_default_originate{YType::str, "route-policy-default-originate"},
    is_neighbor_ebgp_without_inbound_policy{YType::boolean, "is-neighbor-ebgp-without-inbound-policy"},
    is_neighbor_ebgp_without_outbound_policy{YType::boolean, "is-neighbor-ebgp-without-outbound-policy"},
    is_as_override_set{YType::boolean, "is-as-override-set"},
    is_allow_as_in_set{YType::boolean, "is-allow-as-in-set"},
    allow_as_in_count{YType::uint32, "allow-as-in-count"},
    address_family_long_lived_time{YType::uint32, "address-family-long-lived-time"},
    is_aigp_set{YType::boolean, "is-aigp-set"},
    is_rt_present{YType::boolean, "is-rt-present"},
    is_rt_present_standby{YType::boolean, "is-rt-present-standby"},
    accept_own_enabled{YType::boolean, "accept-own-enabled"},
    selective_multipath_eligible{YType::boolean, "selective-multipath-eligible"},
    afrpki_disable{YType::boolean, "afrpki-disable"},
    afrpki_use_validity{YType::boolean, "afrpki-use-validity"},
    afrpki_allow_invalid{YType::boolean, "afrpki-allow-invalid"},
    afrpki_signal_ibgp{YType::boolean, "afrpki-signal-ibgp"},
    is_advertise_permanent_network{YType::boolean, "is-advertise-permanent-network"},
    is_send_mcast_attr{YType::boolean, "is-send-mcast-attr"},
    import_stitching{YType::boolean, "import-stitching"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    advertise_v4_flags{YType::uint32, "advertise-v4-flags"},
    advertise_v6_flags{YType::uint32, "advertise-v6-flags"},
    enable_label_stack{YType::boolean, "enable-label-stack"}
        ,
    extended_community(this, {})
    , extended_community_standby(this, {})
{

    yang_name = "af-data"; yang_parent_name = "neighbor-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::~AfData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.len(); index++)
    {
        if(extended_community_standby[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| is_neighbor_route_reflector_client.is_set
	|| is_legacy_pe_rt.is_set
	|| is_neighbor_af_capable.is_set
	|| is_soft_reconfiguration_inbound_allowed.is_set
	|| is_use_soft_reconfiguration_always_on.is_set
	|| remove_private_as_from_updates.is_set
	|| remove_private_as_entire_aspath_from_updates.is_set
	|| remove_private_as_from_inbound_updates.is_set
	|| remove_private_as_entire_aspath_from_inbound_updates.is_set
	|| flowspec_validation_d_isable.is_set
	|| flowspec_redirect_validation_d_isable.is_set
	|| orr_group_name.is_set
	|| orr_group_index.is_set
	|| is_orr_root_address_configured.is_set
	|| advertise_afi.is_set
	|| advertise_afi_reorg.is_set
	|| advertise_afi_local.is_set
	|| advertise_afi_disable.is_set
	|| always_use_next_hop_local.is_set
	|| next_hop_unchanged.is_set
	|| sent_community_to_neighbor.is_set
	|| sent_gshut_community_to_neighbor.is_set
	|| sent_extended_community_to_neighbor.is_set
	|| neighbor_default_originate.is_set
	|| is_orf_sent.is_set
	|| is_update_deferred.is_set
	|| is_orf_send_scheduled.is_set
	|| vpn_update_gen_enabled.is_set
	|| vpn_update_gen_trigger_enabled.is_set
	|| is_addpath_send_operational.is_set
	|| is_addpath_receive_operational.is_set
	|| weight.is_set
	|| max_prefix_limit.is_set
	|| use_max_prefix_warning_only.is_set
	|| max_prefix_discard_extra_paths.is_set
	|| max_prefix_exceed_discard_paths.is_set
	|| max_prefix_threshold_percent.is_set
	|| max_prefix_restart_time.is_set
	|| is_peer_orf_capable.is_set
	|| is_advertised_orf_send.is_set
	|| is_received_orf_send_capable.is_set
	|| is_advertised_orf_receive.is_set
	|| is_received_orf_receive_capable.is_set
	|| is_advertised_graceful_restart.is_set
	|| is_graceful_restart_state_flag.is_set
	|| is_received_graceful_restart_capable.is_set
	|| is_add_path_send_capability_advertised.is_set
	|| is_add_path_send_capability_received.is_set
	|| is_add_path_receive_capability_advertised.is_set
	|| is_add_path_receive_capability_received.is_set
	|| restart_time.is_set
	|| local_restart_time.is_set
	|| stale_path_timeout.is_set
	|| rib_purge_timeout_value.is_set
	|| neighbor_preserved_forwarding_state.is_set
	|| long_lived_graceful_restart_stale_time_configured.is_set
	|| long_lived_graceful_restart_stale_time_sent.is_set
	|| long_lived_graceful_restart_stale_time_accept.is_set
	|| long_lived_graceful_restart_capability_received.is_set
	|| long_lived_graceful_restart_stale_time_received.is_set
	|| neighbor_preserved_long_lived_forwarding_state.is_set
	|| neighbor_long_lived_graceful_restart_capable.is_set
	|| neighbor_long_lived_graceful_restart_time_remaining.is_set
	|| is_prefix_orf_present.is_set
	|| orf_entries_received.is_set
	|| route_policy_prefix_orf.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_policy_default_originate.is_set
	|| is_neighbor_ebgp_without_inbound_policy.is_set
	|| is_neighbor_ebgp_without_outbound_policy.is_set
	|| is_as_override_set.is_set
	|| is_allow_as_in_set.is_set
	|| allow_as_in_count.is_set
	|| address_family_long_lived_time.is_set
	|| is_aigp_set.is_set
	|| is_rt_present.is_set
	|| is_rt_present_standby.is_set
	|| accept_own_enabled.is_set
	|| selective_multipath_eligible.is_set
	|| afrpki_disable.is_set
	|| afrpki_use_validity.is_set
	|| afrpki_allow_invalid.is_set
	|| afrpki_signal_ibgp.is_set
	|| is_advertise_permanent_network.is_set
	|| is_send_mcast_attr.is_set
	|| import_stitching.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| advertise_v4_flags.is_set
	|| advertise_v6_flags.is_set
	|| enable_label_stack.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::has_operation() const
{
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.len(); index++)
    {
        if(extended_community_standby[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(is_neighbor_route_reflector_client.yfilter)
	|| ydk::is_set(is_legacy_pe_rt.yfilter)
	|| ydk::is_set(is_neighbor_af_capable.yfilter)
	|| ydk::is_set(is_soft_reconfiguration_inbound_allowed.yfilter)
	|| ydk::is_set(is_use_soft_reconfiguration_always_on.yfilter)
	|| ydk::is_set(remove_private_as_from_updates.yfilter)
	|| ydk::is_set(remove_private_as_entire_aspath_from_updates.yfilter)
	|| ydk::is_set(remove_private_as_from_inbound_updates.yfilter)
	|| ydk::is_set(remove_private_as_entire_aspath_from_inbound_updates.yfilter)
	|| ydk::is_set(flowspec_validation_d_isable.yfilter)
	|| ydk::is_set(flowspec_redirect_validation_d_isable.yfilter)
	|| ydk::is_set(orr_group_name.yfilter)
	|| ydk::is_set(orr_group_index.yfilter)
	|| ydk::is_set(is_orr_root_address_configured.yfilter)
	|| ydk::is_set(advertise_afi.yfilter)
	|| ydk::is_set(advertise_afi_reorg.yfilter)
	|| ydk::is_set(advertise_afi_local.yfilter)
	|| ydk::is_set(advertise_afi_disable.yfilter)
	|| ydk::is_set(always_use_next_hop_local.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(sent_community_to_neighbor.yfilter)
	|| ydk::is_set(sent_gshut_community_to_neighbor.yfilter)
	|| ydk::is_set(sent_extended_community_to_neighbor.yfilter)
	|| ydk::is_set(neighbor_default_originate.yfilter)
	|| ydk::is_set(is_orf_sent.yfilter)
	|| ydk::is_set(is_update_deferred.yfilter)
	|| ydk::is_set(is_orf_send_scheduled.yfilter)
	|| ydk::is_set(vpn_update_gen_enabled.yfilter)
	|| ydk::is_set(vpn_update_gen_trigger_enabled.yfilter)
	|| ydk::is_set(is_addpath_send_operational.yfilter)
	|| ydk::is_set(is_addpath_receive_operational.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(max_prefix_limit.yfilter)
	|| ydk::is_set(use_max_prefix_warning_only.yfilter)
	|| ydk::is_set(max_prefix_discard_extra_paths.yfilter)
	|| ydk::is_set(max_prefix_exceed_discard_paths.yfilter)
	|| ydk::is_set(max_prefix_threshold_percent.yfilter)
	|| ydk::is_set(max_prefix_restart_time.yfilter)
	|| ydk::is_set(is_peer_orf_capable.yfilter)
	|| ydk::is_set(is_advertised_orf_send.yfilter)
	|| ydk::is_set(is_received_orf_send_capable.yfilter)
	|| ydk::is_set(is_advertised_orf_receive.yfilter)
	|| ydk::is_set(is_received_orf_receive_capable.yfilter)
	|| ydk::is_set(is_advertised_graceful_restart.yfilter)
	|| ydk::is_set(is_graceful_restart_state_flag.yfilter)
	|| ydk::is_set(is_received_graceful_restart_capable.yfilter)
	|| ydk::is_set(is_add_path_send_capability_advertised.yfilter)
	|| ydk::is_set(is_add_path_send_capability_received.yfilter)
	|| ydk::is_set(is_add_path_receive_capability_advertised.yfilter)
	|| ydk::is_set(is_add_path_receive_capability_received.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(local_restart_time.yfilter)
	|| ydk::is_set(stale_path_timeout.yfilter)
	|| ydk::is_set(rib_purge_timeout_value.yfilter)
	|| ydk::is_set(neighbor_preserved_forwarding_state.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_configured.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_sent.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_accept.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_capability_received.yfilter)
	|| ydk::is_set(long_lived_graceful_restart_stale_time_received.yfilter)
	|| ydk::is_set(neighbor_preserved_long_lived_forwarding_state.yfilter)
	|| ydk::is_set(neighbor_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(neighbor_long_lived_graceful_restart_time_remaining.yfilter)
	|| ydk::is_set(is_prefix_orf_present.yfilter)
	|| ydk::is_set(orf_entries_received.yfilter)
	|| ydk::is_set(route_policy_prefix_orf.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_policy_default_originate.yfilter)
	|| ydk::is_set(is_neighbor_ebgp_without_inbound_policy.yfilter)
	|| ydk::is_set(is_neighbor_ebgp_without_outbound_policy.yfilter)
	|| ydk::is_set(is_as_override_set.yfilter)
	|| ydk::is_set(is_allow_as_in_set.yfilter)
	|| ydk::is_set(allow_as_in_count.yfilter)
	|| ydk::is_set(address_family_long_lived_time.yfilter)
	|| ydk::is_set(is_aigp_set.yfilter)
	|| ydk::is_set(is_rt_present.yfilter)
	|| ydk::is_set(is_rt_present_standby.yfilter)
	|| ydk::is_set(accept_own_enabled.yfilter)
	|| ydk::is_set(selective_multipath_eligible.yfilter)
	|| ydk::is_set(afrpki_disable.yfilter)
	|| ydk::is_set(afrpki_use_validity.yfilter)
	|| ydk::is_set(afrpki_allow_invalid.yfilter)
	|| ydk::is_set(afrpki_signal_ibgp.yfilter)
	|| ydk::is_set(is_advertise_permanent_network.yfilter)
	|| ydk::is_set(is_send_mcast_attr.yfilter)
	|| ydk::is_set(import_stitching.yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(advertise_v4_flags.yfilter)
	|| ydk::is_set(advertise_v6_flags.yfilter)
	|| ydk::is_set(enable_label_stack.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (is_neighbor_route_reflector_client.is_set || is_set(is_neighbor_route_reflector_client.yfilter)) leaf_name_data.push_back(is_neighbor_route_reflector_client.get_name_leafdata());
    if (is_legacy_pe_rt.is_set || is_set(is_legacy_pe_rt.yfilter)) leaf_name_data.push_back(is_legacy_pe_rt.get_name_leafdata());
    if (is_neighbor_af_capable.is_set || is_set(is_neighbor_af_capable.yfilter)) leaf_name_data.push_back(is_neighbor_af_capable.get_name_leafdata());
    if (is_soft_reconfiguration_inbound_allowed.is_set || is_set(is_soft_reconfiguration_inbound_allowed.yfilter)) leaf_name_data.push_back(is_soft_reconfiguration_inbound_allowed.get_name_leafdata());
    if (is_use_soft_reconfiguration_always_on.is_set || is_set(is_use_soft_reconfiguration_always_on.yfilter)) leaf_name_data.push_back(is_use_soft_reconfiguration_always_on.get_name_leafdata());
    if (remove_private_as_from_updates.is_set || is_set(remove_private_as_from_updates.yfilter)) leaf_name_data.push_back(remove_private_as_from_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_updates.is_set || is_set(remove_private_as_entire_aspath_from_updates.yfilter)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_updates.get_name_leafdata());
    if (remove_private_as_from_inbound_updates.is_set || is_set(remove_private_as_from_inbound_updates.yfilter)) leaf_name_data.push_back(remove_private_as_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_inbound_updates.is_set || is_set(remove_private_as_entire_aspath_from_inbound_updates.yfilter)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_inbound_updates.get_name_leafdata());
    if (flowspec_validation_d_isable.is_set || is_set(flowspec_validation_d_isable.yfilter)) leaf_name_data.push_back(flowspec_validation_d_isable.get_name_leafdata());
    if (flowspec_redirect_validation_d_isable.is_set || is_set(flowspec_redirect_validation_d_isable.yfilter)) leaf_name_data.push_back(flowspec_redirect_validation_d_isable.get_name_leafdata());
    if (orr_group_name.is_set || is_set(orr_group_name.yfilter)) leaf_name_data.push_back(orr_group_name.get_name_leafdata());
    if (orr_group_index.is_set || is_set(orr_group_index.yfilter)) leaf_name_data.push_back(orr_group_index.get_name_leafdata());
    if (is_orr_root_address_configured.is_set || is_set(is_orr_root_address_configured.yfilter)) leaf_name_data.push_back(is_orr_root_address_configured.get_name_leafdata());
    if (advertise_afi.is_set || is_set(advertise_afi.yfilter)) leaf_name_data.push_back(advertise_afi.get_name_leafdata());
    if (advertise_afi_reorg.is_set || is_set(advertise_afi_reorg.yfilter)) leaf_name_data.push_back(advertise_afi_reorg.get_name_leafdata());
    if (advertise_afi_local.is_set || is_set(advertise_afi_local.yfilter)) leaf_name_data.push_back(advertise_afi_local.get_name_leafdata());
    if (advertise_afi_disable.is_set || is_set(advertise_afi_disable.yfilter)) leaf_name_data.push_back(advertise_afi_disable.get_name_leafdata());
    if (always_use_next_hop_local.is_set || is_set(always_use_next_hop_local.yfilter)) leaf_name_data.push_back(always_use_next_hop_local.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (sent_community_to_neighbor.is_set || is_set(sent_community_to_neighbor.yfilter)) leaf_name_data.push_back(sent_community_to_neighbor.get_name_leafdata());
    if (sent_gshut_community_to_neighbor.is_set || is_set(sent_gshut_community_to_neighbor.yfilter)) leaf_name_data.push_back(sent_gshut_community_to_neighbor.get_name_leafdata());
    if (sent_extended_community_to_neighbor.is_set || is_set(sent_extended_community_to_neighbor.yfilter)) leaf_name_data.push_back(sent_extended_community_to_neighbor.get_name_leafdata());
    if (neighbor_default_originate.is_set || is_set(neighbor_default_originate.yfilter)) leaf_name_data.push_back(neighbor_default_originate.get_name_leafdata());
    if (is_orf_sent.is_set || is_set(is_orf_sent.yfilter)) leaf_name_data.push_back(is_orf_sent.get_name_leafdata());
    if (is_update_deferred.is_set || is_set(is_update_deferred.yfilter)) leaf_name_data.push_back(is_update_deferred.get_name_leafdata());
    if (is_orf_send_scheduled.is_set || is_set(is_orf_send_scheduled.yfilter)) leaf_name_data.push_back(is_orf_send_scheduled.get_name_leafdata());
    if (vpn_update_gen_enabled.is_set || is_set(vpn_update_gen_enabled.yfilter)) leaf_name_data.push_back(vpn_update_gen_enabled.get_name_leafdata());
    if (vpn_update_gen_trigger_enabled.is_set || is_set(vpn_update_gen_trigger_enabled.yfilter)) leaf_name_data.push_back(vpn_update_gen_trigger_enabled.get_name_leafdata());
    if (is_addpath_send_operational.is_set || is_set(is_addpath_send_operational.yfilter)) leaf_name_data.push_back(is_addpath_send_operational.get_name_leafdata());
    if (is_addpath_receive_operational.is_set || is_set(is_addpath_receive_operational.yfilter)) leaf_name_data.push_back(is_addpath_receive_operational.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (max_prefix_limit.is_set || is_set(max_prefix_limit.yfilter)) leaf_name_data.push_back(max_prefix_limit.get_name_leafdata());
    if (use_max_prefix_warning_only.is_set || is_set(use_max_prefix_warning_only.yfilter)) leaf_name_data.push_back(use_max_prefix_warning_only.get_name_leafdata());
    if (max_prefix_discard_extra_paths.is_set || is_set(max_prefix_discard_extra_paths.yfilter)) leaf_name_data.push_back(max_prefix_discard_extra_paths.get_name_leafdata());
    if (max_prefix_exceed_discard_paths.is_set || is_set(max_prefix_exceed_discard_paths.yfilter)) leaf_name_data.push_back(max_prefix_exceed_discard_paths.get_name_leafdata());
    if (max_prefix_threshold_percent.is_set || is_set(max_prefix_threshold_percent.yfilter)) leaf_name_data.push_back(max_prefix_threshold_percent.get_name_leafdata());
    if (max_prefix_restart_time.is_set || is_set(max_prefix_restart_time.yfilter)) leaf_name_data.push_back(max_prefix_restart_time.get_name_leafdata());
    if (is_peer_orf_capable.is_set || is_set(is_peer_orf_capable.yfilter)) leaf_name_data.push_back(is_peer_orf_capable.get_name_leafdata());
    if (is_advertised_orf_send.is_set || is_set(is_advertised_orf_send.yfilter)) leaf_name_data.push_back(is_advertised_orf_send.get_name_leafdata());
    if (is_received_orf_send_capable.is_set || is_set(is_received_orf_send_capable.yfilter)) leaf_name_data.push_back(is_received_orf_send_capable.get_name_leafdata());
    if (is_advertised_orf_receive.is_set || is_set(is_advertised_orf_receive.yfilter)) leaf_name_data.push_back(is_advertised_orf_receive.get_name_leafdata());
    if (is_received_orf_receive_capable.is_set || is_set(is_received_orf_receive_capable.yfilter)) leaf_name_data.push_back(is_received_orf_receive_capable.get_name_leafdata());
    if (is_advertised_graceful_restart.is_set || is_set(is_advertised_graceful_restart.yfilter)) leaf_name_data.push_back(is_advertised_graceful_restart.get_name_leafdata());
    if (is_graceful_restart_state_flag.is_set || is_set(is_graceful_restart_state_flag.yfilter)) leaf_name_data.push_back(is_graceful_restart_state_flag.get_name_leafdata());
    if (is_received_graceful_restart_capable.is_set || is_set(is_received_graceful_restart_capable.yfilter)) leaf_name_data.push_back(is_received_graceful_restart_capable.get_name_leafdata());
    if (is_add_path_send_capability_advertised.is_set || is_set(is_add_path_send_capability_advertised.yfilter)) leaf_name_data.push_back(is_add_path_send_capability_advertised.get_name_leafdata());
    if (is_add_path_send_capability_received.is_set || is_set(is_add_path_send_capability_received.yfilter)) leaf_name_data.push_back(is_add_path_send_capability_received.get_name_leafdata());
    if (is_add_path_receive_capability_advertised.is_set || is_set(is_add_path_receive_capability_advertised.yfilter)) leaf_name_data.push_back(is_add_path_receive_capability_advertised.get_name_leafdata());
    if (is_add_path_receive_capability_received.is_set || is_set(is_add_path_receive_capability_received.yfilter)) leaf_name_data.push_back(is_add_path_receive_capability_received.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (local_restart_time.is_set || is_set(local_restart_time.yfilter)) leaf_name_data.push_back(local_restart_time.get_name_leafdata());
    if (stale_path_timeout.is_set || is_set(stale_path_timeout.yfilter)) leaf_name_data.push_back(stale_path_timeout.get_name_leafdata());
    if (rib_purge_timeout_value.is_set || is_set(rib_purge_timeout_value.yfilter)) leaf_name_data.push_back(rib_purge_timeout_value.get_name_leafdata());
    if (neighbor_preserved_forwarding_state.is_set || is_set(neighbor_preserved_forwarding_state.yfilter)) leaf_name_data.push_back(neighbor_preserved_forwarding_state.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_configured.is_set || is_set(long_lived_graceful_restart_stale_time_configured.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_configured.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_sent.is_set || is_set(long_lived_graceful_restart_stale_time_sent.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_sent.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_accept.is_set || is_set(long_lived_graceful_restart_stale_time_accept.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_accept.get_name_leafdata());
    if (long_lived_graceful_restart_capability_received.is_set || is_set(long_lived_graceful_restart_capability_received.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_capability_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_received.is_set || is_set(long_lived_graceful_restart_stale_time_received.yfilter)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_received.get_name_leafdata());
    if (neighbor_preserved_long_lived_forwarding_state.is_set || is_set(neighbor_preserved_long_lived_forwarding_state.yfilter)) leaf_name_data.push_back(neighbor_preserved_long_lived_forwarding_state.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_capable.is_set || is_set(neighbor_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_capable.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_time_remaining.is_set || is_set(neighbor_long_lived_graceful_restart_time_remaining.yfilter)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_time_remaining.get_name_leafdata());
    if (is_prefix_orf_present.is_set || is_set(is_prefix_orf_present.yfilter)) leaf_name_data.push_back(is_prefix_orf_present.get_name_leafdata());
    if (orf_entries_received.is_set || is_set(orf_entries_received.yfilter)) leaf_name_data.push_back(orf_entries_received.get_name_leafdata());
    if (route_policy_prefix_orf.is_set || is_set(route_policy_prefix_orf.yfilter)) leaf_name_data.push_back(route_policy_prefix_orf.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_policy_default_originate.is_set || is_set(route_policy_default_originate.yfilter)) leaf_name_data.push_back(route_policy_default_originate.get_name_leafdata());
    if (is_neighbor_ebgp_without_inbound_policy.is_set || is_set(is_neighbor_ebgp_without_inbound_policy.yfilter)) leaf_name_data.push_back(is_neighbor_ebgp_without_inbound_policy.get_name_leafdata());
    if (is_neighbor_ebgp_without_outbound_policy.is_set || is_set(is_neighbor_ebgp_without_outbound_policy.yfilter)) leaf_name_data.push_back(is_neighbor_ebgp_without_outbound_policy.get_name_leafdata());
    if (is_as_override_set.is_set || is_set(is_as_override_set.yfilter)) leaf_name_data.push_back(is_as_override_set.get_name_leafdata());
    if (is_allow_as_in_set.is_set || is_set(is_allow_as_in_set.yfilter)) leaf_name_data.push_back(is_allow_as_in_set.get_name_leafdata());
    if (allow_as_in_count.is_set || is_set(allow_as_in_count.yfilter)) leaf_name_data.push_back(allow_as_in_count.get_name_leafdata());
    if (address_family_long_lived_time.is_set || is_set(address_family_long_lived_time.yfilter)) leaf_name_data.push_back(address_family_long_lived_time.get_name_leafdata());
    if (is_aigp_set.is_set || is_set(is_aigp_set.yfilter)) leaf_name_data.push_back(is_aigp_set.get_name_leafdata());
    if (is_rt_present.is_set || is_set(is_rt_present.yfilter)) leaf_name_data.push_back(is_rt_present.get_name_leafdata());
    if (is_rt_present_standby.is_set || is_set(is_rt_present_standby.yfilter)) leaf_name_data.push_back(is_rt_present_standby.get_name_leafdata());
    if (accept_own_enabled.is_set || is_set(accept_own_enabled.yfilter)) leaf_name_data.push_back(accept_own_enabled.get_name_leafdata());
    if (selective_multipath_eligible.is_set || is_set(selective_multipath_eligible.yfilter)) leaf_name_data.push_back(selective_multipath_eligible.get_name_leafdata());
    if (afrpki_disable.is_set || is_set(afrpki_disable.yfilter)) leaf_name_data.push_back(afrpki_disable.get_name_leafdata());
    if (afrpki_use_validity.is_set || is_set(afrpki_use_validity.yfilter)) leaf_name_data.push_back(afrpki_use_validity.get_name_leafdata());
    if (afrpki_allow_invalid.is_set || is_set(afrpki_allow_invalid.yfilter)) leaf_name_data.push_back(afrpki_allow_invalid.get_name_leafdata());
    if (afrpki_signal_ibgp.is_set || is_set(afrpki_signal_ibgp.yfilter)) leaf_name_data.push_back(afrpki_signal_ibgp.get_name_leafdata());
    if (is_advertise_permanent_network.is_set || is_set(is_advertise_permanent_network.yfilter)) leaf_name_data.push_back(is_advertise_permanent_network.get_name_leafdata());
    if (is_send_mcast_attr.is_set || is_set(is_send_mcast_attr.yfilter)) leaf_name_data.push_back(is_send_mcast_attr.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (advertise_v4_flags.is_set || is_set(advertise_v4_flags.yfilter)) leaf_name_data.push_back(advertise_v4_flags.get_name_leafdata());
    if (advertise_v6_flags.is_set || is_set(advertise_v6_flags.yfilter)) leaf_name_data.push_back(advertise_v6_flags.get_name_leafdata());
    if (enable_label_stack.is_set || is_set(enable_label_stack.yfilter)) leaf_name_data.push_back(enable_label_stack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community-standby")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby>();
        ent_->parent = this;
        extended_community_standby.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community_standby.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client = value;
        is_neighbor_route_reflector_client.value_namespace = name_space;
        is_neighbor_route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt = value;
        is_legacy_pe_rt.value_namespace = name_space;
        is_legacy_pe_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable = value;
        is_neighbor_af_capable.value_namespace = name_space;
        is_neighbor_af_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed = value;
        is_soft_reconfiguration_inbound_allowed.value_namespace = name_space;
        is_soft_reconfiguration_inbound_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on = value;
        is_use_soft_reconfiguration_always_on.value_namespace = name_space;
        is_use_soft_reconfiguration_always_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates = value;
        remove_private_as_from_updates.value_namespace = name_space;
        remove_private_as_from_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates = value;
        remove_private_as_entire_aspath_from_updates.value_namespace = name_space;
        remove_private_as_entire_aspath_from_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates = value;
        remove_private_as_from_inbound_updates.value_namespace = name_space;
        remove_private_as_from_inbound_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates = value;
        remove_private_as_entire_aspath_from_inbound_updates.value_namespace = name_space;
        remove_private_as_entire_aspath_from_inbound_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable = value;
        flowspec_validation_d_isable.value_namespace = name_space;
        flowspec_validation_d_isable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable = value;
        flowspec_redirect_validation_d_isable.value_namespace = name_space;
        flowspec_redirect_validation_d_isable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name = value;
        orr_group_name.value_namespace = name_space;
        orr_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index = value;
        orr_group_index.value_namespace = name_space;
        orr_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured = value;
        is_orr_root_address_configured.value_namespace = name_space;
        is_orr_root_address_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi = value;
        advertise_afi.value_namespace = name_space;
        advertise_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg = value;
        advertise_afi_reorg.value_namespace = name_space;
        advertise_afi_reorg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-local")
    {
        advertise_afi_local = value;
        advertise_afi_local.value_namespace = name_space;
        advertise_afi_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable = value;
        advertise_afi_disable.value_namespace = name_space;
        advertise_afi_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local = value;
        always_use_next_hop_local.value_namespace = name_space;
        always_use_next_hop_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor = value;
        sent_community_to_neighbor.value_namespace = name_space;
        sent_community_to_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor = value;
        sent_gshut_community_to_neighbor.value_namespace = name_space;
        sent_gshut_community_to_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor = value;
        sent_extended_community_to_neighbor.value_namespace = name_space;
        sent_extended_community_to_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate = value;
        neighbor_default_originate.value_namespace = name_space;
        neighbor_default_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent = value;
        is_orf_sent.value_namespace = name_space;
        is_orf_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred = value;
        is_update_deferred.value_namespace = name_space;
        is_update_deferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled = value;
        is_orf_send_scheduled.value_namespace = name_space;
        is_orf_send_scheduled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled = value;
        vpn_update_gen_enabled.value_namespace = name_space;
        vpn_update_gen_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled = value;
        vpn_update_gen_trigger_enabled.value_namespace = name_space;
        vpn_update_gen_trigger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational = value;
        is_addpath_send_operational.value_namespace = name_space;
        is_addpath_send_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational = value;
        is_addpath_receive_operational.value_namespace = name_space;
        is_addpath_receive_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit = value;
        max_prefix_limit.value_namespace = name_space;
        max_prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only = value;
        use_max_prefix_warning_only.value_namespace = name_space;
        use_max_prefix_warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths = value;
        max_prefix_discard_extra_paths.value_namespace = name_space;
        max_prefix_discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths = value;
        max_prefix_exceed_discard_paths.value_namespace = name_space;
        max_prefix_exceed_discard_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent = value;
        max_prefix_threshold_percent.value_namespace = name_space;
        max_prefix_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time = value;
        max_prefix_restart_time.value_namespace = name_space;
        max_prefix_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable = value;
        is_peer_orf_capable.value_namespace = name_space;
        is_peer_orf_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send = value;
        is_advertised_orf_send.value_namespace = name_space;
        is_advertised_orf_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable = value;
        is_received_orf_send_capable.value_namespace = name_space;
        is_received_orf_send_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive = value;
        is_advertised_orf_receive.value_namespace = name_space;
        is_advertised_orf_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable = value;
        is_received_orf_receive_capable.value_namespace = name_space;
        is_received_orf_receive_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart = value;
        is_advertised_graceful_restart.value_namespace = name_space;
        is_advertised_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag = value;
        is_graceful_restart_state_flag.value_namespace = name_space;
        is_graceful_restart_state_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable = value;
        is_received_graceful_restart_capable.value_namespace = name_space;
        is_received_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised = value;
        is_add_path_send_capability_advertised.value_namespace = name_space;
        is_add_path_send_capability_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received = value;
        is_add_path_send_capability_received.value_namespace = name_space;
        is_add_path_send_capability_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised = value;
        is_add_path_receive_capability_advertised.value_namespace = name_space;
        is_add_path_receive_capability_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received = value;
        is_add_path_receive_capability_received.value_namespace = name_space;
        is_add_path_receive_capability_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time = value;
        local_restart_time.value_namespace = name_space;
        local_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout = value;
        stale_path_timeout.value_namespace = name_space;
        stale_path_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value = value;
        rib_purge_timeout_value.value_namespace = name_space;
        rib_purge_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state = value;
        neighbor_preserved_forwarding_state.value_namespace = name_space;
        neighbor_preserved_forwarding_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured = value;
        long_lived_graceful_restart_stale_time_configured.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent = value;
        long_lived_graceful_restart_stale_time_sent.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept = value;
        long_lived_graceful_restart_stale_time_accept.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received = value;
        long_lived_graceful_restart_capability_received.value_namespace = name_space;
        long_lived_graceful_restart_capability_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received = value;
        long_lived_graceful_restart_stale_time_received.value_namespace = name_space;
        long_lived_graceful_restart_stale_time_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state = value;
        neighbor_preserved_long_lived_forwarding_state.value_namespace = name_space;
        neighbor_preserved_long_lived_forwarding_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable = value;
        neighbor_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining = value;
        neighbor_long_lived_graceful_restart_time_remaining.value_namespace = name_space;
        neighbor_long_lived_graceful_restart_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present = value;
        is_prefix_orf_present.value_namespace = name_space;
        is_prefix_orf_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received = value;
        orf_entries_received.value_namespace = name_space;
        orf_entries_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf = value;
        route_policy_prefix_orf.value_namespace = name_space;
        route_policy_prefix_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate = value;
        route_policy_default_originate.value_namespace = name_space;
        route_policy_default_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy = value;
        is_neighbor_ebgp_without_inbound_policy.value_namespace = name_space;
        is_neighbor_ebgp_without_inbound_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy = value;
        is_neighbor_ebgp_without_outbound_policy.value_namespace = name_space;
        is_neighbor_ebgp_without_outbound_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set = value;
        is_as_override_set.value_namespace = name_space;
        is_as_override_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set = value;
        is_allow_as_in_set.value_namespace = name_space;
        is_allow_as_in_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count = value;
        allow_as_in_count.value_namespace = name_space;
        allow_as_in_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time = value;
        address_family_long_lived_time.value_namespace = name_space;
        address_family_long_lived_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set = value;
        is_aigp_set.value_namespace = name_space;
        is_aigp_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present = value;
        is_rt_present.value_namespace = name_space;
        is_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby = value;
        is_rt_present_standby.value_namespace = name_space;
        is_rt_present_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled = value;
        accept_own_enabled.value_namespace = name_space;
        accept_own_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible = value;
        selective_multipath_eligible.value_namespace = name_space;
        selective_multipath_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable = value;
        afrpki_disable.value_namespace = name_space;
        afrpki_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity = value;
        afrpki_use_validity.value_namespace = name_space;
        afrpki_use_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid = value;
        afrpki_allow_invalid.value_namespace = name_space;
        afrpki_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp = value;
        afrpki_signal_ibgp.value_namespace = name_space;
        afrpki_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network = value;
        is_advertise_permanent_network.value_namespace = name_space;
        is_advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr = value;
        is_send_mcast_attr.value_namespace = name_space;
        is_send_mcast_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags = value;
        advertise_v4_flags.value_namespace = name_space;
        advertise_v4_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags = value;
        advertise_v6_flags.value_namespace = name_space;
        advertise_v6_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-label-stack")
    {
        enable_label_stack = value;
        enable_label_stack.value_namespace = name_space;
        enable_label_stack.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable.yfilter = yfilter;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed.yfilter = yfilter;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates.yfilter = yfilter;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable.yfilter = yfilter;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable.yfilter = yfilter;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name.yfilter = yfilter;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index.yfilter = yfilter;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured.yfilter = yfilter;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-local")
    {
        advertise_afi_local.yfilter = yfilter;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable.yfilter = yfilter;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor.yfilter = yfilter;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor.yfilter = yfilter;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor.yfilter = yfilter;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate.yfilter = yfilter;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent.yfilter = yfilter;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred.yfilter = yfilter;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled.yfilter = yfilter;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled.yfilter = yfilter;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled.yfilter = yfilter;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational.yfilter = yfilter;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit.yfilter = yfilter;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only.yfilter = yfilter;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths.yfilter = yfilter;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time.yfilter = yfilter;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable.yfilter = yfilter;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send.yfilter = yfilter;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable.yfilter = yfilter;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive.yfilter = yfilter;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable.yfilter = yfilter;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag.yfilter = yfilter;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised.yfilter = yfilter;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received.yfilter = yfilter;
    }
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised.yfilter = yfilter;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout.yfilter = yfilter;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value.yfilter = yfilter;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received.yfilter = yfilter;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received.yfilter = yfilter;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining.yfilter = yfilter;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present.yfilter = yfilter;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received.yfilter = yfilter;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy.yfilter = yfilter;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set.yfilter = yfilter;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set.yfilter = yfilter;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count.yfilter = yfilter;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time.yfilter = yfilter;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set.yfilter = yfilter;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present.yfilter = yfilter;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby.yfilter = yfilter;
    }
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled.yfilter = yfilter;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible.yfilter = yfilter;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable.yfilter = yfilter;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity.yfilter = yfilter;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags.yfilter = yfilter;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags.yfilter = yfilter;
    }
    if(value_path == "enable-label-stack")
    {
        enable_label_stack.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community" || name == "extended-community-standby" || name == "af-name" || name == "is-neighbor-route-reflector-client" || name == "is-legacy-pe-rt" || name == "is-neighbor-af-capable" || name == "is-soft-reconfiguration-inbound-allowed" || name == "is-use-soft-reconfiguration-always-on" || name == "remove-private-as-from-updates" || name == "remove-private-as-entire-aspath-from-updates" || name == "remove-private-as-from-inbound-updates" || name == "remove-private-as-entire-aspath-from-inbound-updates" || name == "flowspec-validation-d-isable" || name == "flowspec-redirect-validation-d-isable" || name == "orr-group-name" || name == "orr-group-index" || name == "is-orr-root-address-configured" || name == "advertise-afi" || name == "advertise-afi-reorg" || name == "advertise-afi-local" || name == "advertise-afi-disable" || name == "always-use-next-hop-local" || name == "next-hop-unchanged" || name == "sent-community-to-neighbor" || name == "sent-gshut-community-to-neighbor" || name == "sent-extended-community-to-neighbor" || name == "neighbor-default-originate" || name == "is-orf-sent" || name == "is-update-deferred" || name == "is-orf-send-scheduled" || name == "vpn-update-gen-enabled" || name == "vpn-update-gen-trigger-enabled" || name == "is-addpath-send-operational" || name == "is-addpath-receive-operational" || name == "weight" || name == "max-prefix-limit" || name == "use-max-prefix-warning-only" || name == "max-prefix-discard-extra-paths" || name == "max-prefix-exceed-discard-paths" || name == "max-prefix-threshold-percent" || name == "max-prefix-restart-time" || name == "is-peer-orf-capable" || name == "is-advertised-orf-send" || name == "is-received-orf-send-capable" || name == "is-advertised-orf-receive" || name == "is-received-orf-receive-capable" || name == "is-advertised-graceful-restart" || name == "is-graceful-restart-state-flag" || name == "is-received-graceful-restart-capable" || name == "is-add-path-send-capability-advertised" || name == "is-add-path-send-capability-received" || name == "is-add-path-receive-capability-advertised" || name == "is-add-path-receive-capability-received" || name == "restart-time" || name == "local-restart-time" || name == "stale-path-timeout" || name == "rib-purge-timeout-value" || name == "neighbor-preserved-forwarding-state" || name == "long-lived-graceful-restart-stale-time-configured" || name == "long-lived-graceful-restart-stale-time-sent" || name == "long-lived-graceful-restart-stale-time-accept" || name == "long-lived-graceful-restart-capability-received" || name == "long-lived-graceful-restart-stale-time-received" || name == "neighbor-preserved-long-lived-forwarding-state" || name == "neighbor-long-lived-graceful-restart-capable" || name == "neighbor-long-lived-graceful-restart-time-remaining" || name == "is-prefix-orf-present" || name == "orf-entries-received" || name == "route-policy-prefix-orf" || name == "route-policy-in" || name == "route-policy-out" || name == "route-policy-default-originate" || name == "is-neighbor-ebgp-without-inbound-policy" || name == "is-neighbor-ebgp-without-outbound-policy" || name == "is-as-override-set" || name == "is-allow-as-in-set" || name == "allow-as-in-count" || name == "address-family-long-lived-time" || name == "is-aigp-set" || name == "is-rt-present" || name == "is-rt-present-standby" || name == "accept-own-enabled" || name == "selective-multipath-eligible" || name == "afrpki-disable" || name == "afrpki-use-validity" || name == "afrpki-allow-invalid" || name == "afrpki-signal-ibgp" || name == "is-advertise-permanent-network" || name == "is-send-mcast-attr" || name == "import-stitching" || name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "advertise-v4-flags" || name == "advertise-v6-flags" || name == "enable-label-stack")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::ExtendedCommunityStandby()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community-standby"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::~ExtendedCommunityStandby()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::Instance_()
    :
    is_idle_watch_timer_running{YType::boolean, "is-idle-watch-timer-running"},
    connection_state{YType::enumeration, "connection-state"}
        ,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress>())
    , neighbor_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge>())
    , idle_watch_timer_remaining_value(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue>())
{
    neighbor_address->parent = this;
    neighbor_age->parent = this;
    idle_watch_timer_remaining_value->parent = this;

    yang_name = "instance"; yang_parent_name = "neighbor-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::~Instance_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::has_data() const
{
    if (is_presence_container) return true;
    return is_idle_watch_timer_running.is_set
	|| connection_state.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data())
	|| (neighbor_age !=  nullptr && neighbor_age->has_data())
	|| (idle_watch_timer_remaining_value !=  nullptr && idle_watch_timer_remaining_value->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_idle_watch_timer_running.yfilter)
	|| ydk::is_set(connection_state.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation())
	|| (neighbor_age !=  nullptr && neighbor_age->has_operation())
	|| (idle_watch_timer_remaining_value !=  nullptr && idle_watch_timer_remaining_value->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_idle_watch_timer_running.is_set || is_set(is_idle_watch_timer_running.yfilter)) leaf_name_data.push_back(is_idle_watch_timer_running.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.yfilter)) leaf_name_data.push_back(connection_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress>();
        }
        return neighbor_address;
    }

    if(child_yang_name == "neighbor-age")
    {
        if(neighbor_age == nullptr)
        {
            neighbor_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge>();
        }
        return neighbor_age;
    }

    if(child_yang_name == "idle-watch-timer-remaining-value")
    {
        if(idle_watch_timer_remaining_value == nullptr)
        {
            idle_watch_timer_remaining_value = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue>();
        }
        return idle_watch_timer_remaining_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    if(neighbor_age != nullptr)
    {
        _children["neighbor-age"] = neighbor_age;
    }

    if(idle_watch_timer_remaining_value != nullptr)
    {
        _children["idle-watch-timer-remaining-value"] = idle_watch_timer_remaining_value;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-idle-watch-timer-running")
    {
        is_idle_watch_timer_running = value;
        is_idle_watch_timer_running.value_namespace = name_space;
        is_idle_watch_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
        connection_state.value_namespace = name_space;
        connection_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-idle-watch-timer-running")
    {
        is_idle_watch_timer_running.yfilter = yfilter;
    }
    if(value_path == "connection-state")
    {
        connection_state.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-age" || name == "idle-watch-timer-remaining-value" || name == "is-idle-watch-timer-running" || name == "connection-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::NeighborAge()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "neighbor-age"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::~NeighborAge()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-age";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::IdleWatchTimerRemainingValue()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "idle-watch-timer-remaining-value"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::~IdleWatchTimerRemainingValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-watch-timer-remaining-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLogs()
    :
    message_log(this, {})
{

    yang_name = "message-logs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::~MessageLogs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<message_log.len(); index++)
    {
        if(message_log[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::has_operation() const
{
    for (std::size_t index=0; index<message_log.len(); index++)
    {
        if(message_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-log")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog>();
        ent_->parent = this;
        message_log.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : message_log.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-log")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::MessageLog()
    :
    neighbor_address{YType::str, "neighbor-address"},
    direction{YType::uint32, "direction"}
        ,
    neighbor_message(this, {})
{

    yang_name = "message-log"; yang_parent_name = "message-logs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::~MessageLog()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_message.len(); index++)
    {
        if(neighbor_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| direction.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message.len(); index++)
    {
        if(neighbor_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-message")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage>();
        ent_->parent = this;
        neighbor_message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-message" || name == "neighbor-address" || name == "direction")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::NeighborMessage()
    :
    message_type_received{YType::uint8, "message-type-received"},
    total_logged_message_count{YType::uint32, "total-logged-message-count"},
    message_data_length{YType::uint16, "message-data-length"}
        ,
    message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp>())
    , logged_message_data(this, {})
{
    message_timestamp->parent = this;

    yang_name = "neighbor-message"; yang_parent_name = "message-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::~NeighborMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logged_message_data.len(); index++)
    {
        if(logged_message_data[index]->has_data())
            return true;
    }
    return message_type_received.is_set
	|| total_logged_message_count.is_set
	|| message_data_length.is_set
	|| (message_timestamp !=  nullptr && message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::has_operation() const
{
    for (std::size_t index=0; index<logged_message_data.len(); index++)
    {
        if(logged_message_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(message_type_received.yfilter)
	|| ydk::is_set(total_logged_message_count.yfilter)
	|| ydk::is_set(message_data_length.yfilter)
	|| (message_timestamp !=  nullptr && message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_type_received.is_set || is_set(message_type_received.yfilter)) leaf_name_data.push_back(message_type_received.get_name_leafdata());
    if (total_logged_message_count.is_set || is_set(total_logged_message_count.yfilter)) leaf_name_data.push_back(total_logged_message_count.get_name_leafdata());
    if (message_data_length.is_set || is_set(message_data_length.yfilter)) leaf_name_data.push_back(message_data_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-timestamp")
    {
        if(message_timestamp == nullptr)
        {
            message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp>();
        }
        return message_timestamp;
    }

    if(child_yang_name == "logged-message-data")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData>();
        ent_->parent = this;
        logged_message_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(message_timestamp != nullptr)
    {
        _children["message-timestamp"] = message_timestamp;
    }

    count_ = 0;
    for (auto ent_ : logged_message_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-type-received")
    {
        message_type_received = value;
        message_type_received.value_namespace = name_space;
        message_type_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-logged-message-count")
    {
        total_logged_message_count = value;
        total_logged_message_count.value_namespace = name_space;
        total_logged_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-data-length")
    {
        message_data_length = value;
        message_data_length.value_namespace = name_space;
        message_data_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-type-received")
    {
        message_type_received.yfilter = yfilter;
    }
    if(value_path == "total-logged-message-count")
    {
        total_logged_message_count.yfilter = yfilter;
    }
    if(value_path == "message-data-length")
    {
        message_data_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-timestamp" || name == "logged-message-data" || name == "message-type-received" || name == "total-logged-message-count" || name == "message-data-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::MessageTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "message-timestamp"; yang_parent_name = "neighbor-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::~MessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::LoggedMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "logged-message-data"; yang_parent_name = "neighbor-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::~LoggedMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logged-message-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::UpdateInboundFilterProcess()
    :
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"}
        ,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-process"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::~UpdateInboundFilterProcess()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::has_data() const
{
    if (is_presence_container) return true;
    return update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| last_update_filtered_age.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(update_filtered_neighbor_count.yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.yfilter)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_update_filtered_timestamp != nullptr)
    {
        _children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count = value;
        update_filtered_neighbor_count.value_namespace = name_space;
        update_filtered_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filtered-timestamp" || name == "update-filtered-message-count" || name == "update-filtered-neighbor-count" || name == "last-update-filtered-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-process"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attributes()
    :
    attribute(this, {})
{

    yang_name = "attributes"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::~Attributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute>();
        ent_->parent = this;
        attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::Attribute()
    :
    attribute_iid{YType::uint32, "attribute-iid"},
    attribute_cache_bucket{YType::uint32, "attribute-cache-bucket"},
    attribute_cache_id{YType::uint32, "attribute-cache-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    attribute_instance_id{YType::uint8, "attribute-instance-id"},
    attribute_structure_id{YType::uint32, "attribute-structure-id"},
    attribute_structure_hash_value{YType::uint32, "attribute-structure-hash-value"},
    reference_count{YType::uint32, "reference-count"}
        ,
    attribute_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo>())
{
    attribute_info->parent = this;

    yang_name = "attribute"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::~Attribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return attribute_iid.is_set
	|| attribute_cache_bucket.is_set
	|| attribute_cache_id.is_set
	|| process_instance_id.is_set
	|| attribute_instance_id.is_set
	|| attribute_structure_id.is_set
	|| attribute_structure_hash_value.is_set
	|| reference_count.is_set
	|| (attribute_info !=  nullptr && attribute_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_iid.yfilter)
	|| ydk::is_set(attribute_cache_bucket.yfilter)
	|| ydk::is_set(attribute_cache_id.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(attribute_instance_id.yfilter)
	|| ydk::is_set(attribute_structure_id.yfilter)
	|| ydk::is_set(attribute_structure_hash_value.yfilter)
	|| ydk::is_set(reference_count.yfilter)
	|| (attribute_info !=  nullptr && attribute_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_iid.is_set || is_set(attribute_iid.yfilter)) leaf_name_data.push_back(attribute_iid.get_name_leafdata());
    if (attribute_cache_bucket.is_set || is_set(attribute_cache_bucket.yfilter)) leaf_name_data.push_back(attribute_cache_bucket.get_name_leafdata());
    if (attribute_cache_id.is_set || is_set(attribute_cache_id.yfilter)) leaf_name_data.push_back(attribute_cache_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (attribute_instance_id.is_set || is_set(attribute_instance_id.yfilter)) leaf_name_data.push_back(attribute_instance_id.get_name_leafdata());
    if (attribute_structure_id.is_set || is_set(attribute_structure_id.yfilter)) leaf_name_data.push_back(attribute_structure_id.get_name_leafdata());
    if (attribute_structure_hash_value.is_set || is_set(attribute_structure_hash_value.yfilter)) leaf_name_data.push_back(attribute_structure_hash_value.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-info")
    {
        if(attribute_info == nullptr)
        {
            attribute_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo>();
        }
        return attribute_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_info != nullptr)
    {
        _children["attribute-info"] = attribute_info;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-iid")
    {
        attribute_iid = value;
        attribute_iid.value_namespace = name_space;
        attribute_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket = value;
        attribute_cache_bucket.value_namespace = name_space;
        attribute_cache_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id = value;
        attribute_cache_id.value_namespace = name_space;
        attribute_cache_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id = value;
        attribute_instance_id.value_namespace = name_space;
        attribute_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id = value;
        attribute_structure_id.value_namespace = name_space;
        attribute_structure_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value = value;
        attribute_structure_hash_value.value_namespace = name_space;
        attribute_structure_hash_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-iid")
    {
        attribute_iid.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-info" || name == "attribute-iid" || name == "attribute-cache-bucket" || name == "attribute-cache-id" || name == "process-instance-id" || name == "attribute-instance-id" || name == "attribute-structure-id" || name == "attribute-structure-hash-value" || name == "reference-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttributeInfo()
    :
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"},
    rnh_type{YType::uint16, "rnh-type"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"}
        ,
    common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes>())
    , attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet>())
    , rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr>())
    , ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp>())
{
    common_attributes->parent = this;
    attr_set->parent = this;
    rnh_addr->parent = this;
    ribrnh_ip->parent = this;

    yang_name = "attribute-info"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::~AttributeInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_as_path2_byte.is_set
	|| is_application_gateway_present.is_set
	|| is_attr_set_present.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| is_rnh_present.is_set
	|| is_ribrnh_present.is_set
	|| attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| vpn_distinguisher.is_set
	|| rnh_type.is_set
	|| rnh_len.is_set
	|| rnh_addr_len.is_set
	|| ribrnh_table.is_set
	|| ribrnh_mac.is_set
	|| ribrnhip_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnh_encap.is_set
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr>();
        }
        return rnh_addr;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_attributes != nullptr)
    {
        _children["common-attributes"] = common_attributes;
    }

    if(attr_set != nullptr)
    {
        _children["attr-set"] = attr_set;
    }

    if(rnh_addr != nullptr)
    {
        _children["rnh-addr"] = rnh_addr;
    }

    if(ribrnh_ip != nullptr)
    {
        _children["ribrnh-ip"] = ribrnh_ip;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-attributes" || name == "attr-set" || name == "rnh-addr" || name == "ribrnh-ip" || name == "is-as-path2-byte" || name == "is-application-gateway-present" || name == "is-attr-set-present" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "is-rnh-present" || name == "is-ribrnh-present" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-recover-sec" || name == "vpn-distinguisher" || name == "rnh-type" || name == "rnh-len" || name == "rnh-addr-len" || name == "ribrnh-table" || name == "ribrnh-mac" || name == "ribrnhip-table" || name == "ribrnh-vni" || name == "ribrnh-encap")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::CommonAttributes()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
        ,
    prefix_sid_attr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>())
    , community(this, {})
    , extended_community(this, {})
    , unknown_attribute(this, {})
    , cluster(this, {})
    , l2tpv3_cookie(this, {})
    , connector_value(this, {})
    , pmsi_value(this, {})
    , ls_attr(this, {})
    , pe_distinguisher_label(this, {})
    , large_community(this, {})
{
    prefix_sid_attr->parent = this;
    tunnel_encap->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-attr")
    {
        if(prefix_sid_attr == nullptr)
        {
            prefix_sid_attr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr>();
        }
        return prefix_sid_attr;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_attr != nullptr)
    {
        _children["prefix-sid-attr"] = prefix_sid_attr;
    }

    if(tunnel_encap != nullptr)
    {
        _children["tunnel-encap"] = tunnel_encap;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cluster.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2tpv3_cookie.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : connector_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ls_attr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_distinguisher_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : large_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-attr" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidAttr()
    :
    prefix_sid_tlv(this, {})
{

    yang_name = "prefix-sid-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::~PrefixSidAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-tlv")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv>();
        ent_->parent = this;
        prefix_sid_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-tlv")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| usable.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(usable.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        _children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count_ = 0;
    for (auto ent_ : segment_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable")
    {
        usable = value;
        usable.value_namespace = name_space;
        usable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "usable")
    {
        usable.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
        ,
    prefix_sid_attr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>())
    , community(this, {})
    , extended_community(this, {})
    , unknown_attribute(this, {})
    , cluster(this, {})
    , l2tpv3_cookie(this, {})
    , connector_value(this, {})
    , pmsi_value(this, {})
    , ls_attr(this, {})
    , pe_distinguisher_label(this, {})
    , large_community(this, {})
{
    prefix_sid_attr->parent = this;
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-attr")
    {
        if(prefix_sid_attr == nullptr)
        {
            prefix_sid_attr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr>();
        }
        return prefix_sid_attr;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_attr != nullptr)
    {
        _children["prefix-sid-attr"] = prefix_sid_attr;
    }

    if(tunnel_encap != nullptr)
    {
        _children["tunnel-encap"] = tunnel_encap;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cluster.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2tpv3_cookie.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : connector_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ls_attr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_distinguisher_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : large_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-attr" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidAttr()
    :
    prefix_sid_tlv(this, {})
{

    yang_name = "prefix-sid-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::~PrefixSidAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-tlv")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv>();
        ent_->parent = this;
        prefix_sid_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-tlv")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| usable.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(usable.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        _children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count_ = 0;
    for (auto ent_ : segment_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable")
    {
        usable = value;
        usable.value_namespace = name_space;
        usable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "usable")
    {
        usable.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntries()
    :
    rt_entry(this, {})
{

    yang_name = "rt-entries"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RtEntries::~RtEntries()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt_entry.len(); index++)
    {
        if(rt_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::has_operation() const
{
    for (std::size_t index=0; index<rt_entry.len(); index++)
    {
        if(rt_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RtEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RtEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RtEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-entry")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry>();
        ent_->parent = this;
        rt_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RtEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rt_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RtEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::RtEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::RtEntry()
    :
    route_target_lower_bytes{YType::uint32, "route-target-lower-bytes"},
    route_target_upper_bytes{YType::uint32, "route-target-upper-bytes"},
    af_name{YType::enumeration, "af-name"},
    request_id{YType::uint32, "request-id"},
    afs{YType::str, "afs"}
        ,
    rt(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt>())
{
    rt->parent = this;

    yang_name = "rt-entry"; yang_parent_name = "rt-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::~RtEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::has_data() const
{
    if (is_presence_container) return true;
    return route_target_lower_bytes.is_set
	|| route_target_upper_bytes.is_set
	|| af_name.is_set
	|| request_id.is_set
	|| afs.is_set
	|| (rt !=  nullptr && rt->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target_lower_bytes.yfilter)
	|| ydk::is_set(route_target_upper_bytes.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(afs.yfilter)
	|| (rt !=  nullptr && rt->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target_lower_bytes.is_set || is_set(route_target_lower_bytes.yfilter)) leaf_name_data.push_back(route_target_lower_bytes.get_name_leafdata());
    if (route_target_upper_bytes.is_set || is_set(route_target_upper_bytes.yfilter)) leaf_name_data.push_back(route_target_upper_bytes.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (afs.is_set || is_set(afs.yfilter)) leaf_name_data.push_back(afs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        if(rt == nullptr)
        {
            rt = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt>();
        }
        return rt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt != nullptr)
    {
        _children["rt"] = rt;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target-lower-bytes")
    {
        route_target_lower_bytes = value;
        route_target_lower_bytes.value_namespace = name_space;
        route_target_lower_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-upper-bytes")
    {
        route_target_upper_bytes = value;
        route_target_upper_bytes.value_namespace = name_space;
        route_target_upper_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afs")
    {
        afs = value;
        afs.value_namespace = name_space;
        afs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target-lower-bytes")
    {
        route_target_lower_bytes.yfilter = yfilter;
    }
    if(value_path == "route-target-upper-bytes")
    {
        route_target_upper_bytes.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "afs")
    {
        afs.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "route-target-lower-bytes" || name == "route-target-upper-bytes" || name == "af-name" || name == "request-id" || name == "afs")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::Rt()
    :
    route_target{YType::str, "route-target"}
{

    yang_name = "rt"; yang_parent_name = "rt-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::~Rt()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::has_data() const
{
    if (is_presence_container) return true;
    return route_target.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroups()
    :
    attribute_filter_group(this, {"group_name"})
{

    yang_name = "attribute-filter-groups"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::~AttributeFilterGroups()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_filter_group.len(); index++)
    {
        if(attribute_filter_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_group.len(); index++)
    {
        if(attribute_filter_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-group")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup>();
        ent_->parent = this;
        attribute_filter_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_filter_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-group")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterGroup()
    :
    group_name{YType::str, "group-name"},
    attribute_filter_group_name{YType::str, "attribute-filter-group-name"},
    attribute_filter_total_group_count{YType::uint32, "attribute-filter-total-group-count"}
        ,
    attribute_filter_entry(this, {})
{

    yang_name = "attribute-filter-group"; yang_parent_name = "attribute-filter-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::~AttributeFilterGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_filter_entry.len(); index++)
    {
        if(attribute_filter_entry[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| attribute_filter_group_name.is_set
	|| attribute_filter_total_group_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_entry.len(); index++)
    {
        if(attribute_filter_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(attribute_filter_group_name.yfilter)
	|| ydk::is_set(attribute_filter_total_group_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (attribute_filter_group_name.is_set || is_set(attribute_filter_group_name.yfilter)) leaf_name_data.push_back(attribute_filter_group_name.get_name_leafdata());
    if (attribute_filter_total_group_count.is_set || is_set(attribute_filter_total_group_count.yfilter)) leaf_name_data.push_back(attribute_filter_total_group_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-entry")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry>();
        ent_->parent = this;
        attribute_filter_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_filter_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name = value;
        attribute_filter_group_name.value_namespace = name_space;
        attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count = value;
        attribute_filter_total_group_count.value_namespace = name_space;
        attribute_filter_total_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry" || name == "group-name" || name == "attribute-filter-group-name" || name == "attribute-filter-total-group-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::AttributeFilterEntry()
    :
    attribute_filter_entry_requested_action{YType::enumeration, "attribute-filter-entry-requested-action"},
    attribute_filter_entry_range_start{YType::uint32, "attribute-filter-entry-range-start"},
    attribute_filter_entry_range_end{YType::uint32, "attribute-filter-entry-range-end"}
{

    yang_name = "attribute-filter-entry"; yang_parent_name = "attribute-filter-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::~AttributeFilterEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_data() const
{
    if (is_presence_container) return true;
    return attribute_filter_entry_requested_action.is_set
	|| attribute_filter_entry_range_start.is_set
	|| attribute_filter_entry_range_end.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_filter_entry_requested_action.yfilter)
	|| ydk::is_set(attribute_filter_entry_range_start.yfilter)
	|| ydk::is_set(attribute_filter_entry_range_end.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_filter_entry_requested_action.is_set || is_set(attribute_filter_entry_requested_action.yfilter)) leaf_name_data.push_back(attribute_filter_entry_requested_action.get_name_leafdata());
    if (attribute_filter_entry_range_start.is_set || is_set(attribute_filter_entry_range_start.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_start.get_name_leafdata());
    if (attribute_filter_entry_range_end.is_set || is_set(attribute_filter_entry_range_end.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action = value;
        attribute_filter_entry_requested_action.value_namespace = name_space;
        attribute_filter_entry_requested_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start = value;
        attribute_filter_entry_range_start.value_namespace = name_space;
        attribute_filter_entry_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end = value;
        attribute_filter_entry_range_end.value_namespace = name_space;
        attribute_filter_entry_range_end.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry-requested-action" || name == "attribute-filter-entry-range-start" || name == "attribute-filter-entry-range-end")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServerList()
    :
    rpki_server(this, {})
{

    yang_name = "rpki-server-list"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::~RpkiServerList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_server.len(); index++)
    {
        if(rpki_server[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::has_operation() const
{
    for (std::size_t index=0; index<rpki_server.len(); index++)
    {
        if(rpki_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-server")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer>();
        ent_->parent = this;
        rpki_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-server")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::RpkiServer()
    :
    name{YType::str, "name"},
    preference{YType::uint32, "preference"},
    port{YType::uint32, "port"},
    state{YType::enumeration, "state"},
    state_time{YType::uint32, "state-time"},
    shutdown{YType::boolean, "shutdown"},
    retries{YType::uint32, "retries"},
    close_reason{YType::enumeration, "close-reason"},
    close_time{YType::uint32, "close-time"},
    close_time_real{YType::uint32, "close-time-real"},
    read_bytes{YType::uint32, "read-bytes"},
    write_bytes{YType::uint32, "write-bytes"},
    transport{YType::uint32, "transport"},
    username{YType::str, "username"},
    password{YType::str, "password"},
    sshpid{YType::uint32, "sshpid"},
    proto_state{YType::enumeration, "proto-state"},
    proto_state_time{YType::uint32, "proto-state-time"},
    serial{YType::uint32, "serial"},
    nonce{YType::uint32, "nonce"},
    refresh_time{YType::int32, "refresh-time"},
    response_time{YType::int32, "response-time"},
    purge_time{YType::int32, "purge-time"},
    ipv4roa{YType::uint32, "ipv4roa"},
    ipv4roa_announce{YType::uint32, "ipv4roa-announce"},
    ipv4roa_withdraw{YType::uint32, "ipv4roa-withdraw"},
    ipv6roa{YType::uint32, "ipv6roa"},
    ipv6roa_announce{YType::uint32, "ipv6roa-announce"},
    ipv6roa_withdraw{YType::uint32, "ipv6roa-withdraw"},
    proto_error{YType::enumeration, "proto-error"}
{

    yang_name = "rpki-server"; yang_parent_name = "rpki-server-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::~RpkiServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| preference.is_set
	|| port.is_set
	|| state.is_set
	|| state_time.is_set
	|| shutdown.is_set
	|| retries.is_set
	|| close_reason.is_set
	|| close_time.is_set
	|| close_time_real.is_set
	|| read_bytes.is_set
	|| write_bytes.is_set
	|| transport.is_set
	|| username.is_set
	|| password.is_set
	|| sshpid.is_set
	|| proto_state.is_set
	|| proto_state_time.is_set
	|| serial.is_set
	|| nonce.is_set
	|| refresh_time.is_set
	|| response_time.is_set
	|| purge_time.is_set
	|| ipv4roa.is_set
	|| ipv4roa_announce.is_set
	|| ipv4roa_withdraw.is_set
	|| ipv6roa.is_set
	|| ipv6roa_announce.is_set
	|| ipv6roa_withdraw.is_set
	|| proto_error.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_time.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(close_reason.yfilter)
	|| ydk::is_set(close_time.yfilter)
	|| ydk::is_set(close_time_real.yfilter)
	|| ydk::is_set(read_bytes.yfilter)
	|| ydk::is_set(write_bytes.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(sshpid.yfilter)
	|| ydk::is_set(proto_state.yfilter)
	|| ydk::is_set(proto_state_time.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(nonce.yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(purge_time.yfilter)
	|| ydk::is_set(ipv4roa.yfilter)
	|| ydk::is_set(ipv4roa_announce.yfilter)
	|| ydk::is_set(ipv4roa_withdraw.yfilter)
	|| ydk::is_set(ipv6roa.yfilter)
	|| ydk::is_set(ipv6roa_announce.yfilter)
	|| ydk::is_set(ipv6roa_withdraw.yfilter)
	|| ydk::is_set(proto_error.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_time.is_set || is_set(state_time.yfilter)) leaf_name_data.push_back(state_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (close_reason.is_set || is_set(close_reason.yfilter)) leaf_name_data.push_back(close_reason.get_name_leafdata());
    if (close_time.is_set || is_set(close_time.yfilter)) leaf_name_data.push_back(close_time.get_name_leafdata());
    if (close_time_real.is_set || is_set(close_time_real.yfilter)) leaf_name_data.push_back(close_time_real.get_name_leafdata());
    if (read_bytes.is_set || is_set(read_bytes.yfilter)) leaf_name_data.push_back(read_bytes.get_name_leafdata());
    if (write_bytes.is_set || is_set(write_bytes.yfilter)) leaf_name_data.push_back(write_bytes.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (sshpid.is_set || is_set(sshpid.yfilter)) leaf_name_data.push_back(sshpid.get_name_leafdata());
    if (proto_state.is_set || is_set(proto_state.yfilter)) leaf_name_data.push_back(proto_state.get_name_leafdata());
    if (proto_state_time.is_set || is_set(proto_state_time.yfilter)) leaf_name_data.push_back(proto_state_time.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (nonce.is_set || is_set(nonce.yfilter)) leaf_name_data.push_back(nonce.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());
    if (ipv4roa.is_set || is_set(ipv4roa.yfilter)) leaf_name_data.push_back(ipv4roa.get_name_leafdata());
    if (ipv4roa_announce.is_set || is_set(ipv4roa_announce.yfilter)) leaf_name_data.push_back(ipv4roa_announce.get_name_leafdata());
    if (ipv4roa_withdraw.is_set || is_set(ipv4roa_withdraw.yfilter)) leaf_name_data.push_back(ipv4roa_withdraw.get_name_leafdata());
    if (ipv6roa.is_set || is_set(ipv6roa.yfilter)) leaf_name_data.push_back(ipv6roa.get_name_leafdata());
    if (ipv6roa_announce.is_set || is_set(ipv6roa_announce.yfilter)) leaf_name_data.push_back(ipv6roa_announce.get_name_leafdata());
    if (ipv6roa_withdraw.is_set || is_set(ipv6roa_withdraw.yfilter)) leaf_name_data.push_back(ipv6roa_withdraw.get_name_leafdata());
    if (proto_error.is_set || is_set(proto_error.yfilter)) leaf_name_data.push_back(proto_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-time")
    {
        state_time = value;
        state_time.value_namespace = name_space;
        state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-reason")
    {
        close_reason = value;
        close_reason.value_namespace = name_space;
        close_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-time")
    {
        close_time = value;
        close_time.value_namespace = name_space;
        close_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-time-real")
    {
        close_time_real = value;
        close_time_real.value_namespace = name_space;
        close_time_real.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-bytes")
    {
        read_bytes = value;
        read_bytes.value_namespace = name_space;
        read_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-bytes")
    {
        write_bytes = value;
        write_bytes.value_namespace = name_space;
        write_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sshpid")
    {
        sshpid = value;
        sshpid.value_namespace = name_space;
        sshpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-state")
    {
        proto_state = value;
        proto_state.value_namespace = name_space;
        proto_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-state-time")
    {
        proto_state_time = value;
        proto_state_time.value_namespace = name_space;
        proto_state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonce")
    {
        nonce = value;
        nonce.value_namespace = name_space;
        nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa")
    {
        ipv4roa = value;
        ipv4roa.value_namespace = name_space;
        ipv4roa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-announce")
    {
        ipv4roa_announce = value;
        ipv4roa_announce.value_namespace = name_space;
        ipv4roa_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-withdraw")
    {
        ipv4roa_withdraw = value;
        ipv4roa_withdraw.value_namespace = name_space;
        ipv4roa_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa")
    {
        ipv6roa = value;
        ipv6roa.value_namespace = name_space;
        ipv6roa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-announce")
    {
        ipv6roa_announce = value;
        ipv6roa_announce.value_namespace = name_space;
        ipv6roa_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-withdraw")
    {
        ipv6roa_withdraw = value;
        ipv6roa_withdraw.value_namespace = name_space;
        ipv6roa_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-error")
    {
        proto_error = value;
        proto_error.value_namespace = name_space;
        proto_error.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-time")
    {
        state_time.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "close-reason")
    {
        close_reason.yfilter = yfilter;
    }
    if(value_path == "close-time")
    {
        close_time.yfilter = yfilter;
    }
    if(value_path == "close-time-real")
    {
        close_time_real.yfilter = yfilter;
    }
    if(value_path == "read-bytes")
    {
        read_bytes.yfilter = yfilter;
    }
    if(value_path == "write-bytes")
    {
        write_bytes.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "sshpid")
    {
        sshpid.yfilter = yfilter;
    }
    if(value_path == "proto-state")
    {
        proto_state.yfilter = yfilter;
    }
    if(value_path == "proto-state-time")
    {
        proto_state_time.yfilter = yfilter;
    }
    if(value_path == "serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "nonce")
    {
        nonce.yfilter = yfilter;
    }
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
    if(value_path == "ipv4roa")
    {
        ipv4roa.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-announce")
    {
        ipv4roa_announce.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-withdraw")
    {
        ipv4roa_withdraw.yfilter = yfilter;
    }
    if(value_path == "ipv6roa")
    {
        ipv6roa.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-announce")
    {
        ipv6roa_announce.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-withdraw")
    {
        ipv6roa_withdraw.yfilter = yfilter;
    }
    if(value_path == "proto-error")
    {
        proto_error.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "preference" || name == "port" || name == "state" || name == "state-time" || name == "shutdown" || name == "retries" || name == "close-reason" || name == "close-time" || name == "close-time-real" || name == "read-bytes" || name == "write-bytes" || name == "transport" || name == "username" || name == "password" || name == "sshpid" || name == "proto-state" || name == "proto-state-time" || name == "serial" || name == "nonce" || name == "refresh-time" || name == "response-time" || name == "purge-time" || name == "ipv4roa" || name == "ipv4roa-announce" || name == "ipv4roa-withdraw" || name == "ipv6roa" || name == "ipv6roa-announce" || name == "ipv6roa-withdraw" || name == "proto-error")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoutes()
    :
    rpki_route(this, {})
{

    yang_name = "rpki-routes"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::~RpkiRoutes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute>();
        ent_->parent = this;
        rpki_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute()
    :
    af_name{YType::enumeration, "af-name"},
    address{YType::str, "address"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"}
        ,
    rpki_route(this, {})
{

    yang_name = "rpki-route"; yang_parent_name = "rpki-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::~RpkiRoute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| address.is_set
	|| minimum.is_set
	|| maximum.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_>();
        ent_->parent = this;
        rpki_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route" || name == "af-name" || name == "address" || name == "minimum" || name == "maximum")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::RpkiRoute_()
    :
    af_name{YType::enumeration, "af-name"},
    address{YType::str, "address"},
    min_prefix_len{YType::uint8, "min-prefix-len"},
    max_prefix_len{YType::uint8, "max-prefix-len"},
    as{YType::uint32, "as"},
    refcount{YType::uint16, "refcount"},
    server{YType::str, "server"},
    stale{YType::boolean, "stale"}
{

    yang_name = "rpki-route"; yang_parent_name = "rpki-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::~RpkiRoute_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| address.is_set
	|| min_prefix_len.is_set
	|| max_prefix_len.is_set
	|| as.is_set
	|| refcount.is_set
	|| server.is_set
	|| stale.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(min_prefix_len.yfilter)
	|| ydk::is_set(max_prefix_len.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(stale.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (min_prefix_len.is_set || is_set(min_prefix_len.yfilter)) leaf_name_data.push_back(min_prefix_len.get_name_leafdata());
    if (max_prefix_len.is_set || is_set(max_prefix_len.yfilter)) leaf_name_data.push_back(max_prefix_len.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-prefix-len")
    {
        min_prefix_len = value;
        min_prefix_len.value_namespace = name_space;
        min_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-len")
    {
        max_prefix_len = value;
        max_prefix_len.value_namespace = name_space;
        max_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refcount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "min-prefix-len")
    {
        min_prefix_len.yfilter = yfilter;
    }
    if(value_path == "max-prefix-len")
    {
        max_prefix_len.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "refcount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "address" || name == "min-prefix-len" || name == "max-prefix-len" || name == "as" || name == "refcount" || name == "server" || name == "stale")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::UpdateInboundErrorProcess()
    :
    update_error_handling_basic_ebgp{YType::boolean, "update-error-handling-basic-ebgp"},
    update_error_handling_basic_ibgp{YType::boolean, "update-error-handling-basic-ibgp"},
    update_error_handling_extended_ebgp{YType::boolean, "update-error-handling-extended-ebgp"},
    update_error_handling_extended_ibgp{YType::boolean, "update-error-handling-extended-ibgp"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"}
        ,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;

    yang_name = "update-inbound-error-process"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::~UpdateInboundErrorProcess()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::has_data() const
{
    if (is_presence_container) return true;
    return update_error_handling_basic_ebgp.is_set
	|| update_error_handling_basic_ibgp.is_set
	|| update_error_handling_extended_ebgp.is_set
	|| update_error_handling_extended_ibgp.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| last_update_malformed_age.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_error_handling_basic_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_basic_ibgp.yfilter)
	|| ydk::is_set(update_error_handling_extended_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_extended_ibgp.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_malformed_neighbor_count.yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_handling_basic_ebgp.is_set || is_set(update_error_handling_basic_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ebgp.get_name_leafdata());
    if (update_error_handling_basic_ibgp.is_set || is_set(update_error_handling_basic_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ibgp.get_name_leafdata());
    if (update_error_handling_extended_ebgp.is_set || is_set(update_error_handling_extended_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ebgp.get_name_leafdata());
    if (update_error_handling_extended_ibgp.is_set || is_set(update_error_handling_extended_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ibgp.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.yfilter)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_update_malformed_timestamp != nullptr)
    {
        _children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-error-handling-basic-ebgp")
    {
        update_error_handling_basic_ebgp = value;
        update_error_handling_basic_ebgp.value_namespace = name_space;
        update_error_handling_basic_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ibgp")
    {
        update_error_handling_basic_ibgp = value;
        update_error_handling_basic_ibgp.value_namespace = name_space;
        update_error_handling_basic_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp = value;
        update_error_handling_extended_ebgp.value_namespace = name_space;
        update_error_handling_extended_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp = value;
        update_error_handling_extended_ibgp.value_namespace = name_space;
        update_error_handling_extended_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count = value;
        update_malformed_neighbor_count.value_namespace = name_space;
        update_malformed_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-error-handling-basic-ebgp")
    {
        update_error_handling_basic_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ibgp")
    {
        update_error_handling_basic_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-malformed-timestamp" || name == "update-error-handling-basic-ebgp" || name == "update-error-handling-basic-ibgp" || name == "update-error-handling-extended-ebgp" || name == "update-error-handling-extended-ibgp" || name == "update-malformed-message-count" || name == "update-malformed-neighbor-count" || name == "last-update-malformed-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-process"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiSummary::RpkiSummary()
    :
    servers{YType::uint32, "servers"},
    ipv4roa_nets{YType::uint32, "ipv4roa-nets"},
    ipv4roa_paths{YType::uint32, "ipv4roa-paths"},
    ipv6roa_nets{YType::uint32, "ipv6roa-nets"},
    ipv6roa_paths{YType::uint32, "ipv6roa-paths"}
{

    yang_name = "rpki-summary"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::RpkiSummary::~RpkiSummary()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_data() const
{
    if (is_presence_container) return true;
    return servers.is_set
	|| ipv4roa_nets.is_set
	|| ipv4roa_paths.is_set
	|| ipv6roa_nets.is_set
	|| ipv6roa_paths.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(servers.yfilter)
	|| ydk::is_set(ipv4roa_nets.yfilter)
	|| ydk::is_set(ipv4roa_paths.yfilter)
	|| ydk::is_set(ipv6roa_nets.yfilter)
	|| ydk::is_set(ipv6roa_paths.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (servers.is_set || is_set(servers.yfilter)) leaf_name_data.push_back(servers.get_name_leafdata());
    if (ipv4roa_nets.is_set || is_set(ipv4roa_nets.yfilter)) leaf_name_data.push_back(ipv4roa_nets.get_name_leafdata());
    if (ipv4roa_paths.is_set || is_set(ipv4roa_paths.yfilter)) leaf_name_data.push_back(ipv4roa_paths.get_name_leafdata());
    if (ipv6roa_nets.is_set || is_set(ipv6roa_nets.yfilter)) leaf_name_data.push_back(ipv6roa_nets.get_name_leafdata());
    if (ipv6roa_paths.is_set || is_set(ipv6roa_paths.yfilter)) leaf_name_data.push_back(ipv6roa_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "servers")
    {
        servers = value;
        servers.value_namespace = name_space;
        servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets = value;
        ipv4roa_nets.value_namespace = name_space;
        ipv4roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths = value;
        ipv4roa_paths.value_namespace = name_space;
        ipv4roa_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets = value;
        ipv6roa_nets.value_namespace = name_space;
        ipv6roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths = value;
        ipv6roa_paths.value_namespace = name_space;
        ipv6roa_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "servers")
    {
        servers.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servers" || name == "ipv4roa-nets" || name == "ipv4roa-paths" || name == "ipv6roa-nets" || name == "ipv6roa-paths")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstancesTable()
    :
    bpm_instances(std::make_shared<Bgp::BpmInstancesTable::BpmInstances>())
{
    bpm_instances->parent = this;

    yang_name = "bpm-instances-table"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

Bgp::BpmInstancesTable::~BpmInstancesTable()
{
}

bool Bgp::BpmInstancesTable::has_data() const
{
    if (is_presence_container) return true;
    return (bpm_instances !=  nullptr && bpm_instances->has_data());
}

bool Bgp::BpmInstancesTable::has_operation() const
{
    return is_set(yfilter)
	|| (bpm_instances !=  nullptr && bpm_instances->has_operation());
}

std::string Bgp::BpmInstancesTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpm-instances-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::BpmInstancesTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpm-instances")
    {
        if(bpm_instances == nullptr)
        {
            bpm_instances = std::make_shared<Bgp::BpmInstancesTable::BpmInstances>();
        }
        return bpm_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::BpmInstancesTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpm_instances != nullptr)
    {
        _children["bpm-instances"] = bpm_instances;
    }

    return _children;
}

void Bgp::BpmInstancesTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::BpmInstancesTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::BpmInstancesTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpm-instances")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::BpmInstances()
    :
    instance(this, {})
{

    yang_name = "bpm-instances"; yang_parent_name = "bpm-instances-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Bgp::BpmInstancesTable::BpmInstances::~BpmInstances()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::BpmInstancesTable::BpmInstances::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::BpmInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpm-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::BpmInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::BpmInstancesTable::BpmInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Bgp::BpmInstancesTable::BpmInstances::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::BpmInstancesTable::BpmInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::BpmInstancesTable::BpmInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::BpmInstancesTable::BpmInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::BpmInstancesTable::BpmInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::Instance()
    :
    instance_identifier{YType::uint16, "instance-identifier"},
    placed_group_id{YType::uint16, "placed-group-id"},
    instance_name_str{YType::str, "instance-name-str"},
    as_number{YType::uint32, "as-number"},
    number_of_vrfs{YType::uint32, "number-of-vrfs"},
    read_only_enabled{YType::boolean, "read-only-enabled"},
    install_diversion_enabled{YType::boolean, "install-diversion-enabled"},
    srgb_start_configured{YType::uint32, "srgb-start-configured"},
    srgb_end_configured{YType::uint32, "srgb-end-configured"}
        ,
    af_array(this, {})
{

    yang_name = "instance"; yang_parent_name = "bpm-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Bgp::BpmInstancesTable::BpmInstances::Instance::~Instance()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_array.len(); index++)
    {
        if(af_array[index]->has_data())
            return true;
    }
    return instance_identifier.is_set
	|| placed_group_id.is_set
	|| instance_name_str.is_set
	|| as_number.is_set
	|| number_of_vrfs.is_set
	|| read_only_enabled.is_set
	|| install_diversion_enabled.is_set
	|| srgb_start_configured.is_set
	|| srgb_end_configured.is_set;
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_operation() const
{
    for (std::size_t index=0; index<af_array.len(); index++)
    {
        if(af_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter)
	|| ydk::is_set(placed_group_id.yfilter)
	|| ydk::is_set(instance_name_str.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(number_of_vrfs.yfilter)
	|| ydk::is_set(read_only_enabled.yfilter)
	|| ydk::is_set(install_diversion_enabled.yfilter)
	|| ydk::is_set(srgb_start_configured.yfilter)
	|| ydk::is_set(srgb_end_configured.yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/bpm-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::BpmInstances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());
    if (placed_group_id.is_set || is_set(placed_group_id.yfilter)) leaf_name_data.push_back(placed_group_id.get_name_leafdata());
    if (instance_name_str.is_set || is_set(instance_name_str.yfilter)) leaf_name_data.push_back(instance_name_str.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (number_of_vrfs.is_set || is_set(number_of_vrfs.yfilter)) leaf_name_data.push_back(number_of_vrfs.get_name_leafdata());
    if (read_only_enabled.is_set || is_set(read_only_enabled.yfilter)) leaf_name_data.push_back(read_only_enabled.get_name_leafdata());
    if (install_diversion_enabled.is_set || is_set(install_diversion_enabled.yfilter)) leaf_name_data.push_back(install_diversion_enabled.get_name_leafdata());
    if (srgb_start_configured.is_set || is_set(srgb_start_configured.yfilter)) leaf_name_data.push_back(srgb_start_configured.get_name_leafdata());
    if (srgb_end_configured.is_set || is_set(srgb_end_configured.yfilter)) leaf_name_data.push_back(srgb_end_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::BpmInstancesTable::BpmInstances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-array")
    {
        auto ent_ = std::make_shared<Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray>();
        ent_->parent = this;
        af_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::BpmInstancesTable::BpmInstances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placed-group-id")
    {
        placed_group_id = value;
        placed_group_id.value_namespace = name_space;
        placed_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name-str")
    {
        instance_name_str = value;
        instance_name_str.value_namespace = name_space;
        instance_name_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-vrfs")
    {
        number_of_vrfs = value;
        number_of_vrfs.value_namespace = name_space;
        number_of_vrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only-enabled")
    {
        read_only_enabled = value;
        read_only_enabled.value_namespace = name_space;
        read_only_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-diversion-enabled")
    {
        install_diversion_enabled = value;
        install_diversion_enabled.value_namespace = name_space;
        install_diversion_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured = value;
        srgb_start_configured.value_namespace = name_space;
        srgb_start_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured = value;
        srgb_end_configured.value_namespace = name_space;
        srgb_end_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
    if(value_path == "placed-group-id")
    {
        placed_group_id.yfilter = yfilter;
    }
    if(value_path == "instance-name-str")
    {
        instance_name_str.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "number-of-vrfs")
    {
        number_of_vrfs.yfilter = yfilter;
    }
    if(value_path == "read-only-enabled")
    {
        read_only_enabled.yfilter = yfilter;
    }
    if(value_path == "install-diversion-enabled")
    {
        install_diversion_enabled.yfilter = yfilter;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured.yfilter = yfilter;
    }
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-array" || name == "instance-identifier" || name == "placed-group-id" || name == "instance-name-str" || name == "as-number" || name == "number-of-vrfs" || name == "read-only-enabled" || name == "install-diversion-enabled" || name == "srgb-start-configured" || name == "srgb-end-configured")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::AfArray()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "af-array"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false; 
}

Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::~AfArray()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/bpm-instances/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

