#ifndef _CISCO_IOS_XE_NATIVE_121_
#define _CISCO_IOS_XE_NATIVE_121_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_120.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::SpanningTree::Vlan::Root : public ydk::Entity
{
    public:
        Root();
        ~Root();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Primary; //type: Native::SpanningTree::Vlan::Root::Primary
        class Secondary; //type: Native::SpanningTree::Vlan::Root::Secondary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Primary> primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Secondary> secondary;
        
}; // Native::SpanningTree::Vlan::Root


class Native::SpanningTree::Vlan::Root::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Primary


class Native::SpanningTree::Vlan::Root::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Secondary


class Native::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

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

        ydk::YLeaf templating; //type: empty

}; // Native::Subscriber


class Native::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

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

        class TrackedObject; //type: Native::Track::TrackedObject
        class Resolution; //type: Native::Track::Resolution
        class Timer; //type: Native::Track::Timer

        ydk::YList tracked_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Resolution> resolution;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer> timer;
        
}; // Native::Track


class Native::Track::TrackedObject : public ydk::Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

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

        ydk::YLeaf object_number; //type: uint32
        ydk::YLeaf stub_object; //type: empty
        ydk::YLeaf default_state; //type: DefaultState
        class Interface; //type: Native::Track::TrackedObject::Interface
        class Ip; //type: Native::Track::TrackedObject::Ip
        class Ipv6; //type: Native::Track::TrackedObject::Ipv6
        class List; //type: Native::Track::TrackedObject::List
        class Default; //type: Native::Track::TrackedObject::Default
        class Delay; //type: Native::Track::TrackedObject::Delay
        class Object; //type: Native::Track::TrackedObject::Object
        class Ipv6Object; //type: Native::Track::TrackedObject::Ipv6Object
        class IpObject; //type: Native::Track::TrackedObject::IpObject

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Delay> delay;
        ydk::YList object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6Object> ipv6_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::IpObject> ip_object;
                class DefaultState;

}; // Native::Track::TrackedObject


class Native::Track::TrackedObject::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf routing; //type: empty
        class Protocol;

}; // Native::Track::TrackedObject::Interface


class Native::Track::TrackedObject::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Native::Track::TrackedObject::Ip::Route
        class Sla; //type: Native::Track::TrackedObject::Ip::Sla

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ip::Sla> sla;
        
}; // Native::Track::TrackedObject::Ip


class Native::Track::TrackedObject::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf metric; //type: Metric
        class Metric;

}; // Native::Track::TrackedObject::Ip::Route


class Native::Track::TrackedObject::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf state; //type: empty

}; // Native::Track::TrackedObject::Ip::Sla


class Native::Track::TrackedObject::Ipv6 : public ydk::Entity
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

        class Route; //type: Native::Track::TrackedObject::Ipv6::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Ipv6::Route> route;
        
}; // Native::Track::TrackedObject::Ipv6


class Native::Track::TrackedObject::Ipv6::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf reachability; //type: empty
        ydk::YLeaf metric; //type: Metric
        class Metric;

}; // Native::Track::TrackedObject::Ipv6::Route


class Native::Track::TrackedObject::List : public ydk::Entity
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

        ydk::YLeaf boolean; //type: Boolean
        ydk::YLeaf threshold; //type: Threshold
        class Boolean;
        class Threshold;

}; // Native::Track::TrackedObject::List


class Native::Track::TrackedObject::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_state; //type: DefaultState
        class Delay; //type: Native::Track::TrackedObject::Default::Delay
        class Ip; //type: Native::Track::TrackedObject::Default::Ip
        class Ipv6; //type: Native::Track::TrackedObject::Default::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::TrackedObject::Default::Ipv6> ipv6;
                class DefaultState;

}; // Native::Track::TrackedObject::Default


class Native::Track::TrackedObject::Default::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Track::TrackedObject::Default::Delay


class Native::Track::TrackedObject::Default::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default::Ip


class Native::Track::TrackedObject::Default::Ipv6 : public ydk::Entity
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

        ydk::YLeaf vrf; //type: empty

}; // Native::Track::TrackedObject::Default::Ipv6


