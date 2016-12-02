#ifndef _CISCO_IOS_XR_IPV6_ACL_DATATYPES_
#define _CISCO_IOS_XR_IPV6_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_acl_datatypes {


class Ipv6AclTcpMatchOperatorEnumEnum : public Enum
{
    public:
        static const Enum::Value match_all;
        static const Enum::Value match_any;

};

class Ipv6AclIcmpTypeCodeEnumEnum : public Enum
{
    public:
        static const Enum::Value no_route_to_destination;
        static const Enum::Value administratively_prohibited;
        static const Enum::Value beyond_scope_of_source_address;
        static const Enum::Value host_unreachable;
        static const Enum::Value port_unreachable;
        static const Enum::Value unreachable;
        static const Enum::Value packet_too_big;
        static const Enum::Value ttl_exceeded;
        static const Enum::Value reassembly_timeout;
        static const Enum::Value time_exceeded;
        static const Enum::Value erronenous_header_field;
        static const Enum::Value option_missing;
        static const Enum::Value no_room_for_option;
        static const Enum::Value parameter_problem;
        static const Enum::Value echo;
        static const Enum::Value echo_reply;
        static const Enum::Value group_membership_query;
        static const Enum::Value group_membership_report;
        static const Enum::Value group_membership_reduction;
        static const Enum::Value router_solicitation;
        static const Enum::Value router_advertisement;
        static const Enum::Value neighbor_solicitation;
        static const Enum::Value neighbor_advertisement;
        static const Enum::Value redirect;
        static const Enum::Value rr_command;
        static const Enum::Value rr_result;
        static const Enum::Value rr_seqnum_reset;
        static const Enum::Value router_renumbering;
        static const Enum::Value query_subject_is_ipv6_address;
        static const Enum::Value query_subject_is_domain_name;
        static const Enum::Value query_subject_is_ipv4_address;
        static const Enum::Value who_are_you_request;
        static const Enum::Value node_information_successful_reply;
        static const Enum::Value node_information_request_is_refused;
        static const Enum::Value unknown_query_type;
        static const Enum::Value who_are_you_reply;

};

class Ipv6AclProtocolNumberEnum : public Enum
{
    public:
        static const Enum::Value ip;
        static const Enum::Value icmp;
        static const Enum::Value igmp;
        static const Enum::Value ip_in_ip;
        static const Enum::Value tcp;
        static const Enum::Value igrp;
        static const Enum::Value udp;
        static const Enum::Value gre;
        static const Enum::Value esp;
        static const Enum::Value ahp;
        static const Enum::Value eigrp;
        static const Enum::Value ospf;
        static const Enum::Value nos;
        static const Enum::Value pim;
        static const Enum::Value pcp;
        static const Enum::Value sctp;

};

class Ipv6PrefixMatchMinLengthEnum : public Enum
{
    public:
        static const Enum::Value match_min_length;

};

class Ipv6AclGrantEnumEnum : public Enum
{
    public:
        static const Enum::Value deny;
        static const Enum::Value permit;

};

class Ipv6PrefixMatchMaxLengthEnum : public Enum
{
    public:
        static const Enum::Value match_max_length;

};

class Ipv6AclPrecedenceNumberEnum : public Enum
{
    public:
        static const Enum::Value critical;
        static const Enum::Value flash;
        static const Enum::Value flash_override;
        static const Enum::Value immediate;
        static const Enum::Value internet;
        static const Enum::Value network;
        static const Enum::Value priority;
        static const Enum::Value routine;

};

class Ipv6AclOperatorEnumEnum : public Enum
{
    public:
        static const Enum::Value equal;
        static const Enum::Value greater_than;
        static const Enum::Value less_than;
        static const Enum::Value not_equal;
        static const Enum::Value range;

};

class Ipv6AclDscpNumberEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value af11;
        static const Enum::Value af12;
        static const Enum::Value af13;
        static const Enum::Value af21;
        static const Enum::Value af22;
        static const Enum::Value af23;
        static const Enum::Value af31;
        static const Enum::Value af32;
        static const Enum::Value af33;
        static const Enum::Value af41;
        static const Enum::Value af42;
        static const Enum::Value af43;
        static const Enum::Value cs1;
        static const Enum::Value cs2;
        static const Enum::Value cs3;
        static const Enum::Value cs4;
        static const Enum::Value cs5;
        static const Enum::Value cs6;
        static const Enum::Value cs7;
        static const Enum::Value ef;

};

class Ipv6PrefixMatchExactLengthEnum : public Enum
{
    public:
        static const Enum::Value match_exact_length;

};

class Ipv6AclPortNumberEnum : public Enum
{
    public:
        static const Enum::Value echo;
        static const Enum::Value discard;
        static const Enum::Value daytime;
        static const Enum::Value char_gen;
        static const Enum::Value ftp_data;
        static const Enum::Value ftp;
        static const Enum::Value telnet;
        static const Enum::Value smtp;
        static const Enum::Value time;
        static const Enum::Value name_server;
        static const Enum::Value who_is;
        static const Enum::Value tacacs;
        static const Enum::Value dns;
        static const Enum::Value boot_ps;
        static const Enum::Value boot_pc;
        static const Enum::Value tftp;
        static const Enum::Value gopher;
        static const Enum::Value finger;
        static const Enum::Value www;
        static const Enum::Value host_name;
        static const Enum::Value pop2;
        static const Enum::Value pop3;
        static const Enum::Value sun_rpc;
        static const Enum::Value ident;
        static const Enum::Value nntp;
        static const Enum::Value ntp;
        static const Enum::Value net_bios_ns;
        static const Enum::Value net_bios_dgs;
        static const Enum::Value net_bios_ss;
        static const Enum::Value snmp;
        static const Enum::Value snmp_trap;
        static const Enum::Value xdmcp;
        static const Enum::Value bgp;
        static const Enum::Value irc;
        static const Enum::Value dnsix;
        static const Enum::Value mobile_ip;
        static const Enum::Value pim_auto_rp;
        static const Enum::Value isakmp;
        static const Enum::Value exec_or_biff;
        static const Enum::Value login_or_who;
        static const Enum::Value cmd_or_syslog;
        static const Enum::Value lpd;
        static const Enum::Value talk;
        static const Enum::Value rip;
        static const Enum::Value uucp;
        static const Enum::Value klogin;
        static const Enum::Value kshell;
        static const Enum::Value ldp;

};

class Ipv6AclLoggingEnumEnum : public Enum
{
    public:
        static const Enum::Value log;
        static const Enum::Value log_input;

};

class Ipv6AclTypeEnumEnum : public Enum
{
    public:
        static const Enum::Value acl;
        static const Enum::Value prefix_list;

};

class Ipv6AclStatusEnumEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};

class Ipv6AclTcpBitsNumberEnum : public Enum
{
    public:
        static const Enum::Value established;
        static const Enum::Value ack;
        static const Enum::Value rst;
        static const Enum::Value fin;
        static const Enum::Value psh;
        static const Enum::Value syn;
        static const Enum::Value urg;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ACL_DATATYPES_ */

