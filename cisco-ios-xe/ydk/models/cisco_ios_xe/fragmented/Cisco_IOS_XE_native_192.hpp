#ifndef _CISCO_IOS_XE_NATIVE_192_
#define _CISCO_IOS_XE_NATIVE_192_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_191.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Daily


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::On


class Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::NonDisruptive::Port::All::Weekly


class Native::Diagnostic::Schedule::Switch::Test::PerPort : public ydk::Entity
{
    public:
        PerPort();
        ~PerPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly
        class Port; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly> weekly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port> port;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Daily


class Native::Diagnostic::Schedule::Switch::Test::PerPort::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::On


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Weekly


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfacePortNumber; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber
        class PortNumberList; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList
        class All; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber> > interface_port_number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList> > port_number_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All> all;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber : public ydk::Entity
{
    public:
        InterfacePortNumber();
        ~InterfacePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList : public ydk::Entity
{
    public:
        PortNumberList();
        ~PortNumberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_list; //type: string
        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily
        class On; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On
        class Weekly; //type: Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On> on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly> weekly;
        
}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On : public ydk::Entity
{
    public:
        On();
        ~On();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf month; //type: MonthType
        ydk::YLeaf day_of_month; //type: uint16
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On


class Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf hh_mm; //type: string

}; // Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly


class Native::FabricGroup : public ydk::Entity
{
    public:
        FabricGroup();
        ~FabricGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Fabric; //type: Native::FabricGroup::Fabric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric> fabric;
        
}; // Native::FabricGroup


class Native::FabricGroup::Fabric : public ydk::Entity
{
    public:
        Fabric();
        ~Fabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Auto; //type: Native::FabricGroup::Fabric::Auto

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto> auto_; // presence node
        
}; // Native::FabricGroup::Fabric


class Native::FabricGroup::Fabric::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConfigFabricAuto; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto> config_fabric_auto;
        
}; // Native::FabricGroup::Fabric::Auto


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto : public ydk::Entity
{
    public:
        ConfigFabricAuto();
        ~ConfigFabricAuto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Domain; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain> domain;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IwanFabric; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric> iwan_fabric; // presence node
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric : public ydk::Entity
{
    public:
        IwanFabric();
        ~IwanFabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConfigFabricIwan; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan> config_fabric_iwan;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan : public ydk::Entity
{
    public:
        ConfigFabricIwan();
        ~ConfigFabricIwan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fabric_device_id; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        class Border; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border
        class ControlPlane; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane
        class DeviceRole; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole
        class Region; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region
        class Site; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site
        class Tenant; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant
        class VirtualNetwork; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border> border;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane> control_plane;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region> region;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site> site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant> tenant;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork> virtual_network;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border : public ydk::Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf self; //type: empty

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DestinationAddress; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress
        class SourceAddress; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress> destination_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress> source_address;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4> > ipv4;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        class AuthKey; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey> auth_key;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey : public ydk::Entity
{
    public:
        AuthKey();
        ~AuthKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range> > range;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf word; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf border; //type: empty
        ydk::YLeaf edge; //type: empty
        ydk::YLeaf nat_traversal_router; //type: empty
        ydk::YLeaf transit_router; //type: empty

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region : public ydk::Entity
{
    public:
        Region();
        ~Region();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id> id;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Range; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range> > range;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id> id;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Range; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range> > range;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant : public ydk::Entity
{
    public:
        Tenant();
        ~Tenant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id> id;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Range; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range> > range;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork : public ydk::Entity
{
    public:
        VirtualNetwork();
        ~VirtualNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Name; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name> name;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Word; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word> > word;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word : public ydk::Entity
{
    public:
        Word();
        ~Word();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf word; //type: string
        class Id; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id> > id;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint32
        class ConfigFabricIwanVirtualNetwork; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork> config_fabric_iwan_virtual_network;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork : public ydk::Entity
{
    public:
        ConfigFabricIwanVirtualNetwork();
        ~ConfigFabricIwanVirtualNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnterprisePrefix; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix
        class PrefixGroup; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix> enterprise_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup> prefix_group;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix : public ydk::Entity
{
    public:
        EnterprisePrefix();
        ~EnterprisePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4
        class Ipv6; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6> ipv6;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup : public ydk::Entity
{
    public:
        PrefixGroup();
        ~PrefixGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word_; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_> > word;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_ : public ydk::Entity
{
    public:
        Word_();
        ~Word_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class Vrf; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf> > vrf;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class ConfigFabricIwanVirtualNetworkPrefixGroup; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup> config_fabric_iwan_virtual_network_prefix_group;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup : public ydk::Entity
{
    public:
        ConfigFabricIwanVirtualNetworkPrefixGroup();
        ~ConfigFabricIwanVirtualNetworkPrefixGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefix; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix> prefix;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Import; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import
        class Ipv4; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4
        class Ipv6; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6> ipv6;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp
        class Eigrp; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp
        class Isis; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis
        class LanFabric; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric
        class Ospf; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf
        class Rip; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip
        class WanFabric; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric> lan_fabric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric> wan_fabric;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word_; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_> > word;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_ : public ydk::Entity
{
    public:
        Word_();
        ~Word_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word_; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_> > word;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_ : public ydk::Entity
{
    public:
        Word_();
        ~Word_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word_; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_> > word;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_ : public ydk::Entity
{
    public:
        Word_();
        ~Word_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric : public ydk::Entity
{
    public:
        LanFabric();
        ~LanFabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word_; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_> > word;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_ : public ydk::Entity
{
    public:
        Word_();
        ~Word_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word_; //type: Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_> > word;
        
}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_ : public ydk::Entity
{
    public:
        Word_();
        ~Word_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric : public ydk::Entity
{
    public:
        WanFabric();
        ~WanFabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4


class Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6


class Native::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf run; //type: empty

}; // Native::Lldp


class Native::Nat66 : public ydk::Entity
{
    public:
        Nat66();
        ~Nat66();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefix; //type: Native::Nat66::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Nat66::Prefix> prefix;
        
}; // Native::Nat66


class Native::Nat66::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Inside; //type: Native::Nat66::Prefix::Inside

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Nat66::Prefix::Inside> > inside;
        
}; // Native::Nat66::Prefix


class Native::Nat66::Prefix::Inside : public ydk::Entity
{
    public:
        Inside();
        ~Inside();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf inside_pfx; //type: string
        ydk::YLeaf outside; //type: string

}; // Native::Nat66::Prefix::Inside


class Native::PmAgent : public ydk::Entity
{
    public:
        PmAgent();
        ~PmAgent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConfigPmAgent; //type: Native::PmAgent::ConfigPmAgent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent> config_pm_agent;
        
}; // Native::PmAgent


class Native::PmAgent::ConfigPmAgent : public ydk::Entity
{
    public:
        ConfigPmAgent();
        ~ConfigPmAgent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf shutdown; //type: empty
        class Device; //type: Native::PmAgent::ConfigPmAgent::Device
        class InstanceId; //type: Native::PmAgent::ConfigPmAgent::InstanceId
        class Region; //type: Native::PmAgent::ConfigPmAgent::Region
        class Site; //type: Native::PmAgent::ConfigPmAgent::Site
        class Tenant; //type: Native::PmAgent::ConfigPmAgent::Tenant
        class Pmcs; //type: Native::PmAgent::ConfigPmAgent::Pmcs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device> device;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId> > instance_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region> region;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site> site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant> tenant;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs> pmcs;
        
}; // Native::PmAgent::ConfigPmAgent


class Native::PmAgent::ConfigPmAgent::Device : public ydk::Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Device::Id
        class Type; //type: Native::PmAgent::ConfigPmAgent::Device::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Id> id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type> type;
        
}; // Native::PmAgent::ConfigPmAgent::Device


class Native::PmAgent::ConfigPmAgent::Device::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DeviceRange; //type: Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange> > device_range;
        
}; // Native::PmAgent::ConfigPmAgent::Device::Id


class Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange : public ydk::Entity
{
    public:
        DeviceRange();
        ~DeviceRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf device_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange


class Native::PmAgent::ConfigPmAgent::Device::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pxtr; //type: empty
        class Ntr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr
        class Rtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Rtr
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Xtr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr> ntr; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Rtr> rtr; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr : public ydk::Entity
{
    public:
        Ntr();
        ~Ntr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr> rtr; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr : public ydk::Entity
{
    public:
        Rtr();
        ~Rtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr : public ydk::Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Rtr : public ydk::Entity
{
    public:
        Rtr();
        ~Rtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ntr; //type: empty
        class Xtr; //type: Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr> xtr; // presence node
        
}; // Native::PmAgent::ConfigPmAgent::Device::Type::Rtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr : public ydk::Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ntr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr


class Native::PmAgent::ConfigPmAgent::Device::Type::Xtr : public ydk::Entity
{
    public:
        Xtr();
        ~Xtr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ntr; //type: empty
        ydk::YLeaf rtr; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Device::Type::Xtr


class Native::PmAgent::ConfigPmAgent::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_id_range; //type: uint32
        class ConfigPmAgentInstance; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance> config_pm_agent_instance;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance : public ydk::Entity
{
    public:
        ConfigPmAgentInstance();
        ~ConfigPmAgentInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnterprisePrefix; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix> enterprise_prefix;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix : public ydk::Entity
{
    public:
        EnterprisePrefix();
        ~EnterprisePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4


class Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6


class Native::PmAgent::ConfigPmAgent::Region : public ydk::Entity
{
    public:
        Region();
        ~Region();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Region::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Region


class Native::PmAgent::ConfigPmAgent::Region::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RegionIdRange; //type: Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange> > region_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Region::Id


class Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange : public ydk::Entity
{
    public:
        RegionIdRange();
        ~RegionIdRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf region_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange


class Native::PmAgent::ConfigPmAgent::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Site::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Site


class Native::PmAgent::ConfigPmAgent::Site::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SiteIdRange; //type: Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange> > site_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Site::Id


class Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange : public ydk::Entity
{
    public:
        SiteIdRange();
        ~SiteIdRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf site_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange


class Native::PmAgent::ConfigPmAgent::Tenant : public ydk::Entity
{
    public:
        Tenant();
        ~Tenant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Id; //type: Native::PmAgent::ConfigPmAgent::Tenant::Id

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant::Id> id;
        
}; // Native::PmAgent::ConfigPmAgent::Tenant


class Native::PmAgent::ConfigPmAgent::Tenant::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TenantIdRange; //type: Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange> > tenant_id_range;
        
}; // Native::PmAgent::ConfigPmAgent::Tenant::Id


class Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange : public ydk::Entity
{
    public:
        TenantIdRange();
        ~TenantIdRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tenant_id_range; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange


class Native::PmAgent::ConfigPmAgent::Pmcs : public ydk::Entity
{
    public:
        Pmcs();
        ~Pmcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PmcsIpv4; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4> > pmcs_ipv4;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4 : public ydk::Entity
{
    public:
        PmcsIpv4();
        ~PmcsIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf backup; //type: empty
        class Ipv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6> ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PmcsIpv6; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6> > pmcs_ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6 : public ydk::Entity
{
    public:
        PmcsIpv6();
        ~PmcsIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf backup; //type: empty

}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6_; //type: Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_> > ipv6;
        
}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6


class Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_ : public ydk::Entity
{
    public:
        Ipv6_();
        ~Ipv6_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf backup; //type: empty
        ydk::YLeaf ipv4; //type: string

}; // Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_


class Native::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf redundancy_mode; //type: RedundancyMode
        ydk::YLeaf max_min; //type: MaxMin
        ydk::YLeaf inputs; //type: uint8
        class Inline; //type: Native::Power::Inline

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline> inline_; // presence node
                class RedundancyMode;
        class MaxMin;

}; // Native::Power


class Native::Power::Inline : public ydk::Entity
{
    public:
        Inline();
        ~Inline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Consumption; //type: Native::Power::Inline::Consumption
        class Logging; //type: Native::Power::Inline::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline::Consumption> consumption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Power::Inline::Logging> logging;
        
}; // Native::Power::Inline


class Native::Power::Inline::Consumption : public ydk::Entity
{
    public:
        Consumption();
        ~Consumption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf default_; //type: uint16

}; // Native::Power::Inline::Consumption


class Native::Power::Inline::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf global; //type: empty

}; // Native::Power::Inline::Logging


class Native::NamedOrderingRouteMap : public ydk::Entity
{
    public:
        NamedOrderingRouteMap();
        ~NamedOrderingRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty

}; // Native::NamedOrderingRouteMap


class Native::AccessSession : public ydk::Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Attributes; //type: Native::AccessSession::Attributes
        class MacMove; //type: Native::AccessSession::MacMove

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes> attributes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::MacMove> mac_move;
        
}; // Native::AccessSession


class Native::AccessSession::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FilterList; //type: Native::AccessSession::Attributes::FilterList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList> filter_list;
        
}; // Native::AccessSession::Attributes


class Native::AccessSession::Attributes::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class List; //type: Native::AccessSession::Attributes::FilterList::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::AccessSession::Attributes::FilterList::List> > list;
        
}; // Native::AccessSession::Attributes::FilterList


class Native::AccessSession::Attributes::FilterList::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf lldp; //type: empty

}; // Native::AccessSession::Attributes::FilterList::List


class Native::AccessSession::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deny; //type: empty

}; // Native::AccessSession::MacMove


class Native::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Command; //type: Native::Authentication::Command
        class Critical; //type: Native::Authentication::Critical
        class MacMove; //type: Native::Authentication::MacMove

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Command> command;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Critical> critical;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::MacMove> mac_move;
        
}; // Native::Authentication


class Native::Authentication::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BouncePort; //type: Native::Authentication::Command::BouncePort
        class DisablePort; //type: Native::Authentication::Command::DisablePort

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Command::BouncePort> bounce_port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Command::DisablePort> disable_port;
        
}; // Native::Authentication::Command


class Native::Authentication::Command::BouncePort : public ydk::Entity
{
    public:
        BouncePort();
        ~BouncePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Authentication::Command::BouncePort


class Native::Authentication::Command::DisablePort : public ydk::Entity
{
    public:
        DisablePort();
        ~DisablePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Authentication::Command::DisablePort


class Native::Authentication::Critical : public ydk::Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Recovery; //type: Native::Authentication::Critical::Recovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Authentication::Critical::Recovery> recovery;
        
}; // Native::Authentication::Critical


class Native::Authentication::Critical::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: uint32

}; // Native::Authentication::Critical::Recovery


class Native::Authentication::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf permit; //type: empty

}; // Native::Authentication::MacMove


class Native::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MdnsSd; //type: Native::ServiceList::MdnsSd

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd> > mdns_sd;
        
}; // Native::ServiceList


class Native::ServiceList::MdnsSd : public ydk::Entity
{
    public:
        MdnsSd();
        ~MdnsSd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf service_list_name; //type: string
        class Deny; //type: Native::ServiceList::MdnsSd::Deny
        class Permit; //type: Native::ServiceList::MdnsSd::Permit
        class Query; //type: Native::ServiceList::MdnsSd::Query

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny> > deny;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit> > permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Query> query;
        
}; // Native::ServiceList::MdnsSd


class Native::ServiceList::MdnsSd::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Deny::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match> match;
        
}; // Native::ServiceList::MdnsSd::Deny


class Native::ServiceList::MdnsSd::Deny::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learnt_interface; //type: empty
        ydk::YLeaf service_instance; //type: string
        ydk::YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Deny::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Deny::Match::MessageType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::Location> location; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Deny::Match


class Native::ServiceList::MdnsSd::Deny::Match::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Deny::Match::Location


class Native::ServiceList::MdnsSd::Deny::Match::MessageType : public ydk::Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announcement; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Deny::Match::MessageType


class Native::ServiceList::MdnsSd::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Permit::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match> match;
        
}; // Native::ServiceList::MdnsSd::Permit


class Native::ServiceList::MdnsSd::Permit::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learnt_interface; //type: empty
        ydk::YLeaf service_instance; //type: string
        ydk::YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Permit::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Permit::Match::MessageType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::Location> location; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Permit::Match


class Native::ServiceList::MdnsSd::Permit::Match::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Permit::Match::Location


class Native::ServiceList::MdnsSd::Permit::Match::MessageType : public ydk::Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announcement; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Permit::Match::MessageType


class Native::ServiceList::MdnsSd::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_type; //type: string

}; // Native::ServiceList::MdnsSd::Query


class Native::ServiceRouting : public ydk::Entity
{
    public:
        ServiceRouting();
        ~ServiceRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf capabilities_manager; //type: boolean
        class MdnsSd; //type: Native::ServiceRouting::MdnsSd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceRouting::MdnsSd> mdns_sd; // presence node
        
}; // Native::ServiceRouting


class Native::ServiceRouting::MdnsSd : public ydk::Entity
{
    public:
        MdnsSd();
        ~MdnsSd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServicePolicy; //type: Native::ServiceRouting::MdnsSd::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceRouting::MdnsSd::ServicePolicy> > service_policy;
        
}; // Native::ServiceRouting::MdnsSd


class Native::ServiceRouting::MdnsSd::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf policy_name; //type: string
        class Direction;

}; // Native::ServiceRouting::MdnsSd::ServicePolicy


class Native::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all_interfaces; //type: empty
        class Redirect; //type: Native::Utd::Redirect
        class Engine; //type: Native::Utd::Engine

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Engine> engine; // presence node
        
}; // Native::Utd


class Native::Utd::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Utd::Redirect::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Redirect::Interface> interface;
        
}; // Native::Utd::Redirect


class Native::Utd::Redirect::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bdi; //type: string
        ydk::YLeaf virtualportgroup; //type: uint16

}; // Native::Utd::Redirect::Interface


class Native::Utd::Engine : public ydk::Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mode; //type: Mode
        class Fail; //type: Native::Utd::Engine::Fail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Engine::Fail> fail;
                class Mode;

}; // Native::Utd::Engine


class Native::Utd::Engine::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf close; //type: empty

}; // Native::Utd::Engine::Fail


class Native::UtdSt : public ydk::Entity
{
    public:
        UtdSt();
        ~UtdSt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Utd; //type: Native::UtdSt::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd> utd;
        
}; // Native::UtdSt


class Native::UtdSt::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class WebFilter; //type: Native::UtdSt::Utd::WebFilter
        class Engine; //type: Native::UtdSt::Utd::Engine
        class ThreatInspection; //type: Native::UtdSt::Utd::ThreatInspection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter> web_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine> engine;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::ThreatInspection> threat_inspection;
        
}; // Native::UtdSt::Utd


class Native::UtdSt::Utd::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Block; //type: Native::UtdSt::Utd::WebFilter::Block
        class Domain; //type: Native::UtdSt::Utd::WebFilter::Domain
        class Sourcedb; //type: Native::UtdSt::Utd::WebFilter::Sourcedb
        class Url; //type: Native::UtdSt::Utd::WebFilter::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain> domain;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Sourcedb> > sourcedb;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url> url;
        
}; // Native::UtdSt::Utd::WebFilter


class Native::UtdSt::Utd::WebFilter::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LocalServer; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer
        class Page; //type: Native::UtdSt::Utd::WebFilter::Block::Page

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer> local_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::Page> page;
        
}; // Native::UtdSt::Utd::WebFilter::Block

class Native::Power::RedundancyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf combined;
        static const ydk::Enum::YLeaf redundant;

};

class Native::Power::MaxMin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

};

class Native::ServiceRouting::MdnsSd::ServicePolicy::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IN;
        static const ydk::Enum::YLeaf OUT;

};

class Native::Utd::Engine::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf advanced;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_192_ */