class Native::Track::TrackedObject::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf down; //type: uint32
        ydk::YLeaf up; //type: uint32

}; // Native::Track::TrackedObject::Delay


class Native::Track::TrackedObject::Object : public ydk::Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf not_; //type: empty

}; // Native::Track::TrackedObject::Object


class Native::Track::TrackedObject::Ipv6Object : public ydk::Entity
{
    public:
        Ipv6Object();
        ~Ipv6Object();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::Ipv6Object


class Native::Track::TrackedObject::IpObject : public ydk::Entity
{
    public:
        IpObject();
        ~IpObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Track::TrackedObject::IpObject


class Native::Track::Resolution : public ydk::Entity
{
    public:
        Resolution();
        ~Resolution();

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

        class Ip; //type: Native::Track::Resolution::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Resolution::Ip> ip;
        
}; // Native::Track::Resolution


class Native::Track::Resolution::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        class Route; //type: Native::Track::Resolution::Ip::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Resolution::Ip::Route> route;
        
}; // Native::Track::Resolution::Ip


class Native::Track::Resolution::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        ydk::YLeaf bgp; //type: uint32
        ydk::YLeaf eigrp; //type: uint32
        ydk::YLeaf isis; //type: uint32
        ydk::YLeaf ospf; //type: uint32
        ydk::YLeaf static_; //type: uint32

}; // Native::Track::Resolution::Ip::Route


class Native::Track::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

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

        class Interface; //type: Native::Track::Timer::Interface
        class Ip; //type: Native::Track::Timer::Ip
        class Ipv6; //type: Native::Track::Timer::Ipv6
        class List; //type: Native::Track::Timer::List
        class StubObject; //type: Native::Track::Timer::StubObject

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::StubObject> stub_object;
        
}; // Native::Track::Timer


class Native::Track::Timer::Interface : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Interface


class Native::Track::Timer::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        class Route; //type: Native::Track::Timer::Ip::Route
        class Sla; //type: Native::Track::Timer::Ip::Sla

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ip::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ip::Sla> sla;
        
}; // Native::Track::Timer::Ip


class Native::Track::Timer::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Route


class Native::Track::Timer::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ip::Sla


class Native::Track::Timer::Ipv6 : public ydk::Entity
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

        class Route; //type: Native::Track::Timer::Ipv6::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Track::Timer::Ipv6::Route> route;
        
}; // Native::Track::Timer::Ipv6


class Native::Track::Timer::Ipv6::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::Ipv6::Route


class Native::Track::Timer::List : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::List


class Native::Track::Timer::StubObject : public ydk::Entity
{
    public:
        StubObject();
        ~StubObject();

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

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf ms; //type: uint32

}; // Native::Track::Timer::StubObject


class Native::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

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

        ydk::YLeaf system_auth_control; //type: empty
        class Credentials; //type: Native::Dot1x::Credentials
        class Critical; //type: Native::Dot1x::Critical
        class Test; //type: Native::Dot1x::Test
        class Logging; //type: Native::Dot1x::Logging
        class Supplicant; //type: Native::Dot1x::Supplicant

        ydk::YList credentials;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1x::Critical> critical;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1x::Test> test;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1x::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1x::Supplicant> supplicant;
        
}; // Native::Dot1x


class Native::Dot1x::Credentials : public ydk::Entity
{
    public:
        Credentials();
        ~Credentials();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf pki_trustpoint; //type: string
        class Password; //type: Native::Dot1x::Credentials::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1x::Credentials::Password> password;
        
}; // Native::Dot1x::Credentials


class Native::Dot1x::Credentials::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Dot1x::Credentials::Password


class Native::Dot1x::Critical : public ydk::Entity
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

        ydk::YLeaf eapol; //type: empty
        class Recovery; //type: Native::Dot1x::Critical::Recovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Dot1x::Critical::Recovery> recovery;
        
}; // Native::Dot1x::Critical


class Native::Dot1x::Critical::Recovery : public ydk::Entity
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

        ydk::YLeaf delay; //type: uint16

}; // Native::Dot1x::Critical::Recovery


class Native::Dot1x::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

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

        ydk::YLeaf timeout; //type: uint16

}; // Native::Dot1x::Test


