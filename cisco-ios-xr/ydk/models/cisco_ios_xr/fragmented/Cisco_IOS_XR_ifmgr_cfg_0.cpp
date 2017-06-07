
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

GlobalInterfaceConfiguration::GlobalInterfaceConfiguration()
    :
    link_status{YType::enumeration, "link-status"}
{
    yang_name = "global-interface-configuration"; yang_parent_name = "Cisco-IOS-XR-ifmgr-cfg";
}

GlobalInterfaceConfiguration::~GlobalInterfaceConfiguration()
{
}

bool GlobalInterfaceConfiguration::has_data() const
{
    return link_status.is_set;
}

bool GlobalInterfaceConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(link_status.operation);
}

std::string GlobalInterfaceConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-cfg:global-interface-configuration";

    return path_buffer.str();

}

const EntityPath GlobalInterfaceConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalInterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalInterfaceConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalInterfaceConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-status")
    {
        link_status = value;
    }
}

std::shared_ptr<Entity> GlobalInterfaceConfiguration::clone_ptr() const
{
    return std::make_shared<GlobalInterfaceConfiguration>();
}

std::string GlobalInterfaceConfiguration::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GlobalInterfaceConfiguration::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GlobalInterfaceConfiguration::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InterfaceConfigurations::InterfaceConfigurations()
{
    yang_name = "interface-configurations"; yang_parent_name = "Cisco-IOS-XR-ifmgr-cfg";
}

InterfaceConfigurations::~InterfaceConfigurations()
{
}

bool InterfaceConfigurations::has_data() const
{
    for (std::size_t index=0; index<interface_configuration.size(); index++)
    {
        if(interface_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::has_operation() const
{
    for (std::size_t index=0; index<interface_configuration.size(); index++)
    {
        if(interface_configuration[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-cfg:interface-configurations";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InterfaceConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-configuration")
    {
        for(auto const & c : interface_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration>();
        c->parent = this;
        interface_configuration.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_configuration)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InterfaceConfigurations::clone_ptr() const
{
    return std::make_shared<InterfaceConfigurations>();
}

std::string InterfaceConfigurations::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceConfigurations::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceConfigurations::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InterfaceConfigurations::InterfaceConfiguration::InterfaceConfiguration()
    :
    active{YType::str, "active"},
    interface_name{YType::str, "interface-name"},
    bandwidth{YType::uint32, "bandwidth"},
    description{YType::str, "description"},
    interface_mode_non_physical{YType::enumeration, "interface-mode-non-physical"},
    interface_virtual{YType::empty, "interface-virtual"},
    laser_squelch{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:laser-squelch"},
    link_status{YType::empty, "link-status"},
    mac_addr{YType::str, "Cisco-IOS-XR-mdrv-lib-cfg:mac-addr"},
    maintenance_embargo{YType::boolean, "Cisco-IOS-XR-dwdm-ui-cfg:maintenance-embargo"},
    perf_mon_disable{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:perf-mon-disable"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    shutdown{YType::empty, "shutdown"},
    track_name{YType::str, "Cisco-IOS-XR-manageability-object-tracking-cfg:track-name"},
    vrf{YType::str, "Cisco-IOS-XR-infra-rsi-cfg:vrf"}
    	,
    aaa_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>())
	,afs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>())
	,atm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm>())
	,bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>())
	,bundle(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>())
	,bundle_member(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>())
	,bvi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>())
	,carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>())
	,cdp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>())
	,cisco_ios_xr_ppp_ma_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_fsm_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_ipcp_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_lcp_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp>())
	,client_port(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort>())
	,dagrs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>())
	,dampening(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>())
	,dwdm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>())
	,encapsulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>())
	,es_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>())
	,ethernet(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>())
	,ethernet_bng(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>())
	,ethernet_control(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl>())
	,ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>())
	,ethernet_service(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>())
	,ipv4_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>())
	,ipv4_network_forwarding(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>())
	,ipv4_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>())
	,ipv4arp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp>())
	,ipv6_neighbor(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>())
	,ipv6_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>())
	,ipv6_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>())
	,l2_transport(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>())
	,lacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>())
	,lldp(nullptr) // presence node
	,mac_accounting(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>())
	,macsec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>())
	,mlacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>())
	,mte_tunnel_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>())
	,mtus(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>())
	,net_flow(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>())
	,nv_satellite_access(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>())
	,nv_satellite_fabric_link(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink>())
	,nv_satellite_fabric_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork>())
	,nve(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>())
	,optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>())
	,otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>())
	,pbr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>())
	,performance_management(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>())
	,pppoe(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>())
	,pseudowire_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>())
	,pseudowire_iw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>())
	,qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>())
	,service_policies(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>())
	,span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>())
	,ssrp_session(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>())
	,statistics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>())
	,subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>())
	,transport_profile_tunnel(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>())
	,tunnel_ip(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>())
	,tunnel_te_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>())
	,vlan_sub_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>())
	,vlan_trunk_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>())
	,wanphy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>())
{
    aaa_table->parent = this;

    afs->parent = this;

    atm->parent = this;

    bfd->parent = this;

    bundle->parent = this;

    bundle_member->parent = this;

    bvi->parent = this;

    carrier_delay->parent = this;

    cdp->parent = this;

    cisco_ios_xr_ppp_ma_cfg_ppp->parent = this;

    cisco_ios_xr_ppp_ma_fsm_cfg_ppp->parent = this;

    cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->parent = this;

    cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->parent = this;

    cisco_ios_xr_ppp_ma_lcp_cfg_ppp->parent = this;

    client_port->parent = this;

    dagrs->parent = this;

    dampening->parent = this;

    dwdm->parent = this;

    encapsulation->parent = this;

    es_packet_filter->parent = this;

    ethernet->parent = this;

    ethernet_bng->parent = this;

    ethernet_control->parent = this;

    ethernet_features->parent = this;

    ethernet_service->parent = this;

    ipv4_network->parent = this;

    ipv4_network_forwarding->parent = this;

    ipv4_packet_filter->parent = this;

    ipv4arp->parent = this;

    ipv6_neighbor->parent = this;

    ipv6_network->parent = this;

    ipv6_packet_filter->parent = this;

    l2_transport->parent = this;

    lacp->parent = this;

    mac_accounting->parent = this;

    macsec->parent = this;

    mlacp->parent = this;

    mte_tunnel_attributes->parent = this;

    mtus->parent = this;

    net_flow->parent = this;

    nv_satellite_access->parent = this;

    nv_satellite_fabric_link->parent = this;

    nv_satellite_fabric_network->parent = this;

    nve->parent = this;

    optics->parent = this;

    otu->parent = this;

    pbr->parent = this;

    performance_management->parent = this;

    pppoe->parent = this;

    pseudowire_ether->parent = this;

    pseudowire_iw->parent = this;

    qos->parent = this;

    service_policies->parent = this;

    span_monitor_sessions->parent = this;

    ssrp_session->parent = this;

    statistics->parent = this;

    subscriber->parent = this;

    transport_profile_tunnel->parent = this;

    tunnel_ip->parent = this;

    tunnel_te_attributes->parent = this;

    vlan_sub_configuration->parent = this;

    vlan_trunk_configuration->parent = this;

    wanphy->parent = this;

    yang_name = "interface-configuration"; yang_parent_name = "interface-configurations";
}

