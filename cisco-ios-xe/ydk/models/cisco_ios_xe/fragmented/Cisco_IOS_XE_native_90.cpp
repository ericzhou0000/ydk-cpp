
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_90.hpp"
#include "Cisco_IOS_XE_native_91.hpp"
#include "Cisco_IOS_XE_native_92.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::PortChannel::AnalysisModule::Monitoring::Monitoring()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "monitoring"; yang_parent_name = "analysis-module"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::AnalysisModule::Monitoring::~Monitoring()
{
}

bool Native::Interface::PortChannel::AnalysisModule::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Interface::PortChannel::AnalysisModule::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Interface::PortChannel::AnalysisModule::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::AnalysisModule::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::AnalysisModule::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::AnalysisModule::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::AnalysisModule::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::AnalysisModule::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::AnalysisModule::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel(this, {"name"})
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::has_operation() const
{
    for (std::size_t index=0; index<port_channel.len(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Port-channel")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel>();
        ent_->parent = this;
        port_channel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_channel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::PortChannel()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    mac_address{YType::str, "mac-address"},
    shutdown{YType::empty, "shutdown"},
    keepalive{YType::boolean, "keepalive"},
    if_state{YType::enumeration, "if-state"},
    delay{YType::uint32, "delay"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    macsec{YType::empty, "Cisco-IOS-XE-switch:macsec"}
        ,
    switchport_conf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf>())
    , switchport(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport>())
    , stackwise_virtual(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual>())
    , arp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Arp>())
    , backup(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup>())
    , cemoudp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp>())
    , cws_tunnel(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel>())
    , l2protocol_tunnel(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation>())
    , fair_queue_conf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf>())
    , fair_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueue>())
    , flowcontrol(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol>())
    , isis(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Isis>())
    , keepalive_settings(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings>())
    , bfd(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bfd>())
    , bandwidth(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth>())
    , dampening(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Dampening>())
    , domain(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Domain>())
    , hold_queue(this, {"direction"})
    , mpls(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mpls>())
    , ip_vrf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf>())
    , vrf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Vrf>())
    , ip(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip>())
    , ipv6(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6>())
    , logging(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging>())
    , mdix(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mdix>())
    , mop(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mop>())
    , interface_qos(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos>())
    , source(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Source>())
    , standby(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Standby>())
    , access_session(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::AccessSession>())
    , storm_control(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::StormControl>())
    , trust(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Trust>())
    , priority_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue>())
    , rcv_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue>())
    , peer(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Peer>())
    , pm_path(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PmPath>())
    , carrier_delay(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay>())
    , channel_group(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup>())
    , ethernet(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet>())
    , eapol(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Eapol>())
    , synchronous(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Synchronous>())
    , speed(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Speed>())
    , negotiation(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Negotiation>())
    , plim(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim>())
    , pppoe(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Pppoe>())
    , service(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service>())
    , auto_(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto>())
    , datalink(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Datalink>())
    , energywise(nullptr) // presence node
    , location(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location>())
    , mac(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac>())
    , macro(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Macro>())
    , dual_active(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::DualActive>())
    , load_balancing(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing>())
    , vlan_range(this, {"id"})
    , switch_(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switch>())
    , srr_queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue>())
    , macsec_option(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::MacsecOption>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
    stackwise_virtual->parent = this;
    arp->parent = this;
    backup->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    encapsulation->parent = this;
    fair_queue_conf->parent = this;
    fair_queue->parent = this;
    flowcontrol->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    bfd->parent = this;
    bandwidth->parent = this;
    dampening->parent = this;
    domain->parent = this;
    mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    interface_qos->parent = this;
    source->parent = this;
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;
    carrier_delay->parent = this;
    channel_group->parent = this;
    ethernet->parent = this;
    eapol->parent = this;
    synchronous->parent = this;
    speed->parent = this;
    negotiation->parent = this;
    plim->parent = this;
    pppoe->parent = this;
    service->parent = this;
    auto_->parent = this;
    datalink->parent = this;
    location->parent = this;
    mac->parent = this;
    macro->parent = this;
    dual_active->parent = this;
    load_balancing->parent = this;
    switch_->parent = this;
    srr_queue->parent = this;
    macsec_option->parent = this;

    yang_name = "Port-channel"; yang_parent_name = "Port-channel-subinterface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::PortChannelSubinterface::PortChannel::~PortChannel()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| mac_address.is_set
	|| shutdown.is_set
	|| keepalive.is_set
	|| if_state.is_set
	|| delay.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| channel_protocol.is_set
	|| duplex.is_set
	|| macsec.is_set
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (eapol !=  nullptr && eapol->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (macsec_option !=  nullptr && macsec_option->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| ydk::is_set(channel_protocol.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(macsec.yfilter)
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (eapol !=  nullptr && eapol->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (macsec_option !=  nullptr && macsec_option->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/Port-channel-subinterface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.yfilter)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (macsec.is_set || is_set(macsec.yfilter)) leaf_name_data.push_back(macsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue>();
        ent_->parent = this;
        hold_queue.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Source>();
        }
        return source;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:eapol")
    {
        if(eapol == nullptr)
        {
            eapol = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Eapol>();
        }
        return eapol;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service>();
        }
        return service;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location>();
        }
        return location;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vlan-range")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::VlanRange>();
        ent_->parent = this;
        vlan_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macsec-option")
    {
        if(macsec_option == nullptr)
        {
            macsec_option = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::MacsecOption>();
        }
        return macsec_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchport_conf != nullptr)
    {
        _children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(stackwise_virtual != nullptr)
    {
        _children["stackwise-virtual"] = stackwise_virtual;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        _children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        _children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        _children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        _children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        _children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        _children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        _children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    count_ = 0;
    for (auto ent_ : hold_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        _children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        _children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        _children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        _children["interface_qos"] = interface_qos;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        _children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    if(priority_queue != nullptr)
    {
        _children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        _children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        _children["pm-path"] = pm_path;
    }

    if(carrier_delay != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:carrier-delay"] = carrier_delay;
    }

    if(channel_group != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:channel-group"] = channel_group;
    }

    if(ethernet != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:ethernet"] = ethernet;
    }

    if(eapol != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:eapol"] = eapol;
    }

    if(synchronous != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:synchronous"] = synchronous;
    }

    if(speed != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:speed"] = speed;
    }

    if(negotiation != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:negotiation"] = negotiation;
    }

    if(plim != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:plim"] = plim;
    }

    if(pppoe != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:pppoe"] = pppoe;
    }

    if(service != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:service"] = service;
    }

    if(auto_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:auto"] = auto_;
    }

    if(datalink != nullptr)
    {
        _children["Cisco-IOS-XE-switch:datalink"] = datalink;
    }

    if(energywise != nullptr)
    {
        _children["Cisco-IOS-XE-switch:energywise"] = energywise;
    }

    if(location != nullptr)
    {
        _children["Cisco-IOS-XE-switch:location"] = location;
    }

    if(mac != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mac"] = mac;
    }

    if(macro != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macro"] = macro;
    }

    if(dual_active != nullptr)
    {
        _children["Cisco-IOS-XE-switch:dual-active"] = dual_active;
    }

    if(load_balancing != nullptr)
    {
        _children["Cisco-IOS-XE-switch:load-balancing"] = load_balancing;
    }

    count_ = 0;
    for (auto ent_ : vlan_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(switch_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:switch"] = switch_;
    }

    if(srr_queue != nullptr)
    {
        _children["Cisco-IOS-XE-switch:srr-queue"] = srr_queue;
    }

    if(macsec_option != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macsec-option"] = macsec_option;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:channel-protocol")
    {
        channel_protocol = value;
        channel_protocol.value_namespace = name_space;
        channel_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:macsec")
    {
        macsec = value;
        macsec.value_namespace = name_space;
        macsec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        macsec.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "stackwise-virtual" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "source" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "carrier-delay" || name == "channel-group" || name == "ethernet" || name == "eapol" || name == "synchronous" || name == "speed" || name == "negotiation" || name == "plim" || name == "pppoe" || name == "service" || name == "auto" || name == "datalink" || name == "energywise" || name == "location" || name == "mac" || name == "macro" || name == "dual-active" || name == "load-balancing" || name == "vlan-range" || name == "switch" || name == "srr-queue" || name == "macsec-option" || name == "name" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion" || name == "channel-protocol" || name == "duplex" || name == "macsec")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::has_data() const
{
    if (is_presence_container) return true;
    return switchport.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "Cisco-IOS-XE-switch:nonegotiate"},
    protected_{YType::empty, "Cisco-IOS-XE-switch:protected"},
    host{YType::empty, "Cisco-IOS-XE-switch:host"}
        ,
    access(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access>())
    , block(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block>())
    , mode(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode>())
    , port_security(nullptr) // presence node
    , trunk(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk>())
    , voice(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice>())
    , priority(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority>())
    , autostate(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate>())
    , private_vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan>())
    , vepa(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa>())
{
    access->parent = this;
    block->parent = this;
    mode->parent = this;
    trunk->parent = this;
    voice->parent = this;
    priority->parent = this;
    autostate->parent = this;
    private_vlan->parent = this;
    vepa->parent = this;

    yang_name = "switchport"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::~Switchport()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return nonegotiate.is_set
	|| protected_.is_set
	|| host.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (trunk !=  nullptr && trunk->has_data())
	|| (voice !=  nullptr && voice->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (autostate !=  nullptr && autostate->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (vepa !=  nullptr && vepa->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(host.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation())
	|| (voice !=  nullptr && voice->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (autostate !=  nullptr && autostate->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (vepa !=  nullptr && vepa->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk>();
        }
        return trunk;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice>();
        }
        return voice;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:autostate")
    {
        if(autostate == nullptr)
        {
            autostate = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate>();
        }
        return autostate;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vepa")
    {
        if(vepa == nullptr)
        {
            vepa = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa>();
        }
        return vepa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["Cisco-IOS-XE-switch:access"] = access;
    }

    if(block != nullptr)
    {
        _children["Cisco-IOS-XE-switch:block"] = block;
    }

    if(mode != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mode"] = mode;
    }

    if(port_security != nullptr)
    {
        _children["Cisco-IOS-XE-switch:port-security"] = port_security;
    }

    if(trunk != nullptr)
    {
        _children["Cisco-IOS-XE-switch:trunk"] = trunk;
    }

    if(voice != nullptr)
    {
        _children["Cisco-IOS-XE-switch:voice"] = voice;
    }

    if(priority != nullptr)
    {
        _children["Cisco-IOS-XE-switch:priority"] = priority;
    }

    if(autostate != nullptr)
    {
        _children["Cisco-IOS-XE-switch:autostate"] = autostate;
    }

    if(private_vlan != nullptr)
    {
        _children["Cisco-IOS-XE-switch:private-vlan"] = private_vlan;
    }

    if(vepa != nullptr)
    {
        _children["Cisco-IOS-XE-switch:vepa"] = vepa;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-switch:nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "trunk" || name == "voice" || name == "priority" || name == "autostate" || name == "private-vlan" || name == "vepa" || name == "nonegotiate" || name == "protected" || name == "host")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Access()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan>())
{
    vlan->parent = this;

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::~Access()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::Vlan()
    :
    vlan{YType::str, "vlan"},
    name{YType::str, "name"}
{

    yang_name = "vlan"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| name.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "name")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::Block()
    :
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::~Block()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::has_data() const
{
    if (is_presence_container) return true;
    return multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Mode()
    :
    dynamic{YType::enumeration, "dynamic"}
        ,
    access(nullptr) // presence node
    , dot1q_tunnel(nullptr) // presence node
    , private_vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan>())
    , trunk(nullptr) // presence node
{
    private_vlan->parent = this;

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::~Mode()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| (access !=  nullptr && access->has_data())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access>();
        }
        return access;
    }

    if(child_yang_name == "dot1q-tunnel")
    {
        if(dot1q_tunnel == nullptr)
        {
            dot1q_tunnel = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel>();
        }
        return dot1q_tunnel;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(dot1q_tunnel != nullptr)
    {
        _children["dot1q-tunnel"] = dot1q_tunnel;
    }

    if(private_vlan != nullptr)
    {
        _children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        _children["trunk"] = trunk;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "dot1q-tunnel" || name == "private-vlan" || name == "trunk" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::Access()
{

    yang_name = "access"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::~Access()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::Dot1qTunnel()
{

    yang_name = "dot1q-tunnel"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::~Dot1qTunnel()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1qTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::PrivateVlan()
    :
    host{YType::empty, "host"},
    promiscuous{YType::empty, "promiscuous"}
{

    yang_name = "private-vlan"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| promiscuous.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(promiscuous.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (promiscuous.is_set || is_set(promiscuous.yfilter)) leaf_name_data.push_back(promiscuous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promiscuous")
    {
        promiscuous = value;
        promiscuous.value_namespace = name_space;
        promiscuous.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "promiscuous")
    {
        promiscuous.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "promiscuous")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::Trunk()
{

    yang_name = "trunk"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::~Trunk()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::PortSecurity()
    :
    violation{YType::enumeration, "violation"}
        ,
    aging(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging>())
    , mac_address(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress>())
    , maximum(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum>())
{
    aging->parent = this;
    mac_address->parent = this;
    maximum->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aging != nullptr)
    {
        _children["aging"] = aging;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "mac-address" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"},
    type{YType::enumeration, "type"}
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| time.is_set
	|| type.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "time" || name == "type")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::MacAddress()
    :
    sticky{YType::empty, "sticky"},
    hw_address{YType::str, "hw-address"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "mac-address"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::~MacAddress()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return sticky.is_set
	|| hw_address.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(hw_address.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (hw_address.is_set || is_set(hw_address.yfilter)) leaf_name_data.push_back(hw_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-address")
    {
        hw_address = value;
        hw_address.value_namespace = name_space;
        hw_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "hw-address")
    {
        hw_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky" || name == "hw-address" || name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::Maximum()
    :
    max_addresses{YType::uint16, "max-addresses"},
    vlan{YType::str, "vlan"}
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return max_addresses.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_addresses.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_addresses.is_set || is_set(max_addresses.yfilter)) leaf_name_data.push_back(max_addresses.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-addresses")
    {
        max_addresses = value;
        max_addresses.value_namespace = name_space;
        max_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-addresses")
    {
        max_addresses.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-addresses" || name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Trunk()
    :
    encapsulation{YType::enumeration, "encapsulation"}
        ,
    allowed(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed>())
    , native(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_>())
    , pruning(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning>())
{
    allowed->parent = this;
    native->parent = this;
    pruning->parent = this;

    yang_name = "trunk"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::~Trunk()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| (allowed !=  nullptr && allowed->has_data())
	|| (native !=  nullptr && native->has_data())
	|| (pruning !=  nullptr && pruning->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (allowed !=  nullptr && allowed->has_operation())
	|| (native !=  nullptr && native->has_operation())
	|| (pruning !=  nullptr && pruning->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowed")
    {
        if(allowed == nullptr)
        {
            allowed = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed>();
        }
        return allowed;
    }

    if(child_yang_name == "native")
    {
        if(native == nullptr)
        {
            native = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_>();
        }
        return native;
    }

    if(child_yang_name == "pruning")
    {
        if(pruning == nullptr)
        {
            pruning = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning>();
        }
        return pruning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowed != nullptr)
    {
        _children["allowed"] = allowed;
    }

    if(native != nullptr)
    {
        _children["native"] = native;
    }

    if(pruning != nullptr)
    {
        _children["pruning"] = pruning;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed" || name == "native" || name == "pruning" || name == "encapsulation")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Allowed()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan>())
{
    vlan->parent = this;

    yang_name = "allowed"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::~Allowed()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::Vlan()
    :
    vlans{YType::str, "vlans"},
    add{YType::str, "add"},
    all{YType::empty, "all"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"}
{

    yang_name = "vlan"; yang_parent_name = "allowed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vlans.is_set
	|| add.is_set
	|| all.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlans.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(except.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlans.is_set || is_set(vlans.yfilter)) leaf_name_data.push_back(vlans.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlans")
    {
        vlans = value;
        vlans.value_namespace = name_space;
        vlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlans")
    {
        vlans.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "except")
    {
        except.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlans" || name == "add" || name == "all" || name == "except" || name == "none" || name == "remove")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::Native_()
    :
    vlan{YType::str, "vlan"}
{

    yang_name = "native"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::~Native_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Pruning()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan>())
{
    vlan->parent = this;

    yang_name = "pruning"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::~Pruning()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pruning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::Vlan()
    :
    vlans{YType::str, "vlans"},
    add{YType::str, "add"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"}
{

    yang_name = "vlan"; yang_parent_name = "pruning"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::has_operation() const
{
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlans.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(except.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto vlans_name_datas = vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlans_name_datas.begin(), vlans_name_datas.end());
    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlans")
    {
        vlans.append(value);
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlans")
    {
        vlans.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "except")
    {
        except.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlans" || name == "add" || name == "except" || name == "none" || name == "remove")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Voice()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan>())
    , detect(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect>())
{
    vlan->parent = this;
    detect->parent = this;

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::~Voice()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data())
	|| (detect !=  nullptr && detect->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (detect !=  nullptr && detect->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect>();
        }
        return detect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(detect != nullptr)
    {
        _children["detect"] = detect;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "detect")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::Vlan()
    :
    vlan{YType::str, "vlan"},
    name{YType::str, "name"}
{

    yang_name = "vlan"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| name.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "name")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::Detect()
    :
    cisco_phone(nullptr) // presence node
{

    yang_name = "detect"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::~Detect()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::has_data() const
{
    if (is_presence_container) return true;
    return (cisco_phone !=  nullptr && cisco_phone->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_phone !=  nullptr && cisco_phone->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-phone")
    {
        if(cisco_phone == nullptr)
        {
            cisco_phone = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone>();
        }
        return cisco_phone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco_phone != nullptr)
    {
        _children["cisco-phone"] = cisco_phone;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-phone")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::CiscoPhone()
    :
    full_duplex{YType::empty, "full-duplex"}
{

    yang_name = "cisco-phone"; yang_parent_name = "detect"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::~CiscoPhone()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::has_data() const
{
    if (is_presence_container) return true;
    return full_duplex.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full_duplex.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-phone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_duplex.is_set || is_set(full_duplex.yfilter)) leaf_name_data.push_back(full_duplex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-duplex")
    {
        full_duplex = value;
        full_duplex.value_namespace = name_space;
        full_duplex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-duplex")
    {
        full_duplex.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-duplex")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Priority()
    :
    extend(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend>())
{
    extend->parent = this;

    yang_name = "priority"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::~Priority()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::has_data() const
{
    if (is_presence_container) return true;
    return (extend !=  nullptr && extend->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::has_operation() const
{
    return is_set(yfilter)
	|| (extend !=  nullptr && extend->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend>();
        }
        return extend;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extend != nullptr)
    {
        _children["extend"] = extend;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extend")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::Extend()
    :
    trust{YType::empty, "trust"},
    cos{YType::uint8, "cos"}
{

    yang_name = "extend"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::~Extend()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| cos.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust" || name == "cos")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::Autostate()
    :
    exclude{YType::empty, "exclude"}
{

    yang_name = "autostate"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::~Autostate()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::has_data() const
{
    if (is_presence_container) return true;
    return exclude.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclude.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:autostate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.yfilter)) leaf_name_data.push_back(exclude.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude")
    {
        exclude = value;
        exclude.value_namespace = name_space;
        exclude.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude")
    {
        exclude.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::PrivateVlan()
    :
    association(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association>())
    , host_association(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation>())
    , mapping(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping>())
{
    association->parent = this;
    host_association->parent = this;
    mapping->parent = this;

    yang_name = "private-vlan"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return (association !=  nullptr && association->has_data())
	|| (host_association !=  nullptr && host_association->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (host_association !=  nullptr && host_association->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association>();
        }
        return association;
    }

    if(child_yang_name == "host-association")
    {
        if(host_association == nullptr)
        {
            host_association = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation>();
        }
        return host_association;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(association != nullptr)
    {
        _children["association"] = association;
    }

    if(host_association != nullptr)
    {
        _children["host-association"] = host_association;
    }

    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "host-association" || name == "mapping")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Association()
    :
    host(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host>())
    , mapping(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping>())
{
    host->parent = this;
    mapping->parent = this;

    yang_name = "association"; yang_parent_name = "private-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::~Association()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::has_data() const
{
    if (is_presence_container) return true;
    return (host !=  nullptr && host->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::has_operation() const
{
    return is_set(yfilter)
	|| (host !=  nullptr && host->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host>();
        }
        return host;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "mapping")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::Host()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{

    yang_name = "host"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::~Host()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::Mapping()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::str, "secondary-range"},
    add{YType::str, "add"},
    remove{YType::str, "remove"}
{

    yang_name = "mapping"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::~Mapping()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set
	|| add.is_set
	|| remove.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range" || name == "add" || name == "remove")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::HostAssociation()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{

    yang_name = "host-association"; yang_parent_name = "private-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::~HostAssociation()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::Mapping()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::str, "secondary-range"},
    add{YType::str, "add"},
    remove{YType::str, "remove"}
{

    yang_name = "mapping"; yang_parent_name = "private-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::~Mapping()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set
	|| add.is_set
	|| remove.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range" || name == "add" || name == "remove")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::Vepa()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "vepa"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::~Vepa()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vepa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Vepa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::StackwiseVirtual()
    :
    link{YType::uint8, "link"},
    dual_active_detection{YType::empty, "dual-active-detection"}
{

    yang_name = "stackwise-virtual"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::~StackwiseVirtual()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::has_data() const
{
    if (is_presence_container) return true;
    return link.is_set
	|| dual_active_detection.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(dual_active_detection.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (dual_active_detection.is_set || is_set(dual_active_detection.yfilter)) leaf_name_data.push_back(dual_active_detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection = value;
        dual_active_detection.value_namespace = name_space;
        dual_active_detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::StackwiseVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "dual-active-detection")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Arp::~Arp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Arp::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay>())
    , interface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_>())
    , load(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::~Backup()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(load != nullptr)
    {
        _children["load"] = load;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::~Delay()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::PortChannelSubinterface_()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::~PortChannelSubinterface_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::~Load()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::has_data() const
{
    if (is_presence_container) return true;
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::has_data() const
{
    if (is_presence_container) return true;
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reserve != nullptr)
    {
        _children["reserve"] = reserve;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::has_data() const
{
    if (is_presence_container) return true;
    return acr.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
        ,
    out(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_number.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::L2protocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
        ,
    drop_threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold>())
    , shutdown_threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::~L2protocolTunnel()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::has_data() const
{
    if (is_presence_container) return true;
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(drop_threshold != nullptr)
    {
        _children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        _children["shutdown-threshold"] = shutdown_threshold;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::L2protocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q>())
    , isl(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl>())
    , ppp(nullptr) // presence node
    , slip(nullptr) // presence node
    , frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1q != nullptr)
    {
        _children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        _children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        _children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        _children["frame-relay"] = frame_relay;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::has_data() const
{
    if (is_presence_container) return true;
    return ietf.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::has_data() const
{
    if (is_presence_container) return true;
    return fair_queue.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::~FairQueue()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::has_data() const
{
    if (is_presence_container) return true;
    return incomplete.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Isis::Isis()
{

    yang_name = "isis"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Isis::~Isis()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Isis::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Isis::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::has_data() const
{
    if (is_presence_container) return true;
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Bandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
        ,
    receive(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive>())
    , inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(receive != nullptr)
    {
        _children["receive"] = receive;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::has_data() const
{
    if (is_presence_container) return true;
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit")
    {
        inherit = value;
        inherit.value_namespace = name_space;
        inherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit")
    {
        inherit.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return kilobits.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
        ,
    restart(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Dampening::~Dampening()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(restart != nullptr)
    {
        _children["restart"] = restart;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
        start_reusing_time.value_namespace = name_space;
        start_reusing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
        start_supressing_time.value_namespace = name_space;
        start_supressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::~Restart()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::has_data() const
{
    if (is_presence_container) return true;
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Domain::Domain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Domain::~Domain()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Domain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
        zero_sla.value_namespace = name_space;
        zero_sla.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
    if(value_path == "zero-sla")
    {
        zero_sla.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Mpls::Mpls()
{

    yang_name = "mpls"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Mpls::~Mpls()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::~IpVrf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Vrf::~Vrf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Ip()
    :
    admission{YType::str, "admission"},
    unnumbered{YType::str, "unnumbered"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    mtu{YType::uint16, "mtu"},
    mroute_cache{YType::boolean, "mroute-cache"}
        ,
    access_group(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup>())
    , arp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp>())
    , vrf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf>())
    , no_address(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress>())
    , address(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address>())
    , directed_broadcast(nullptr) // presence node
    , hello_interval(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval>())
    , authentication(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication>())
    , hold_time(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime>())
    , helper_address(this, {"address"})
    , pim(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim>())
    , policy(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy>())
    , rip(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip>())
    , route_cache_conf(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf>())
    , route_cache(nullptr) // presence node
    , router(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router>())
    , tcp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp>())
    , virtual_reassembly(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly>())
    , dhcp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp>())
    , summary_address(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress>())
    , verify(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify>())
{
    access_group->parent = this;
    arp->parent = this;
    vrf->parent = this;
    no_address->parent = this;
    address->parent = this;
    hello_interval->parent = this;
    authentication->parent = this;
    hold_time->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    tcp->parent = this;
    virtual_reassembly->parent = this;
    dhcp->parent = this;
    summary_address->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::~Ip()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| unnumbered.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| mtu.is_set
	|| mroute_cache.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "directed-broadcast")
    {
        if(directed_broadcast == nullptr)
        {
            directed_broadcast = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast>();
        }
        return directed_broadcast;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(no_address != nullptr)
    {
        _children["no-address"] = no_address;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(directed_broadcast != nullptr)
    {
        _children["directed-broadcast"] = directed_broadcast;
    }

    if(hello_interval != nullptr)
    {
        _children["hello-interval"] = hello_interval;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(hold_time != nullptr)
    {
        _children["hold-time"] = hold_time;
    }

    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pim != nullptr)
    {
        _children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(route_cache_conf != nullptr)
    {
        _children["route-cache-conf"] = route_cache_conf;
    }

    if(route_cache != nullptr)
    {
        _children["route-cache"] = route_cache;
    }

    if(router != nullptr)
    {
        _children["router"] = router;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(virtual_reassembly != nullptr)
    {
        _children["virtual-reassembly"] = virtual_reassembly;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(summary_address != nullptr)
    {
        _children["summary-address"] = summary_address;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "no-address" || name == "address" || name == "directed-broadcast" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "admission" || name == "unnumbered" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In>())
    , out(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl>())
    , acl(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl>())
    , acl(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::~Arp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::has_data() const
{
    if (is_presence_container) return true;
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inspection != nullptr)
    {
        _children["inspection"] = inspection;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
        ,
    forwarding(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarding != nullptr)
    {
        _children["forwarding"] = forwarding;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
        sitemap.value_namespace = name_space;
        sitemap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "sitemap")
    {
        sitemap.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::has_data() const
{
    if (is_presence_container) return true;
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
        liin_vrf.value_namespace = name_space;
        liin_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
        mgmtvrf.value_namespace = name_space;
        mgmtvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf.yfilter = yfilter;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{

    yang_name = "no-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::~NoAddress()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::NoAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
        ,
    secondary(this, {"address"})
    , primary(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary>())
    , dhcp(nullptr) // presence node
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::~Address()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary" || name == "primary" || name == "dhcp" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
        ,
    client_id(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_id != nullptr)
    {
        _children["client-id"] = client_id;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::ClientId()
    :
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| twentyfivegige.is_set
	|| fortygigabitethernet.is_set
	|| twogigabitethernet.is_set
	|| hundredgige.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "TwentyFiveGigE" || name == "FortyGigabitEthernet" || name == "TwoGigabitEthernet" || name == "HundredGigE" || name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::DirectedBroadcast()
    :
    direct_broadcast{YType::str, "direct-broadcast"}
{

    yang_name = "directed-broadcast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::~DirectedBroadcast()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::has_data() const
{
    if (is_presence_container) return true;
    return direct_broadcast.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direct_broadcast.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directed-broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direct_broadcast.is_set || is_set(direct_broadcast.yfilter)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
        direct_broadcast.value_namespace = name_space;
        direct_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::DirectedBroadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direct-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain>())
    , mode(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::Pim()
    :
    pim_mode{YType::enumeration, "Cisco-IOS-XE-multicast:pim-mode"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
        ,
    accept_register(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister>())
    , query_interval(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval>())
{
    accept_register->parent = this;
    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::~Pim()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::has_data() const
{
    if (is_presence_container) return true;
    return pim_mode.is_set
	|| nbma_mode.is_set
	|| dr_priority.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim_mode.yfilter)
	|| ydk::is_set(nbma_mode.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(spt_threshold.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_mode.is_set || is_set(pim_mode.yfilter)) leaf_name_data.push_back(pim_mode.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.yfilter)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.yfilter)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accept_register != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:accept-register"] = accept_register;
    }

    if(query_interval != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:query-interval"] = query_interval;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:pim-mode")
    {
        pim_mode = value;
        pim_mode.value_namespace = name_space;
        pim_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-multicast:nbma-mode")
    {
        nbma_mode = value;
        nbma_mode.value_namespace = name_space;
        nbma_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-multicast:dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-multicast:spt-threshold")
    {
        spt_threshold = value;
        spt_threshold.value_namespace = name_space;
        spt_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim-mode")
    {
        pim_mode.yfilter = yfilter;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "query-interval" || name == "pim-mode" || name == "nbma-mode" || name == "dr-priority" || name == "spt-threshold")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::QueryInterval()
    :
    seconds_interval{YType::uint16, "seconds-interval"},
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"}
{

    yang_name = "query-interval"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::has_data() const
{
    if (is_presence_container) return true;
    return seconds_interval.is_set
	|| milliseconds_interval.is_set
	|| msec.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds_interval.yfilter)
	|| ydk::is_set(milliseconds_interval.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_interval.is_set || is_set(seconds_interval.yfilter)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());
    if (milliseconds_interval.is_set || is_set(milliseconds_interval.yfilter)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
        seconds_interval.value_namespace = name_space;
        seconds_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval = value;
        milliseconds_interval.value_namespace = name_space;
        milliseconds_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds-interval")
    {
        seconds_interval.yfilter = yfilter;
    }
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::QueryInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds-interval" || name == "milliseconds-interval" || name == "msec")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::~Policy()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::~Rip()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
        ,
    mode(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::has_data() const
{
    if (is_presence_container) return true;
    return route_cache.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::has_data() const
{
    if (is_presence_container) return true;
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
        same_interface.value_namespace = name_space;
        same_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "same-interface")
    {
        same_interface.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::~Router()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::has_data() const
{
    if (is_presence_container) return true;
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::~Tcp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return adjust_mss.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::VirtualReassembly()
    :
    max_reassemblies{YType::uint32, "max-reassemblies"},
    max_fragments{YType::uint32, "max-fragments"},
    timeout{YType::uint32, "timeout"},
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"}
{

    yang_name = "virtual-reassembly"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::has_data() const
{
    if (is_presence_container) return true;
    return max_reassemblies.is_set
	|| max_fragments.is_set
	|| timeout.is_set
	|| drop_fragments.is_set
	|| in.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_reassemblies.yfilter)
	|| ydk::is_set(max_fragments.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(drop_fragments.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reassemblies.is_set || is_set(max_reassemblies.yfilter)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.yfilter)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (drop_fragments.is_set || is_set(drop_fragments.yfilter)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
        max_reassemblies.value_namespace = name_space;
        max_reassemblies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
        max_fragments.value_namespace = name_space;
        max_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
        drop_fragments.value_namespace = name_space;
        drop_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-reassemblies")
    {
        max_reassemblies.yfilter = yfilter;
    }
    if(value_path == "max-fragments")
    {
        max_fragments.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "drop-fragments")
    {
        drop_fragments.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::VirtualReassembly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reassemblies" || name == "max-fragments" || name == "timeout" || name == "drop-fragments" || name == "in")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::Dhcp()
{

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::SummaryAddress()
    :
    eigrp(this, {"id"})
{

    yang_name = "summary-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{

    yang_name = "eigrp"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::SummaryAddress::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ip" || name == "mask" || name == "metric")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Verify()
    :
    source(nullptr) // presence node
    , unicast(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::~Verify()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(unicast != nullptr)
    {
        _children["unicast"] = unicast;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "unicast")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::~Source()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::Vlan()
    :
    dhcp_snooping(nullptr) // presence node
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp_snooping != nullptr)
    {
        _children["dhcp-snooping"] = dhcp_snooping;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{

    yang_name = "dhcp-snooping"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::has_data() const
{
    if (is_presence_container) return true;
    return port_security.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Source::Vlan::DhcpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-security")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
    , source(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reverse_path != nullptr)
    {
        _children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-path" || name == "source")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::ReversePath()
{

    yang_name = "reverse-path"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::ReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::Source()
    :
    reachable_via{YType::enumeration, "reachable-via"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    allow_default{YType::empty, "allow-default"}
{

    yang_name = "source"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::has_data() const
{
    if (is_presence_container) return true;
    return reachable_via.is_set
	|| allow_self_ping.is_set
	|| allow_default.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_via.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(allow_default.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_via.is_set || is_set(reachable_via.yfilter)) leaf_name_data.push_back(reachable_via.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (allow_default.is_set || is_set(allow_default.yfilter)) leaf_name_data.push_back(allow_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-via")
    {
        reachable_via = value;
        reachable_via.value_namespace = name_space;
        reachable_via.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-default")
    {
        allow_default = value;
        allow_default.value_namespace = name_space;
        allow_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-via")
    {
        reachable_via.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "allow-default")
    {
        allow_default.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-via" || name == "allow-self-ping" || name == "allow-default")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Ipv6()
    :
    unnumbered{YType::str, "unnumbered"},
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"}
        ,
    destination_guard(nullptr) // presence node
    , source_guard(nullptr) // presence node
    , dhcp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp>())
    , address(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address>())
    , nd(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd>())
    , tcp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp>())
    , traffic_filter(this, {"direction"})
{
    dhcp->parent = this;
    address->parent = this;
    nd->parent = this;
    tcp->parent = this;

    yang_name = "ipv6"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::~Ipv6()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_filter.len(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    return unnumbered.is_set
	|| enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (source_guard !=  nullptr && source_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<traffic_filter.len(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (source_guard !=  nullptr && source_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "source-guard")
    {
        if(source_guard == nullptr)
        {
            source_guard = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard>();
        }
        return source_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-filter")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter>();
        ent_->parent = this;
        traffic_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_guard != nullptr)
    {
        _children["destination-guard"] = destination_guard;
    }

    if(source_guard != nullptr)
    {
        _children["source-guard"] = source_guard;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(nd != nullptr)
    {
        _children["nd"] = nd;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    count_ = 0;
    for (auto ent_ : traffic_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-guard" || name == "source-guard" || name == "dhcp" || name == "address" || name == "nd" || name == "tcp" || name == "traffic-filter" || name == "unnumbered" || name == "enable" || name == "mtu" || name == "redirects")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "destination-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::DestinationGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::SourceGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "source-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::~SourceGuard()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::SourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::Dhcp()
{

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Address()
    :
    dhcp(nullptr) // presence node
    , autoconfig(nullptr) // presence node
    , prefix_list(this, {"prefix"})
    , link_local_address(this, {"address"})
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::~Address()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_local_address.len(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (autoconfig !=  nullptr && autoconfig->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_local_address.len(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (autoconfig !=  nullptr && autoconfig->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "link-local-address")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress>();
        ent_->parent = this;
        link_local_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(autoconfig != nullptr)
    {
        _children["autoconfig"] = autoconfig;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : link_local_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "autoconfig" || name == "prefix-list" || name == "link-local-address")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return rapid_commit.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rapid_commit.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rapid-commit")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{

    yang_name = "autoconfig"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{

    yang_name = "prefix-list"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(anycast.yfilter)
	|| ydk::is_set(eui_64.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.yfilter)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.yfilter)) leaf_name_data.push_back(eui_64.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast")
    {
        anycast = value;
        anycast.value_namespace = name_space;
        anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
        eui_64.value_namespace = name_space;
        eui_64.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "anycast")
    {
        anycast.yfilter = yfilter;
    }
    if(value_path == "eui-64")
    {
        eui_64.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "anycast" || name == "eui-64")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{

    yang_name = "link-local-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(link_local.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.yfilter)) leaf_name_data.push_back(link_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local")
    {
        link_local = value;
        link_local.value_namespace = name_space;
        link_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "link-local")
    {
        link_local.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Address::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "link-local")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::Nd()
{

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::~Nd()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::~Tcp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return adjust_mss.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::TrafficFilter()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"}
{

    yang_name = "traffic-filter"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::~TrafficFilter()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| access_list.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-filter";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::Logging()
    :
    event(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event>())
{
    event->parent = this;

    yang_name = "logging"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::~Logging()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event != nullptr)
    {
        _children["event"] = event;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    trunk_status{YType::empty, "trunk-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"}
        ,
    spanning_tree(nullptr) // presence node
    , subif_link_status(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::~Event()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| link_status.is_set
	|| trunk_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(trunk_status.yfilter)
	|| ydk::is_set(nfas_status.yfilter)
	|| ydk::is_set(power_inline_status.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.yfilter)) leaf_name_data.push_back(trunk_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.yfilter)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.yfilter)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spanning_tree != nullptr)
    {
        _children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        _children["subif-link-status"] = subif_link_status;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
        trunk_status.value_namespace = name_space;
        trunk_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
        nfas_status.value_namespace = name_space;
        nfas_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
        power_inline_status.value_namespace = name_space;
        power_inline_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "trunk-status")
    {
        trunk_status.yfilter = yfilter;
    }
    if(value_path == "nfas-status")
    {
        nfas_status.yfilter = yfilter;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "subif-link-status" || name == "bundle-status" || name == "link-status" || name == "trunk-status" || name == "nfas-status" || name == "power-inline-status" || name == "status")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{

    yang_name = "spanning-tree"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{

    yang_name = "subif-link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::has_data() const
{
    if (is_presence_container) return true;
    return ignore_bulk.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bulk.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.yfilter)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
        ignore_bulk.value_namespace = name_space;
        ignore_bulk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Logging::Event::SubifLinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bulk")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Mdix::Mdix()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "mdix"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Mdix::~Mdix()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mdix::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mdix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Mdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Mdix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Mdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Mdix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mdix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mdix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mdix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Mop::Mop()
    :
    enabled{YType::boolean, "enabled"},
    sysid{YType::boolean, "sysid"}
{

    yang_name = "mop"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Mop::~Mop()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mop::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| sysid.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(sysid.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Mop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Mop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Mop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Mop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysid")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "sysid")
    {
        sysid.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "sysid")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::InterfaceQos()
    :
    trust(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust>())
{
    trust->parent = this;

    yang_name = "interface_qos"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::~InterfaceQos()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::has_data() const
{
    if (is_presence_container) return true;
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "interface_qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::~Trust()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Source::Source()
    :
    template_(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Source::Template>())
{
    template_->parent = this;

    yang_name = "source"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Source::~Source()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Source::has_data() const
{
    if (is_presence_container) return true;
    return (template_ !=  nullptr && template_->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Source::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Source::Template>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::Template()
    :
    template_name(this, {"template_name"})
{

    yang_name = "template"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::~Template()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<template_name.len(); index++)
    {
        if(template_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::has_operation() const
{
    for (std::size_t index=0; index<template_name.len(); index++)
    {
        if(template_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template-name")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::TemplateName>();
        ent_->parent = this;
        template_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : template_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Source::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelProtocol::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelProtocol::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Duplex::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Duplex::full {1, "full"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Duplex::half {2, "half"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::Vlan_::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dynamic::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dynamic::desirable {1, "desirable"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Violation::restrict {1, "restrict"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Violation::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::Type::absolute {0, "absolute"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::Type::inactivity {1, "inactivity"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Encapsulation::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Encapsulation::isl {1, "isl"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Encapsulation::negotiate {2, "negotiate"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::Vlan::tag {0, "tag"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::Vlan_::dot1p {0, "dot1p"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::Vlan_::none {1, "none"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::Vlan_::untagged {2, "untagged"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::PimMode::passive {0, "passive"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::PimMode::dense_mode {1, "dense-mode"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::PimMode::sparse_mode {2, "sparse-mode"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::PimMode::sparse_dense_mode {3, "sparse-dense-mode"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ip::Pim::SptThreshold::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::ReachableVia::any {0, "any"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ip::Verify::Unicast::Source::ReachableVia::rx {1, "rx"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ipv6::TrafficFilter::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::InterfaceQos::Trust::Device::cisco_phone {0, "cisco-phone"};


}
}