class Native::Dot1x::Logging : public ydk::Entity
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

        ydk::YLeaf verbose; //type: empty

}; // Native::Dot1x::Logging


class Native::Dot1x::Supplicant : public ydk::Entity
{
    public:
        Supplicant();
        ~Supplicant();

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

        ydk::YLeaf force_multicast; //type: empty

}; // Native::Dot1x::Supplicant


class Native::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

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

        class Logging; //type: Native::Mab::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mab::Logging> logging;
        
}; // Native::Mab


class Native::Mab::Logging : public ydk::Entity
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

        ydk::YLeaf verbose; //type: empty

}; // Native::Mab::Logging


class Native::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

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

        class Profile; //type: Native::Fallback::Profile

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fallback::Profile> profile;
        
}; // Native::Fallback


class Native::Fallback::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        class FallbackList; //type: Native::Fallback::Profile::FallbackList

        ydk::YList fallback_list;
        
}; // Native::Fallback::Profile


class Native::Fallback::Profile::FallbackList : public ydk::Entity
{
    public:
        FallbackList();
        ~FallbackList();

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
        ydk::YLeaf description; //type: string
        class Ip; //type: Native::Fallback::Profile::FallbackList::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fallback::Profile::FallbackList::Ip> ip;
        
}; // Native::Fallback::Profile::FallbackList


class Native::Fallback::Profile::FallbackList::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admission; //type: string
        class AccessGroup; //type: Native::Fallback::Profile::FallbackList::Ip::AccessGroup

        ydk::YList access_group;
        
}; // Native::Fallback::Profile::FallbackList::Ip


class Native::Fallback::Profile::FallbackList::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Fallback::Profile::FallbackList::Ip::AccessGroup


class Native::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

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

        class Type; //type: Native::ParameterMap::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type> type;
        
}; // Native::ParameterMap


class Native::ParameterMap::Type : public ydk::Entity
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

        class CwsTunnel; //type: Native::ParameterMap::Type::CwsTunnel
        class Inspect; //type: Native::ParameterMap::Type::Inspect
        class InspectGlobalDeprecate; //type: Native::ParameterMap::Type::InspectGlobalDeprecate
        class InspectGlobal; //type: Native::ParameterMap::Type::InspectGlobal
        class InspectVrf; //type: Native::ParameterMap::Type::InspectVrf
        class InspectZone; //type: Native::ParameterMap::Type::InspectZone
        class Regex; //type: Native::ParameterMap::Type::Regex
        class Webauth; //type: Native::ParameterMap::Type::Webauth
        class WebauthGlobal; //type: Native::ParameterMap::Type::WebauthGlobal
        class Umbrella; //type: Native::ParameterMap::Type::Umbrella

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel> cws_tunnel;
        ydk::YList inspect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate> inspect_global_deprecate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal> inspect_global; // presence node
        ydk::YList inspect_vrf;
        ydk::YList inspect_zone;
        ydk::YList regex;
        ydk::YList webauth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::WebauthGlobal> webauth_global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Umbrella> umbrella;
        
}; // Native::ParameterMap::Type


class Native::ParameterMap::Type::CwsTunnel : public ydk::Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

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

        class Global; //type: Native::ParameterMap::Type::CwsTunnel::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global> global; // presence node
        
}; // Native::ParameterMap::Type::CwsTunnel


class Native::ParameterMap::Type::CwsTunnel::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf fail_open; //type: empty
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf redirect_list; //type: uint16
        class License; //type: Native::ParameterMap::Type::CwsTunnel::Global::License
        class Primary; //type: Native::ParameterMap::Type::CwsTunnel::Global::Primary
        class Secondary; //type: Native::ParameterMap::Type::CwsTunnel::Global::Secondary
        class Whitelist; //type: Native::ParameterMap::Type::CwsTunnel::Global::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::License> license;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Primary> primary; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Secondary> secondary; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Whitelist> whitelist; // presence node
        
}; // Native::ParameterMap::Type::CwsTunnel::Global


class Native::ParameterMap::Type::CwsTunnel::Global::License : public ydk::Entity
{
    public:
        License();
        ~License();

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

        class Unencypted; //type: Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted
        class Encrypted; //type: Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted> unencypted;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted> encrypted;
        
}; // Native::ParameterMap::Type::CwsTunnel::Global::License


class Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted : public ydk::Entity
{
    public:
        Unencypted();
        ~Unencypted();

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

        ydk::YLeaf hex_string; //type: string

}; // Native::ParameterMap::Type::CwsTunnel::Global::License::Unencypted


class Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

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

        ydk::YLeaf hex_string; //type: string

}; // Native::ParameterMap::Type::CwsTunnel::Global::License::Encrypted


class Native::ParameterMap::Type::CwsTunnel::Global::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

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

        class Tower; //type: Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower> tower;
        
}; // Native::ParameterMap::Type::CwsTunnel::Global::Primary


class Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower : public ydk::Entity
{
    public:
        Tower();
        ~Tower();

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
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Type::CwsTunnel::Global::Primary::Tower


class Native::ParameterMap::Type::CwsTunnel::Global::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

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

        class Tower; //type: Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower> tower;
        
}; // Native::ParameterMap::Type::CwsTunnel::Global::Secondary


class Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower : public ydk::Entity
{
    public:
        Tower();
        ~Tower();

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
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Type::CwsTunnel::Global::Secondary::Tower


class Native::ParameterMap::Type::CwsTunnel::Global::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

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

        class Acl; //type: Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl
        class DomainName; //type: Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName
        class Download; //type: Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download> download; // presence node
        
}; // Native::ParameterMap::Type::CwsTunnel::Global::Whitelist


class Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

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

        ydk::YLeaf acl_number; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Acl


class Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

        ydk::YLeaf regex; //type: string

}; // Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::DomainName


class Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

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

        ydk::YLeaf interval; //type: uint16

}; // Native::ParameterMap::Type::CwsTunnel::Global::Whitelist::Download


class Native::ParameterMap::Type::Inspect : public ydk::Entity
{
    public:
        Inspect();
        ~Inspect();

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
        ydk::YLeaf dns_timeout; //type: uint32
        ydk::YLeaf icmp_unreachable_allow; //type: empty
        class Alert; //type: Native::ParameterMap::Type::Inspect::Alert
        class ApplicationInspect; //type: Native::ParameterMap::Type::Inspect::ApplicationInspect
        class AuditTrail; //type: Native::ParameterMap::Type::Inspect::AuditTrail
        class Icmp; //type: Native::ParameterMap::Type::Inspect::Icmp
        class Log; //type: Native::ParameterMap::Type::Inspect::Log
        class MaxIncomplete; //type: Native::ParameterMap::Type::Inspect::MaxIncomplete
        class OneMinute; //type: Native::ParameterMap::Type::Inspect::OneMinute
        class Sessions; //type: Native::ParameterMap::Type::Inspect::Sessions
        class Tcp; //type: Native::ParameterMap::Type::Inspect::Tcp
        class Udp; //type: Native::ParameterMap::Type::Inspect::Udp
        class ZoneMismatch; //type: Native::ParameterMap::Type::Inspect::ZoneMismatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::ApplicationInspect> application_inspect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::AuditTrail> audit_trail;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::OneMinute> one_minute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Sessions> sessions;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::ZoneMismatch> zone_mismatch;
        
}; // Native::ParameterMap::Type::Inspect


class Native::ParameterMap::Type::Inspect::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::Inspect::Alert


class Native::ParameterMap::Type::Inspect::ApplicationInspect : public ydk::Entity
{
    public:
        ApplicationInspect();
        ~ApplicationInspect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dns; //type: boolean
        ydk::YLeaf exec; //type: boolean
        ydk::YLeaf ftp; //type: boolean
        ydk::YLeaf gtp; //type: boolean
        ydk::YLeaf h323; //type: boolean
        ydk::YLeaf http; //type: boolean
        ydk::YLeaf imap; //type: boolean
        ydk::YLeaf login; //type: boolean
        ydk::YLeaf msrpc; //type: boolean
        ydk::YLeaf netbios; //type: boolean
        ydk::YLeaf pop3; //type: boolean
        ydk::YLeaf rtsp; //type: boolean
        ydk::YLeaf shell; //type: boolean
        ydk::YLeaf sip; //type: boolean
        ydk::YLeaf skinny; //type: boolean
        ydk::YLeaf smtp; //type: boolean
        ydk::YLeaf sunrpc; //type: boolean
        ydk::YLeaf tftp; //type: boolean

}; // Native::ParameterMap::Type::Inspect::ApplicationInspect


