#ifndef _CISCO_IOS_XE_NATIVE_131_
#define _CISCO_IOS_XE_NATIVE_131_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_120.hpp"
#include "Cisco_IOS_XE_native_129.hpp"
#include "Cisco_IOS_XE_native_130.hpp"
#include "Cisco_IOS_XE_native_87.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::List


class Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Service::Ethernet::Default_::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::Lisp::Service::Ethernet::Default_::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRegister; //type: Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::Service::Ethernet::Default_::MapServer


class Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister


class Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate


class Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Service::Ethernet::Default_::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Service::Ethernet::Default_::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Service::Ethernet::Default_::SiteRegistration


class Native::Router::Lisp::Service::Ethernet::Default_::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Service::Ethernet::Default_::SolicitMapRequest


class Native::Router::Lisp::Service::Ethernet::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vxlan; //type: empty

}; // Native::Router::Lisp::Service::Ethernet::Encapsulation


class Native::Router::Lisp::Service::Ethernet::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::Lisp::Service::Ethernet::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Service::Ethernet::DatabaseMapping


class Native::Router::Lisp::Service::Ethernet::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Service::Ethernet::DatabaseMapping::Limit


class Native::Router::Lisp::Service::Ethernet::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::Service::Ethernet::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Service::Ethernet::Itr


class Native::Router::Lisp::Service::Ethernet::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Service::Ethernet::Itr::MapResolver


class Native::Router::Lisp::Service::Ethernet::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::Service::Ethernet::ItrEnable


class Native::Router::Lisp::Service::Ethernet::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::Service::Ethernet::EtrEnable


class Native::Router::Lisp::Service::Ethernet::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::Service::Ethernet::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Service::Ethernet::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Service::Ethernet::Etr


class Native::Router::Lisp::Service::Ethernet::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Service::Ethernet::Etr::MapServer


class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key


class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Service::Ethernet::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::Service::Ethernet::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Service::Ethernet::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Service::Ethernet::MapCacheLimit


class Native::Router::Lisp::Service::Ethernet::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRequest; //type: Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::Service::Ethernet::MapResolver


class Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest


class Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate


class Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List


class Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::Lisp::Service::Ethernet::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRegister; //type: Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::Service::Ethernet::MapServer


class Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister


class Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate


class Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Service::Ethernet::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Service::Ethernet::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Service::Ethernet::SiteRegistration


class Native::Router::Lisp::Service::Ethernet::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Service::Ethernet::SolicitMapRequest


class Native::Router::Lisp::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vxlan; //type: empty

}; // Native::Router::Lisp::Encapsulation


class Native::Router::Lisp::LocatorSet : public ydk::Entity
{
    public:
        LocatorSet();
        ~LocatorSet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf auto_discover_rlocs; //type: empty
        class Ipv4Interface; //type: Native::Router::Lisp::LocatorSet::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::Lisp::LocatorSet::Ipv6Interface
        class IpAddress; //type: Native::Router::Lisp::LocatorSet::IpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorSet::IpAddress> > ip_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorSet::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorSet::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::LocatorSet


class Native::Router::Lisp::LocatorSet::Ipv4Interface : public ydk::Entity
{
    public:
        Ipv4Interface();
        ~Ipv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::LocatorSet::Ipv4Interface


class Native::Router::Lisp::LocatorSet::Ipv6Interface : public ydk::Entity
{
    public:
        Ipv6Interface();
        ~Ipv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::LocatorSet::Ipv6Interface


class Native::Router::Lisp::LocatorSet::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::LocatorSet::IpAddress


class Native::Router::Lisp::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_set; //type: string

}; // Native::Router::Lisp::Locator


class Native::Router::Lisp::LocatorScope : public ydk::Entity
{
    public:
        LocatorScope();
        ~LocatorScope();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeafList rloc_prefix; //type: list of  string
        ydk::YLeafList rtr_locator_set; //type: list of  string

}; // Native::Router::Lisp::LocatorScope


class Native::Router::Lisp::InstanceContainer : public ydk::Entity
{
    public:
        InstanceContainer();
        ~InstanceContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstanceList; //type: Native::Router::Lisp::InstanceContainer::InstanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList> > instance_list;
        
}; // Native::Router::Lisp::InstanceContainer


class Native::Router::Lisp::InstanceContainer::InstanceList : public ydk::Entity
{
    public:
        InstanceList();
        ~InstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf disable_ttl_propagate; //type: empty
        class Default_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_
        class Decapsulation; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation
        class DynamicEid; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::RemoteRlocProbe
        class Service; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid> > dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service> service; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        class Decapsulation; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation
        class DynamicEid; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe
        class Service; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation> decapsulation;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid> > dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service> service; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf map_notify_group; //type: string
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Prefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix> > ipv4_prefix;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix : public ydk::Entity
{
    public:
        Ipv4Prefix();
        ~Ipv4Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify : public ydk::Entity
{
    public:
        EidNotify();
        ~EidNotify();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationKey; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey : public ydk::Entity
{
    public:
        GatewayKey();
        ~GatewayKey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gateway_ip; //type: string
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm : public ydk::Entity
{
    public:
        LocReachAlgorithm();
        ~LocReachAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rloc_probing; //type: empty
        class LsbReports; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports : public ydk::Entity
{
    public:
        LsbReports();
        ~LsbReports();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_transmit; //type: empty
        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc> rloc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Members; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members> members;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distribute; //type: empty
        class ModifyDiscovered; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered : public ydk::Entity
{
    public:
        ModifyDiscovered();
        ~ModifyDiscovered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf locator_set; //type: string
        class Operator_;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe : public ydk::Entity
{
    public:
        OtherXtrProbe();
        ~OtherXtrProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe : public ydk::Entity
{
    public:
        RemoteRlocProbe();
        ~RemoteRlocProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on_membership_change; //type: empty
        ydk::YLeaf on_route_change; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4
        class Ipv6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6
        class Ethernet; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__
        class EidTable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable
        class Itr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest
        class Alt; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt
        class Distance; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr
        class RouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__ : public ydk::Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class EidTable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable
        class Itr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr
        class ItrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable
        class Etr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest
        class Alt; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt
        class Distance; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport
        class UsePetr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr
        class RouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EidTable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::SolicitMapRequest


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryRoute; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Alt::SummaryRoute


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Distance


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        class EidInterface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface
        class AwayEids; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids> away_eids;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface> > eid_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface : public ydk::Entity
{
    public:
        EidInterface();
        ~EidInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf map_request; //type: empty
        ydk::YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::EidInterface::EtrInterfaceIp


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCache::AwayEids


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::MapCachePersistent


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::ProxyItr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteExport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::UsePetr::Priority


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport : public ydk::Entity
{
    public:
        RouteImport();
        ~RouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache> map_cache;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_> static_;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_id; //type: string
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::RouteImport::MapCache::Rip::MapCacheContainer

class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf override;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_131_ */
