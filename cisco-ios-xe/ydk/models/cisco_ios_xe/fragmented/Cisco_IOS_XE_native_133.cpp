
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_135.hpp"
#include "Cisco_IOS_XE_native_134.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Isis::Isis()
    :
    priority{YType::uint8, "priority"},
    help{YType::empty, "help"},
    maximum_paths{YType::uint32, "maximum-paths"},
    ignore_lsp_errors{YType::empty, "ignore-lsp-errors"},
    is_type{YType::enumeration, "is-type"},
    lsp_mtu{YType::uint32, "lsp-mtu"},
    lsp_refresh_interval{YType::uint32, "lsp-refresh-interval"},
    max_area_addresses{YType::uint32, "max-area-addresses"},
    max_lsp_lifetime{YType::uint32, "max-lsp-lifetime"},
    update_queue_depth{YType::uint32, "update-queue-depth"},
    vrf{YType::str, "vrf"},
    adjacency_check{YType::empty, "adjacency-check"},
    router_id{YType::str, "router-id"}
        ,
    metric_style(std::make_shared<Native::Router::Isis::MetricStyle>())
    , address_family(std::make_shared<Native::Router::Isis::AddressFamily>())
    , distance(this, {"number"})
    , ip(std::make_shared<Native::Router::Isis::Ip>())
    , redistribute(std::make_shared<Native::Router::Isis::Redistribute>())
    , set_attached_bit(std::make_shared<Native::Router::Isis::SetAttachedBit>())
    , snmp(std::make_shared<Native::Router::Isis::Snmp>())
    , summary_address(this, {"ip", "mask"})
    , traffic_share(std::make_shared<Native::Router::Isis::TrafficShare>())
    , advertise(std::make_shared<Native::Router::Isis::Advertise>())
    , default_information(std::make_shared<Native::Router::Isis::DefaultInformation>())
    , metric(std::make_shared<Native::Router::Isis::Metric>())
    , prc_interval(std::make_shared<Native::Router::Isis::PrcInterval>())
    , set_overload_bit(nullptr) // presence node
    , spf_interval(std::make_shared<Native::Router::Isis::SpfInterval>())
    , area_password(std::make_shared<Native::Router::Isis::AreaPassword>())
    , authentication(std::make_shared<Native::Router::Isis::Authentication>())
    , distribute_list(std::make_shared<Native::Router::Isis::DistributeList>())
    , domain_password(std::make_shared<Native::Router::Isis::DomainPassword>())
    , fast_flood(nullptr) // presence node
    , fast_reroute(std::make_shared<Native::Router::Isis::FastReroute>())
    , ti_lfa(std::make_shared<Native::Router::Isis::TiLfa>())
    , hello(std::make_shared<Native::Router::Isis::Hello>())
    , hostname(std::make_shared<Native::Router::Isis::Hostname>())
    , ispf(std::make_shared<Native::Router::Isis::Ispf>())
    , log_adjacency_changes(nullptr) // presence node
    , lsp_full(std::make_shared<Native::Router::Isis::LspFull>())
    , lsp_gen_interval(std::make_shared<Native::Router::Isis::LspGenInterval>())
    , microloop(std::make_shared<Native::Router::Isis::Microloop>())
    , mpls(std::make_shared<Native::Router::Isis::Mpls>())
    , net(this, {"tag"})
    , nsf(std::make_shared<Native::Router::Isis::Nsf>())
    , partition(std::make_shared<Native::Router::Isis::Partition>())
    , passive_interface(std::make_shared<Native::Router::Isis::PassiveInterface>())
    , disable(std::make_shared<Native::Router::Isis::Disable>())
    , protocol(std::make_shared<Native::Router::Isis::Protocol>())
    , segment_routing(std::make_shared<Native::Router::Isis::SegmentRouting>())
    , skeptical(std::make_shared<Native::Router::Isis::Skeptical>())
    , use(std::make_shared<Native::Router::Isis::Use>())
    , bfd(std::make_shared<Native::Router::Isis::Bfd>())
{
    metric_style->parent = this;
    address_family->parent = this;
    ip->parent = this;
    redistribute->parent = this;
    set_attached_bit->parent = this;
    snmp->parent = this;
    traffic_share->parent = this;
    advertise->parent = this;
    default_information->parent = this;
    metric->parent = this;
    prc_interval->parent = this;
    spf_interval->parent = this;
    area_password->parent = this;
    authentication->parent = this;
    distribute_list->parent = this;
    domain_password->parent = this;
    fast_reroute->parent = this;
    ti_lfa->parent = this;
    hello->parent = this;
    hostname->parent = this;
    ispf->parent = this;
    lsp_full->parent = this;
    lsp_gen_interval->parent = this;
    microloop->parent = this;
    mpls->parent = this;
    nsf->parent = this;
    partition->parent = this;
    passive_interface->parent = this;
    disable->parent = this;
    protocol->parent = this;
    segment_routing->parent = this;
    skeptical->parent = this;
    use->parent = this;
    bfd->parent = this;

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Isis::~Isis()
{
}

bool Native::Router::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distance.len(); index++)
    {
        if(distance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<net.len(); index++)
    {
        if(net[index]->has_data())
            return true;
    }
    return priority.is_set
	|| help.is_set
	|| maximum_paths.is_set
	|| ignore_lsp_errors.is_set
	|| is_type.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_area_addresses.is_set
	|| max_lsp_lifetime.is_set
	|| update_queue_depth.is_set
	|| vrf.is_set
	|| adjacency_check.is_set
	|| router_id.is_set
	|| (metric_style !=  nullptr && metric_style->has_data())
	|| (address_family !=  nullptr && address_family->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data())
	|| (area_password !=  nullptr && area_password->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (domain_password !=  nullptr && domain_password->has_data())
	|| (fast_flood !=  nullptr && fast_flood->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (ti_lfa !=  nullptr && ti_lfa->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (ispf !=  nullptr && ispf->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (lsp_full !=  nullptr && lsp_full->has_data())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_data())
	|| (microloop !=  nullptr && microloop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (partition !=  nullptr && partition->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data())
	|| (use !=  nullptr && use->has_data())
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Isis::has_operation() const
{
    for (std::size_t index=0; index<distance.len(); index++)
    {
        if(distance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<net.len(); index++)
    {
        if(net[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(ignore_lsp_errors.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(lsp_mtu.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(max_lsp_lifetime.yfilter)
	|| ydk::is_set(update_queue_depth.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(adjacency_check.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (metric_style !=  nullptr && metric_style->has_operation())
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation())
	|| (area_password !=  nullptr && area_password->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (domain_password !=  nullptr && domain_password->has_operation())
	|| (fast_flood !=  nullptr && fast_flood->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (ti_lfa !=  nullptr && ti_lfa->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (ispf !=  nullptr && ispf->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (lsp_full !=  nullptr && lsp_full->has_operation())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_operation())
	|| (microloop !=  nullptr && microloop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (partition !=  nullptr && partition->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation())
	|| (use !=  nullptr && use->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (ignore_lsp_errors.is_set || is_set(ignore_lsp_errors.yfilter)) leaf_name_data.push_back(ignore_lsp_errors.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.yfilter)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());
    if (update_queue_depth.is_set || is_set(update_queue_depth.yfilter)) leaf_name_data.push_back(update_queue_depth.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (adjacency_check.is_set || is_set(adjacency_check.yfilter)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-style")
    {
        if(metric_style == nullptr)
        {
            metric_style = std::make_shared<Native::Router::Isis::MetricStyle>();
        }
        return metric_style;
    }

    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Isis::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "distance")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::Distance>();
        ent_->parent = this;
        distance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Isis::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "set-attached-bit")
    {
        if(set_attached_bit == nullptr)
        {
            set_attached_bit = std::make_shared<Native::Router::Isis::SetAttachedBit>();
        }
        return set_attached_bit;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Isis::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "summary-address")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::SummaryAddress>();
        ent_->parent = this;
        summary_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Isis::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Isis::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::Isis::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::Isis::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::Isis::SpfInterval>();
        }
        return spf_interval;
    }

    if(child_yang_name == "area-password")
    {
        if(area_password == nullptr)
        {
            area_password = std::make_shared<Native::Router::Isis::AreaPassword>();
        }
        return area_password;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Isis::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "domain-password")
    {
        if(domain_password == nullptr)
        {
            domain_password = std::make_shared<Native::Router::Isis::DomainPassword>();
        }
        return domain_password;
    }

    if(child_yang_name == "fast-flood")
    {
        if(fast_flood == nullptr)
        {
            fast_flood = std::make_shared<Native::Router::Isis::FastFlood>();
        }
        return fast_flood;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Router::Isis::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "ti-lfa")
    {
        if(ti_lfa == nullptr)
        {
            ti_lfa = std::make_shared<Native::Router::Isis::TiLfa>();
        }
        return ti_lfa;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Router::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Router::Isis::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "ispf")
    {
        if(ispf == nullptr)
        {
            ispf = std::make_shared<Native::Router::Isis::Ispf>();
        }
        return ispf;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::Isis::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "lsp-full")
    {
        if(lsp_full == nullptr)
        {
            lsp_full = std::make_shared<Native::Router::Isis::LspFull>();
        }
        return lsp_full;
    }

    if(child_yang_name == "lsp-gen-interval")
    {
        if(lsp_gen_interval == nullptr)
        {
            lsp_gen_interval = std::make_shared<Native::Router::Isis::LspGenInterval>();
        }
        return lsp_gen_interval;
    }

    if(child_yang_name == "microloop")
    {
        if(microloop == nullptr)
        {
            microloop = std::make_shared<Native::Router::Isis::Microloop>();
        }
        return microloop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Router::Isis::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "net")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::Net>();
        ent_->parent = this;
        net.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Isis::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "partition")
    {
        if(partition == nullptr)
        {
            partition = std::make_shared<Native::Router::Isis::Partition>();
        }
        return partition;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Isis::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Isis::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Router::Isis::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Router::Isis::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Router::Isis::Skeptical>();
        }
        return skeptical;
    }

    if(child_yang_name == "use")
    {
        if(use == nullptr)
        {
            use = std::make_shared<Native::Router::Isis::Use>();
        }
        return use;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Isis::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric_style != nullptr)
    {
        _children["metric-style"] = metric_style;
    }

    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    count_ = 0;
    for (auto ent_ : distance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(set_attached_bit != nullptr)
    {
        _children["set-attached-bit"] = set_attached_bit;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    count_ = 0;
    for (auto ent_ : summary_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(traffic_share != nullptr)
    {
        _children["traffic-share"] = traffic_share;
    }

    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(prc_interval != nullptr)
    {
        _children["prc-interval"] = prc_interval;
    }

    if(set_overload_bit != nullptr)
    {
        _children["set-overload-bit"] = set_overload_bit;
    }

    if(spf_interval != nullptr)
    {
        _children["spf-interval"] = spf_interval;
    }

    if(area_password != nullptr)
    {
        _children["area-password"] = area_password;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(domain_password != nullptr)
    {
        _children["domain-password"] = domain_password;
    }

    if(fast_flood != nullptr)
    {
        _children["fast-flood"] = fast_flood;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(ti_lfa != nullptr)
    {
        _children["ti-lfa"] = ti_lfa;
    }

    if(hello != nullptr)
    {
        _children["hello"] = hello;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    if(ispf != nullptr)
    {
        _children["ispf"] = ispf;
    }

    if(log_adjacency_changes != nullptr)
    {
        _children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(lsp_full != nullptr)
    {
        _children["lsp-full"] = lsp_full;
    }

    if(lsp_gen_interval != nullptr)
    {
        _children["lsp-gen-interval"] = lsp_gen_interval;
    }

    if(microloop != nullptr)
    {
        _children["microloop"] = microloop;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    count_ = 0;
    for (auto ent_ : net.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(nsf != nullptr)
    {
        _children["nsf"] = nsf;
    }

    if(partition != nullptr)
    {
        _children["partition"] = partition;
    }

    if(passive_interface != nullptr)
    {
        _children["passive-interface"] = passive_interface;
    }

    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(skeptical != nullptr)
    {
        _children["skeptical"] = skeptical;
    }

    if(use != nullptr)
    {
        _children["use"] = use;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors = value;
        ignore_lsp_errors.value_namespace = name_space;
        ignore_lsp_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
        lsp_mtu.value_namespace = name_space;
        lsp_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
        max_lsp_lifetime.value_namespace = name_space;
        max_lsp_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-queue-depth")
    {
        update_queue_depth = value;
        update_queue_depth.value_namespace = name_space;
        update_queue_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
        adjacency_check.value_namespace = name_space;
        adjacency_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime.yfilter = yfilter;
    }
    if(value_path == "update-queue-depth")
    {
        update_queue_depth.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Native::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-style" || name == "address-family" || name == "distance" || name == "ip" || name == "redistribute" || name == "set-attached-bit" || name == "snmp" || name == "summary-address" || name == "traffic-share" || name == "advertise" || name == "default-information" || name == "metric" || name == "prc-interval" || name == "set-overload-bit" || name == "spf-interval" || name == "area-password" || name == "authentication" || name == "distribute-list" || name == "domain-password" || name == "fast-flood" || name == "fast-reroute" || name == "ti-lfa" || name == "hello" || name == "hostname" || name == "ispf" || name == "log-adjacency-changes" || name == "lsp-full" || name == "lsp-gen-interval" || name == "microloop" || name == "mpls" || name == "net" || name == "nsf" || name == "partition" || name == "passive-interface" || name == "disable" || name == "protocol" || name == "segment-routing" || name == "skeptical" || name == "use" || name == "bfd" || name == "priority" || name == "help" || name == "maximum-paths" || name == "ignore-lsp-errors" || name == "is-type" || name == "lsp-mtu" || name == "lsp-refresh-interval" || name == "max-area-addresses" || name == "max-lsp-lifetime" || name == "update-queue-depth" || name == "vrf" || name == "adjacency-check" || name == "router-id")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::MetricStyle()
    :
    narrow(nullptr) // presence node
    , transition(nullptr) // presence node
    , wide(nullptr) // presence node
{

    yang_name = "metric-style"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::MetricStyle::~MetricStyle()
{
}

bool Native::Router::Isis::MetricStyle::has_data() const
{
    if (is_presence_container) return true;
    return (narrow !=  nullptr && narrow->has_data())
	|| (transition !=  nullptr && transition->has_data())
	|| (wide !=  nullptr && wide->has_data());
}

bool Native::Router::Isis::MetricStyle::has_operation() const
{
    return is_set(yfilter)
	|| (narrow !=  nullptr && narrow->has_operation())
	|| (transition !=  nullptr && transition->has_operation())
	|| (wide !=  nullptr && wide->has_operation());
}

std::string Native::Router::Isis::MetricStyle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::MetricStyle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::MetricStyle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::MetricStyle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "narrow")
    {
        if(narrow == nullptr)
        {
            narrow = std::make_shared<Native::Router::Isis::MetricStyle::Narrow>();
        }
        return narrow;
    }

    if(child_yang_name == "transition")
    {
        if(transition == nullptr)
        {
            transition = std::make_shared<Native::Router::Isis::MetricStyle::Transition>();
        }
        return transition;
    }

    if(child_yang_name == "wide")
    {
        if(wide == nullptr)
        {
            wide = std::make_shared<Native::Router::Isis::MetricStyle::Wide>();
        }
        return wide;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::MetricStyle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(narrow != nullptr)
    {
        _children["narrow"] = narrow;
    }

    if(transition != nullptr)
    {
        _children["transition"] = transition;
    }

    if(wide != nullptr)
    {
        _children["wide"] = wide;
    }

    return _children;
}

void Native::Router::Isis::MetricStyle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::MetricStyle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::MetricStyle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow" || name == "transition" || name == "wide")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::Narrow::Narrow()
    :
    narrow_wide{YType::enumeration, "narrow-wide"},
    transition{YType::enumeration, "transition"}
{

    yang_name = "narrow"; yang_parent_name = "metric-style"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Isis::MetricStyle::Narrow::~Narrow()
{
}

bool Native::Router::Isis::MetricStyle::Narrow::has_data() const
{
    if (is_presence_container) return true;
    return narrow_wide.is_set
	|| transition.is_set;
}

bool Native::Router::Isis::MetricStyle::Narrow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(narrow_wide.yfilter)
	|| ydk::is_set(transition.yfilter);
}

std::string Native::Router::Isis::MetricStyle::Narrow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric-style/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::MetricStyle::Narrow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "narrow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::MetricStyle::Narrow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (narrow_wide.is_set || is_set(narrow_wide.yfilter)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::MetricStyle::Narrow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::MetricStyle::Narrow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::MetricStyle::Narrow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
        narrow_wide.value_namespace = name_space;
        narrow_wide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::MetricStyle::Narrow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide.yfilter = yfilter;
    }
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::Isis::MetricStyle::Narrow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow-wide" || name == "transition")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::Transition::Transition()
    :
    transition{YType::enumeration, "transition"}
{

    yang_name = "transition"; yang_parent_name = "metric-style"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Isis::MetricStyle::Transition::~Transition()
{
}

bool Native::Router::Isis::MetricStyle::Transition::has_data() const
{
    if (is_presence_container) return true;
    return transition.is_set;
}

bool Native::Router::Isis::MetricStyle::Transition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transition.yfilter);
}

std::string Native::Router::Isis::MetricStyle::Transition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric-style/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::MetricStyle::Transition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::MetricStyle::Transition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::MetricStyle::Transition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::MetricStyle::Transition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::MetricStyle::Transition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::MetricStyle::Transition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::Isis::MetricStyle::Transition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transition")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::Wide::Wide()
    :
    narrow_wide{YType::enumeration, "narrow-wide"},
    transition{YType::enumeration, "transition"}
{

    yang_name = "wide"; yang_parent_name = "metric-style"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Isis::MetricStyle::Wide::~Wide()
{
}

bool Native::Router::Isis::MetricStyle::Wide::has_data() const
{
    if (is_presence_container) return true;
    return narrow_wide.is_set
	|| transition.is_set;
}

bool Native::Router::Isis::MetricStyle::Wide::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(narrow_wide.yfilter)
	|| ydk::is_set(transition.yfilter);
}

std::string Native::Router::Isis::MetricStyle::Wide::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric-style/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::MetricStyle::Wide::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wide";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::MetricStyle::Wide::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (narrow_wide.is_set || is_set(narrow_wide.yfilter)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::MetricStyle::Wide::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::MetricStyle::Wide::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::MetricStyle::Wide::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
        narrow_wide.value_namespace = name_space;
        narrow_wide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::MetricStyle::Wide::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide.yfilter = yfilter;
    }
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::Isis::MetricStyle::Wide::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow-wide" || name == "transition")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4>())
    , ipv6(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Isis::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Router::Isis::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Router::Isis::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Ipv4()
    :
    unicast_multicast{YType::enumeration, "unicast-multicast"},
    help{YType::empty, "help"}
        ,
    snmp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp>())
    , topology(this, {"name"})
{
    snmp->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return unicast_multicast.is_set
	|| help.is_set
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unicast_multicast.yfilter)
	|| ydk::is_set(help.yfilter)
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_multicast.is_set || is_set(unicast_multicast.yfilter)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    count_ = 0;
    for (auto ent_ : topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
        unicast_multicast.value_namespace = name_space;
        unicast_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "topology" || name == "unicast-multicast" || name == "help")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Snmp()
    :
    context(this, {"name"})
{

    yang_name = "snmp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::~Snmp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Context()
    :
    name{YType::str, "name"}
        ,
    community(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community>())
    , user(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::~Context()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv4/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
        ,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_data() const
{
    if (is_presence_container) return true;
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    expanded_acl{YType::uint32, "expanded-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "ro"},
    rw{YType::empty, "rw"}
{

    yang_name = "access"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.yfilter)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
        expanded_acl.value_namespace = name_space;
        expanded_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ro")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ro")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "rw")
    {
        rw.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
        ,
    permisssion(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::~User()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permisssion != nullptr)
    {
        _children["permisssion"] = permisssion;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
        ,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access>())
    , auth(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_data() const
{
    if (is_presence_container) return true;
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Topology()
    :
    name{YType::str, "name"},
    tid{YType::uint32, "tid"},
    ignore_attached_bit{YType::empty, "ignore-attached-bit"},
    priority{YType::uint8, "priority"},
    help{YType::empty, "help"},
    maximum_paths{YType::uint32, "maximum-paths"}
        ,
    distance(this, {"number"})
    , ip(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip>())
    , redistribute(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute>())
    , set_attached_bit(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit>())
    , snmp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp>())
    , summary_address(this, {"ip", "mask"})
    , traffic_share(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare>())
    , advertise(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise>())
    , default_information(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation>())
    , metric(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric>())
    , prc_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval>())
    , set_overload_bit(nullptr) // presence node
    , spf_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval>())
{
    ip->parent = this;
    redistribute->parent = this;
    set_attached_bit->parent = this;
    snmp->parent = this;
    traffic_share->parent = this;
    advertise->parent = this;
    default_information->parent = this;
    metric->parent = this;
    prc_interval->parent = this;
    spf_interval->parent = this;

    yang_name = "topology"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::~Topology()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distance.len(); index++)
    {
        if(distance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return name.is_set
	|| tid.is_set
	|| ignore_attached_bit.is_set
	|| priority.is_set
	|| help.is_set
	|| maximum_paths.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::has_operation() const
{
    for (std::size_t index=0; index<distance.len(); index++)
    {
        if(distance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| ydk::is_set(ignore_attached_bit.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());
    if (ignore_attached_bit.is_set || is_set(ignore_attached_bit.yfilter)) leaf_name_data.push_back(ignore_attached_bit.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance>();
        ent_->parent = this;
        distance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "set-attached-bit")
    {
        if(set_attached_bit == nullptr)
        {
            set_attached_bit = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit>();
        }
        return set_attached_bit;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "summary-address")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress>();
        ent_->parent = this;
        summary_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval>();
        }
        return spf_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : distance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(set_attached_bit != nullptr)
    {
        _children["set-attached-bit"] = set_attached_bit;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    count_ = 0;
    for (auto ent_ : summary_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(traffic_share != nullptr)
    {
        _children["traffic-share"] = traffic_share;
    }

    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(prc_interval != nullptr)
    {
        _children["prc-interval"] = prc_interval;
    }

    if(set_overload_bit != nullptr)
    {
        _children["set-overload-bit"] = set_overload_bit;
    }

    if(spf_interval != nullptr)
    {
        _children["spf-interval"] = spf_interval;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit = value;
        ignore_attached_bit.value_namespace = name_space;
        ignore_attached_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "ip" || name == "redistribute" || name == "set-attached-bit" || name == "snmp" || name == "summary-address" || name == "traffic-share" || name == "advertise" || name == "default-information" || name == "metric" || name == "prc-interval" || name == "set-overload-bit" || name == "spf-interval" || name == "name" || name == "tid" || name == "ignore-attached-bit" || name == "priority" || name == "help" || name == "maximum-paths")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::Distance()
    :
    number{YType::uint8, "number"},
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"}
        ,
    ip_list(this, {"ip"})
{

    yang_name = "distance"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::~Distance()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return number.is_set
	|| clns.is_set
	|| ip.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-list")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-list" || name == "number" || name == "clns" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::IpList()
    :
    ip{YType::str, "ip"}
        ,
    wildcard_bits(this, {"w_bits"})
{

    yang_name = "ip-list"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::~IpList()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wildcard_bits.len(); index++)
    {
        if(wildcard_bits[index]->has_data())
            return true;
    }
    return ip.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_operation() const
{
    for (std::size_t index=0; index<wildcard_bits.len(); index++)
    {
        if(wildcard_bits[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wildcard-bits")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits>();
        ent_->parent = this;
        wildcard_bits.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wildcard_bits.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wildcard-bits" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::WildcardBits()
    :
    w_bits{YType::str, "w-bits"},
    access_list{YType::str, "access-list"}
{

    yang_name = "wildcard-bits"; yang_parent_name = "ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::~WildcardBits()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_data() const
{
    if (is_presence_container) return true;
    return w_bits.is_set
	|| access_list.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(w_bits.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wildcard-bits";
    ADD_KEY_TOKEN(w_bits, "w-bits");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (w_bits.is_set || is_set(w_bits.yfilter)) leaf_name_data.push_back(w_bits.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "w-bits")
    {
        w_bits = value;
        w_bits.value_namespace = name_space;
        w_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "w-bits")
    {
        w_bits.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "w-bits" || name == "access-list")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Ip()
    :
    route(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (route !=  nullptr && route->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Route()
    :
    priority(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority>())
{
    priority->parent = this;

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::~Route()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::Priority()
    :
    high(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High>())
{
    high->parent = this;

    yang_name = "priority"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::~Priority()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_data() const
{
    if (is_presence_container) return true;
    return (high !=  nullptr && high->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::High()
    :
    tag{YType::uint32, "tag"}
{

    yang_name = "high"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::~High()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Redistribute()
    :
    application(this, {"name"})
    , bgp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp>())
    , connected(nullptr) // presence node
    , eigrp(this, {"as_number"})
    , isis(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_>())
    , iso_igrp(nullptr) // presence node
    , lisp(nullptr) // presence node
    , maximum_prefix(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix>())
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"process_id"})
    , ospfv3(this, {"process_id"})
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
    , vrf(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf>())
{
    bgp->parent = this;
    isis->parent = this;
    maximum_prefix->parent = this;
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::~Redistribute()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ospfv3")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3>();
        ent_->parent = this;
        ospfv3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        _children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        _children["odr"] = odr;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospfv3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "maximum-prefix" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::Application()
    :
    name{YType::str, "name"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::~Application()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
        ,
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "as-number" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint32, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Isis_()
    :
    isis_redistribute(this, {"area_tag"})
    , ip(this, {"isis_redist_levels1", "isis_redist_levels2"})
{

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::~Isis_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_redistribute.len(); index++)
    {
        if(isis_redistribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_redistribute.len(); index++)
    {
        if(isis_redistribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-redistribute")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute>();
        ent_->parent = this;
        isis_redistribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_redistribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-redistribute" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::IsisRedistribute()
    :
    area_tag{YType::str, "area-tag"}
        ,
    ip(nullptr) // presence node
{

    yang_name = "isis-redistribute"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::~IsisRedistribute()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_data() const
{
    if (is_presence_container) return true;
    return area_tag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-redistribute";
    ADD_KEY_TOKEN(area_tag, "area-tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "area-tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis-redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::Ip()
    :
    isis_redist_levels1{YType::enumeration, "isis-redist-levels1"},
    isis_redist_levels2{YType::enumeration, "isis-redist-levels2"},
    into{YType::empty, "into"},
    distribute_list{YType::uint32, "distribute-list"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_data() const
{
    if (is_presence_container) return true;
    return isis_redist_levels1.is_set
	|| isis_redist_levels2.is_set
	|| into.is_set
	|| distribute_list.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_redist_levels1.yfilter)
	|| ydk::is_set(isis_redist_levels2.yfilter)
	|| ydk::is_set(into.yfilter)
	|| ydk::is_set(distribute_list.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(isis_redist_levels1, "isis-redist-levels1");
    ADD_KEY_TOKEN(isis_redist_levels2, "isis-redist-levels2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_redist_levels1.is_set || is_set(isis_redist_levels1.yfilter)) leaf_name_data.push_back(isis_redist_levels1.get_name_leafdata());
    if (isis_redist_levels2.is_set || is_set(isis_redist_levels2.yfilter)) leaf_name_data.push_back(isis_redist_levels2.get_name_leafdata());
    if (into.is_set || is_set(into.yfilter)) leaf_name_data.push_back(into.get_name_leafdata());
    if (distribute_list.is_set || is_set(distribute_list.yfilter)) leaf_name_data.push_back(distribute_list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1 = value;
        isis_redist_levels1.value_namespace = name_space;
        isis_redist_levels1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2 = value;
        isis_redist_levels2.value_namespace = name_space;
        isis_redist_levels2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "into")
    {
        into = value;
        into.value_namespace = name_space;
        into.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distribute-list")
    {
        distribute_list = value;
        distribute_list.value_namespace = name_space;
        distribute_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1.yfilter = yfilter;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2.yfilter = yfilter;
    }
    if(value_path == "into")
    {
        into.yfilter = yfilter;
    }
    if(value_path == "distribute-list")
    {
        distribute_list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-redist-levels1" || name == "isis-redist-levels2" || name == "into" || name == "distribute-list" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
        ,
    area_tag_route_map_container(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
{
    area_tag_route_map_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(area_tag_route_map_container != nullptr)
    {
        _children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "route-map" || name == "levels" || name == "metric" || name == "metric-type")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    if (is_presence_container) return true;
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold_value{YType::uint32, "threshold-value"},
    warning_only{YType::empty, "warning-only"},
    withdraw{YType::empty, "withdraw"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| threshold_value.is_set
	|| warning_only.is_set
	|| withdraw.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(withdraw.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (withdraw.is_set || is_set(withdraw.yfilter)) leaf_name_data.push_back(withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw")
    {
        withdraw = value;
        withdraw.value_namespace = name_space;
        withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "withdraw")
    {
        withdraw.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold-value" || name == "warning-only" || name == "withdraw")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::Odr()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
        ,
    match(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(internal != nullptr)
    {
        _children["internal"] = internal;
    }

    if(external != nullptr)
    {
        _children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        _children["nssa-external"] = nssa_external;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Ospfv3()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
        ,
    match(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(internal != nullptr)
    {
        _children["internal"] = internal;
    }

    if(external != nullptr)
    {
        _children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        _children["nssa-external"] = nssa_external;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Static()
    :
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::~Static()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Vrf()
    :
    vrf_nm(this, {"vrf_nm"})
    , global(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_nm.len(); index++)
    {
        if(vrf_nm[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf_nm.len(); index++)
    {
        if(vrf_nm[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-nm")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm>();
        ent_->parent = this;
        vrf_nm.append(ent_);
        return ent_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_nm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-nm" || name == "global")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::VrfNm()
    :
    vrf_nm{YType::str, "vrf-nm"},
    ospf{YType::uint16, "ospf"}
        ,
    application(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application>())
    , bgp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp>())
    , connected(nullptr) // presence node
    , eigrp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp>())
    , isis(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_>())
    , iso_igrp(nullptr) // presence node
    , lisp(nullptr) // presence node
    , mobile(nullptr) // presence node
    , ospfv3(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3>())
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
{
    application->parent = this;
    bgp->parent = this;
    eigrp->parent = this;
    isis->parent = this;
    ospfv3->parent = this;

    yang_name = "vrf-nm"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::~VrfNm()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_data() const
{
    if (is_presence_container) return true;
    return vrf_nm.is_set
	|| ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_nm.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-nm";
    ADD_KEY_TOKEN(vrf_nm, "vrf-nm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_nm.is_set || is_set(vrf_nm.yfilter)) leaf_name_data.push_back(vrf_nm.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        _children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(ospfv3 != nullptr)
    {
        _children["ospfv3"] = ospfv3;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm = value;
        vrf_nm.value_namespace = name_space;
        vrf_nm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf-nm" || name == "ospf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Application()
    :
    appname(this, {"appname"})
{

    yang_name = "application"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::~Application()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appname.len(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.len(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname>();
        ent_->parent = this;
        appname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "appname"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::~Appname()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_data() const
{
    if (is_presence_container) return true;
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname";
    ADD_KEY_TOKEN(appname, "appname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
        ,
    bp_as_num(this, {"bp_as_num"})
{

    yang_name = "bgp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::~Bgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bp_as_num.len(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.len(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum>();
        ent_->parent = this;
        bp_as_num.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bp_as_num.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
        ,
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "bp-as-num"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_data() const
{
    if (is_presence_container) return true;
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num";
    ADD_KEY_TOKEN(bp_as_num, "bp-as-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::~Connected()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::Eigrp()
    :
    eigrp_as(this, {"eigrp_as"})
{

    yang_name = "eigrp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp_as.len(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.len(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs>();
        ent_->parent = this;
        eigrp_as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp_as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "eigrp-as"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_data() const
{
    if (is_presence_container) return true;
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as";
    ADD_KEY_TOKEN(eigrp_as, "eigrp-as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Isis_()
    :
    isis_atag(this, {"isis_atag"})
    , ip(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::~Isis_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_atag.len(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.len(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-atag")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag>();
        ent_->parent = this;
        isis_atag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_atag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-atag" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
        ,
    ip(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_data() const
{
    if (is_presence_container) return true;
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag";
    ADD_KEY_TOKEN(isis_atag, "isis-atag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis-atag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoIgrp()
    :
    iso_atag(this, {"iso_atag"})
    , route_map(nullptr) // presence node
{

    yang_name = "iso-igrp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iso_atag.len(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.len(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag>();
        ent_->parent = this;
        iso_atag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iso_atag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "iso-atag"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_data() const
{
    if (is_presence_container) return true;
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag";
    ADD_KEY_TOKEN(iso_atag, "iso-atag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
        iso_atag.value_namespace = name_space;
        iso_atag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-atag")
    {
        iso_atag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{

    yang_name = "route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return rm_point.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::~Lisp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::~Mobile()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Ospfv3()
    :
    os3_id(this, {"os3_id"})
{

    yang_name = "ospfv3"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<os3_id.len(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.len(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id>();
        ent_->parent = this;
        os3_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : os3_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "os3-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_data() const
{
    if (is_presence_container) return true;
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id";
    ADD_KEY_TOKEN(os3_id, "os3-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
        os3_id.value_namespace = name_space;
        os3_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "os3-id")
    {
        os3_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::~Rip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Static()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
        ,
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "vrf-nm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::~Static()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Global()
    :
    ospf{YType::uint16, "ospf"}
        ,
    application(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application>())
    , bgp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp>())
    , connected(nullptr) // presence node
    , eigrp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp>())
    , isis(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_>())
    , iso_igrp(nullptr) // presence node
    , lisp(nullptr) // presence node
    , mobile(nullptr) // presence node
    , ospfv3(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3>())
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
{
    application->parent = this;
    bgp->parent = this;
    eigrp->parent = this;
    isis->parent = this;
    ospfv3->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_data() const
{
    if (is_presence_container) return true;
    return ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        _children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(ospfv3 != nullptr)
    {
        _children["ospfv3"] = ospfv3;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "ospf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Application()
    :
    appname(this, {"appname"})
{

    yang_name = "application"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appname.len(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.len(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname>();
        ent_->parent = this;
        appname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "appname"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::~Appname()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_data() const
{
    if (is_presence_container) return true;
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname";
    ADD_KEY_TOKEN(appname, "appname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
        ,
    bp_as_num(this, {"bp_as_num"})
{

    yang_name = "bgp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bp_as_num.len(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.len(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum>();
        ent_->parent = this;
        bp_as_num.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bp_as_num.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
        ,
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "bp-as-num"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_data() const
{
    if (is_presence_container) return true;
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num";
    ADD_KEY_TOKEN(bp_as_num, "bp-as-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "bp-as-num"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::Eigrp()
    :
    eigrp_as(this, {"eigrp_as"})
{

    yang_name = "eigrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp_as.len(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.len(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs>();
        ent_->parent = this;
        eigrp_as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp_as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "eigrp-as"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_data() const
{
    if (is_presence_container) return true;
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as";
    ADD_KEY_TOKEN(eigrp_as, "eigrp-as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Isis_()
    :
    isis_atag(this, {"isis_atag"})
    , ip(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::~Isis_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_atag.len(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.len(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-atag")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag>();
        ent_->parent = this;
        isis_atag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_atag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-atag" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
        ,
    ip(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_data() const
{
    if (is_presence_container) return true;
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag";
    ADD_KEY_TOKEN(isis_atag, "isis-atag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis-atag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    iso_atag(this, {"iso_atag"})
    , route_map(nullptr) // presence node
{

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iso_atag.len(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.len(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag>();
        ent_->parent = this;
        iso_atag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iso_atag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "iso-atag"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_data() const
{
    if (is_presence_container) return true;
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag";
    ADD_KEY_TOKEN(iso_atag, "iso-atag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
        iso_atag.value_namespace = name_space;
        iso_atag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-atag")
    {
        iso_atag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{

    yang_name = "route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return rm_point.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
    :
    os3_id(this, {"os3_id"})
{

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<os3_id.len(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.len(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id>();
        ent_->parent = this;
        os3_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : os3_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "os3-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_data() const
{
    if (is_presence_container) return true;
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id";
    ADD_KEY_TOKEN(os3_id, "os3-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
        os3_id.value_namespace = name_space;
        os3_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "os3-id")
    {
        os3_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Static()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
        ,
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::~Static()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::SetAttachedBit()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "set-attached-bit"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::~SetAttachedBit()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attached-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Snmp()
    :
    context(this, {"name"})
{

    yang_name = "snmp"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::~Snmp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Context()
    :
    name{YType::str, "name"}
        ,
    community(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community>())
    , user(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User>())
{
    community->parent = this;
    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::~Context()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
        ,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::has_data() const
{
    if (is_presence_container) return true;
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    expanded_acl{YType::uint32, "expanded-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "ro"},
    rw{YType::empty, "rw"}
{

    yang_name = "access"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| expanded_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.yfilter)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
        expanded_acl.value_namespace = name_space;
        expanded_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ro")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ro")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "rw")
    {
        rw.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "expanded-acl" || name == "acl-name" || name == "ipv6" || name == "ro" || name == "rw")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
        ,
    permisssion(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::~User()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permisssion != nullptr)
    {
        _children["permisssion"] = permisssion;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
        ,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access>())
    , auth(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;
    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::has_data() const
{
    if (is_presence_container) return true;
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::Access()
    :
    standard_acl{YType::uint32, "standard-acl"},
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "access"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::has_data() const
{
    if (is_presence_container) return true;
    return standard_acl.is_set
	|| acl_name.is_set
	|| ipv6.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standard_acl.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard-acl" || name == "acl-name" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{

    yang_name = "auth"; yang_parent_name = "permisssion"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::SummaryAddress()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
        ,
    level_1(nullptr) // presence node
    , level_1_2(nullptr) // presence node
    , level_2(nullptr) // presence node
    , metric_tag_container(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer>())
{
    metric_tag_container->parent = this;

    yang_name = "summary-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mask.is_set
	|| (level_1 !=  nullptr && level_1->has_data())
	|| (level_1_2 !=  nullptr && level_1_2->has_data())
	|| (level_2 !=  nullptr && level_2->has_data())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_1_2 !=  nullptr && level_1_2->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-1-2")
    {
        if(level_1_2 == nullptr)
        {
            level_1_2 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12>();
        }
        return level_1_2;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2>();
        }
        return level_2;
    }

    if(child_yang_name == "metric-tag-container")
    {
        if(metric_tag_container == nullptr)
        {
            metric_tag_container = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer>();
        }
        return metric_tag_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level_1 != nullptr)
    {
        _children["level-1"] = level_1;
    }

    if(level_1_2 != nullptr)
    {
        _children["level-1-2"] = level_1_2;
    }

    if(level_2 != nullptr)
    {
        _children["level-2"] = level_2;
    }

    if(metric_tag_container != nullptr)
    {
        _children["metric-tag-container"] = metric_tag_container;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric-tag-container" || name == "ip" || name == "mask")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::Level1()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-1"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::~Level1()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::Level12()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-1-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::~Level12()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::Level2()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "level-2"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::~Level2()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::MetricTagContainer()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{

    yang_name = "metric-tag-container"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::~MetricTagContainer()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-tag-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::has_data() const
{
    if (is_presence_container) return true;
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min != nullptr)
    {
        _children["min"] = min;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::~Min()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::has_data() const
{
    if (is_presence_container) return true;
    return across_interfaces.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{

    yang_name = "advertise"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::~Advertise()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return passive_only.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_only.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.yfilter)) leaf_name_data.push_back(passive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
        passive_only.value_namespace = name_space;
        passive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-only")
    {
        passive_only.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-only")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(originate != nullptr)
    {
        _children["originate"] = originate;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
        ,
    metrics(this, {"level"})
{

    yang_name = "metric"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::~Metric()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metrics.len(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.len(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics>();
        ent_->parent = this;
        metrics.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metrics.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metrics" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{

    yang_name = "metrics"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::~Metrics()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::PrcInterval()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "prc-interval"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::~PrcInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup>())
    , suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;
    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::has_data() const
{
    if (is_presence_container) return true;
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_startup != nullptr)
    {
        _children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time>())
    , wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::has_data() const
{
    if (is_presence_container) return true;
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(time != nullptr)
    {
        _children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        _children["wait-for-bgp"] = wait_for_bgp;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::Time()
    :
    time{YType::uint32, "time"},
    suppress{YType::empty, "suppress"},
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "time"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| suppress.is_set
	|| external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(suppress.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "suppress" || name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    if (is_presence_container) return true;
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "wait-for-bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::SpfInterval()
    :
    level_1_2(this, {"level"})
    , intervals(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::~SpfInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level_1_2.len(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.len(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1-2")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12>();
        ent_->parent = this;
        level_1_2.append(ent_);
        return ent_;
    }

    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals>();
        }
        return intervals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level_1_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(intervals != nullptr)
    {
        _children["intervals"] = intervals;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1-2" || name == "intervals")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::Level12()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "level-1-2"; yang_parent_name = "spf-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::~Level12()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::Intervals()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "intervals"; yang_parent_name = "spf-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::~Intervals()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6()
    :
    unicast{YType::empty, "unicast"},
    help{YType::empty, "help"},
    maximum_paths{YType::uint32, "maximum-paths"},
    adjacency_check{YType::empty, "adjacency-check"},
    router_id{YType::str, "router-id"},
    distance{YType::uint32, "distance"}
        ,
    advertise(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Advertise>())
    , default_information(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation>())
    , metric(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Metric>())
    , prc_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::PrcInterval>())
    , set_overload_bit(nullptr) // presence node
    , spf_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval>())
    , bfd(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Bfd>())
    , distribute_list(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList>())
    , ipv6(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_>())
    , multi_topology(nullptr) // presence node
    , redistribute(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute>())
    , summary_prefix(this, {"prefix"})
    , table_map(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::TableMap>())
{
    advertise->parent = this;
    default_information->parent = this;
    metric->parent = this;
    prc_interval->parent = this;
    spf_interval->parent = this;
    bfd->parent = this;
    distribute_list->parent = this;
    ipv6->parent = this;
    redistribute->parent = this;
    table_map->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return unicast.is_set
	|| help.is_set
	|| maximum_paths.is_set
	|| adjacency_check.is_set
	|| router_id.is_set
	|| distance.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (multi_topology !=  nullptr && multi_topology->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (table_map !=  nullptr && table_map->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(adjacency_check.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (multi_topology !=  nullptr && multi_topology->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (adjacency_check.is_set || is_set(adjacency_check.yfilter)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval>();
        }
        return spf_interval;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_>();
        }
        return ipv6;
    }

    if(child_yang_name == "multi-topology")
    {
        if(multi_topology == nullptr)
        {
            multi_topology = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::MultiTopology>();
        }
        return multi_topology;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-prefix")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SummaryPrefix>();
        ent_->parent = this;
        summary_prefix.append(ent_);
        return ent_;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::TableMap>();
        }
        return table_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(prc_interval != nullptr)
    {
        _children["prc-interval"] = prc_interval;
    }

    if(set_overload_bit != nullptr)
    {
        _children["set-overload-bit"] = set_overload_bit;
    }

    if(spf_interval != nullptr)
    {
        _children["spf-interval"] = spf_interval;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(multi_topology != nullptr)
    {
        _children["multi-topology"] = multi_topology;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    count_ = 0;
    for (auto ent_ : summary_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(table_map != nullptr)
    {
        _children["table-map"] = table_map;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
        adjacency_check.value_namespace = name_space;
        adjacency_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "default-information" || name == "metric" || name == "prc-interval" || name == "set-overload-bit" || name == "spf-interval" || name == "bfd" || name == "distribute-list" || name == "ipv6" || name == "multi-topology" || name == "redistribute" || name == "summary-prefix" || name == "table-map" || name == "unicast" || name == "help" || name == "maximum-paths" || name == "adjacency-check" || name == "router-id" || name == "distance")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{

    yang_name = "advertise"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::Advertise::~Advertise()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return passive_only.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_only.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.yfilter)) leaf_name_data.push_back(passive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
        passive_only.value_namespace = name_space;
        passive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-only")
    {
        passive_only.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-only")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(originate != nullptr)
    {
        _children["originate"] = originate;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/default-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
        ,
    metrics(this, {"level"})
{

    yang_name = "metric"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::~Metric()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metrics.len(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.len(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics>();
        ent_->parent = this;
        metrics.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metrics.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metrics" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{

    yang_name = "metrics"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::~Metrics()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::PrcInterval()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    minimum_wait{YType::uint32, "minimum-wait"}
{

    yang_name = "prc-interval"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::~PrcInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial_wait.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup>())
    , suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;
    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::has_data() const
{
    if (is_presence_container) return true;
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_startup != nullptr)
    {
        _children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time>())
    , wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::has_data() const
{
    if (is_presence_container) return true;
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(time != nullptr)
    {
        _children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        _children["wait-for-bgp"] = wait_for_bgp;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::Time()
    :
    time{YType::uint32, "time"},
    suppress{YType::empty, "suppress"},
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "time"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| suppress.is_set
	|| external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(suppress.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/on-startup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "suppress" || name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    if (is_presence_container) return true;
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/on-startup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "wait-for-bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/on-startup/wait-for-bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{

    yang_name = "suppress"; yang_parent_name = "set-overload-bit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::SpfInterval()
    :
    level_1_2(this, {"level"})
    , intervals(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::~SpfInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level_1_2.len(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.len(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1-2")
    {
        auto ent_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12>();
        ent_->parent = this;
        level_1_2.append(ent_);
        return ent_;
    }

    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals>();
        }
        return intervals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level_1_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(intervals != nullptr)
    {
        _children["intervals"] = intervals;
    }

    return _children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1-2" || name == "intervals")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Isis::IsType::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::IsType::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::Isis::IsType::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::UnicastMulticast::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::UnicastMulticast::multicast {1, "multicast"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::Level::level_2 {1, "level-2"};


}
}