class Native::ParameterMap::Type::Inspect::AuditTrail : public ydk::Entity
{
    public:
        AuditTrail();
        ~AuditTrail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::Inspect::AuditTrail


class Native::ParameterMap::Type::Inspect::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IdleTime; //type: Native::ParameterMap::Type::Inspect::Icmp::IdleTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Icmp::IdleTime> idle_time;
        
}; // Native::ParameterMap::Type::Inspect::Icmp


class Native::ParameterMap::Type::Inspect::Icmp::IdleTime : public ydk::Entity
{
    public:
        IdleTime();
        ~IdleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf ageout_time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Icmp::IdleTime


class Native::ParameterMap::Type::Inspect::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropped_packets; //type: empty

}; // Native::ParameterMap::Type::Inspect::Log


class Native::ParameterMap::Type::Inspect::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Native::ParameterMap::Type::Inspect::MaxIncomplete


class Native::ParameterMap::Type::Inspect::OneMinute : public ydk::Entity
{
    public:
        OneMinute();
        ~OneMinute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Native::ParameterMap::Type::Inspect::OneMinute


class Native::ParameterMap::Type::Inspect::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf packet; //type: uint8
        class Rate; //type: Native::ParameterMap::Type::Inspect::Sessions::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Sessions::Rate> rate;
        
}; // Native::ParameterMap::Type::Inspect::Sessions


class Native::ParameterMap::Type::Inspect::Sessions::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class High; //type: Native::ParameterMap::Type::Inspect::Sessions::Rate::High
        class Low; //type: Native::ParameterMap::Type::Inspect::Sessions::Rate::Low

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Sessions::Rate::High> high;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Sessions::Rate::Low> low;
        
}; // Native::ParameterMap::Type::Inspect::Sessions::Rate


class Native::ParameterMap::Type::Inspect::Sessions::Rate::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Sessions::Rate::High


class Native::ParameterMap::Type::Inspect::Sessions::Rate::Low : public ydk::Entity
{
    public:
        Low();
        ~Low();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Sessions::Rate::Low


class Native::ParameterMap::Type::Inspect::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FinwaitTime; //type: Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime
        class HalfClose; //type: Native::ParameterMap::Type::Inspect::Tcp::HalfClose
        class HalfOpen; //type: Native::ParameterMap::Type::Inspect::Tcp::HalfOpen
        class Idle; //type: Native::ParameterMap::Type::Inspect::Tcp::Idle
        class IdleTime; //type: Native::ParameterMap::Type::Inspect::Tcp::IdleTime
        class MaxIncomplete; //type: Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete
        class SynwaitTime; //type: Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime
        class WindowScaleEnforcement; //type: Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime> finwait_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::HalfClose> half_close;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::HalfOpen> half_open;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::Idle> idle;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::IdleTime> idle_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime> synwait_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement> window_scale_enforcement;
        
}; // Native::ParameterMap::Type::Inspect::Tcp


class Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime : public ydk::Entity
{
    public:
        FinwaitTime();
        ~FinwaitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf ageout_time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Tcp::FinwaitTime


class Native::ParameterMap::Type::Inspect::Tcp::HalfClose : public ydk::Entity
{
    public:
        HalfClose();
        ~HalfClose();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reset; //type: Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset> reset;
        
}; // Native::ParameterMap::Type::Inspect::Tcp::HalfClose


class Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf off; //type: empty

}; // Native::ParameterMap::Type::Inspect::Tcp::HalfClose::Reset


class Native::ParameterMap::Type::Inspect::Tcp::HalfOpen : public ydk::Entity
{
    public:
        HalfOpen();
        ~HalfOpen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reset; //type: Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset> reset;
        
}; // Native::ParameterMap::Type::Inspect::Tcp::HalfOpen


class Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf off; //type: empty

}; // Native::ParameterMap::Type::Inspect::Tcp::HalfOpen::Reset