InterfaceConfigurations::InterfaceConfiguration::~InterfaceConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::has_data() const
{
    return active.is_set
	|| interface_name.is_set
	|| bandwidth.is_set
	|| description.is_set
	|| interface_mode_non_physical.is_set
	|| interface_virtual.is_set
	|| laser_squelch.is_set
	|| link_status.is_set
	|| mac_addr.is_set
	|| maintenance_embargo.is_set
	|| perf_mon_disable.is_set
	|| secondary_admin_state.is_set
	|| shutdown.is_set
	|| track_name.is_set
	|| vrf.is_set
	|| (aaa_table !=  nullptr && aaa_table->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (bundle_member !=  nullptr && bundle_member->has_data())
	|| (bvi !=  nullptr && bvi->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp->has_data())
	|| (client_port !=  nullptr && client_port->has_data())
	|| (dagrs !=  nullptr && dagrs->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (dwdm !=  nullptr && dwdm->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_data())
	|| (ethernet_control !=  nullptr && ethernet_control->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (ethernet_service !=  nullptr && ethernet_service->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv4arp !=  nullptr && ipv4arp->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (l2_transport !=  nullptr && l2_transport->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (mac_accounting !=  nullptr && mac_accounting->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_data())
	|| (mtus !=  nullptr && mtus->has_data())
	|| (net_flow !=  nullptr && net_flow->has_data())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_data())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_data())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_data())
	|| (nve !=  nullptr && nve->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (performance_management !=  nullptr && performance_management->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (service_policies !=  nullptr && service_policies->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (ssrp_session !=  nullptr && ssrp_session->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_data())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_data())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_data())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_data())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_data())
	|| (wanphy !=  nullptr && wanphy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(interface_name.operation)
	|| is_set(bandwidth.operation)
	|| is_set(description.operation)
	|| is_set(interface_mode_non_physical.operation)
	|| is_set(interface_virtual.operation)
	|| is_set(laser_squelch.operation)
	|| is_set(link_status.operation)
	|| is_set(mac_addr.operation)
	|| is_set(maintenance_embargo.operation)
	|| is_set(perf_mon_disable.operation)
	|| is_set(secondary_admin_state.operation)
	|| is_set(shutdown.operation)
	|| is_set(track_name.operation)
	|| is_set(vrf.operation)
	|| (aaa_table !=  nullptr && aaa_table->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (bvi !=  nullptr && bvi->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp->has_operation())
	|| (client_port !=  nullptr && client_port->has_operation())
	|| (dagrs !=  nullptr && dagrs->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (dwdm !=  nullptr && dwdm->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_operation())
	|| (ethernet_control !=  nullptr && ethernet_control->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (ethernet_service !=  nullptr && ethernet_service->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv4arp !=  nullptr && ipv4arp->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (l2_transport !=  nullptr && l2_transport->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (mac_accounting !=  nullptr && mac_accounting->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_operation())
	|| (mtus !=  nullptr && mtus->has_operation())
	|| (net_flow !=  nullptr && net_flow->has_operation())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_operation())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_operation())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_operation())
	|| (nve !=  nullptr && nve->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (performance_management !=  nullptr && performance_management->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (service_policies !=  nullptr && service_policies->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (ssrp_session !=  nullptr && ssrp_session->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_operation())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_operation())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_operation())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_operation())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_operation())
	|| (wanphy !=  nullptr && wanphy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configuration" <<"[active='" <<active <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-cfg:interface-configurations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (interface_mode_non_physical.is_set || is_set(interface_mode_non_physical.operation)) leaf_name_data.push_back(interface_mode_non_physical.get_name_leafdata());
    if (interface_virtual.is_set || is_set(interface_virtual.operation)) leaf_name_data.push_back(interface_virtual.get_name_leafdata());
    if (laser_squelch.is_set || is_set(laser_squelch.operation)) leaf_name_data.push_back(laser_squelch.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.operation)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (maintenance_embargo.is_set || is_set(maintenance_embargo.operation)) leaf_name_data.push_back(maintenance_embargo.get_name_leafdata());
    if (perf_mon_disable.is_set || is_set(perf_mon_disable.operation)) leaf_name_data.push_back(perf_mon_disable.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.operation)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-table")
    {
        if(aaa_table == nullptr)
        {
            aaa_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>();
        }
        return aaa_table;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "bundle-member")
    {
        if(bundle_member == nullptr)
        {
            bundle_member = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>();
        }
        return bundle_member;
    }

    if(child_yang_name == "bvi")
    {
        if(bvi == nullptr)
        {
            bvi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>();
        }
        return bvi;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp>();
        }
        return cisco_ios_xr_ppp_ma_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_fsm_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp>();
        }
        return cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcp_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp>();
        }
        return cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp>();
        }
        return cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_lcp_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp>();
        }
        return cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
    }

    if(child_yang_name == "client-port")
    {
        if(client_port == nullptr)
        {
            client_port = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort>();
        }
        return client_port;
    }

    if(child_yang_name == "dagrs")
    {
        if(dagrs == nullptr)
        {
            dagrs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>();
        }
        return dagrs;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "dwdm")
    {
        if(dwdm == nullptr)
        {
            dwdm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>();
        }
        return dwdm;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "es-packet-filter")
    {
        if(es_packet_filter == nullptr)
        {
            es_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>();
        }
        return es_packet_filter;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "ethernet-bng")
    {
        if(ethernet_bng == nullptr)
        {
            ethernet_bng = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>();
        }
        return ethernet_bng;
    }

    if(child_yang_name == "ethernet-control")
    {
        if(ethernet_control == nullptr)
        {
            ethernet_control = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl>();
        }
        return ethernet_control;
    }

    if(child_yang_name == "ethernet-features")
    {
        if(ethernet_features == nullptr)
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>();
        }
        return ethernet_features;
    }

    if(child_yang_name == "ethernet-service")
    {
        if(ethernet_service == nullptr)
        {
            ethernet_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>();
        }
        return ethernet_service;
    }

    if(child_yang_name == "ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "ipv4-network-forwarding")
    {
        if(ipv4_network_forwarding == nullptr)
        {
            ipv4_network_forwarding = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>();
        }
        return ipv4_network_forwarding;
    }

    if(child_yang_name == "ipv4-packet-filter")
    {
        if(ipv4_packet_filter == nullptr)
        {
            ipv4_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>();
        }
        return ipv4_packet_filter;
    }

    if(child_yang_name == "ipv4arp")
    {
        if(ipv4arp == nullptr)
        {
            ipv4arp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp>();
        }
        return ipv4arp;
    }

    if(child_yang_name == "ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "ipv6-packet-filter")
    {
        if(ipv6_packet_filter == nullptr)
        {
            ipv6_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>();
        }
        return ipv6_packet_filter;
    }

    if(child_yang_name == "l2-transport")
    {
        if(l2_transport == nullptr)
        {
            l2_transport = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>();
        }
        return l2_transport;
    }

    if(child_yang_name == "lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "mac-accounting")
    {
        if(mac_accounting == nullptr)
        {
            mac_accounting = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>();
        }
        return mac_accounting;
    }

    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "mlacp")
    {
        if(mlacp == nullptr)
        {
            mlacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>();
        }
        return mlacp;
    }

    if(child_yang_name == "mte-tunnel-attributes")
    {
        if(mte_tunnel_attributes == nullptr)
        {
            mte_tunnel_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>();
        }
        return mte_tunnel_attributes;
    }

    if(child_yang_name == "mtus")
    {
        if(mtus == nullptr)
        {
            mtus = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>();
        }
        return mtus;
    }

    if(child_yang_name == "net-flow")
    {
        if(net_flow == nullptr)
        {
            net_flow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>();
        }
        return net_flow;
    }

    if(child_yang_name == "nv-satellite-access")
    {
        if(nv_satellite_access == nullptr)
        {
            nv_satellite_access = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>();
        }
        return nv_satellite_access;
    }

    if(child_yang_name == "nv-satellite-fabric-link")
    {
        if(nv_satellite_fabric_link == nullptr)
        {
            nv_satellite_fabric_link = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink>();
        }
        return nv_satellite_fabric_link;
    }

    if(child_yang_name == "nv-satellite-fabric-network")
    {
        if(nv_satellite_fabric_network == nullptr)
        {
            nv_satellite_fabric_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork>();
        }
        return nv_satellite_fabric_network;
    }

    if(child_yang_name == "nve")
    {
        if(nve == nullptr)
        {
            nve = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>();
        }
        return nve;
    }

    if(child_yang_name == "optics")
    {
        if(optics == nullptr)
        {
            optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>();
        }
        return optics;
    }

    if(child_yang_name == "otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "performance-management")
    {
        if(performance_management == nullptr)
        {
            performance_management = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>();
        }
        return performance_management;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "service-policies")
    {
        if(service_policies == nullptr)
        {
            service_policies = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>();
        }
        return service_policies;
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    if(child_yang_name == "ssrp-session")
    {
        if(ssrp_session == nullptr)
        {
            ssrp_session = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>();
        }
        return ssrp_session;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>();
        }
        return subscriber;
    }

    if(child_yang_name == "transport-profile-tunnel")
    {
        if(transport_profile_tunnel == nullptr)
        {
            transport_profile_tunnel = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>();
        }
        return transport_profile_tunnel;
    }

    if(child_yang_name == "tunnel-ip")
    {
        if(tunnel_ip == nullptr)
        {
            tunnel_ip = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>();
        }
        return tunnel_ip;
    }

    if(child_yang_name == "tunnel-te-attributes")
    {
        if(tunnel_te_attributes == nullptr)
        {
            tunnel_te_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>();
        }
        return tunnel_te_attributes;
    }

    if(child_yang_name == "vlan-sub-configuration")
    {
        if(vlan_sub_configuration == nullptr)
        {
            vlan_sub_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>();
        }
        return vlan_sub_configuration;
    }

    if(child_yang_name == "vlan-trunk-configuration")
    {
        if(vlan_trunk_configuration == nullptr)
        {
            vlan_trunk_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>();
        }
        return vlan_trunk_configuration;
    }

    if(child_yang_name == "wanphy")
    {
        if(wanphy == nullptr)
        {
            wanphy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>();
        }
        return wanphy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa_table != nullptr)
    {
        children["aaa-table"] = aaa_table;
    }

    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    if(bundle_member != nullptr)
    {
        children["bundle-member"] = bundle_member;
    }

    if(bvi != nullptr)
    {
        children["bvi"] = bvi;
    }

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(cdp != nullptr)
    {
        children["cdp"] = cdp;
    }

    if(cisco_ios_xr_ppp_ma_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-cfg_ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
    }

    if(client_port != nullptr)
    {
        children["client-port"] = client_port;
    }

    if(dagrs != nullptr)
    {
        children["dagrs"] = dagrs;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(dwdm != nullptr)
    {
        children["dwdm"] = dwdm;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(es_packet_filter != nullptr)
    {
        children["es-packet-filter"] = es_packet_filter;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(ethernet_bng != nullptr)
    {
        children["ethernet-bng"] = ethernet_bng;
    }

    if(ethernet_control != nullptr)
    {
        children["ethernet-control"] = ethernet_control;
    }

    if(ethernet_features != nullptr)
    {
        children["ethernet-features"] = ethernet_features;
    }

    if(ethernet_service != nullptr)
    {
        children["ethernet-service"] = ethernet_service;
    }

    if(ipv4_network != nullptr)
    {
        children["ipv4-network"] = ipv4_network;
    }

    if(ipv4_network_forwarding != nullptr)
    {
        children["ipv4-network-forwarding"] = ipv4_network_forwarding;
    }

    if(ipv4_packet_filter != nullptr)
    {
        children["ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv4arp != nullptr)
    {
        children["ipv4arp"] = ipv4arp;
    }

    if(ipv6_neighbor != nullptr)
    {
        children["ipv6-neighbor"] = ipv6_neighbor;
    }

    if(ipv6_network != nullptr)
    {
        children["ipv6-network"] = ipv6_network;
    }

    if(ipv6_packet_filter != nullptr)
    {
        children["ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(l2_transport != nullptr)
    {
        children["l2-transport"] = l2_transport;
    }

    if(lacp != nullptr)
    {
        children["lacp"] = lacp;
    }

    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    if(mac_accounting != nullptr)
    {
        children["mac-accounting"] = mac_accounting;
    }

    if(macsec != nullptr)
    {
        children["macsec"] = macsec;
    }

    if(mlacp != nullptr)
    {
        children["mlacp"] = mlacp;
    }

    if(mte_tunnel_attributes != nullptr)
    {
        children["mte-tunnel-attributes"] = mte_tunnel_attributes;
    }

    if(mtus != nullptr)
    {
        children["mtus"] = mtus;
    }

    if(net_flow != nullptr)
    {
        children["net-flow"] = net_flow;
    }

    if(nv_satellite_access != nullptr)
    {
        children["nv-satellite-access"] = nv_satellite_access;
    }

    if(nv_satellite_fabric_link != nullptr)
    {
        children["nv-satellite-fabric-link"] = nv_satellite_fabric_link;
    }

    if(nv_satellite_fabric_network != nullptr)
    {
        children["nv-satellite-fabric-network"] = nv_satellite_fabric_network;
    }

    if(nve != nullptr)
    {
        children["nve"] = nve;
    }

    if(optics != nullptr)
    {
        children["optics"] = optics;
    }

    if(otu != nullptr)
    {
        children["otu"] = otu;
    }

    if(pbr != nullptr)
    {
        children["pbr"] = pbr;
    }

    if(performance_management != nullptr)
    {
        children["performance-management"] = performance_management;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(service_policies != nullptr)
    {
        children["service-policies"] = service_policies;
    }

    if(span_monitor_sessions != nullptr)
    {
        children["span-monitor-sessions"] = span_monitor_sessions;
    }

    if(ssrp_session != nullptr)
    {
        children["ssrp-session"] = ssrp_session;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(subscriber != nullptr)
    {
        children["subscriber"] = subscriber;
    }

    if(transport_profile_tunnel != nullptr)
    {
        children["transport-profile-tunnel"] = transport_profile_tunnel;
    }

    if(tunnel_ip != nullptr)
    {
        children["tunnel-ip"] = tunnel_ip;
    }

    if(tunnel_te_attributes != nullptr)
    {
        children["tunnel-te-attributes"] = tunnel_te_attributes;
    }

    if(vlan_sub_configuration != nullptr)
    {
        children["vlan-sub-configuration"] = vlan_sub_configuration;
    }

    if(vlan_trunk_configuration != nullptr)
    {
        children["vlan-trunk-configuration"] = vlan_trunk_configuration;
    }

    if(wanphy != nullptr)
    {
        children["wanphy"] = wanphy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "interface-mode-non-physical")
    {
        interface_mode_non_physical = value;
    }
    if(value_path == "interface-virtual")
    {
        interface_virtual = value;
    }
    if(value_path == "laser-squelch")
    {
        laser_squelch = value;
    }
    if(value_path == "link-status")
    {
        link_status = value;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
    }
    if(value_path == "maintenance-embargo")
    {
        maintenance_embargo = value;
    }
    if(value_path == "perf-mon-disable")
    {
        perf_mon_disable = value;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "track-name")
    {
        track_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dampening::Dampening()
    :
    args{YType::enumeration, "args"},
    half_life{YType::uint32, "half-life"},
    restart_penalty{YType::uint32, "restart-penalty"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"}
{
    yang_name = "dampening"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Dampening::~Dampening()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dampening::has_data() const
{
    return args.is_set
	|| half_life.is_set
	|| restart_penalty.is_set
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(args.operation)
	|| is_set(half_life.operation)
	|| is_set(restart_penalty.operation)
	|| is_set(reuse_threshold.operation)
	|| is_set(suppress_threshold.operation)
	|| is_set(suppress_time.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (args.is_set || is_set(args.operation)) leaf_name_data.push_back(args.get_name_leafdata());
    if (half_life.is_set || is_set(half_life.operation)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.operation)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.operation)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.operation)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "args")
    {
        args = value;
    }
    if(value_path == "half-life")
    {
        half_life = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtus()
{
    yang_name = "mtus"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::~Mtus()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_data() const
{
    for (std::size_t index=0; index<mtu.size(); index++)
    {
        if(mtu[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_operation() const
{
    for (std::size_t index=0; index<mtu.size(); index++)
    {
        if(mtu[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtus";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Mtus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mtus' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mtu")
    {
        for(auto const & c : mtu)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu>();
        c->parent = this;
        mtu.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtu)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::Mtu()
    :
    owner{YType::str, "owner"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "mtu"; yang_parent_name = "mtus";
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::~Mtu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_data() const
{
    return owner.is_set
	|| mtu.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_operation() const
{
    return is_set(operation)
	|| is_set(owner.operation)
	|| is_set(mtu.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu" <<"[owner='" <<owner <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mtu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::Encapsulation()
    :
    capsulation_options{YType::int32, "capsulation-options"},
    encapsulation{YType::str, "encapsulation"}
{
    yang_name = "encapsulation"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_data() const
{
    return capsulation_options.is_set
	|| encapsulation.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(capsulation_options.operation)
	|| is_set(encapsulation.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_options.is_set || is_set(capsulation_options.operation)) leaf_name_data.push_back(capsulation_options.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capsulation-options")
    {
        capsulation_options = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::AaaTable()
    :
    radius(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>())
{
    radius->parent = this;

    yang_name = "aaa-table"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::~AaaTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_data() const
{
    return (radius !=  nullptr && radius->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_operation() const
{
    return is_set(operation)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AaaTable' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>();
        }
        return radius;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Radius()
    :
    attribute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>())
{
    attribute->parent = this;

    yang_name = "radius"; yang_parent_name = "aaa-table";
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::~Radius()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_operation() const
{
    return is_set(operation)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Radius' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::Attribute()
    :
    nas_port_type{YType::enumeration, "nas-port-type"}
{
    yang_name = "attribute"; yang_parent_name = "radius";
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::~Attribute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_data() const
{
    return nas_port_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(nas_port_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attribute' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type.is_set || is_set(nas_port_type.operation)) leaf_name_data.push_back(nas_port_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nas-port-type")
    {
        nas_port_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::EthernetControl()
    :
    small_frame_padding{YType::empty, "small-frame-padding"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    transceiver(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver>())
{
    transceiver->parent = this;

    yang_name = "ethernet-control"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::~EthernetControl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_data() const
{
    return small_frame_padding.is_set
	|| transport_mode.is_set
	|| (transceiver !=  nullptr && transceiver->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_operation() const
{
    return is_set(operation)
	|| is_set(small_frame_padding.operation)
	|| is_set(transport_mode.operation)
	|| (transceiver !=  nullptr && transceiver->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-cfg:ethernet-control";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetControl' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (small_frame_padding.is_set || is_set(small_frame_padding.operation)) leaf_name_data.push_back(small_frame_padding.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.operation)) leaf_name_data.push_back(transport_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transceiver")
    {
        if(transceiver == nullptr)
        {
            transceiver = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver>();
        }
        return transceiver;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transceiver != nullptr)
    {
        children["transceiver"] = transceiver;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "small-frame-padding")
    {
        small_frame_padding = value;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Transceiver()
    :
    permit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit>())
{
    permit->parent = this;

    yang_name = "transceiver"; yang_parent_name = "ethernet-control";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::~Transceiver()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::has_operation() const
{
    return is_set(operation)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transceiver' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::Permit()
    :
    pid{YType::enumeration, "pid"},
    type{YType::enumeration, "type"}
{
    yang_name = "permit"; yang_parent_name = "transceiver";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::~Permit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_data() const
{
    return pid.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(pid.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::PseudowireEther()
    :
    generic_interface_list{YType::str, "generic-interface-list"},
    l2_overhead{YType::uint32, "l2-overhead"}
{
    yang_name = "pseudowire-ether"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::~PseudowireEther()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_data() const
{
    return generic_interface_list.is_set
	|| l2_overhead.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_interface_list.operation)
	|| is_set(l2_overhead.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-ether";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list.is_set || is_set(generic_interface_list.operation)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.operation)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::PseudowireIw()
    :
    generic_interface_list{YType::str, "generic-interface-list"},
    l2_overhead{YType::uint32, "l2-overhead"}
{
    yang_name = "pseudowire-iw"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::~PseudowireIw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_data() const
{
    return generic_interface_list.is_set
	|| l2_overhead.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_interface_list.operation)
	|| is_set(l2_overhead.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-iw";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list.is_set || is_set(generic_interface_list.operation)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.operation)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bvi::Bvi()
    :
    host_routing{YType::empty, "host-routing"}
{
    yang_name = "bvi"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Bvi::~Bvi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bvi::has_data() const
{
    return host_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bvi::has_operation() const
{
    return is_set(operation)
	|| is_set(host_routing.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:bvi";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bvi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bvi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_routing.is_set || is_set(host_routing.operation)) leaf_name_data.push_back(host_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bvi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bvi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-routing")
    {
        host_routing = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Transport()
    :
    enabled{YType::empty, "enabled"},
    propagate_remote_status{YType::empty, "Cisco-IOS-XR-l2-eth-infra-cfg:propagate-remote-status"}
    	,
    atm_port_mode_parameters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>())
	,cac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>())
	,l2_ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>())
	,l2_protocols(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>())
	,pac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>())
	,span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>())
{
    atm_port_mode_parameters->parent = this;

    cac->parent = this;

    l2_ethernet_features->parent = this;

    l2_protocols->parent = this;

    pac->parent = this;

    span_monitor_sessions->parent = this;

    yang_name = "l2-transport"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::~L2Transport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_data() const
{
    return enabled.is_set
	|| propagate_remote_status.is_set
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_data())
	|| (l2_protocols !=  nullptr && l2_protocols->has_data())
	|| (pac !=  nullptr && pac->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(propagate_remote_status.operation)
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_operation())
	|| (l2_protocols !=  nullptr && l2_protocols->has_operation())
	|| (pac !=  nullptr && pac->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2-transport";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Transport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (propagate_remote_status.is_set || is_set(propagate_remote_status.operation)) leaf_name_data.push_back(propagate_remote_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm-port-mode-parameters")
    {
        if(atm_port_mode_parameters == nullptr)
        {
            atm_port_mode_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>();
        }
        return atm_port_mode_parameters;
    }

    if(child_yang_name == "cac")
    {
        if(cac == nullptr)
        {
            cac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>();
        }
        return cac;
    }

    if(child_yang_name == "l2-ethernet-features")
    {
        if(l2_ethernet_features == nullptr)
        {
            l2_ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>();
        }
        return l2_ethernet_features;
    }

    if(child_yang_name == "l2-protocols")
    {
        if(l2_protocols == nullptr)
        {
            l2_protocols = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>();
        }
        return l2_protocols;
    }

    if(child_yang_name == "pac")
    {
        if(pac == nullptr)
        {
            pac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>();
        }
        return pac;
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_port_mode_parameters != nullptr)
    {
        children["atm-port-mode-parameters"] = atm_port_mode_parameters;
    }

    if(cac != nullptr)
    {
        children["cac"] = cac;
    }

    if(l2_ethernet_features != nullptr)
    {
        children["l2-ethernet-features"] = l2_ethernet_features;
    }

    if(l2_protocols != nullptr)
    {
        children["l2-protocols"] = l2_protocols;
    }

    if(pac != nullptr)
    {
        children["pac"] = pac;
    }

    if(span_monitor_sessions != nullptr)
    {
        children["span-monitor-sessions"] = span_monitor_sessions;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "propagate-remote-status")
    {
        propagate_remote_status = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::AtmPortModeParameters()
    :
    cell_packing(nullptr) // presence node
{
    yang_name = "atm-port-mode-parameters"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::~AtmPortModeParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_data() const
{
    return (cell_packing !=  nullptr && cell_packing->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_operation() const
{
    return is_set(operation)
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm-port-mode-parameters";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmPortModeParameters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking>();
        }
        return cell_packing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{
    yang_name = "cell-packing"; yang_parent_name = "atm-port-mode-parameters";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer_id.operation)
	|| is_set(maximum_cells_packed.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacking' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.operation)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.operation)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocols()
{
    yang_name = "l2-protocols"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::~L2Protocols()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_data() const
{
    for (std::size_t index=0; index<l2_protocol.size(); index++)
    {
        if(l2_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_operation() const
{
    for (std::size_t index=0; index<l2_protocol.size(); index++)
    {
        if(l2_protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-protocols";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Protocols' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-protocol")
    {
        for(auto const & c : l2_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol>();
        c->parent = this;
        l2_protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2_protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::L2Protocol()
    :
    l2_protocol_name{YType::enumeration, "l2-protocol-name"},
    mode{YType::enumeration, "mode"},
    mpls_exp_bits_value{YType::uint32, "mpls-exp-bits-value"}
{
    yang_name = "l2-protocol"; yang_parent_name = "l2-protocols";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::~L2Protocol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_data() const
{
    return l2_protocol_name.is_set
	|| mode.is_set
	|| mpls_exp_bits_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(l2_protocol_name.operation)
	|| is_set(mode.operation)
	|| is_set(mpls_exp_bits_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-protocol" <<"[l2-protocol-name='" <<l2_protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Protocol' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_protocol_name.is_set || is_set(l2_protocol_name.operation)) leaf_name_data.push_back(l2_protocol_name.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mpls_exp_bits_value.is_set || is_set(mpls_exp_bits_value.operation)) leaf_name_data.push_back(mpls_exp_bits_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2-protocol-name")
    {
        l2_protocol_name = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "mpls-exp-bits-value")
    {
        mpls_exp_bits_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::L2EthernetFeatures()
    :
    egress_filtering{YType::enumeration, "egress-filtering"},
    source_bypass_egress_filtering{YType::empty, "source-bypass-egress-filtering"}
{
    yang_name = "l2-ethernet-features"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::~L2EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_data() const
{
    return egress_filtering.is_set
	|| source_bypass_egress_filtering.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_filtering.operation)
	|| is_set(source_bypass_egress_filtering.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-ethernet-features";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2EthernetFeatures' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_filtering.is_set || is_set(egress_filtering.operation)) leaf_name_data.push_back(egress_filtering.get_name_leafdata());
    if (source_bypass_egress_filtering.is_set || is_set(source_bypass_egress_filtering.operation)) leaf_name_data.push_back(source_bypass_egress_filtering.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-filtering")
    {
        egress_filtering = value;
    }
    if(value_path == "source-bypass-egress-filtering")
    {
        source_bypass_egress_filtering = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSessions()
{
    yang_name = "span-monitor-sessions"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSessions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    acl{YType::empty, "acl"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
{
    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| acl.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_class.operation)
	|| is_set(acl.operation)
	|| is_set(mirror_first.operation)
	|| is_set(mirror_interval.operation)
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSession' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.operation)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"},
    session_name{YType::str, "session-name"}
{
    yang_name = "attachment"; yang_parent_name = "span-monitor-session";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(port_level_enable.operation)
	|| is_set(session_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attachment' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.operation)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Pac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>())
{
    qos->parent = this;

    yang_name = "pac"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::~Pac()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:pac";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pac' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "qos"; yang_parent_name = "pac";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;

    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;

    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Cac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>())
{
    qos->parent = this;

    yang_name = "cac"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::~Cac()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:cac";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cac' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "qos"; yang_parent_name = "cac";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;

    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;

    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Atm()
    :
    max_vpi_bits{YType::enumeration, "max-vpi-bits"},
    vc_class{YType::str, "vc-class"}
    	,
    maximum_cell_packing_timers(nullptr) // presence node
	,pvcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>())
	,pvps(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>())
	,vp_tunnels(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>())
{
    pvcs->parent = this;

    pvps->parent = this;

    vp_tunnels->parent = this;

    yang_name = "atm"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::~Atm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_data() const
{
    return max_vpi_bits.is_set
	|| vc_class.is_set
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_data())
	|| (pvcs !=  nullptr && pvcs->has_data())
	|| (pvps !=  nullptr && pvps->has_data())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(max_vpi_bits.operation)
	|| is_set(vc_class.operation)
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_operation())
	|| (pvcs !=  nullptr && pvcs->has_operation())
	|| (pvps !=  nullptr && pvps->has_operation())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_vpi_bits.is_set || is_set(max_vpi_bits.operation)) leaf_name_data.push_back(max_vpi_bits.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.operation)) leaf_name_data.push_back(vc_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-cell-packing-timers")
    {
        if(maximum_cell_packing_timers == nullptr)
        {
            maximum_cell_packing_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers>();
        }
        return maximum_cell_packing_timers;
    }

    if(child_yang_name == "pvcs")
    {
        if(pvcs == nullptr)
        {
            pvcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>();
        }
        return pvcs;
    }

    if(child_yang_name == "pvps")
    {
        if(pvps == nullptr)
        {
            pvps = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>();
        }
        return pvps;
    }

    if(child_yang_name == "vp-tunnels")
    {
        if(vp_tunnels == nullptr)
        {
            vp_tunnels = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>();
        }
        return vp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_cell_packing_timers != nullptr)
    {
        children["maximum-cell-packing-timers"] = maximum_cell_packing_timers;
    }

    if(pvcs != nullptr)
    {
        children["pvcs"] = pvcs;
    }

    if(pvps != nullptr)
    {
        children["pvps"] = pvps;
    }

    if(vp_tunnels != nullptr)
    {
        children["vp-tunnels"] = vp_tunnels;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-vpi-bits")
    {
        max_vpi_bits = value;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvps()
{
    yang_name = "pvps"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::~Pvps()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvps";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvps' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Pvp()
    :
    vpi{YType::uint32, "vpi"},
    enable{YType::empty, "enable"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"},
    test_mode{YType::enumeration, "test-mode"}
    	,
    cell_packing(nullptr) // presence node
	,shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>())
{
    shape->parent = this;

    yang_name = "pvp"; yang_parent_name = "pvps";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::~Pvp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_data() const
{
    return vpi.is_set
	|| enable.is_set
	|| oam_segment_endpoint.is_set
	|| test_mode.is_set
	|| (cell_packing !=  nullptr && cell_packing->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_operation() const
{
    return is_set(operation)
	|| is_set(vpi.operation)
	|| is_set(enable.operation)
	|| is_set(oam_segment_endpoint.operation)
	|| is_set(test_mode.operation)
	|| (cell_packing !=  nullptr && cell_packing->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[vpi='" <<vpi <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.operation)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.operation)) leaf_name_data.push_back(test_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking>();
        }
        return cell_packing;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{
    yang_name = "shape"; yang_parent_name = "pvp";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_size.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.operation)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{
    yang_name = "cell-packing"; yang_parent_name = "pvp";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer_id.operation)
	|| is_set(maximum_cells_packed.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacking' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.operation)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.operation)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvcs()
{
    yang_name = "pvcs"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::~Pvcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_data() const
{
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_operation() const
{
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvcs";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvcs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Pvc()
    :
    vpi{YType::uint32, "vpi"},
    vci{YType::uint32, "vci"},
    pv_ctype{YType::enumeration, "pv-ctype"},
    enable{YType::empty, "enable"},
    encapsulation{YType::enumeration, "encapsulation"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"},
    test_mode{YType::enumeration, "test-mode"},
    vc_class{YType::str, "vc-class"}
    	,
    cell_packing(nullptr) // presence node
	,oam_emulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>())
	,shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>())
{
    oam_emulation->parent = this;

    shape->parent = this;

    yang_name = "pvc"; yang_parent_name = "pvcs";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::~Pvc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_data() const
{
    return vpi.is_set
	|| vci.is_set
	|| pv_ctype.is_set
	|| enable.is_set
	|| encapsulation.is_set
	|| oam_segment_endpoint.is_set
	|| test_mode.is_set
	|| vc_class.is_set
	|| (cell_packing !=  nullptr && cell_packing->has_data())
	|| (oam_emulation !=  nullptr && oam_emulation->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_operation() const
{
    return is_set(operation)
	|| is_set(vpi.operation)
	|| is_set(vci.operation)
	|| is_set(pv_ctype.operation)
	|| is_set(enable.operation)
	|| is_set(encapsulation.operation)
	|| is_set(oam_segment_endpoint.operation)
	|| is_set(test_mode.operation)
	|| is_set(vc_class.operation)
	|| (cell_packing !=  nullptr && cell_packing->has_operation())
	|| (oam_emulation !=  nullptr && oam_emulation->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvc" <<"[vpi='" <<vpi <<"']" <<"[vci='" <<vci <<"']" <<"[pv-ctype='" <<pv_ctype <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvc' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (pv_ctype.is_set || is_set(pv_ctype.operation)) leaf_name_data.push_back(pv_ctype.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.operation)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.operation)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.operation)) leaf_name_data.push_back(vc_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking>();
        }
        return cell_packing;
    }

    if(child_yang_name == "oam-emulation")
    {
        if(oam_emulation == nullptr)
        {
            oam_emulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>();
        }
        return oam_emulation;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
    }

    if(oam_emulation != nullptr)
    {
        children["oam-emulation"] = oam_emulation;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "pv-ctype")
    {
        pv_ctype = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{
    yang_name = "shape"; yang_parent_name = "pvc";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_size.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.operation)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::OamEmulation()
    :
    ais_transmit_rate{YType::uint32, "ais-transmit-rate"},
    enable{YType::empty, "enable"}
{
    yang_name = "oam-emulation"; yang_parent_name = "pvc";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::~OamEmulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_data() const
{
    return ais_transmit_rate.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_transmit_rate.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-emulation";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OamEmulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_transmit_rate.is_set || is_set(ais_transmit_rate.operation)) leaf_name_data.push_back(ais_transmit_rate.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{
    yang_name = "cell-packing"; yang_parent_name = "pvc";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer_id.operation)
	|| is_set(maximum_cells_packed.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacking' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.operation)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.operation)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::MaximumCellPackingTimers()
    :
    cell_packing_timer1{YType::uint32, "cell-packing-timer1"},
    cell_packing_timer2{YType::uint32, "cell-packing-timer2"},
    cell_packing_timer3{YType::uint32, "cell-packing-timer3"}
{
    yang_name = "maximum-cell-packing-timers"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::~MaximumCellPackingTimers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_data() const
{
    return cell_packing_timer1.is_set
	|| cell_packing_timer2.is_set
	|| cell_packing_timer3.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer1.operation)
	|| is_set(cell_packing_timer2.operation)
	|| is_set(cell_packing_timer3.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-cell-packing-timers";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumCellPackingTimers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer1.is_set || is_set(cell_packing_timer1.operation)) leaf_name_data.push_back(cell_packing_timer1.get_name_leafdata());
    if (cell_packing_timer2.is_set || is_set(cell_packing_timer2.operation)) leaf_name_data.push_back(cell_packing_timer2.get_name_leafdata());
    if (cell_packing_timer3.is_set || is_set(cell_packing_timer3.operation)) leaf_name_data.push_back(cell_packing_timer3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer1")
    {
        cell_packing_timer1 = value;
    }
    if(value_path == "cell-packing-timer2")
    {
        cell_packing_timer2 = value;
    }
    if(value_path == "cell-packing-timer3")
    {
        cell_packing_timer3 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnels()
{
    yang_name = "vp-tunnels"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::~VpTunnels()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_data() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_operation() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnels";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpTunnels' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vp-tunnel")
    {
        for(auto const & c : vp_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel>();
        c->parent = this;
        vp_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vp_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::VpTunnel()
    :
    vpi{YType::uint32, "vpi"},
    disable_f4oam{YType::empty, "disable-f4oam"},
    enable{YType::empty, "enable"},
    enable_hierarchical_shaping{YType::empty, "enable-hierarchical-shaping"}
    	,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>())
{
    shape->parent = this;

    yang_name = "vp-tunnel"; yang_parent_name = "vp-tunnels";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::~VpTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_data() const
{
    return vpi.is_set
	|| disable_f4oam.is_set
	|| enable.is_set
	|| enable_hierarchical_shaping.is_set
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(vpi.operation)
	|| is_set(disable_f4oam.operation)
	|| is_set(enable.operation)
	|| is_set(enable_hierarchical_shaping.operation)
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnel" <<"[vpi='" <<vpi <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpTunnel' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (disable_f4oam.is_set || is_set(disable_f4oam.operation)) leaf_name_data.push_back(disable_f4oam.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (enable_hierarchical_shaping.is_set || is_set(enable_hierarchical_shaping.operation)) leaf_name_data.push_back(enable_hierarchical_shaping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{
    yang_name = "shape"; yang_parent_name = "vp-tunnel";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_size.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.operation)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::Bfd()
    :
    mode{YType::enumeration, "mode"}
    	,
    address_family(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "bfd"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_data() const
{
    return mode.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bfd";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "bfd";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::~AddressFamily()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamily' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6()
    :
    ipv6_destination_address{YType::str, "ipv6-destination-address"},
    ipv6_detection_multiplier{YType::uint32, "ipv6-detection-multiplier"},
    ipv6_fast_detect{YType::empty, "ipv6-fast-detect"},
    ipv6_interval{YType::uint32, "ipv6-interval"}
    	,
    ipv6_timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>())
{
    ipv6_timers->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_data() const
{
    return ipv6_destination_address.is_set
	|| ipv6_detection_multiplier.is_set
	|| ipv6_fast_detect.is_set
	|| ipv6_interval.is_set
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_destination_address.operation)
	|| is_set(ipv6_detection_multiplier.operation)
	|| is_set(ipv6_fast_detect.operation)
	|| is_set(ipv6_interval.operation)
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_destination_address.is_set || is_set(ipv6_destination_address.operation)) leaf_name_data.push_back(ipv6_destination_address.get_name_leafdata());
    if (ipv6_detection_multiplier.is_set || is_set(ipv6_detection_multiplier.operation)) leaf_name_data.push_back(ipv6_detection_multiplier.get_name_leafdata());
    if (ipv6_fast_detect.is_set || is_set(ipv6_fast_detect.operation)) leaf_name_data.push_back(ipv6_fast_detect.get_name_leafdata());
    if (ipv6_interval.is_set || is_set(ipv6_interval.operation)) leaf_name_data.push_back(ipv6_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-timers")
    {
        if(ipv6_timers == nullptr)
        {
            ipv6_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>();
        }
        return ipv6_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_timers != nullptr)
    {
        children["ipv6-timers"] = ipv6_timers;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-destination-address")
    {
        ipv6_destination_address = value;
    }
    if(value_path == "ipv6-detection-multiplier")
    {
        ipv6_detection_multiplier = value;
    }
    if(value_path == "ipv6-fast-detect")
    {
        ipv6_fast_detect = value;
    }
    if(value_path == "ipv6-interval")
    {
        ipv6_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::Ipv6Timers()
    :
    ipv6_nbor_unconfig_timer{YType::uint32, "ipv6-nbor-unconfig-timer"},
    ipv6_start_timer{YType::uint32, "ipv6-start-timer"}
{
    yang_name = "ipv6-timers"; yang_parent_name = "ipv6";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::~Ipv6Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_data() const
{
    return ipv6_nbor_unconfig_timer.is_set
	|| ipv6_start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_nbor_unconfig_timer.operation)
	|| is_set(ipv6_start_timer.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-timers";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Timers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_nbor_unconfig_timer.is_set || is_set(ipv6_nbor_unconfig_timer.operation)) leaf_name_data.push_back(ipv6_nbor_unconfig_timer.get_name_leafdata());
    if (ipv6_start_timer.is_set || is_set(ipv6_start_timer.operation)) leaf_name_data.push_back(ipv6_start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-nbor-unconfig-timer")
    {
        ipv6_nbor_unconfig_timer = value;
    }
    if(value_path == "ipv6-start-timer")
    {
        ipv6_start_timer = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect{YType::empty, "fast-detect"},
    interval{YType::uint32, "interval"}
    	,
    echo(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>())
	,timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>())
{
    echo->parent = this;

    timers->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_data() const
{
    return destination_address.is_set
	|| detection_multiplier.is_set
	|| fast_detect.is_set
	|| interval.is_set
	|| (echo !=  nullptr && echo->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect.operation)
	|| is_set(interval.operation)
	|| (echo !=  nullptr && echo->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(echo != nullptr)
    {
        children["echo"] = echo;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::Echo()
    :
    min_interval{YType::uint32, "min-interval"}
{
    yang_name = "echo"; yang_parent_name = "ipv4";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::~Echo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_data() const
{
    return min_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_interval.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Echo' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_interval.is_set || is_set(min_interval.operation)) leaf_name_data.push_back(min_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-interval")
    {
        min_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::Timers()
    :
    nbor_unconfig_timer{YType::uint32, "nbor-unconfig-timer"},
    start_timer{YType::uint32, "start-timer"}
{
    yang_name = "timers"; yang_parent_name = "ipv4";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_data() const
{
    return nbor_unconfig_timer.is_set
	|| start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(nbor_unconfig_timer.operation)
	|| is_set(start_timer.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbor_unconfig_timer.is_set || is_set(nbor_unconfig_timer.operation)) leaf_name_data.push_back(nbor_unconfig_timer.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nbor-unconfig-timer")
    {
        nbor_unconfig_timer = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::Bundle()
    :
    lacp_delay{YType::uint32, "lacp-delay"},
    shutdown{YType::empty, "shutdown"},
    wait_while{YType::uint32, "wait-while"}
    	,
    bundle_load_balancing(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>())
	,maximum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>())
	,minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>())
{
    bundle_load_balancing->parent = this;

    maximum_active->parent = this;

    minimum_active->parent = this;

    yang_name = "bundle"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::~Bundle()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_data() const
{
    return lacp_delay.is_set
	|| shutdown.is_set
	|| wait_while.is_set
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_data())
	|| (maximum_active !=  nullptr && maximum_active->has_data())
	|| (minimum_active !=  nullptr && minimum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_operation() const
{
    return is_set(operation)
	|| is_set(lacp_delay.operation)
	|| is_set(shutdown.operation)
	|| is_set(wait_while.operation)
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_operation())
	|| (maximum_active !=  nullptr && maximum_active->has_operation())
	|| (minimum_active !=  nullptr && minimum_active->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bundle' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacp_delay.is_set || is_set(lacp_delay.operation)) leaf_name_data.push_back(lacp_delay.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (wait_while.is_set || is_set(wait_while.operation)) leaf_name_data.push_back(wait_while.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-load-balancing")
    {
        if(bundle_load_balancing == nullptr)
        {
            bundle_load_balancing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>();
        }
        return bundle_load_balancing;
    }

    if(child_yang_name == "maximum-active")
    {
        if(maximum_active == nullptr)
        {
            maximum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>();
        }
        return maximum_active;
    }

    if(child_yang_name == "minimum-active")
    {
        if(minimum_active == nullptr)
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>();
        }
        return minimum_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_load_balancing != nullptr)
    {
        children["bundle-load-balancing"] = bundle_load_balancing;
    }

    if(maximum_active != nullptr)
    {
        children["maximum-active"] = maximum_active;
    }

    if(minimum_active != nullptr)
    {
        children["minimum-active"] = minimum_active;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lacp-delay")
    {
        lacp_delay = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "wait-while")
    {
        wait_while = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::BundleLoadBalancing()
    :
    localize_links{YType::uint32, "localize-links"}
    	,
    hash_function(nullptr) // presence node
{
    yang_name = "bundle-load-balancing"; yang_parent_name = "bundle";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::~BundleLoadBalancing()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_data() const
{
    return localize_links.is_set
	|| (hash_function !=  nullptr && hash_function->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_operation() const
{
    return is_set(operation)
	|| is_set(localize_links.operation)
	|| (hash_function !=  nullptr && hash_function->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-load-balancing";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleLoadBalancing' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localize_links.is_set || is_set(localize_links.operation)) leaf_name_data.push_back(localize_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hash-function")
    {
        if(hash_function == nullptr)
        {
            hash_function = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction>();
        }
        return hash_function;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hash_function != nullptr)
    {
        children["hash-function"] = hash_function;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localize-links")
    {
        localize_links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::HashFunction()
    :
    hash_type{YType::enumeration, "hash-type"},
    hash_value{YType::uint32, "hash-value"}
{
    yang_name = "hash-function"; yang_parent_name = "bundle-load-balancing";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::~HashFunction()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_data() const
{
    return hash_type.is_set
	|| hash_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_type.operation)
	|| is_set(hash_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash-function";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HashFunction' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_type.is_set || is_set(hash_type.operation)) leaf_name_data.push_back(hash_type.get_name_leafdata());
    if (hash_value.is_set || is_set(hash_value.operation)) leaf_name_data.push_back(hash_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-type")
    {
        hash_type = value;
    }
    if(value_path == "hash-value")
    {
        hash_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::MinimumActive()
    :
    links{YType::uint32, "links"}
    	,
    bandwidth(nullptr) // presence node
{
    yang_name = "minimum-active"; yang_parent_name = "bundle";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::~MinimumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_data() const
{
    return links.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_operation() const
{
    return is_set(operation)
	|| is_set(links.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-active";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinimumActive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "links")
    {
        links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    min_bandwidth_range{YType::enumeration, "min-bandwidth-range"}
{
    yang_name = "bandwidth"; yang_parent_name = "minimum-active";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| min_bandwidth_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(min_bandwidth_range.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (min_bandwidth_range.is_set || is_set(min_bandwidth_range.operation)) leaf_name_data.push_back(min_bandwidth_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::MaximumActive()
    :
    links(nullptr) // presence node
{
    yang_name = "maximum-active"; yang_parent_name = "bundle";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::~MaximumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_data() const
{
    return (links !=  nullptr && links->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_operation() const
{
    return is_set(operation)
	|| (links !=  nullptr && links->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-active";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumActive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::Links()
    :
    links{YType::uint32, "links"},
    max_active_links_mode{YType::enumeration, "max-active-links-mode"}
{
    yang_name = "links"; yang_parent_name = "maximum-active";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::~Links()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_data() const
{
    return links.is_set
	|| max_active_links_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_operation() const
{
    return is_set(operation)
	|| is_set(links.operation)
	|| is_set(max_active_links_mode.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Links' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (max_active_links_mode.is_set || is_set(max_active_links_mode.operation)) leaf_name_data.push_back(max_active_links_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "max-active-links-mode")
    {
        max_active_links_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Lacp()
    :
    churn_logging{YType::enumeration, "churn-logging"},
    collector_max_delay{YType::uint32, "collector-max-delay"},
    fast_switchover{YType::empty, "fast-switchover"},
    lacp_nonrevertive{YType::empty, "lacp-nonrevertive"},
    mode{YType::enumeration, "mode"},
    period{YType::str, "period"},
    period_short{YType::str, "period-short"},
    suppress_flaps{YType::uint32, "suppress-flaps"},
    system_mac{YType::str, "system-mac"},
    system_priority{YType::uint32, "system-priority"}
    	,
    cisco_extensions(nullptr) // presence node
	,timeout(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>())
{
    timeout->parent = this;

    yang_name = "lacp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::~Lacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_data() const
{
    return churn_logging.is_set
	|| collector_max_delay.is_set
	|| fast_switchover.is_set
	|| lacp_nonrevertive.is_set
	|| mode.is_set
	|| period.is_set
	|| period_short.is_set
	|| suppress_flaps.is_set
	|| system_mac.is_set
	|| system_priority.is_set
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_operation() const
{
    return is_set(operation)
	|| is_set(churn_logging.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(fast_switchover.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(mode.operation)
	|| is_set(period.operation)
	|| is_set(period_short.operation)
	|| is_set(suppress_flaps.operation)
	|| is_set(system_mac.operation)
	|| is_set(system_priority.operation)
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:lacp";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Lacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lacp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (churn_logging.is_set || is_set(churn_logging.operation)) leaf_name_data.push_back(churn_logging.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (fast_switchover.is_set || is_set(fast_switchover.operation)) leaf_name_data.push_back(fast_switchover.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (period.is_set || is_set(period.operation)) leaf_name_data.push_back(period.get_name_leafdata());
    if (period_short.is_set || is_set(period_short.operation)) leaf_name_data.push_back(period_short.get_name_leafdata());
    if (suppress_flaps.is_set || is_set(suppress_flaps.operation)) leaf_name_data.push_back(suppress_flaps.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.operation)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-extensions")
    {
        if(cisco_extensions == nullptr)
        {
            cisco_extensions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions>();
        }
        return cisco_extensions;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_extensions != nullptr)
    {
        children["cisco-extensions"] = cisco_extensions;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "churn-logging")
    {
        churn_logging = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "period")
    {
        period = value;
    }
    if(value_path == "period-short")
    {
        period_short = value;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps = value;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::CiscoExtensions()
    :
    cisco_ext{YType::empty, "cisco-ext"},
    cisco_ext_type{YType::enumeration, "cisco-ext-type"}
{
    yang_name = "cisco-extensions"; yang_parent_name = "lacp";
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::~CiscoExtensions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_data() const
{
    return cisco_ext.is_set
	|| cisco_ext_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco_ext.operation)
	|| is_set(cisco_ext_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extensions";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoExtensions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_ext.is_set || is_set(cisco_ext.operation)) leaf_name_data.push_back(cisco_ext.get_name_leafdata());
    if (cisco_ext_type.is_set || is_set(cisco_ext_type.operation)) leaf_name_data.push_back(cisco_ext_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext = value;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::Timeout()
    :
    actor_churn{YType::uint32, "actor-churn"},
    partner_churn{YType::uint32, "partner-churn"},
    rx_default{YType::uint32, "rx-default"}
{
    yang_name = "timeout"; yang_parent_name = "lacp";
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::~Timeout()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_data() const
{
    return actor_churn.is_set
	|| partner_churn.is_set
	|| rx_default.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_churn.operation)
	|| is_set(partner_churn.operation)
	|| is_set(rx_default.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn.is_set || is_set(actor_churn.operation)) leaf_name_data.push_back(actor_churn.get_name_leafdata());
    if (partner_churn.is_set || is_set(partner_churn.operation)) leaf_name_data.push_back(partner_churn.get_name_leafdata());
    if (rx_default.is_set || is_set(rx_default.operation)) leaf_name_data.push_back(rx_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-churn")
    {
        actor_churn = value;
    }
    if(value_path == "partner-churn")
    {
        partner_churn = value;
    }
    if(value_path == "rx-default")
    {
        rx_default = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::BundleMember()
    :
    port_priority{YType::uint16, "port-priority"}
    	,
    id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>())
{
    id->parent = this;

    yang_name = "bundle-member"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::~BundleMember()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_data() const
{
    return port_priority.is_set
	|| (id !=  nullptr && id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_operation() const
{
    return is_set(operation)
	|| is_set(port_priority.operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle-member";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleMember' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::Id()
    :
    bundle_id{YType::uint32, "bundle-id"},
    port_activity{YType::enumeration, "port-activity"}
{
    yang_name = "id"; yang_parent_name = "bundle-member";
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::~Id()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_data() const
{
    return bundle_id.is_set
	|| port_activity.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_id.operation)
	|| is_set(port_activity.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_id.is_set || is_set(bundle_id.operation)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (port_activity.is_set || is_set(port_activity.operation)) leaf_name_data.push_back(port_activity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
    }
    if(value_path == "port-activity")
    {
        port_activity = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Mlacp()
    :
    iccp_group{YType::uint32, "iccp-group"},
    port_priority{YType::uint16, "port-priority"},
    recovery_delay{YType::uint32, "recovery-delay"},
    switchover_type{YType::enumeration, "switchover-type"}
    	,
    maximize(nullptr) // presence node
{
    yang_name = "mlacp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::~Mlacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_data() const
{
    return iccp_group.is_set
	|| port_priority.is_set
	|| recovery_delay.is_set
	|| switchover_type.is_set
	|| (maximize !=  nullptr && maximize->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| is_set(port_priority.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(switchover_type.operation)
	|| (maximize !=  nullptr && maximize->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:mlacp";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mlacp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximize")
    {
        if(maximize == nullptr)
        {
            maximize = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize>();
        }
        return maximize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximize != nullptr)
    {
        children["maximize"] = maximize;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::Maximize()
    :
    bandwidth_threshold{YType::uint32, "bandwidth-threshold"},
    link_threshold{YType::uint32, "link-threshold"},
    maximize_by{YType::enumeration, "maximize-by"}
{
    yang_name = "maximize"; yang_parent_name = "mlacp";
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::~Maximize()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_data() const
{
    return bandwidth_threshold.is_set
	|| link_threshold.is_set
	|| maximize_by.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_threshold.operation)
	|| is_set(link_threshold.operation)
	|| is_set(maximize_by.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximize";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximize' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_threshold.is_set || is_set(bandwidth_threshold.operation)) leaf_name_data.push_back(bandwidth_threshold.get_name_leafdata());
    if (link_threshold.is_set || is_set(link_threshold.operation)) leaf_name_data.push_back(link_threshold.get_name_leafdata());
    if (maximize_by.is_set || is_set(maximize_by.operation)) leaf_name_data.push_back(maximize_by.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold = value;
    }
    if(value_path == "link-threshold")
    {
        link_threshold = value;
    }
    if(value_path == "maximize-by")
    {
        maximize_by = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::Cdp()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "cdp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::~Cdp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-cfg:cdp";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Cdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cdp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::Optics()
    :
    breakout{YType::str, "Cisco-IOS-XR-optics-driver-cfg:breakout"},
    optics_cd_high_threshold{YType::int32, "optics-cd-high-threshold"},
    optics_cd_low_threshold{YType::int32, "optics-cd-low-threshold"},
    optics_cd_max{YType::int32, "optics-cd-max"},
    optics_cd_min{YType::int32, "optics-cd-min"},
    optics_description{YType::str, "optics-description"},
    optics_dgd_high_threshold{YType::int32, "optics-dgd-high-threshold"},
    optics_fec{YType::enumeration, "optics-fec"},
    optics_lbc_high_threshold{YType::int32, "optics-lbc-high-threshold"},
    optics_loopback{YType::enumeration, "optics-loopback"},
    optics_osnr_low_threshold{YType::int32, "optics-osnr-low-threshold"},
    optics_ots_amplifier_channel_power{YType::int32, "optics-ots-amplifier-channel-power"},
    optics_ots_amplifier_control_mode{YType::enumeration, "optics-ots-amplifier-control-mode"},
    optics_ots_amplifier_gain{YType::int32, "optics-ots-amplifier-gain"},
    optics_ots_amplifier_gain_degrade_high_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-high-threshold"},
    optics_ots_amplifier_gain_degrade_low_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-low-threshold"},
    optics_ots_amplifier_gain_range{YType::enumeration, "optics-ots-amplifier-gain-range"},
    optics_ots_amplifier_tilt{YType::int32, "optics-ots-amplifier-tilt"},
    optics_ots_channel_power_max_delta{YType::int32, "optics-ots-channel-power-max-delta"},
    optics_ots_osri{YType::boolean, "optics-ots-osri"},
    optics_ots_rx_voa_attenuation{YType::int32, "optics-ots-rx-voa-attenuation"},
    optics_ots_safety_control_mode{YType::enumeration, "optics-ots-safety-control-mode"},
    optics_ots_tx_voa_attenuation{YType::int32, "optics-ots-tx-voa-attenuation"},
    optics_performance_monitoring{YType::boolean, "optics-performance-monitoring"},
    optics_transmit_power{YType::int32, "optics-transmit-power"},
    optics_transmit_shutdown{YType::boolean, "optics-transmit-shutdown"}
    	,
    optics_dwdm_carrier(nullptr) // presence node
	,optics_lanes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>())
	,optics_network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>())
	,rx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>())
	,tx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>())
{
    optics_lanes->parent = this;

    optics_network_srlgs->parent = this;

    rx_thresholds->parent = this;

    tx_thresholds->parent = this;

    yang_name = "optics"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::~Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_data() const
{
    return breakout.is_set
	|| optics_cd_high_threshold.is_set
	|| optics_cd_low_threshold.is_set
	|| optics_cd_max.is_set
	|| optics_cd_min.is_set
	|| optics_description.is_set
	|| optics_dgd_high_threshold.is_set
	|| optics_fec.is_set
	|| optics_lbc_high_threshold.is_set
	|| optics_loopback.is_set
	|| optics_osnr_low_threshold.is_set
	|| optics_ots_amplifier_channel_power.is_set
	|| optics_ots_amplifier_control_mode.is_set
	|| optics_ots_amplifier_gain.is_set
	|| optics_ots_amplifier_gain_degrade_high_threshold.is_set
	|| optics_ots_amplifier_gain_degrade_low_threshold.is_set
	|| optics_ots_amplifier_gain_range.is_set
	|| optics_ots_amplifier_tilt.is_set
	|| optics_ots_channel_power_max_delta.is_set
	|| optics_ots_osri.is_set
	|| optics_ots_rx_voa_attenuation.is_set
	|| optics_ots_safety_control_mode.is_set
	|| optics_ots_tx_voa_attenuation.is_set
	|| optics_performance_monitoring.is_set
	|| optics_transmit_power.is_set
	|| optics_transmit_shutdown.is_set
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_data())
	|| (optics_lanes !=  nullptr && optics_lanes->has_data())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_data())
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_data())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_operation() const
{
    return is_set(operation)
	|| is_set(breakout.operation)
	|| is_set(optics_cd_high_threshold.operation)
	|| is_set(optics_cd_low_threshold.operation)
	|| is_set(optics_cd_max.operation)
	|| is_set(optics_cd_min.operation)
	|| is_set(optics_description.operation)
	|| is_set(optics_dgd_high_threshold.operation)
	|| is_set(optics_fec.operation)
	|| is_set(optics_lbc_high_threshold.operation)
	|| is_set(optics_loopback.operation)
	|| is_set(optics_osnr_low_threshold.operation)
	|| is_set(optics_ots_amplifier_channel_power.operation)
	|| is_set(optics_ots_amplifier_control_mode.operation)
	|| is_set(optics_ots_amplifier_gain.operation)
	|| is_set(optics_ots_amplifier_gain_degrade_high_threshold.operation)
	|| is_set(optics_ots_amplifier_gain_degrade_low_threshold.operation)
	|| is_set(optics_ots_amplifier_gain_range.operation)
	|| is_set(optics_ots_amplifier_tilt.operation)
	|| is_set(optics_ots_channel_power_max_delta.operation)
	|| is_set(optics_ots_osri.operation)
	|| is_set(optics_ots_rx_voa_attenuation.operation)
	|| is_set(optics_ots_safety_control_mode.operation)
	|| is_set(optics_ots_tx_voa_attenuation.operation)
	|| is_set(optics_performance_monitoring.operation)
	|| is_set(optics_transmit_power.operation)
	|| is_set(optics_transmit_shutdown.operation)
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_operation())
	|| (optics_lanes !=  nullptr && optics_lanes->has_operation())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_operation())
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_operation())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-cfg:optics";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Optics' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (breakout.is_set || is_set(breakout.operation)) leaf_name_data.push_back(breakout.get_name_leafdata());
    if (optics_cd_high_threshold.is_set || is_set(optics_cd_high_threshold.operation)) leaf_name_data.push_back(optics_cd_high_threshold.get_name_leafdata());
    if (optics_cd_low_threshold.is_set || is_set(optics_cd_low_threshold.operation)) leaf_name_data.push_back(optics_cd_low_threshold.get_name_leafdata());
    if (optics_cd_max.is_set || is_set(optics_cd_max.operation)) leaf_name_data.push_back(optics_cd_max.get_name_leafdata());
    if (optics_cd_min.is_set || is_set(optics_cd_min.operation)) leaf_name_data.push_back(optics_cd_min.get_name_leafdata());
    if (optics_description.is_set || is_set(optics_description.operation)) leaf_name_data.push_back(optics_description.get_name_leafdata());
    if (optics_dgd_high_threshold.is_set || is_set(optics_dgd_high_threshold.operation)) leaf_name_data.push_back(optics_dgd_high_threshold.get_name_leafdata());
    if (optics_fec.is_set || is_set(optics_fec.operation)) leaf_name_data.push_back(optics_fec.get_name_leafdata());
    if (optics_lbc_high_threshold.is_set || is_set(optics_lbc_high_threshold.operation)) leaf_name_data.push_back(optics_lbc_high_threshold.get_name_leafdata());
    if (optics_loopback.is_set || is_set(optics_loopback.operation)) leaf_name_data.push_back(optics_loopback.get_name_leafdata());
    if (optics_osnr_low_threshold.is_set || is_set(optics_osnr_low_threshold.operation)) leaf_name_data.push_back(optics_osnr_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_channel_power.is_set || is_set(optics_ots_amplifier_channel_power.operation)) leaf_name_data.push_back(optics_ots_amplifier_channel_power.get_name_leafdata());
    if (optics_ots_amplifier_control_mode.is_set || is_set(optics_ots_amplifier_control_mode.operation)) leaf_name_data.push_back(optics_ots_amplifier_control_mode.get_name_leafdata());
    if (optics_ots_amplifier_gain.is_set || is_set(optics_ots_amplifier_gain.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_high_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_high_threshold.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_high_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_low_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_low_threshold.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_range.is_set || is_set(optics_ots_amplifier_gain_range.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain_range.get_name_leafdata());
    if (optics_ots_amplifier_tilt.is_set || is_set(optics_ots_amplifier_tilt.operation)) leaf_name_data.push_back(optics_ots_amplifier_tilt.get_name_leafdata());
    if (optics_ots_channel_power_max_delta.is_set || is_set(optics_ots_channel_power_max_delta.operation)) leaf_name_data.push_back(optics_ots_channel_power_max_delta.get_name_leafdata());
    if (optics_ots_osri.is_set || is_set(optics_ots_osri.operation)) leaf_name_data.push_back(optics_ots_osri.get_name_leafdata());
    if (optics_ots_rx_voa_attenuation.is_set || is_set(optics_ots_rx_voa_attenuation.operation)) leaf_name_data.push_back(optics_ots_rx_voa_attenuation.get_name_leafdata());
    if (optics_ots_safety_control_mode.is_set || is_set(optics_ots_safety_control_mode.operation)) leaf_name_data.push_back(optics_ots_safety_control_mode.get_name_leafdata());
    if (optics_ots_tx_voa_attenuation.is_set || is_set(optics_ots_tx_voa_attenuation.operation)) leaf_name_data.push_back(optics_ots_tx_voa_attenuation.get_name_leafdata());
    if (optics_performance_monitoring.is_set || is_set(optics_performance_monitoring.operation)) leaf_name_data.push_back(optics_performance_monitoring.get_name_leafdata());
    if (optics_transmit_power.is_set || is_set(optics_transmit_power.operation)) leaf_name_data.push_back(optics_transmit_power.get_name_leafdata());
    if (optics_transmit_shutdown.is_set || is_set(optics_transmit_shutdown.operation)) leaf_name_data.push_back(optics_transmit_shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-dwdm-carrier")
    {
        if(optics_dwdm_carrier == nullptr)
        {
            optics_dwdm_carrier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier>();
        }
        return optics_dwdm_carrier;
    }

    if(child_yang_name == "optics-lanes")
    {
        if(optics_lanes == nullptr)
        {
            optics_lanes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>();
        }
        return optics_lanes;
    }

    if(child_yang_name == "optics-network-srlgs")
    {
        if(optics_network_srlgs == nullptr)
        {
            optics_network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>();
        }
        return optics_network_srlgs;
    }

    if(child_yang_name == "rx-thresholds")
    {
        if(rx_thresholds == nullptr)
        {
            rx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>();
        }
        return rx_thresholds;
    }

    if(child_yang_name == "tx-thresholds")
    {
        if(tx_thresholds == nullptr)
        {
            tx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>();
        }
        return tx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_dwdm_carrier != nullptr)
    {
        children["optics-dwdm-carrier"] = optics_dwdm_carrier;
    }

    if(optics_lanes != nullptr)
    {
        children["optics-lanes"] = optics_lanes;
    }

    if(optics_network_srlgs != nullptr)
    {
        children["optics-network-srlgs"] = optics_network_srlgs;
    }

    if(rx_thresholds != nullptr)
    {
        children["rx-thresholds"] = rx_thresholds;
    }

    if(tx_thresholds != nullptr)
    {
        children["tx-thresholds"] = tx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "breakout")
    {
        breakout = value;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold = value;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold = value;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max = value;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min = value;
    }
    if(value_path == "optics-description")
    {
        optics_description = value;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold = value;
    }
    if(value_path == "optics-fec")
    {
        optics_fec = value;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold = value;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback = value;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold = value;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power = value;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode = value;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain = value;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold = value;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold = value;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range = value;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt = value;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta = value;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri = value;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation = value;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode = value;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation = value;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring = value;
    }
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power = value;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThresholds()
{
    yang_name = "rx-thresholds"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::~RxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_data() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_operation() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-thresholds";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-threshold")
    {
        for(auto const & c : rx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold>();
        c->parent = this;
        rx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::RxThreshold()
    :
    rx_threshold_type{YType::enumeration, "rx-threshold-type"},
    rx_threshold{YType::int32, "rx-threshold"}
{
    yang_name = "rx-threshold"; yang_parent_name = "rx-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::~RxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_data() const
{
    return rx_threshold_type.is_set
	|| rx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(rx_threshold_type.operation)
	|| is_set(rx_threshold.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-threshold" <<"[rx-threshold-type='" <<rx_threshold_type <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_threshold_type.is_set || is_set(rx_threshold_type.operation)) leaf_name_data.push_back(rx_threshold_type.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.operation)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type = value;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlgs()
{
    yang_name = "optics-network-srlgs"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::~OpticsNetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlgs";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsNetworkSrlgs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-network-srlg")
    {
        for(auto const & c : optics_network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg>();
        c->parent = this;
        optics_network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::OpticsNetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{
    yang_name = "optics-network-srlg"; yang_parent_name = "optics-network-srlgs";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::~OpticsNetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_operation() const
{
    return is_set(operation)
	|| is_set(set_id.operation)
	|| is_set(srlg1.operation)
	|| is_set(srlg2.operation)
	|| is_set(srlg3.operation)
	|| is_set(srlg4.operation)
	|| is_set(srlg5.operation)
	|| is_set(srlg6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlg" <<"[set-id='" <<set_id <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsNetworkSrlg' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.operation)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.operation)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.operation)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.operation)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.operation)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.operation)) leaf_name_data.push_back(srlg6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::OpticsDwdmCarrier()
    :
    grid_type{YType::enumeration, "grid-type"},
    param_type{YType::enumeration, "param-type"},
    param_value{YType::uint32, "param-value"}
{
    yang_name = "optics-dwdm-carrier"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::~OpticsDwdmCarrier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_data() const
{
    return grid_type.is_set
	|| param_type.is_set
	|| param_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_operation() const
{
    return is_set(operation)
	|| is_set(grid_type.operation)
	|| is_set(param_type.operation)
	|| is_set(param_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-dwdm-carrier";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsDwdmCarrier' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grid_type.is_set || is_set(grid_type.operation)) leaf_name_data.push_back(grid_type.get_name_leafdata());
    if (param_type.is_set || is_set(param_type.operation)) leaf_name_data.push_back(param_type.get_name_leafdata());
    if (param_value.is_set || is_set(param_value.operation)) leaf_name_data.push_back(param_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grid-type")
    {
        grid_type = value;
    }
    if(value_path == "param-type")
    {
        param_type = value;
    }
    if(value_path == "param-value")
    {
        param_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLanes()
{
    yang_name = "optics-lanes"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::~OpticsLanes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_data() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_operation() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lanes";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsLanes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-lane")
    {
        for(auto const & c : optics_lane)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane>();
        c->parent = this;
        optics_lane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_lane)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::OpticsLane()
    :
    index_{YType::int32, "index"},
    description{YType::str, "description"}
{
    yang_name = "optics-lane"; yang_parent_name = "optics-lanes";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::~OpticsLane()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_data() const
{
    return index_.is_set
	|| description.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(description.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lane" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsLane' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThresholds()
{
    yang_name = "tx-thresholds"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::~TxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_data() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_operation() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-thresholds";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-threshold")
    {
        for(auto const & c : tx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold>();
        c->parent = this;
        tx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::TxThreshold()
    :
    tx_threshold_type{YType::enumeration, "tx-threshold-type"},
    tx_threshold{YType::int32, "tx-threshold"}
{
    yang_name = "tx-threshold"; yang_parent_name = "tx-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::~TxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_data() const
{
    return tx_threshold_type.is_set
	|| tx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_threshold_type.operation)
	|| is_set(tx_threshold.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-threshold" <<"[tx-threshold-type='" <<tx_threshold_type <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_threshold_type.is_set || is_set(tx_threshold_type.operation)) leaf_name_data.push_back(tx_threshold_type.get_name_leafdata());
    if (tx_threshold.is_set || is_set(tx_threshold.operation)) leaf_name_data.push_back(tx_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type = value;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Otu()
    :
    fec{YType::enumeration, "fec"},
    gcc{YType::empty, "gcc"},
    loopback{YType::enumeration, "loopback"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    sd{YType::uint32, "sd"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    sf{YType::uint32, "sf"}
    	,
    network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>())
	,otn_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>())
	,otn_expected_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>())
	,otn_expected_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>())
	,otn_expected_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>())
	,otn_send_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>())
	,otn_send_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>())
	,otn_send_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>())
	,otn_send_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>())
	,proactive_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>())
{
    network_srlgs->parent = this;

    otn_expected_tti->parent = this;

    otn_expected_ttisapi->parent = this;

    otn_expected_ttitcmdapi->parent = this;

    otn_expected_ttitcmos->parent = this;

    otn_send_tti->parent = this;

    otn_send_ttisapi->parent = this;

    otn_send_ttitcmdapi->parent = this;

    otn_send_ttitcmos->parent = this;

    proactive_protection->parent = this;

    yang_name = "otu"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_data() const
{
    return fec.is_set
	|| gcc.is_set
	|| loopback.is_set
	|| performance_monitoring.is_set
	|| sd.is_set
	|| secondary_admin_state.is_set
	|| sf.is_set
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_data())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_data())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_data())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_data())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_data())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_data())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_data())
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_data())
	|| (proactive_protection !=  nullptr && proactive_protection->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_operation() const
{
    return is_set(operation)
	|| is_set(fec.operation)
	|| is_set(gcc.operation)
	|| is_set(loopback.operation)
	|| is_set(performance_monitoring.operation)
	|| is_set(sd.operation)
	|| is_set(secondary_admin_state.operation)
	|| is_set(sf.operation)
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_operation())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_operation())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_operation())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_operation())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_operation())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_operation())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_operation())
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_operation())
	|| (proactive_protection !=  nullptr && proactive_protection->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-cfg:otu";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec.is_set || is_set(fec.operation)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (gcc.is_set || is_set(gcc.operation)) leaf_name_data.push_back(gcc.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.operation)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (sd.is_set || is_set(sd.operation)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.operation)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (sf.is_set || is_set(sf.operation)) leaf_name_data.push_back(sf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "otn-expected-tti")
    {
        if(otn_expected_tti == nullptr)
        {
            otn_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>();
        }
        return otn_expected_tti;
    }

    if(child_yang_name == "otn-expected-ttisapi")
    {
        if(otn_expected_ttisapi == nullptr)
        {
            otn_expected_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>();
        }
        return otn_expected_ttisapi;
    }

    if(child_yang_name == "otn-expected-ttitcmdapi")
    {
        if(otn_expected_ttitcmdapi == nullptr)
        {
            otn_expected_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>();
        }
        return otn_expected_ttitcmdapi;
    }

    if(child_yang_name == "otn-expected-ttitcmos")
    {
        if(otn_expected_ttitcmos == nullptr)
        {
            otn_expected_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>();
        }
        return otn_expected_ttitcmos;
    }

    if(child_yang_name == "otn-send-tti")
    {
        if(otn_send_tti == nullptr)
        {
            otn_send_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>();
        }
        return otn_send_tti;
    }

    if(child_yang_name == "otn-send-ttisapi")
    {
        if(otn_send_ttisapi == nullptr)
        {
            otn_send_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>();
        }
        return otn_send_ttisapi;
    }

    if(child_yang_name == "otn-send-ttitcmdapi")
    {
        if(otn_send_ttitcmdapi == nullptr)
        {
            otn_send_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>();
        }
        return otn_send_ttitcmdapi;
    }

    if(child_yang_name == "otn-send-ttitcmos")
    {
        if(otn_send_ttitcmos == nullptr)
        {
            otn_send_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>();
        }
        return otn_send_ttitcmos;
    }

    if(child_yang_name == "proactive-protection")
    {
        if(proactive_protection == nullptr)
        {
            proactive_protection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>();
        }
        return proactive_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_srlgs != nullptr)
    {
        children["network-srlgs"] = network_srlgs;
    }

    if(otn_expected_tti != nullptr)
    {
        children["otn-expected-tti"] = otn_expected_tti;
    }

    if(otn_expected_ttisapi != nullptr)
    {
        children["otn-expected-ttisapi"] = otn_expected_ttisapi;
    }

    if(otn_expected_ttitcmdapi != nullptr)
    {
        children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
    }

    if(otn_expected_ttitcmos != nullptr)
    {
        children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
    }

    if(otn_send_tti != nullptr)
    {
        children["otn-send-tti"] = otn_send_tti;
    }

    if(otn_send_ttisapi != nullptr)
    {
        children["otn-send-ttisapi"] = otn_send_ttisapi;
    }

    if(otn_send_ttitcmdapi != nullptr)
    {
        children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
    }

    if(otn_send_ttitcmos != nullptr)
    {
        children["otn-send-ttitcmos"] = otn_send_ttitcmos;
    }

    if(proactive_protection != nullptr)
    {
        children["proactive-protection"] = proactive_protection;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec")
    {
        fec = value;
    }
    if(value_path == "gcc")
    {
        gcc = value;
    }
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
    }
    if(value_path == "sd")
    {
        sd = value;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
    }
    if(value_path == "sf")
    {
        sf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::OtnSendTtitcmos()
    :
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-ttitcmos"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::~OtnSendTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_data() const
{
    return osascii_string.is_set
	|| oshex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_operation() const
{
    return is_set(operation)
	|| is_set(osascii_string.operation)
	|| is_set(oshex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmos";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTtitcmos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (osascii_string.is_set || is_set(osascii_string.operation)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.operation)) leaf_name_data.push_back(oshex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "osascii-string")
    {
        osascii_string = value;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::OtnSendTtitcmdapi()
    :
    dapi_ascii_string{YType::str, "dapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-ttitcmdapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::~OtnSendTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_data() const
{
    return dapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_operation() const
{
    return is_set(operation)
	|| is_set(dapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmdapi";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTtitcmdapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.operation)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::OtnExpectedTtisapi()
    :
    sapi_ascii_string{YType::str, "sapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-ttisapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::~OtnExpectedTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_data() const
{
    return sapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_operation() const
{
    return is_set(operation)
	|| is_set(sapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttisapi";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTtisapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.operation)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::ProactiveProtection()
    :
    status{YType::empty, "status"}
    	,
    revert_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>())
	,revert_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>())
	,trigger_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>())
	,trigger_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>())
{
    revert_threshold->parent = this;

    revert_window->parent = this;

    trigger_threshold->parent = this;

    trigger_window->parent = this;

    yang_name = "proactive-protection"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::~ProactiveProtection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_data() const
{
    return status.is_set
	|| (revert_threshold !=  nullptr && revert_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (trigger_window !=  nullptr && trigger_window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (trigger_window !=  nullptr && trigger_window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive-protection";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProactiveProtection' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>();
        }
        return revert_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>();
        }
        return revert_window;
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>();
        }
        return trigger_window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_threshold != nullptr)
    {
        children["revert-threshold"] = revert_threshold;
    }

    if(revert_window != nullptr)
    {
        children["revert-window"] = revert_window;
    }

    if(trigger_threshold != nullptr)
    {
        children["trigger-threshold"] = trigger_threshold;
    }

    if(trigger_window != nullptr)
    {
        children["trigger-window"] = trigger_window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::TriggerThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    enable{YType::empty, "enable"},
    power{YType::uint32, "power"}
{
    yang_name = "trigger-threshold"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_data() const
{
    return coefficient.is_set
	|| enable.is_set
	|| power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(coefficient.operation)
	|| is_set(enable.operation)
	|| is_set(power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.operation)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (power.is_set || is_set(power.operation)) leaf_name_data.push_back(power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "power")
    {
        power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::RevertWindow()
    :
    enable{YType::empty, "enable"},
    value_{YType::uint32, "value"}
{
    yang_name = "revert-window"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_data() const
{
    return enable.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(value_.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::TriggerWindow()
    :
    enable{YType::empty, "enable"},
    value_{YType::uint32, "value"}
{
    yang_name = "trigger-window"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_data() const
{
    return enable.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(value_.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::RevertThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    enable{YType::empty, "enable"},
    power{YType::uint32, "power"}
{
    yang_name = "revert-threshold"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_data() const
{
    return coefficient.is_set
	|| enable.is_set
	|| power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(coefficient.operation)
	|| is_set(enable.operation)
	|| is_set(power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.operation)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (power.is_set || is_set(power.operation)) leaf_name_data.push_back(power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "power")
    {
        power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlgs()
{
    yang_name = "network-srlgs"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        for(auto const & c : network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg>();
        c->parent = this;
        network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{
    yang_name = "network-srlg"; yang_parent_name = "network-srlgs";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(operation)
	|| is_set(set_id.operation)
	|| is_set(srlg1.operation)
	|| is_set(srlg2.operation)
	|| is_set(srlg3.operation)
	|| is_set(srlg4.operation)
	|| is_set(srlg5.operation)
	|| is_set(srlg6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg" <<"[set-id='" <<set_id <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlg' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.operation)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.operation)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.operation)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.operation)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.operation)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.operation)) leaf_name_data.push_back(srlg6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::OtnSendTti()
    :
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::~OtnSendTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_data() const
{
    return full_ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_operation() const
{
    return is_set(operation)
	|| is_set(full_ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-tti";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_ascii_string.is_set || is_set(full_ascii_string.operation)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::OtnExpectedTtitcmdapi()
    :
    dapi_ascii_string{YType::str, "dapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-ttitcmdapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::~OtnExpectedTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_data() const
{
    return dapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_operation() const
{
    return is_set(operation)
	|| is_set(dapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmdapi";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTtitcmdapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.operation)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::OtnSendTtisapi()
    :
    sapi_ascii_string{YType::str, "sapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-ttisapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::~OtnSendTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_data() const
{
    return sapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_operation() const
{
    return is_set(operation)
	|| is_set(sapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttisapi";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTtisapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.operation)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::OtnExpectedTtitcmos()
    :
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-ttitcmos"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::~OtnExpectedTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_data() const
{
    return osascii_string.is_set
	|| oshex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_operation() const
{
    return is_set(operation)
	|| is_set(osascii_string.operation)
	|| is_set(oshex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmos";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTtitcmos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (osascii_string.is_set || is_set(osascii_string.operation)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.operation)) leaf_name_data.push_back(oshex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "osascii-string")
    {
        osascii_string = value;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::OtnExpectedTti()
    :
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::~OtnExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_data() const
{
    return full_ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_operation() const
{
    return is_set(operation)
	|| is_set(full_ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-tti";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_ascii_string.is_set || is_set(full_ascii_string.operation)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Macsec()
    :
    macsec_service(nullptr) // presence node
	,psk_key_chain(nullptr) // presence node
{
    yang_name = "macsec"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::~Macsec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_data() const
{
    return (macsec_service !=  nullptr && macsec_service->has_data())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_operation() const
{
    return is_set(operation)
	|| (macsec_service !=  nullptr && macsec_service->has_operation())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macsec' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-service")
    {
        if(macsec_service == nullptr)
        {
            macsec_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService>();
        }
        return macsec_service;
    }

    if(child_yang_name == "psk-key-chain")
    {
        if(psk_key_chain == nullptr)
        {
            psk_key_chain = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain>();
        }
        return psk_key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_service != nullptr)
    {
        children["macsec-service"] = macsec_service;
    }

    if(psk_key_chain != nullptr)
    {
        children["psk-key-chain"] = psk_key_chain;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::MacsecService()
    :
    decrypt_port{YType::str, "decrypt-port"},
    key_chain{YType::str, "key-chain"},
    policy{YType::str, "policy"}
{
    yang_name = "macsec-service"; yang_parent_name = "macsec";
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::~MacsecService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_data() const
{
    return decrypt_port.is_set
	|| key_chain.is_set
	|| policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_operation() const
{
    return is_set(operation)
	|| is_set(decrypt_port.operation)
	|| is_set(key_chain.operation)
	|| is_set(policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-service";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacsecService' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decrypt_port.is_set || is_set(decrypt_port.operation)) leaf_name_data.push_back(decrypt_port.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::PskKeyChain()
    :
    fallback_key_chain{YType::str, "fallback-key-chain"},
    key_chain_name{YType::str, "key-chain-name"},
    policy_name{YType::str, "policy-name"}
{
    yang_name = "psk-key-chain"; yang_parent_name = "macsec";
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::~PskKeyChain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_data() const
{
    return fallback_key_chain.is_set
	|| key_chain_name.is_set
	|| policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(fallback_key_chain.operation)
	|| is_set(key_chain_name.operation)
	|| is_set(policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk-key-chain";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PskKeyChain' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback_key_chain.is_set || is_set(fallback_key_chain.operation)) leaf_name_data.push_back(fallback_key_chain.get_name_leafdata());
    if (key_chain_name.is_set || is_set(key_chain_name.operation)) leaf_name_data.push_back(key_chain_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain = value;
    }
    if(value_path == "key-chain-name")
    {
        key_chain_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::Ethernet()
    :
    auto_negotiation{YType::enumeration, "auto-negotiation"},
    duplex{YType::enumeration, "duplex"},
    flow_control{YType::enumeration, "flow-control"},
    forward_error_correction{YType::enumeration, "forward-error-correction"},
    inter_packet_gap{YType::enumeration, "inter-packet-gap"},
    loopback{YType::enumeration, "loopback"},
    priority_flow_control{YType::enumeration, "priority-flow-control"},
    speed{YType::enumeration, "speed"}
    	,
    carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>())
	,signal_degrade_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>())
	,signal_fail_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>())
{
    carrier_delay->parent = this;

    signal_degrade_bit_error_rate->parent = this;

    signal_fail_bit_error_rate->parent = this;

    yang_name = "ethernet"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::~Ethernet()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_data() const
{
    return auto_negotiation.is_set
	|| duplex.is_set
	|| flow_control.is_set
	|| forward_error_correction.is_set
	|| inter_packet_gap.is_set
	|| loopback.is_set
	|| priority_flow_control.is_set
	|| speed.is_set
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_data())
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_negotiation.operation)
	|| is_set(duplex.operation)
	|| is_set(flow_control.operation)
	|| is_set(forward_error_correction.operation)
	|| is_set(inter_packet_gap.operation)
	|| is_set(loopback.operation)
	|| is_set(priority_flow_control.operation)
	|| is_set(speed.operation)
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_operation())
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-cfg:ethernet";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_negotiation.is_set || is_set(auto_negotiation.operation)) leaf_name_data.push_back(auto_negotiation.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (flow_control.is_set || is_set(flow_control.operation)) leaf_name_data.push_back(flow_control.get_name_leafdata());
    if (forward_error_correction.is_set || is_set(forward_error_correction.operation)) leaf_name_data.push_back(forward_error_correction.get_name_leafdata());
    if (inter_packet_gap.is_set || is_set(inter_packet_gap.operation)) leaf_name_data.push_back(inter_packet_gap.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (priority_flow_control.is_set || is_set(priority_flow_control.operation)) leaf_name_data.push_back(priority_flow_control.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "signal-degrade-bit-error-rate")
    {
        if(signal_degrade_bit_error_rate == nullptr)
        {
            signal_degrade_bit_error_rate = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>();
        }
        return signal_degrade_bit_error_rate;
    }

    if(child_yang_name == "signal-fail-bit-error-rate")
    {
        if(signal_fail_bit_error_rate == nullptr)
        {
            signal_fail_bit_error_rate = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>();
        }
        return signal_fail_bit_error_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(signal_degrade_bit_error_rate != nullptr)
    {
        children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;
    }

    if(signal_fail_bit_error_rate != nullptr)
    {
        children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation = value;
    }
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "flow-control")
    {
        flow_control = value;
    }
    if(value_path == "forward-error-correction")
    {
        forward_error_correction = value;
    }
    if(value_path == "inter-packet-gap")
    {
        inter_packet_gap = value;
    }
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "priority-flow-control")
    {
        priority_flow_control = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::SignalFailBitErrorRate()
    :
    signal_fail_report_disable{YType::empty, "signal-fail-report-disable"},
    signal_fail_threshold{YType::uint32, "signal-fail-threshold"},
    signal_remote_fault{YType::empty, "signal-remote-fault"}
{
    yang_name = "signal-fail-bit-error-rate"; yang_parent_name = "ethernet";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::~SignalFailBitErrorRate()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_data() const
{
    return signal_fail_report_disable.is_set
	|| signal_fail_threshold.is_set
	|| signal_remote_fault.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_operation() const
{
    return is_set(operation)
	|| is_set(signal_fail_report_disable.operation)
	|| is_set(signal_fail_threshold.operation)
	|| is_set(signal_remote_fault.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-fail-bit-error-rate";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalFailBitErrorRate' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_fail_report_disable.is_set || is_set(signal_fail_report_disable.operation)) leaf_name_data.push_back(signal_fail_report_disable.get_name_leafdata());
    if (signal_fail_threshold.is_set || is_set(signal_fail_threshold.operation)) leaf_name_data.push_back(signal_fail_threshold.get_name_leafdata());
    if (signal_remote_fault.is_set || is_set(signal_remote_fault.operation)) leaf_name_data.push_back(signal_remote_fault.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "signal-fail-report-disable")
    {
        signal_fail_report_disable = value;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold = value;
    }
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::SignalDegradeBitErrorRate()
    :
    signal_degrade_report{YType::empty, "signal-degrade-report"},
    signal_degrade_threshold{YType::uint32, "signal-degrade-threshold"}
{
    yang_name = "signal-degrade-bit-error-rate"; yang_parent_name = "ethernet";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::~SignalDegradeBitErrorRate()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_data() const
{
    return signal_degrade_report.is_set
	|| signal_degrade_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_operation() const
{
    return is_set(operation)
	|| is_set(signal_degrade_report.operation)
	|| is_set(signal_degrade_threshold.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-degrade-bit-error-rate";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalDegradeBitErrorRate' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_degrade_report.is_set || is_set(signal_degrade_report.operation)) leaf_name_data.push_back(signal_degrade_report.get_name_leafdata());
    if (signal_degrade_threshold.is_set || is_set(signal_degrade_threshold.operation)) leaf_name_data.push_back(signal_degrade_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "signal-degrade-report")
    {
        signal_degrade_report = value;
    }
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::CarrierDelay()
    :
    carrier_delay_down{YType::uint32, "carrier-delay-down"},
    carrier_delay_up{YType::uint32, "carrier-delay-up"}
{
    yang_name = "carrier-delay"; yang_parent_name = "ethernet";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::~CarrierDelay()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_data() const
{
    return carrier_delay_down.is_set
	|| carrier_delay_up.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(carrier_delay_down.operation)
	|| is_set(carrier_delay_up.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "carrier-delay";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CarrierDelay' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_down.is_set || is_set(carrier_delay_down.operation)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());
    if (carrier_delay_up.is_set || is_set(carrier_delay_up.operation)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Dwdm()
    :
    enable_vtxp{YType::boolean, "enable-vtxp"},
    laser{YType::empty, "laser"},
    loopback{YType::enumeration, "loopback"},
    network_connection_id{YType::str, "network-connection-id"},
    network_port_id{YType::str, "network-port-id"},
    rx_threshold{YType::int32, "rx-threshold"},
    transmit_power{YType::int32, "transmit-power"},
    transport_admin_state{YType::enumeration, "transport-admin-state"}
    	,
    g709(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>())
	,network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>())
	,wavelength(nullptr) // presence node
{
    g709->parent = this;

    network_srlgs->parent = this;

    yang_name = "dwdm"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::~Dwdm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_data() const
{
    return enable_vtxp.is_set
	|| laser.is_set
	|| loopback.is_set
	|| network_connection_id.is_set
	|| network_port_id.is_set
	|| rx_threshold.is_set
	|| transmit_power.is_set
	|| transport_admin_state.is_set
	|| (g709 !=  nullptr && g709->has_data())
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (wavelength !=  nullptr && wavelength->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_vtxp.operation)
	|| is_set(laser.operation)
	|| is_set(loopback.operation)
	|| is_set(network_connection_id.operation)
	|| is_set(network_port_id.operation)
	|| is_set(rx_threshold.operation)
	|| is_set(transmit_power.operation)
	|| is_set(transport_admin_state.operation)
	|| (g709 !=  nullptr && g709->has_operation())
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (wavelength !=  nullptr && wavelength->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-cfg:dwdm";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dwdm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_vtxp.is_set || is_set(enable_vtxp.operation)) leaf_name_data.push_back(enable_vtxp.get_name_leafdata());
    if (laser.is_set || is_set(laser.operation)) leaf_name_data.push_back(laser.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (network_connection_id.is_set || is_set(network_connection_id.operation)) leaf_name_data.push_back(network_connection_id.get_name_leafdata());
    if (network_port_id.is_set || is_set(network_port_id.operation)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.operation)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.operation)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.operation)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709")
    {
        if(g709 == nullptr)
        {
            g709 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>();
        }
        return g709;
    }

    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "wavelength")
    {
        if(wavelength == nullptr)
        {
            wavelength = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength>();
        }
        return wavelength;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709 != nullptr)
    {
        children["g709"] = g709;
    }

    if(network_srlgs != nullptr)
    {
        children["network-srlgs"] = network_srlgs;
    }

    if(wavelength != nullptr)
    {
        children["wavelength"] = wavelength;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp = value;
    }
    if(value_path == "laser")
    {
        laser = value;
    }
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id = value;
    }
    if(value_path == "network-port-id")
    {
        network_port_id = value;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlgs()
{
    yang_name = "network-srlgs"; yang_parent_name = "dwdm";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        for(auto const & c : network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg>();
        c->parent = this;
        network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{
    yang_name = "network-srlg"; yang_parent_name = "network-srlgs";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(operation)
	|| is_set(set_id.operation)
	|| is_set(srlg1.operation)
	|| is_set(srlg2.operation)
	|| is_set(srlg3.operation)
	|| is_set(srlg4.operation)
	|| is_set(srlg5.operation)
	|| is_set(srlg6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg" <<"[set-id='" <<set_id <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlg' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.operation)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.operation)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.operation)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.operation)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.operation)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.operation)) leaf_name_data.push_back(srlg6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::G709()
    :
    bdi_to_gais{YType::empty, "bdi-to-gais"},
    enable{YType::boolean, "enable"},
    framing{YType::enumeration, "framing"},
    proactive{YType::enumeration, "proactive"},
    proactive_logging_file{YType::str, "proactive-logging-file"},
    tim_to_gais{YType::empty, "tim-to-gais"},
    tti_processing{YType::empty, "tti-processing"}
    	,
    fec(nullptr) // presence node
	,odu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>())
	,otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>())
	,prbs(nullptr) // presence node
{
    odu->parent = this;

    otu->parent = this;

    yang_name = "g709"; yang_parent_name = "dwdm";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::~G709()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_data() const
{
    return bdi_to_gais.is_set
	|| enable.is_set
	|| framing.is_set
	|| proactive.is_set
	|| proactive_logging_file.is_set
	|| tim_to_gais.is_set
	|| tti_processing.is_set
	|| (fec !=  nullptr && fec->has_data())
	|| (odu !=  nullptr && odu->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (prbs !=  nullptr && prbs->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_operation() const
{
    return is_set(operation)
	|| is_set(bdi_to_gais.operation)
	|| is_set(enable.operation)
	|| is_set(framing.operation)
	|| is_set(proactive.operation)
	|| is_set(proactive_logging_file.operation)
	|| is_set(tim_to_gais.operation)
	|| is_set(tti_processing.operation)
	|| (fec !=  nullptr && fec->has_operation())
	|| (odu !=  nullptr && odu->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'G709' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdi_to_gais.is_set || is_set(bdi_to_gais.operation)) leaf_name_data.push_back(bdi_to_gais.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (proactive.is_set || is_set(proactive.operation)) leaf_name_data.push_back(proactive.get_name_leafdata());
    if (proactive_logging_file.is_set || is_set(proactive_logging_file.operation)) leaf_name_data.push_back(proactive_logging_file.get_name_leafdata());
    if (tim_to_gais.is_set || is_set(tim_to_gais.operation)) leaf_name_data.push_back(tim_to_gais.get_name_leafdata());
    if (tti_processing.is_set || is_set(tti_processing.operation)) leaf_name_data.push_back(tti_processing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec>();
        }
        return fec;
    }

    if(child_yang_name == "odu")
    {
        if(odu == nullptr)
        {
            odu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>();
        }
        return odu;
    }

    if(child_yang_name == "otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs>();
        }
        return prbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    if(odu != nullptr)
    {
        children["odu"] = odu;
    }

    if(otu != nullptr)
    {
        children["otu"] = otu;
    }

    if(prbs != nullptr)
    {
        children["prbs"] = prbs;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
    if(value_path == "proactive")
    {
        proactive = value;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file = value;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais = value;
    }
    if(value_path == "tti-processing")
    {
        tti_processing = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::Odu()
    :
    odu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>())
	,odu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>())
	,odu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>())
	,odu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>())
{
    odu_expected_tti->parent = this;

    odu_reports->parent = this;

    odu_thresholds->parent = this;

    odu_tx_tti->parent = this;

    yang_name = "odu"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::~Odu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_data() const
{
    return (odu_expected_tti !=  nullptr && odu_expected_tti->has_data())
	|| (odu_reports !=  nullptr && odu_reports->has_data())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_data())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_operation() const
{
    return is_set(operation)
	|| (odu_expected_tti !=  nullptr && odu_expected_tti->has_operation())
	|| (odu_reports !=  nullptr && odu_reports->has_operation())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_operation())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-expected-tti")
    {
        if(odu_expected_tti == nullptr)
        {
            odu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>();
        }
        return odu_expected_tti;
    }

    if(child_yang_name == "odu-reports")
    {
        if(odu_reports == nullptr)
        {
            odu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>();
        }
        return odu_reports;
    }

    if(child_yang_name == "odu-thresholds")
    {
        if(odu_thresholds == nullptr)
        {
            odu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>();
        }
        return odu_thresholds;
    }

    if(child_yang_name == "odu-tx-tti")
    {
        if(odu_tx_tti == nullptr)
        {
            odu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>();
        }
        return odu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_expected_tti != nullptr)
    {
        children["odu-expected-tti"] = odu_expected_tti;
    }

    if(odu_reports != nullptr)
    {
        children["odu-reports"] = odu_reports;
    }

    if(odu_thresholds != nullptr)
    {
        children["odu-thresholds"] = odu_thresholds;
    }

    if(odu_tx_tti != nullptr)
    {
        children["odu-tx-tti"] = odu_tx_tti;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReports()
{
    yang_name = "odu-reports"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::~OduReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_data() const
{
    for (std::size_t index=0; index<odu_report.size(); index++)
    {
        if(odu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_operation() const
{
    for (std::size_t index=0; index<odu_report.size(); index++)
    {
        if(odu_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-reports";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-report")
    {
        for(auto const & c : odu_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport>();
        c->parent = this;
        odu_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::OduReport()
    :
    alarm{YType::enumeration, "alarm"}
{
    yang_name = "odu-report"; yang_parent_name = "odu-reports";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::~OduReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_data() const
{
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-report" <<"[alarm='" <<alarm <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.operation)) leaf_name_data.push_back(alarm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm")
    {
        alarm = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThresholds()
{
    yang_name = "odu-thresholds"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::~OduThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_data() const
{
    for (std::size_t index=0; index<odu_threshold.size(); index++)
    {
        if(odu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_operation() const
{
    for (std::size_t index=0; index<odu_threshold.size(); index++)
    {
        if(odu_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-thresholds";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-threshold")
    {
        for(auto const & c : odu_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold>();
        c->parent = this;
        odu_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::OduThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "odu-threshold"; yang_parent_name = "odu-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::~OduThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_data() const
{
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| is_set(threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-threshold" <<"[threshold='" <<threshold <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::OduExpectedTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "odu-expected-tti"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::~OduExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-expected-tti";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduExpectedTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::OduTxTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "odu-tx-tti"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::~OduTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-tx-tti";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduTxTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Otu()
    :
    frr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>())
	,otu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>())
	,otu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>())
	,otu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>())
	,otu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>())
{
    frr->parent = this;

    otu_expected_tti->parent = this;

    otu_reports->parent = this;

    otu_thresholds->parent = this;

    otu_tx_tti->parent = this;

    yang_name = "otu"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_data() const
{
    return (frr !=  nullptr && frr->has_data())
	|| (otu_expected_tti !=  nullptr && otu_expected_tti->has_data())
	|| (otu_reports !=  nullptr && otu_reports->has_data())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_data())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_operation() const
{
    return is_set(operation)
	|| (frr !=  nullptr && frr->has_operation())
	|| (otu_expected_tti !=  nullptr && otu_expected_tti->has_operation())
	|| (otu_reports !=  nullptr && otu_reports->has_operation())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_operation())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr")
    {
        if(frr == nullptr)
        {
            frr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>();
        }
        return frr;
    }

    if(child_yang_name == "otu-expected-tti")
    {
        if(otu_expected_tti == nullptr)
        {
            otu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>();
        }
        return otu_expected_tti;
    }

    if(child_yang_name == "otu-reports")
    {
        if(otu_reports == nullptr)
        {
            otu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>();
        }
        return otu_reports;
    }

    if(child_yang_name == "otu-thresholds")
    {
        if(otu_thresholds == nullptr)
        {
            otu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>();
        }
        return otu_thresholds;
    }

    if(child_yang_name == "otu-tx-tti")
    {
        if(otu_tx_tti == nullptr)
        {
            otu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>();
        }
        return otu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr != nullptr)
    {
        children["frr"] = frr;
    }

    if(otu_expected_tti != nullptr)
    {
        children["otu-expected-tti"] = otu_expected_tti;
    }

    if(otu_reports != nullptr)
    {
        children["otu-reports"] = otu_reports;
    }

    if(otu_thresholds != nullptr)
    {
        children["otu-thresholds"] = otu_thresholds;
    }

    if(otu_tx_tti != nullptr)
    {
        children["otu-tx-tti"] = otu_tx_tti;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::OtuExpectedTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otu-expected-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::~OtuExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-expected-tti";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuExpectedTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThresholds()
{
    yang_name = "otu-thresholds"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::~OtuThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_data() const
{
    for (std::size_t index=0; index<otu_threshold.size(); index++)
    {
        if(otu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_operation() const
{
    for (std::size_t index=0; index<otu_threshold.size(); index++)
    {
        if(otu_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-thresholds";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-threshold")
    {
        for(auto const & c : otu_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold>();
        c->parent = this;
        otu_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::OtuThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "otu-threshold"; yang_parent_name = "otu-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::~OtuThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_data() const
{
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| is_set(threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-threshold" <<"[threshold='" <<threshold <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::Frr()
    :
    revert_threshold(nullptr) // presence node
	,revert_window(nullptr) // presence node
	,trigger_threshold(nullptr) // presence node
	,trigger_window(nullptr) // presence node
{
    yang_name = "frr"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::~Frr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_data() const
{
    return (revert_threshold !=  nullptr && revert_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (trigger_window !=  nullptr && trigger_window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_operation() const
{
    return is_set(operation)
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (trigger_window !=  nullptr && trigger_window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frr' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold>();
        }
        return revert_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow>();
        }
        return revert_window;
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow>();
        }
        return trigger_window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_threshold != nullptr)
    {
        children["revert-threshold"] = revert_threshold;
    }

    if(revert_window != nullptr)
    {
        children["revert-window"] = revert_window;
    }

    if(trigger_threshold != nullptr)
    {
        children["trigger-threshold"] = trigger_threshold;
    }

    if(trigger_window != nullptr)
    {
        children["trigger-window"] = trigger_window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::TriggerWindow()
    :
    dummy{YType::uint32, "dummy"},
    window{YType::uint32, "window"}
{
    yang_name = "trigger-window"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_data() const
{
    return dummy.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::RevertThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{
    yang_name = "revert-threshold"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_data() const
{
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ber_base.operation)
	|| is_set(ber_power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.operation)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.operation)) leaf_name_data.push_back(ber_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::TriggerThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{
    yang_name = "trigger-threshold"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_data() const
{
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ber_base.operation)
	|| is_set(ber_power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.operation)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.operation)) leaf_name_data.push_back(ber_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::RevertWindow()
    :
    dummy{YType::uint32, "dummy"},
    window{YType::uint32, "window"}
{
    yang_name = "revert-window"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_data() const
{
    return dummy.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReports()
{
    yang_name = "otu-reports"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::~OtuReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_data() const
{
    for (std::size_t index=0; index<otu_report.size(); index++)
    {
        if(otu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_operation() const
{
    for (std::size_t index=0; index<otu_report.size(); index++)
    {
        if(otu_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-reports";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-report")
    {
        for(auto const & c : otu_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport>();
        c->parent = this;
        otu_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::OtuReport()
    :
    alarm{YType::enumeration, "alarm"}
{
    yang_name = "otu-report"; yang_parent_name = "otu-reports";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::~OtuReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_data() const
{
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-report" <<"[alarm='" <<alarm <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.operation)) leaf_name_data.push_back(alarm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm")
    {
        alarm = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::OtuTxTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otu-tx-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::~OtuTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-tx-tti";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuTxTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::Prbs()
    :
    prbs_mode{YType::enumeration, "prbs-mode"},
    prbs_pattern{YType::enumeration, "prbs-pattern"}
{
    yang_name = "prbs"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::~Prbs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_data() const
{
    return prbs_mode.is_set
	|| prbs_pattern.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_operation() const
{
    return is_set(operation)
	|| is_set(prbs_mode.operation)
	|| is_set(prbs_pattern.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prbs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_mode.is_set || is_set(prbs_mode.operation)) leaf_name_data.push_back(prbs_mode.get_name_leafdata());
    if (prbs_pattern.is_set || is_set(prbs_pattern.operation)) leaf_name_data.push_back(prbs_pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode = value;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::Fec()
    :
    efec_mode{YType::enumeration, "efec-mode"},
    fec_mode{YType::enumeration, "fec-mode"}
{
    yang_name = "fec"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::~Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_data() const
{
    return efec_mode.is_set
	|| fec_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(efec_mode.operation)
	|| is_set(fec_mode.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efec_mode.is_set || is_set(efec_mode.operation)) leaf_name_data.push_back(efec_mode.get_name_leafdata());
    if (fec_mode.is_set || is_set(fec_mode.operation)) leaf_name_data.push_back(fec_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "efec-mode")
    {
        efec_mode = value;
    }
    if(value_path == "fec-mode")
    {
        fec_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::Wavelength()
    :
    prog_frequency{YType::str, "prog-frequency"},
    wave_channel{YType::uint32, "wave-channel"},
    wave_channel_number{YType::enumeration, "wave-channel-number"}
{
    yang_name = "wavelength"; yang_parent_name = "dwdm";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::~Wavelength()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_data() const
{
    return prog_frequency.is_set
	|| wave_channel.is_set
	|| wave_channel_number.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(prog_frequency.operation)
	|| is_set(wave_channel.operation)
	|| is_set(wave_channel_number.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wavelength";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wavelength' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prog_frequency.is_set || is_set(prog_frequency.operation)) leaf_name_data.push_back(prog_frequency.get_name_leafdata());
    if (wave_channel.is_set || is_set(wave_channel.operation)) leaf_name_data.push_back(wave_channel.get_name_leafdata());
    if (wave_channel_number.is_set || is_set(wave_channel_number.operation)) leaf_name_data.push_back(wave_channel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prog-frequency")
    {
        prog_frequency = value;
    }
    if(value_path == "wave-channel")
    {
        wave_channel = value;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanSubConfiguration()
    :
    vlan_identifier(nullptr) // presence node
{
    yang_name = "vlan-sub-configuration"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::~VlanSubConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_data() const
{
    return (vlan_identifier !=  nullptr && vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_operation() const
{
    return is_set(operation)
	|| (vlan_identifier !=  nullptr && vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanSubConfiguration' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-identifier")
    {
        if(vlan_identifier == nullptr)
        {
            vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier>();
        }
        return vlan_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_identifier != nullptr)
    {
        children["vlan-identifier"] = vlan_identifier;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::VlanIdentifier()
    :
    first_tag{YType::uint32, "first-tag"},
    second_tag{YType::str, "second-tag"},
    vlan_type{YType::enumeration, "vlan-type"}
{
    yang_name = "vlan-identifier"; yang_parent_name = "vlan-sub-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::~VlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_data() const
{
    return first_tag.is_set
	|| second_tag.is_set
	|| vlan_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_operation() const
{
    return is_set(operation)
	|| is_set(first_tag.operation)
	|| is_set(second_tag.operation)
	|| is_set(vlan_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-identifier";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanIdentifier' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_tag.is_set || is_set(first_tag.operation)) leaf_name_data.push_back(first_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.operation)) leaf_name_data.push_back(second_tag.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.operation)) leaf_name_data.push_back(vlan_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-tag")
    {
        first_tag = value;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
    }
}

const Enum::YLeaf InterfaceModeEnumEnum::default_ {0, "default"};
const Enum::YLeaf InterfaceModeEnumEnum::point_to_point {1, "point-to-point"};
const Enum::YLeaf InterfaceModeEnumEnum::multipoint {2, "multipoint"};
const Enum::YLeaf InterfaceModeEnumEnum::l2_transport {3, "l2-transport"};

const Enum::YLeaf SecondaryAdminStateEnumEnum::maintenance {1, "maintenance"};

const Enum::YLeaf LinkStatusEnumEnum::default_ {0, "default"};
const Enum::YLeaf LinkStatusEnumEnum::disable {1, "disable"};
const Enum::YLeaf LinkStatusEnumEnum::software_interfaces {2, "software-interfaces"};

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::default_values {0, "default-values"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::specify_half_life {1, "specify-half-life"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::specify_all {4, "specify-all"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::specify_rp {5, "specify-rp"};


}
}