class Native::ParameterMap::Type::Inspect::Tcp::Idle : public ydk::Entity
{
    public:
        Idle();
        ~Idle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reset; //type: Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset> reset;
        
}; // Native::ParameterMap::Type::Inspect::Tcp::Idle


class Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf off; //type: empty

}; // Native::ParameterMap::Type::Inspect::Tcp::Idle::Reset


class Native::ParameterMap::Type::Inspect::Tcp::IdleTime : public ydk::Entity
{
    public:
        IdleTime();
        ~IdleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf ageout_time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Tcp::IdleTime


class Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host> host;
        
}; // Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete


class Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf block_time; //type: uint16

}; // Native::ParameterMap::Type::Inspect::Tcp::MaxIncomplete::Host


class Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime : public ydk::Entity
{
    public:
        SynwaitTime();
        ~SynwaitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf ageout_time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Tcp::SynwaitTime


class Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement : public ydk::Entity
{
    public:
        WindowScaleEnforcement();
        ~WindowScaleEnforcement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loose; //type: empty

}; // Native::ParameterMap::Type::Inspect::Tcp::WindowScaleEnforcement


class Native::ParameterMap::Type::Inspect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HalfOpen; //type: Native::ParameterMap::Type::Inspect::Udp::HalfOpen
        class IdleTime; //type: Native::ParameterMap::Type::Inspect::Udp::IdleTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Udp::HalfOpen> half_open;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Udp::IdleTime> idle_time;
        
}; // Native::ParameterMap::Type::Inspect::Udp


class Native::ParameterMap::Type::Inspect::Udp::HalfOpen : public ydk::Entity
{
    public:
        HalfOpen();
        ~HalfOpen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IdleTime; //type: Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime> idle_time;
        
}; // Native::ParameterMap::Type::Inspect::Udp::HalfOpen


class Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime : public ydk::Entity
{
    public:
        IdleTime();
        ~IdleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf ageout_time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Udp::HalfOpen::IdleTime


class Native::ParameterMap::Type::Inspect::Udp::IdleTime : public ydk::Entity
{
    public:
        IdleTime();
        ~IdleTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf ageout_time; //type: uint32

}; // Native::ParameterMap::Type::Inspect::Udp::IdleTime


class Native::ParameterMap::Type::Inspect::ZoneMismatch : public ydk::Entity
{
    public:
        ZoneMismatch();
        ~ZoneMismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop; //type: empty

}; // Native::ParameterMap::Type::Inspect::ZoneMismatch


class Native::ParameterMap::Type::InspectGlobalDeprecate : public ydk::Entity
{
    public:
        InspectGlobalDeprecate();
        ~InspectGlobalDeprecate();

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

        class Inspect; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect> inspect;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect : public ydk::Entity
{
    public:
        Inspect();
        ~Inspect();

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

        class Global; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global> global; // presence node
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf multi_tenancy; //type: empty
        class Alert; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert
        class Lisp; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp
        class Log; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log
        class MaxIncomplete; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete
        class PerBox; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox
        class Session; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session
        class Tcp; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp
        class Vrf; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox> per_box;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session> session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp> tcp;
        ydk::YList vrf;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

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

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Alert


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

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

        ydk::YLeaf inner_packet_inspection; //type: empty

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Lisp


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf dropped_packets; //type: empty
        class FlowExport; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport> flow_export;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport : public ydk::Entity
{
    public:
        FlowExport();
        ~FlowExport();

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

        class Template; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template
        class V9; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9> v9;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

        ydk::YLeaf timeout_rate; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::Template


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9 : public ydk::Entity
{
    public:
        V9();
        ~V9();

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

        class Udp; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp> udp;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

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

        class Destination; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination> destination;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf dst_port; //type: uint16

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Log::FlowExport::V9::Udp::Destination


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

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

        ydk::YLeaf icmp; //type: uint32
        ydk::YLeaf tcp; //type: uint32
        ydk::YLeaf udp; //type: uint32
        class HalfOpenSessions; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions> half_open_sessions;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions : public ydk::Entity
{
    public:
        HalfOpenSessions();
        ~HalfOpenSessions();

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

        ydk::YLeaf number; //type: uint32
        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging> aggressive_aging;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::MaxIncomplete::HalfOpenSessions::AggressiveAging


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox : public ydk::Entity
{
    public:
        PerBox();
        ~PerBox();

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

        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging
        class MaxIncomplete; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete
        class Tcp; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging> aggressive_aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp> tcp;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::AggressiveAging


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

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

        ydk::YLeaf icmp; //type: uint32
        ydk::YLeaf tcp; //type: uint32
        ydk::YLeaf udp; //type: uint32
        class HalfOpenSessions; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions> half_open_sessions;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions : public ydk::Entity
{
    public:
        HalfOpenSessions();
        ~HalfOpenSessions();

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

        ydk::YLeaf number; //type: uint32
        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging> aggressive_aging;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class SynFlood; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf packet; //type: uint8
        ydk::YLeaf total; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class SynFlood; //type: Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood


class Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf inspect; //type: string

}; // Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf


class Native::ParameterMap::Type::InspectGlobal : public ydk::Entity
{
    public:
        InspectGlobal();
        ~InspectGlobal();

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

        ydk::YLeaf icmp_unreachable_allow; //type: empty
        ydk::YLeaf multi_tenancy; //type: empty
        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobal::AggressiveAging
        class Alert; //type: Native::ParameterMap::Type::InspectGlobal::Alert
        class Inspect; //type: Native::ParameterMap::Type::InspectGlobal::Inspect
        class Lisp; //type: Native::ParameterMap::Type::InspectGlobal::Lisp
        class Log; //type: Native::ParameterMap::Type::InspectGlobal::Log
        class MaxIncomplete; //type: Native::ParameterMap::Type::InspectGlobal::MaxIncomplete
        class Tcp; //type: Native::ParameterMap::Type::InspectGlobal::Tcp
        class ZoneMismatch; //type: Native::ParameterMap::Type::InspectGlobal::ZoneMismatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::AggressiveAging> aggressive_aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Inspect> inspect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::ZoneMismatch> zone_mismatch;
        
}; // Native::ParameterMap::Type::InspectGlobal


class Native::ParameterMap::Type::InspectGlobal::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobal::AggressiveAging


class Native::ParameterMap::Type::InspectGlobal::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

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

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::Alert


class Native::ParameterMap::Type::InspectGlobal::Inspect : public ydk::Entity
{
    public:
        Inspect();
        ~Inspect();

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
        class Vrf; //type: Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf

        ydk::YList vrf;
        
}; // Native::ParameterMap::Type::InspectGlobal::Inspect


class Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string

}; // Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf


class Native::ParameterMap::Type::InspectGlobal::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

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

        ydk::YLeaf inner_packet_inspection; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::Lisp


class Native::ParameterMap::Type::InspectGlobal::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf dropped_packets; //type: empty
        class FlowExport; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport> flow_export;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport : public ydk::Entity
{
    public:
        FlowExport();
        ~FlowExport();

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

        class Template; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template
        class V9; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9> v9;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

        ydk::YLeaf timeout_rate; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9 : public ydk::Entity
{
    public:
        V9();
        ~V9();

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

        class Udp; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp> udp;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

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

        class Destination; //type: Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination> destination;
        
}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp


class Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf dst_port; //type: uint16

}; // Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination


class Native::ParameterMap::Type::InspectGlobal::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

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

        ydk::YLeaf icmp; //type: uint32
        ydk::YLeaf tcp; //type: uint32
        ydk::YLeaf udp; //type: uint32
        class HalfOpenSessions; //type: Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions> half_open_sessions;
        
}; // Native::ParameterMap::Type::InspectGlobal::MaxIncomplete


class Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions : public ydk::Entity
{
    public:
        HalfOpenSessions();
        ~HalfOpenSessions();

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

        ydk::YLeaf number; //type: uint32
        class AggressiveAging; //type: Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging> aggressive_aging;
        
}; // Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions


class Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging : public ydk::Entity
{
    public:
        AggressiveAging();
        ~AggressiveAging();

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

        ydk::YLeaf high; //type: uint64
        ydk::YLeaf low; //type: uint64
        ydk::YLeaf high_percent; //type: uint8
        ydk::YLeaf low_percent; //type: uint8

}; // Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging


class Native::ParameterMap::Type::InspectGlobal::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class SynFlood; //type: Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood
        class WindowScaleEnforcement; //type: Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood> syn_flood;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement> window_scale_enforcement;
        
}; // Native::ParameterMap::Type::InspectGlobal::Tcp


class Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood


class Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement : public ydk::Entity
{
    public:
        WindowScaleEnforcement();
        ~WindowScaleEnforcement();

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

        ydk::YLeaf loose; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement


class Native::ParameterMap::Type::InspectGlobal::ZoneMismatch : public ydk::Entity
{
    public:
        ZoneMismatch();
        ~ZoneMismatch();

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

        ydk::YLeaf drop; //type: empty

}; // Native::ParameterMap::Type::InspectGlobal::ZoneMismatch


class Native::ParameterMap::Type::InspectVrf : public ydk::Entity
{
    public:
        InspectVrf();
        ~InspectVrf();

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
        class Alert; //type: Native::ParameterMap::Type::InspectVrf::Alert
        class MaxIncomplete; //type: Native::ParameterMap::Type::InspectVrf::MaxIncomplete
        class Session; //type: Native::ParameterMap::Type::InspectVrf::Session
        class Tcp; //type: Native::ParameterMap::Type::InspectVrf::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::MaxIncomplete> max_incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Session> session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Tcp> tcp;
        
}; // Native::ParameterMap::Type::InspectVrf


class Native::ParameterMap::Type::InspectVrf::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::InspectVrf::Alert


class Native::ParameterMap::Type::InspectVrf::MaxIncomplete : public ydk::Entity
{
    public:
        MaxIncomplete();
        ~MaxIncomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icmp; //type: uint32
        ydk::YLeaf tcp; //type: uint32
        ydk::YLeaf udp; //type: uint32
        class HalfOpenSessions; //type: Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions> half_open_sessions;
        
}; // Native::ParameterMap::Type::InspectVrf::MaxIncomplete


class Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions : public ydk::Entity
{
    public:
        HalfOpenSessions();
        ~HalfOpenSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32

}; // Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions


class Native::ParameterMap::Type::InspectVrf::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32

}; // Native::ParameterMap::Type::InspectVrf::Session


class Native::ParameterMap::Type::InspectVrf::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SynFlood; //type: Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectVrf::Tcp


class Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32

}; // Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood


class Native::ParameterMap::Type::InspectZone : public ydk::Entity
{
    public:
        InspectZone();
        ~InspectZone();

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
        ydk::YLeaf max_destination; //type: uint32
        class Alert; //type: Native::ParameterMap::Type::InspectZone::Alert
        class Tcp; //type: Native::ParameterMap::Type::InspectZone::Tcp
        class ThreatDetection; //type: Native::ParameterMap::Type::InspectZone::ThreatDetection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Alert> alert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::ThreatDetection> threat_detection;
        
}; // Native::ParameterMap::Type::InspectZone


class Native::ParameterMap::Type::InspectZone::Alert : public ydk::Entity
{
    public:
        Alert();
        ~Alert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty

}; // Native::ParameterMap::Type::InspectZone::Alert


class Native::ParameterMap::Type::InspectZone::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SynFlood; //type: Native::ParameterMap::Type::InspectZone::Tcp::SynFlood

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Tcp::SynFlood> syn_flood;
        
}; // Native::ParameterMap::Type::InspectZone::Tcp


class Native::ParameterMap::Type::InspectZone::Tcp::SynFlood : public ydk::Entity
{
    public:
        SynFlood();
        ~SynFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate> rate;
        
}; // Native::ParameterMap::Type::InspectZone::Tcp::SynFlood


class Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_destination; //type: uint32

}; // Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate

class Native::Track::TrackedObject::DefaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class Native::Track::TrackedObject::Interface::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf line_protocol;

};

class Native::Track::TrackedObject::Ip::Route::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::Ipv6::Route::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf threshold;

};

class Native::Track::TrackedObject::List::Boolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf and_;
        static const ydk::Enum::YLeaf or_;

};

class Native::Track::TrackedObject::List::Threshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percentage;
        static const ydk::Enum::YLeaf weight;

};

class Native::Track::TrackedObject::Default::DefaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class Native::Dot1x::Credentials::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_121_ */

