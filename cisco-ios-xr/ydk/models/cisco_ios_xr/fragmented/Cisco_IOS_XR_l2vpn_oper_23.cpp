
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_23.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_24.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tdm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdmOptions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;

    impostion_stats->parent = this;

    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "attachment-circuit";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::~Statistics()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;

    imposition_mtu_drop->parent = this;

    imposition_stat->parent = this;

    impostion_tail_drop->parent = this;

    known_unicast->parent = this;

    l2fsbi_drop->parent = this;

    multicast->parent = this;

    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FsbiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;

    dai_drop->parent = this;

    disposition_mtu_drop->parent = this;

    disposition_oo_o_drops->parent = this;

    disposition_p2mp_stats->parent = this;

    disposition_stat->parent = this;

    disposition_tail_drop->parent = this;

    ipsg_drop->parent = this;

    known_unicast->parent = this;

    mac_move->parent = this;

    multicast_drop->parent = this;

    received_drops->parent = this;

    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnicastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedDrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DaiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpsgDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionOoODrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionP2MpStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacMove' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SequenceNumber' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::L2VpnProtection()
    :
    active{YType::boolean, "active"},
    protected_name{YType::str, "protected-name"},
    protection_configured{YType::enumeration, "protection-configured"},
    protection_name{YType::str, "protection-name"},
    protection_type{YType::enumeration, "protection-type"}
{
    yang_name = "l2vpn-protection"; yang_parent_name = "attachment-circuit";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::~L2VpnProtection()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::has_data() const
{
    return active.is_set
	|| protected_name.is_set
	|| protection_configured.is_set
	|| protection_name.is_set
	|| protection_type.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(protected_name.operation)
	|| is_set(protection_configured.operation)
	|| is_set(protection_name.operation)
	|| is_set(protection_type.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-protection";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnProtection' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (protected_name.is_set || is_set(protected_name.operation)) leaf_name_data.push_back(protected_name.get_name_leafdata());
    if (protection_configured.is_set || is_set(protection_configured.operation)) leaf_name_data.push_back(protection_configured.get_name_leafdata());
    if (protection_name.is_set || is_set(protection_name.operation)) leaf_name_data.push_back(protection_name.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "protected-name")
    {
        protected_name = value;
    }
    if(value_path == "protection-configured")
    {
        protection_configured = value;
    }
    if(value_path == "protection-name")
    {
        protection_name = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PseudoWire()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_remote_down{YType::boolean, "ad-remote-down"},
    admited_bw{YType::uint32, "admited-bw"},
    auto_discovery{YType::boolean, "auto-discovery"},
    backup_active{YType::boolean, "backup-active"},
    backup_force_active{YType::boolean, "backup-force-active"},
    backup_pw{YType::boolean, "backup-pw"},
    bitrate_mismatched{YType::boolean, "bitrate-mismatched"},
    bridge_pw_type_mismatch{YType::boolean, "bridge-pw-type-mismatch"},
    cas_mismatched{YType::boolean, "cas-mismatched"},
    diff_ts_mismatched{YType::boolean, "diff-ts-mismatched"},
    disable_delay{YType::uint8, "disable-delay"},
    disable_never{YType::boolean, "disable-never"},
    evpn_src_acid{YType::uint32, "evpn-src-acid"},
    fe_ctype{YType::enumeration, "fe-ctype"},
    forward_class{YType::uint8, "forward-class"},
    freq_mismatched{YType::boolean, "freq-mismatched"},
    illegal_control_word{YType::boolean, "illegal-control-word"},
    imposed_vlan_id{YType::uint32, "imposed-vlan-id"},
    interworking{YType::enumeration, "interworking"},
    ipv6_local_source_address{YType::str, "ipv6-local-source-address"},
    is_evpnvpws_type{YType::boolean, "is-evpnvpws-type"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    is_multi_segment_pseudowire{YType::boolean, "is-multi-segment-pseudowire"},
    is_partially_programmed{YType::boolean, "is-partially-programmed"},
    is_pwr_type{YType::boolean, "is-pwr-type"},
    is_vfi{YType::boolean, "is-vfi"},
    last_time_status_changed{YType::str, "last-time-status-changed"},
    last_time_status_down{YType::str, "last-time-status-down"},
    ldp_label_advertise_failed{YType::boolean, "ldp-label-advertise-failed"},
    load_balance{YType::enumeration, "load-balance"},
    local_control_word{YType::enumeration, "local-control-word"},
    local_label_failed{YType::boolean, "local-label-failed"},
    local_pseudo_wire_type{YType::enumeration, "local-pseudo-wire-type"},
    local_source_address{YType::str, "local-source-address"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    not_supported_qinq{YType::boolean, "not-supported-qinq"},
    num_ma_cwithdraw_msg_received{YType::uint32, "num-ma-cwithdraw-msg-received"},
    number_ma_cwithdraw_message_sent{YType::uint32, "number-ma-cwithdraw-message-sent"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    payload_bytes_mismatched{YType::boolean, "payload-bytes-mismatched"},
    payload_type_mismatched{YType::boolean, "payload-type-mismatched"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    primary_peer_id{YType::str, "primary-peer-id"},
    primary_pseudo_wire_id{YType::uint64, "primary-pseudo-wire-id"},
    primary_pw{YType::boolean, "primary-pw"},
    protocol{YType::enumeration, "protocol"},
    pseudo_wire_id{YType::uint64, "pseudo-wire-id"},
    pseudo_wire_state{YType::enumeration, "pseudo-wire-state"},
    pseudo_wire_type_mismatched{YType::boolean, "pseudo-wire-type-mismatched"},
    pw_class_name{YType::str, "pw-class-name"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    pw_flow_label_type{YType::enumeration, "pw-flow-label-type"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    pw_redundancy_initial_delay{YType::uint8, "pw-redundancy-initial-delay"},
    pw_redundancy_one_way{YType::boolean, "pw-redundancy-one-way"},
    pw_status_use{YType::boolean, "pw-status-use"},
    pwlsd_rewrite_failed{YType::boolean, "pwlsd-rewrite-failed"},
    remote_control_word{YType::enumeration, "remote-control-word"},
    remote_label_failed{YType::boolean, "remote-label-failed"},
    remote_pseudo_wire_type{YType::enumeration, "remote-pseudo-wire-type"},
    required_bw{YType::uint32, "required-bw"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    rtp_mismatched{YType::boolean, "rtp-mismatched"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    shutdown{YType::boolean, "shutdown"},
    sig_pkts_mismatched{YType::boolean, "sig-pkts-mismatched"},
    ssrc_mismatched{YType::boolean, "ssrc-mismatched"},
    state{YType::enumeration, "state"},
    table_policy_name{YType::str, "table-policy-name"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    time_created{YType::str, "time-created"},
    time_elapsed_creation{YType::str, "time-elapsed-creation"},
    time_elapsed_status_changed{YType::str, "time-elapsed-status-changed"},
    time_elapsed_status_down{YType::uint32, "time-elapsed-status-down"},
    transport_lsp_down{YType::boolean, "transport-lsp-down"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    encapsulation_info(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo>())
	,local_interface(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface>())
	,local_signalling(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling>())
	,p2mp_pw(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw>())
	,peer_id(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId>())
	,preferred_path(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath>())
	,remote_interface(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface>())
	,remote_signalling(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling>())
	,statistics(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics>())
{
    encapsulation_info->parent = this;

    local_interface->parent = this;

    local_signalling->parent = this;

    p2mp_pw->parent = this;

    peer_id->parent = this;

    preferred_path->parent = this;

    remote_interface->parent = this;

    remote_signalling->parent = this;

    statistics->parent = this;

    yang_name = "pseudo-wire"; yang_parent_name = "backup-segment";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::~PseudoWire()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::has_data() const
{
    return ad_method.is_set
	|| ad_remote_down.is_set
	|| admited_bw.is_set
	|| auto_discovery.is_set
	|| backup_active.is_set
	|| backup_force_active.is_set
	|| backup_pw.is_set
	|| bitrate_mismatched.is_set
	|| bridge_pw_type_mismatch.is_set
	|| cas_mismatched.is_set
	|| diff_ts_mismatched.is_set
	|| disable_delay.is_set
	|| disable_never.is_set
	|| evpn_src_acid.is_set
	|| fe_ctype.is_set
	|| forward_class.is_set
	|| freq_mismatched.is_set
	|| illegal_control_word.is_set
	|| imposed_vlan_id.is_set
	|| interworking.is_set
	|| ipv6_local_source_address.is_set
	|| is_evpnvpws_type.is_set
	|| is_flow_label_static.is_set
	|| is_multi_segment_pseudowire.is_set
	|| is_partially_programmed.is_set
	|| is_pwr_type.is_set
	|| is_vfi.is_set
	|| last_time_status_changed.is_set
	|| last_time_status_down.is_set
	|| ldp_label_advertise_failed.is_set
	|| load_balance.is_set
	|| local_control_word.is_set
	|| local_label_failed.is_set
	|| local_pseudo_wire_type.is_set
	|| local_source_address.is_set
	|| mac_limit_oper_down.is_set
	|| mtu_mismatched.is_set
	|| not_supported_qinq.is_set
	|| num_ma_cwithdraw_msg_received.is_set
	|| number_ma_cwithdraw_message_sent.is_set
	|| out_of_memory_state.is_set
	|| payload_bytes_mismatched.is_set
	|| payload_type_mismatched.is_set
	|| preferred_path_disable_fallback.is_set
	|| primary_peer_id.is_set
	|| primary_pseudo_wire_id.is_set
	|| primary_pw.is_set
	|| protocol.is_set
	|| pseudo_wire_id.is_set
	|| pseudo_wire_state.is_set
	|| pseudo_wire_type_mismatched.is_set
	|| pw_class_name.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| pw_flow_label_type.is_set
	|| pw_flow_label_type_cfg.is_set
	|| pw_redundancy_initial_delay.is_set
	|| pw_redundancy_one_way.is_set
	|| pw_status_use.is_set
	|| pwlsd_rewrite_failed.is_set
	|| remote_control_word.is_set
	|| remote_label_failed.is_set
	|| remote_pseudo_wire_type.is_set
	|| required_bw.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| rtp_mismatched.is_set
	|| sequencing_type.is_set
	|| shutdown.is_set
	|| sig_pkts_mismatched.is_set
	|| ssrc_mismatched.is_set
	|| state.is_set
	|| table_policy_name.is_set
	|| tag_rewrite.is_set
	|| time_created.is_set
	|| time_elapsed_creation.is_set
	|| time_elapsed_status_changed.is_set
	|| time_elapsed_status_down.is_set
	|| transport_lsp_down.is_set
	|| xconnect_id.is_set
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_interface !=  nullptr && local_interface->has_data())
	|| (local_signalling !=  nullptr && local_signalling->has_data())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_data())
	|| (peer_id !=  nullptr && peer_id->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (remote_interface !=  nullptr && remote_interface->has_data())
	|| (remote_signalling !=  nullptr && remote_signalling->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::has_operation() const
{
    return is_set(operation)
	|| is_set(ad_method.operation)
	|| is_set(ad_remote_down.operation)
	|| is_set(admited_bw.operation)
	|| is_set(auto_discovery.operation)
	|| is_set(backup_active.operation)
	|| is_set(backup_force_active.operation)
	|| is_set(backup_pw.operation)
	|| is_set(bitrate_mismatched.operation)
	|| is_set(bridge_pw_type_mismatch.operation)
	|| is_set(cas_mismatched.operation)
	|| is_set(diff_ts_mismatched.operation)
	|| is_set(disable_delay.operation)
	|| is_set(disable_never.operation)
	|| is_set(evpn_src_acid.operation)
	|| is_set(fe_ctype.operation)
	|| is_set(forward_class.operation)
	|| is_set(freq_mismatched.operation)
	|| is_set(illegal_control_word.operation)
	|| is_set(imposed_vlan_id.operation)
	|| is_set(interworking.operation)
	|| is_set(ipv6_local_source_address.operation)
	|| is_set(is_evpnvpws_type.operation)
	|| is_set(is_flow_label_static.operation)
	|| is_set(is_multi_segment_pseudowire.operation)
	|| is_set(is_partially_programmed.operation)
	|| is_set(is_pwr_type.operation)
	|| is_set(is_vfi.operation)
	|| is_set(last_time_status_changed.operation)
	|| is_set(last_time_status_down.operation)
	|| is_set(ldp_label_advertise_failed.operation)
	|| is_set(load_balance.operation)
	|| is_set(local_control_word.operation)
	|| is_set(local_label_failed.operation)
	|| is_set(local_pseudo_wire_type.operation)
	|| is_set(local_source_address.operation)
	|| is_set(mac_limit_oper_down.operation)
	|| is_set(mtu_mismatched.operation)
	|| is_set(not_supported_qinq.operation)
	|| is_set(num_ma_cwithdraw_msg_received.operation)
	|| is_set(number_ma_cwithdraw_message_sent.operation)
	|| is_set(out_of_memory_state.operation)
	|| is_set(payload_bytes_mismatched.operation)
	|| is_set(payload_type_mismatched.operation)
	|| is_set(preferred_path_disable_fallback.operation)
	|| is_set(primary_peer_id.operation)
	|| is_set(primary_pseudo_wire_id.operation)
	|| is_set(primary_pw.operation)
	|| is_set(protocol.operation)
	|| is_set(pseudo_wire_id.operation)
	|| is_set(pseudo_wire_state.operation)
	|| is_set(pseudo_wire_type_mismatched.operation)
	|| is_set(pw_class_name.operation)
	|| is_set(pw_flow_label_code17_disabled.operation)
	|| is_set(pw_flow_label_type.operation)
	|| is_set(pw_flow_label_type_cfg.operation)
	|| is_set(pw_redundancy_initial_delay.operation)
	|| is_set(pw_redundancy_one_way.operation)
	|| is_set(pw_status_use.operation)
	|| is_set(pwlsd_rewrite_failed.operation)
	|| is_set(remote_control_word.operation)
	|| is_set(remote_label_failed.operation)
	|| is_set(remote_pseudo_wire_type.operation)
	|| is_set(required_bw.operation)
	|| is_set(resync_enabled.operation)
	|| is_set(resync_threshold.operation)
	|| is_set(rtp_mismatched.operation)
	|| is_set(sequencing_type.operation)
	|| is_set(shutdown.operation)
	|| is_set(sig_pkts_mismatched.operation)
	|| is_set(ssrc_mismatched.operation)
	|| is_set(state.operation)
	|| is_set(table_policy_name.operation)
	|| is_set(tag_rewrite.operation)
	|| is_set(time_created.operation)
	|| is_set(time_elapsed_creation.operation)
	|| is_set(time_elapsed_status_changed.operation)
	|| is_set(time_elapsed_status_down.operation)
	|| is_set(transport_lsp_down.operation)
	|| is_set(xconnect_id.operation)
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_interface !=  nullptr && local_interface->has_operation())
	|| (local_signalling !=  nullptr && local_signalling->has_operation())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_operation())
	|| (peer_id !=  nullptr && peer_id->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (remote_interface !=  nullptr && remote_interface->has_operation())
	|| (remote_signalling !=  nullptr && remote_signalling->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoWire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.operation)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_remote_down.is_set || is_set(ad_remote_down.operation)) leaf_name_data.push_back(ad_remote_down.get_name_leafdata());
    if (admited_bw.is_set || is_set(admited_bw.operation)) leaf_name_data.push_back(admited_bw.get_name_leafdata());
    if (auto_discovery.is_set || is_set(auto_discovery.operation)) leaf_name_data.push_back(auto_discovery.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_force_active.is_set || is_set(backup_force_active.operation)) leaf_name_data.push_back(backup_force_active.get_name_leafdata());
    if (backup_pw.is_set || is_set(backup_pw.operation)) leaf_name_data.push_back(backup_pw.get_name_leafdata());
    if (bitrate_mismatched.is_set || is_set(bitrate_mismatched.operation)) leaf_name_data.push_back(bitrate_mismatched.get_name_leafdata());
    if (bridge_pw_type_mismatch.is_set || is_set(bridge_pw_type_mismatch.operation)) leaf_name_data.push_back(bridge_pw_type_mismatch.get_name_leafdata());
    if (cas_mismatched.is_set || is_set(cas_mismatched.operation)) leaf_name_data.push_back(cas_mismatched.get_name_leafdata());
    if (diff_ts_mismatched.is_set || is_set(diff_ts_mismatched.operation)) leaf_name_data.push_back(diff_ts_mismatched.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.operation)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.operation)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (evpn_src_acid.is_set || is_set(evpn_src_acid.operation)) leaf_name_data.push_back(evpn_src_acid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (freq_mismatched.is_set || is_set(freq_mismatched.operation)) leaf_name_data.push_back(freq_mismatched.get_name_leafdata());
    if (illegal_control_word.is_set || is_set(illegal_control_word.operation)) leaf_name_data.push_back(illegal_control_word.get_name_leafdata());
    if (imposed_vlan_id.is_set || is_set(imposed_vlan_id.operation)) leaf_name_data.push_back(imposed_vlan_id.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (ipv6_local_source_address.is_set || is_set(ipv6_local_source_address.operation)) leaf_name_data.push_back(ipv6_local_source_address.get_name_leafdata());
    if (is_evpnvpws_type.is_set || is_set(is_evpnvpws_type.operation)) leaf_name_data.push_back(is_evpnvpws_type.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.operation)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (is_multi_segment_pseudowire.is_set || is_set(is_multi_segment_pseudowire.operation)) leaf_name_data.push_back(is_multi_segment_pseudowire.get_name_leafdata());
    if (is_partially_programmed.is_set || is_set(is_partially_programmed.operation)) leaf_name_data.push_back(is_partially_programmed.get_name_leafdata());
    if (is_pwr_type.is_set || is_set(is_pwr_type.operation)) leaf_name_data.push_back(is_pwr_type.get_name_leafdata());
    if (is_vfi.is_set || is_set(is_vfi.operation)) leaf_name_data.push_back(is_vfi.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.operation)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (last_time_status_down.is_set || is_set(last_time_status_down.operation)) leaf_name_data.push_back(last_time_status_down.get_name_leafdata());
    if (ldp_label_advertise_failed.is_set || is_set(ldp_label_advertise_failed.operation)) leaf_name_data.push_back(ldp_label_advertise_failed.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.operation)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (local_control_word.is_set || is_set(local_control_word.operation)) leaf_name_data.push_back(local_control_word.get_name_leafdata());
    if (local_label_failed.is_set || is_set(local_label_failed.operation)) leaf_name_data.push_back(local_label_failed.get_name_leafdata());
    if (local_pseudo_wire_type.is_set || is_set(local_pseudo_wire_type.operation)) leaf_name_data.push_back(local_pseudo_wire_type.get_name_leafdata());
    if (local_source_address.is_set || is_set(local_source_address.operation)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.operation)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.operation)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (not_supported_qinq.is_set || is_set(not_supported_qinq.operation)) leaf_name_data.push_back(not_supported_qinq.get_name_leafdata());
    if (num_ma_cwithdraw_msg_received.is_set || is_set(num_ma_cwithdraw_msg_received.operation)) leaf_name_data.push_back(num_ma_cwithdraw_msg_received.get_name_leafdata());
    if (number_ma_cwithdraw_message_sent.is_set || is_set(number_ma_cwithdraw_message_sent.operation)) leaf_name_data.push_back(number_ma_cwithdraw_message_sent.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.operation)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (payload_bytes_mismatched.is_set || is_set(payload_bytes_mismatched.operation)) leaf_name_data.push_back(payload_bytes_mismatched.get_name_leafdata());
    if (payload_type_mismatched.is_set || is_set(payload_type_mismatched.operation)) leaf_name_data.push_back(payload_type_mismatched.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.operation)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (primary_peer_id.is_set || is_set(primary_peer_id.operation)) leaf_name_data.push_back(primary_peer_id.get_name_leafdata());
    if (primary_pseudo_wire_id.is_set || is_set(primary_pseudo_wire_id.operation)) leaf_name_data.push_back(primary_pseudo_wire_id.get_name_leafdata());
    if (primary_pw.is_set || is_set(primary_pw.operation)) leaf_name_data.push_back(primary_pw.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pseudo_wire_id.is_set || is_set(pseudo_wire_id.operation)) leaf_name_data.push_back(pseudo_wire_id.get_name_leafdata());
    if (pseudo_wire_state.is_set || is_set(pseudo_wire_state.operation)) leaf_name_data.push_back(pseudo_wire_state.get_name_leafdata());
    if (pseudo_wire_type_mismatched.is_set || is_set(pseudo_wire_type_mismatched.operation)) leaf_name_data.push_back(pseudo_wire_type_mismatched.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.operation)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.operation)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (pw_flow_label_type.is_set || is_set(pw_flow_label_type.operation)) leaf_name_data.push_back(pw_flow_label_type.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.operation)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_redundancy_initial_delay.is_set || is_set(pw_redundancy_initial_delay.operation)) leaf_name_data.push_back(pw_redundancy_initial_delay.get_name_leafdata());
    if (pw_redundancy_one_way.is_set || is_set(pw_redundancy_one_way.operation)) leaf_name_data.push_back(pw_redundancy_one_way.get_name_leafdata());
    if (pw_status_use.is_set || is_set(pw_status_use.operation)) leaf_name_data.push_back(pw_status_use.get_name_leafdata());
    if (pwlsd_rewrite_failed.is_set || is_set(pwlsd_rewrite_failed.operation)) leaf_name_data.push_back(pwlsd_rewrite_failed.get_name_leafdata());
    if (remote_control_word.is_set || is_set(remote_control_word.operation)) leaf_name_data.push_back(remote_control_word.get_name_leafdata());
    if (remote_label_failed.is_set || is_set(remote_label_failed.operation)) leaf_name_data.push_back(remote_label_failed.get_name_leafdata());
    if (remote_pseudo_wire_type.is_set || is_set(remote_pseudo_wire_type.operation)) leaf_name_data.push_back(remote_pseudo_wire_type.get_name_leafdata());
    if (required_bw.is_set || is_set(required_bw.operation)) leaf_name_data.push_back(required_bw.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.operation)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.operation)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (rtp_mismatched.is_set || is_set(rtp_mismatched.operation)) leaf_name_data.push_back(rtp_mismatched.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.operation)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (sig_pkts_mismatched.is_set || is_set(sig_pkts_mismatched.operation)) leaf_name_data.push_back(sig_pkts_mismatched.get_name_leafdata());
    if (ssrc_mismatched.is_set || is_set(ssrc_mismatched.operation)) leaf_name_data.push_back(ssrc_mismatched.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.operation)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.operation)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.operation)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.operation)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.operation)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (time_elapsed_status_down.is_set || is_set(time_elapsed_status_down.operation)) leaf_name_data.push_back(time_elapsed_status_down.get_name_leafdata());
    if (transport_lsp_down.is_set || is_set(transport_lsp_down.operation)) leaf_name_data.push_back(transport_lsp_down.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info == nullptr)
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo>();
        }
        return encapsulation_info;
    }

    if(child_yang_name == "local-interface")
    {
        if(local_interface == nullptr)
        {
            local_interface = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface>();
        }
        return local_interface;
    }

    if(child_yang_name == "local-signalling")
    {
        if(local_signalling == nullptr)
        {
            local_signalling = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling>();
        }
        return local_signalling;
    }

    if(child_yang_name == "p2mp-pw")
    {
        if(p2mp_pw == nullptr)
        {
            p2mp_pw = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw>();
        }
        return p2mp_pw;
    }

    if(child_yang_name == "peer-id")
    {
        if(peer_id == nullptr)
        {
            peer_id = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId>();
        }
        return peer_id;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "remote-interface")
    {
        if(remote_interface == nullptr)
        {
            remote_interface = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface>();
        }
        return remote_interface;
    }

    if(child_yang_name == "remote-signalling")
    {
        if(remote_signalling == nullptr)
        {
            remote_signalling = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling>();
        }
        return remote_signalling;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation_info != nullptr)
    {
        children["encapsulation-info"] = encapsulation_info;
    }

    if(local_interface != nullptr)
    {
        children["local-interface"] = local_interface;
    }

    if(local_signalling != nullptr)
    {
        children["local-signalling"] = local_signalling;
    }

    if(p2mp_pw != nullptr)
    {
        children["p2mp-pw"] = p2mp_pw;
    }

    if(peer_id != nullptr)
    {
        children["peer-id"] = peer_id;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(remote_interface != nullptr)
    {
        children["remote-interface"] = remote_interface;
    }

    if(remote_signalling != nullptr)
    {
        children["remote-signalling"] = remote_signalling;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down = value;
    }
    if(value_path == "admited-bw")
    {
        admited_bw = value;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery = value;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active = value;
    }
    if(value_path == "backup-pw")
    {
        backup_pw = value;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched = value;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch = value;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched = value;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched = value;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid = value;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched = value;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word = value;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address = value;
    }
    if(value_path == "is-evpnvpws-type")
    {
        is_evpnvpws_type = value;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire = value;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed = value;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type = value;
    }
    if(value_path == "is-vfi")
    {
        is_vfi = value;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down = value;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed = value;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
    }
    if(value_path == "local-control-word")
    {
        local_control_word = value;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed = value;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type = value;
    }
    if(value_path == "local-source-address")
    {
        local_source_address = value;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq = value;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received = value;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent = value;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched = value;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched = value;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id = value;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id = value;
    }
    if(value_path == "primary-pw")
    {
        primary_pw = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id = value;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state = value;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched = value;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type = value;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay = value;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way = value;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use = value;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed = value;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word = value;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed = value;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type = value;
    }
    if(value_path == "required-bw")
    {
        required_bw = value;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched = value;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched = value;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
    }
    if(value_path == "time-created")
    {
        time_created = value;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down = value;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::PeerId()
    :
    internal_label{YType::uint32, "internal-label"},
    ipv4_peer_id{YType::str, "ipv4-peer-id"},
    ipv6_peer_id{YType::str, "ipv6-peer-id"},
    type{YType::enumeration, "type"}
{
    yang_name = "peer-id"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::~PeerId()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::has_data() const
{
    return internal_label.is_set
	|| ipv4_peer_id.is_set
	|| ipv6_peer_id.is_set
	|| type.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(ipv4_peer_id.operation)
	|| is_set(ipv6_peer_id.operation)
	|| is_set(type.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerId' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ipv4_peer_id.is_set || is_set(ipv4_peer_id.operation)) leaf_name_data.push_back(ipv4_peer_id.get_name_leafdata());
    if (ipv6_peer_id.is_set || is_set(ipv6_peer_id.operation)) leaf_name_data.push_back(ipv6_peer_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id = value;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    atom(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom>())
	,l2tpv3(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3>())
{
    atom->parent = this;

    l2tpv3->parent = this;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (atom !=  nullptr && atom->has_data())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| (atom !=  nullptr && atom->has_operation())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncapsulationInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom>();
        }
        return atom;
    }

    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 == nullptr)
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3>();
        }
        return l2tpv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    if(l2tpv3 != nullptr)
    {
        children["l2tpv3"] = l2tpv3;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::Atom()
    :
    is_pseudowire_headend{YType::boolean, "is-pseudowire-headend"},
    is_sai_itype2{YType::boolean, "is-sai-itype2"},
    is_tai_itype2{YType::boolean, "is-tai-itype2"},
    ldp_label_advertisment_failed{YType::boolean, "ldp-label-advertisment-failed"},
    local_c_ctype{YType::uint8, "local-c-ctype"},
    local_ceid{YType::uint32, "local-ceid"},
    local_cv_type{YType::uint8, "local-cv-type"},
    local_group_id{YType::uint32, "local-group-id"},
    local_label{YType::uint32, "local-label"},
    local_ldp_id{YType::str, "local-ldp-id"},
    local_saii_gbl_id{YType::uint32, "local-saii-gbl-id"},
    local_saiiac_id{YType::uint32, "local-saiiac-id"},
    local_taii_gbl_id{YType::uint32, "local-taii-gbl-id"},
    local_taiiac_id{YType::uint32, "local-taiiac-id"},
    local_veid{YType::uint32, "local-veid"},
    lsd_rewrite_failed{YType::boolean, "lsd-rewrite-failed"},
    rem_saii{YType::str, "rem-saii"},
    rem_saii_gbl_id{YType::uint32, "rem-saii-gbl-id"},
    rem_saiiac_id{YType::uint32, "rem-saiiac-id"},
    rem_taii{YType::str, "rem-taii"},
    rem_taii_gbl_id{YType::uint32, "rem-taii-gbl-id"},
    rem_taiiac_id{YType::uint32, "rem-taiiac-id"},
    remote_c_ctype{YType::uint8, "remote-c-ctype"},
    remote_ceid{YType::uint32, "remote-ceid"},
    remote_cv_type{YType::uint8, "remote-cv-type"},
    remote_group_id{YType::uint32, "remote-group-id"},
    remote_label{YType::uint32, "remote-label"},
    remote_ldp_id{YType::str, "remote-ldp-id"},
    remote_source_address{YType::str, "remote-source-address"},
    remote_veid{YType::uint32, "remote-veid"},
    saii{YType::str, "saii"},
    source_address{YType::str, "source-address"},
    taii{YType::str, "taii"}
    	,
    local_agi(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi>())
	,multi_segment_pseudowire_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>())
	,remote_agi(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi>())
{
    local_agi->parent = this;

    multi_segment_pseudowire_stats->parent = this;

    remote_agi->parent = this;

    yang_name = "atom"; yang_parent_name = "encapsulation-info";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::~Atom()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::has_data() const
{
    return is_pseudowire_headend.is_set
	|| is_sai_itype2.is_set
	|| is_tai_itype2.is_set
	|| ldp_label_advertisment_failed.is_set
	|| local_c_ctype.is_set
	|| local_ceid.is_set
	|| local_cv_type.is_set
	|| local_group_id.is_set
	|| local_label.is_set
	|| local_ldp_id.is_set
	|| local_saii_gbl_id.is_set
	|| local_saiiac_id.is_set
	|| local_taii_gbl_id.is_set
	|| local_taiiac_id.is_set
	|| local_veid.is_set
	|| lsd_rewrite_failed.is_set
	|| rem_saii.is_set
	|| rem_saii_gbl_id.is_set
	|| rem_saiiac_id.is_set
	|| rem_taii.is_set
	|| rem_taii_gbl_id.is_set
	|| rem_taiiac_id.is_set
	|| remote_c_ctype.is_set
	|| remote_ceid.is_set
	|| remote_cv_type.is_set
	|| remote_group_id.is_set
	|| remote_label.is_set
	|| remote_ldp_id.is_set
	|| remote_source_address.is_set
	|| remote_veid.is_set
	|| saii.is_set
	|| source_address.is_set
	|| taii.is_set
	|| (local_agi !=  nullptr && local_agi->has_data())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_data())
	|| (remote_agi !=  nullptr && remote_agi->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(is_pseudowire_headend.operation)
	|| is_set(is_sai_itype2.operation)
	|| is_set(is_tai_itype2.operation)
	|| is_set(ldp_label_advertisment_failed.operation)
	|| is_set(local_c_ctype.operation)
	|| is_set(local_ceid.operation)
	|| is_set(local_cv_type.operation)
	|| is_set(local_group_id.operation)
	|| is_set(local_label.operation)
	|| is_set(local_ldp_id.operation)
	|| is_set(local_saii_gbl_id.operation)
	|| is_set(local_saiiac_id.operation)
	|| is_set(local_taii_gbl_id.operation)
	|| is_set(local_taiiac_id.operation)
	|| is_set(local_veid.operation)
	|| is_set(lsd_rewrite_failed.operation)
	|| is_set(rem_saii.operation)
	|| is_set(rem_saii_gbl_id.operation)
	|| is_set(rem_saiiac_id.operation)
	|| is_set(rem_taii.operation)
	|| is_set(rem_taii_gbl_id.operation)
	|| is_set(rem_taiiac_id.operation)
	|| is_set(remote_c_ctype.operation)
	|| is_set(remote_ceid.operation)
	|| is_set(remote_cv_type.operation)
	|| is_set(remote_group_id.operation)
	|| is_set(remote_label.operation)
	|| is_set(remote_ldp_id.operation)
	|| is_set(remote_source_address.operation)
	|| is_set(remote_veid.operation)
	|| is_set(saii.operation)
	|| is_set(source_address.operation)
	|| is_set(taii.operation)
	|| (local_agi !=  nullptr && local_agi->has_operation())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_operation())
	|| (remote_agi !=  nullptr && remote_agi->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pseudowire_headend.is_set || is_set(is_pseudowire_headend.operation)) leaf_name_data.push_back(is_pseudowire_headend.get_name_leafdata());
    if (is_sai_itype2.is_set || is_set(is_sai_itype2.operation)) leaf_name_data.push_back(is_sai_itype2.get_name_leafdata());
    if (is_tai_itype2.is_set || is_set(is_tai_itype2.operation)) leaf_name_data.push_back(is_tai_itype2.get_name_leafdata());
    if (ldp_label_advertisment_failed.is_set || is_set(ldp_label_advertisment_failed.operation)) leaf_name_data.push_back(ldp_label_advertisment_failed.get_name_leafdata());
    if (local_c_ctype.is_set || is_set(local_c_ctype.operation)) leaf_name_data.push_back(local_c_ctype.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.operation)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (local_cv_type.is_set || is_set(local_cv_type.operation)) leaf_name_data.push_back(local_cv_type.get_name_leafdata());
    if (local_group_id.is_set || is_set(local_group_id.operation)) leaf_name_data.push_back(local_group_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_ldp_id.is_set || is_set(local_ldp_id.operation)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (local_saii_gbl_id.is_set || is_set(local_saii_gbl_id.operation)) leaf_name_data.push_back(local_saii_gbl_id.get_name_leafdata());
    if (local_saiiac_id.is_set || is_set(local_saiiac_id.operation)) leaf_name_data.push_back(local_saiiac_id.get_name_leafdata());
    if (local_taii_gbl_id.is_set || is_set(local_taii_gbl_id.operation)) leaf_name_data.push_back(local_taii_gbl_id.get_name_leafdata());
    if (local_taiiac_id.is_set || is_set(local_taiiac_id.operation)) leaf_name_data.push_back(local_taiiac_id.get_name_leafdata());
    if (local_veid.is_set || is_set(local_veid.operation)) leaf_name_data.push_back(local_veid.get_name_leafdata());
    if (lsd_rewrite_failed.is_set || is_set(lsd_rewrite_failed.operation)) leaf_name_data.push_back(lsd_rewrite_failed.get_name_leafdata());
    if (rem_saii.is_set || is_set(rem_saii.operation)) leaf_name_data.push_back(rem_saii.get_name_leafdata());
    if (rem_saii_gbl_id.is_set || is_set(rem_saii_gbl_id.operation)) leaf_name_data.push_back(rem_saii_gbl_id.get_name_leafdata());
    if (rem_saiiac_id.is_set || is_set(rem_saiiac_id.operation)) leaf_name_data.push_back(rem_saiiac_id.get_name_leafdata());
    if (rem_taii.is_set || is_set(rem_taii.operation)) leaf_name_data.push_back(rem_taii.get_name_leafdata());
    if (rem_taii_gbl_id.is_set || is_set(rem_taii_gbl_id.operation)) leaf_name_data.push_back(rem_taii_gbl_id.get_name_leafdata());
    if (rem_taiiac_id.is_set || is_set(rem_taiiac_id.operation)) leaf_name_data.push_back(rem_taiiac_id.get_name_leafdata());
    if (remote_c_ctype.is_set || is_set(remote_c_ctype.operation)) leaf_name_data.push_back(remote_c_ctype.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.operation)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (remote_cv_type.is_set || is_set(remote_cv_type.operation)) leaf_name_data.push_back(remote_cv_type.get_name_leafdata());
    if (remote_group_id.is_set || is_set(remote_group_id.operation)) leaf_name_data.push_back(remote_group_id.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_ldp_id.is_set || is_set(remote_ldp_id.operation)) leaf_name_data.push_back(remote_ldp_id.get_name_leafdata());
    if (remote_source_address.is_set || is_set(remote_source_address.operation)) leaf_name_data.push_back(remote_source_address.get_name_leafdata());
    if (remote_veid.is_set || is_set(remote_veid.operation)) leaf_name_data.push_back(remote_veid.get_name_leafdata());
    if (saii.is_set || is_set(saii.operation)) leaf_name_data.push_back(saii.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (taii.is_set || is_set(taii.operation)) leaf_name_data.push_back(taii.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-agi")
    {
        if(local_agi == nullptr)
        {
            local_agi = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi>();
        }
        return local_agi;
    }

    if(child_yang_name == "multi-segment-pseudowire-stats")
    {
        if(multi_segment_pseudowire_stats == nullptr)
        {
            multi_segment_pseudowire_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>();
        }
        return multi_segment_pseudowire_stats;
    }

    if(child_yang_name == "remote-agi")
    {
        if(remote_agi == nullptr)
        {
            remote_agi = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi>();
        }
        return remote_agi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_agi != nullptr)
    {
        children["local-agi"] = local_agi;
    }

    if(multi_segment_pseudowire_stats != nullptr)
    {
        children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
    }

    if(remote_agi != nullptr)
    {
        children["remote-agi"] = remote_agi;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend = value;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2 = value;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2 = value;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed = value;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype = value;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type = value;
    }
    if(value_path == "local-group-id")
    {
        local_group_id = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id = value;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id = value;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id = value;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id = value;
    }
    if(value_path == "local-veid")
    {
        local_veid = value;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed = value;
    }
    if(value_path == "rem-saii")
    {
        rem_saii = value;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id = value;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id = value;
    }
    if(value_path == "rem-taii")
    {
        rem_taii = value;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id = value;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id = value;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype = value;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type = value;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id = value;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address = value;
    }
    if(value_path == "remote-veid")
    {
        remote_veid = value;
    }
    if(value_path == "saii")
    {
        saii = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "taii")
    {
        taii = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::LocalAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr>())
{
    auto_->parent = this;

    two_byte_as->parent = this;

    v4_addr->parent = this;

    yang_name = "local-agi"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::~LocalAgi()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-agi";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAgi' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::RemoteAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>())
{
    auto_->parent = this;

    two_byte_as->parent = this;

    v4_addr->parent = this;

    yang_name = "remote-agi"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::~RemoteAgi()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-agi";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAgi' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::MultiSegmentPseudowireStats()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"}
{
    yang_name = "multi-segment-pseudowire-stats"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::~MultiSegmentPseudowireStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_data() const
{
    return received_bytes.is_set
	|| received_packets.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_operation() const
{
    return is_set(operation)
	|| is_set(received_bytes.operation)
	|| is_set(received_packets.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-segment-pseudowire-stats";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiSegmentPseudowireStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.operation)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv6_source_address{YType::str, "ipv6-source-address"},
    l2tp_class_name{YType::str, "l2tp-class-name"},
    local_cookie_high_value{YType::uint32, "local-cookie-high-value"},
    local_cookie_low_value{YType::uint32, "local-cookie-low-value"},
    local_cookie_size{YType::uint8, "local-cookie-size"},
    local_secondary_cookie_high_value{YType::uint32, "local-secondary-cookie-high-value"},
    local_secondary_cookie_low_value{YType::uint32, "local-secondary-cookie-low-value"},
    local_secondary_cookie_size{YType::uint8, "local-secondary-cookie-size"},
    local_session_id{YType::uint32, "local-session-id"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    remote_circuit_status_up{YType::boolean, "remote-circuit-status-up"},
    remote_cookie_high_value{YType::uint32, "remote-cookie-high-value"},
    remote_cookie_low_value{YType::uint32, "remote-cookie-low-value"},
    remote_cookie_size{YType::uint8, "remote-cookie-size"},
    remote_session_id{YType::uint32, "remote-session-id"},
    tos{YType::uint8, "tos"},
    tos_mode{YType::enumeration, "tos-mode"},
    ttl{YType::uint8, "ttl"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::has_data() const
{
    return dont_fragment_bit.is_set
	|| ipv4_source_address.is_set
	|| ipv6_source_address.is_set
	|| l2tp_class_name.is_set
	|| local_cookie_high_value.is_set
	|| local_cookie_low_value.is_set
	|| local_cookie_size.is_set
	|| local_secondary_cookie_high_value.is_set
	|| local_secondary_cookie_low_value.is_set
	|| local_secondary_cookie_size.is_set
	|| local_session_id.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| remote_circuit_status_up.is_set
	|| remote_cookie_high_value.is_set
	|| remote_cookie_low_value.is_set
	|| remote_cookie_size.is_set
	|| remote_session_id.is_set
	|| tos.is_set
	|| tos_mode.is_set
	|| ttl.is_set
	|| tunnel_state.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(operation)
	|| is_set(dont_fragment_bit.operation)
	|| is_set(ipv4_source_address.operation)
	|| is_set(ipv6_source_address.operation)
	|| is_set(l2tp_class_name.operation)
	|| is_set(local_cookie_high_value.operation)
	|| is_set(local_cookie_low_value.operation)
	|| is_set(local_cookie_size.operation)
	|| is_set(local_secondary_cookie_high_value.operation)
	|| is_set(local_secondary_cookie_low_value.operation)
	|| is_set(local_secondary_cookie_size.operation)
	|| is_set(local_session_id.operation)
	|| is_set(path_mtu_enabled.operation)
	|| is_set(path_mtu_max_value.operation)
	|| is_set(remote_circuit_status_up.operation)
	|| is_set(remote_cookie_high_value.operation)
	|| is_set(remote_cookie_low_value.operation)
	|| is_set(remote_cookie_size.operation)
	|| is_set(remote_session_id.operation)
	|| is_set(tos.operation)
	|| is_set(tos_mode.operation)
	|| is_set(ttl.operation)
	|| is_set(tunnel_state.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.operation)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.operation)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv6_source_address.is_set || is_set(ipv6_source_address.operation)) leaf_name_data.push_back(ipv6_source_address.get_name_leafdata());
    if (l2tp_class_name.is_set || is_set(l2tp_class_name.operation)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (local_cookie_high_value.is_set || is_set(local_cookie_high_value.operation)) leaf_name_data.push_back(local_cookie_high_value.get_name_leafdata());
    if (local_cookie_low_value.is_set || is_set(local_cookie_low_value.operation)) leaf_name_data.push_back(local_cookie_low_value.get_name_leafdata());
    if (local_cookie_size.is_set || is_set(local_cookie_size.operation)) leaf_name_data.push_back(local_cookie_size.get_name_leafdata());
    if (local_secondary_cookie_high_value.is_set || is_set(local_secondary_cookie_high_value.operation)) leaf_name_data.push_back(local_secondary_cookie_high_value.get_name_leafdata());
    if (local_secondary_cookie_low_value.is_set || is_set(local_secondary_cookie_low_value.operation)) leaf_name_data.push_back(local_secondary_cookie_low_value.get_name_leafdata());
    if (local_secondary_cookie_size.is_set || is_set(local_secondary_cookie_size.operation)) leaf_name_data.push_back(local_secondary_cookie_size.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.operation)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.operation)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.operation)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (remote_circuit_status_up.is_set || is_set(remote_circuit_status_up.operation)) leaf_name_data.push_back(remote_circuit_status_up.get_name_leafdata());
    if (remote_cookie_high_value.is_set || is_set(remote_cookie_high_value.operation)) leaf_name_data.push_back(remote_cookie_high_value.get_name_leafdata());
    if (remote_cookie_low_value.is_set || is_set(remote_cookie_low_value.operation)) leaf_name_data.push_back(remote_cookie_low_value.get_name_leafdata());
    if (remote_cookie_size.is_set || is_set(remote_cookie_size.operation)) leaf_name_data.push_back(remote_cookie_size.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.operation)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.operation)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address = value;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value = value;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value = value;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size = value;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value = value;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value = value;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size = value;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up = value;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value = value;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value = value;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size = value;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::LocalInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "local-interface"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::~LocalInterface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(payload_bytes.operation)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalInterface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan>())
{
    atm->parent = this;

    ethernet->parent = this;

    fr->parent = this;

    pseudowire_ether->parent = this;

    pseudowire_iw->parent = this;

    tdm->parent = this;

    vlan->parent = this;

    yang_name = "parameters"; yang_parent_name = "local-interface";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameters' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "ethernet"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    rewrite_tag{YType::uint16, "rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "vlan"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(outer_tag.operation)
	|| is_set(rewrite_tag.operation)
	|| is_set(simple_efp.operation)
	|| is_set(vlan_rewrite_tag.operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.operation)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.operation)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    auto rewrite_tag_name_datas = rewrite_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rewrite_tag_name_datas.begin(), rewrite_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "rewrite-tag")
    {
        rewrite_tag.append(value);
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "vlan-range"; yang_parent_name = "vlan";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tdm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdmOptions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::RemoteInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "remote-interface"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::~RemoteInterface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(payload_bytes.operation)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteInterface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan>())
{
    atm->parent = this;

    ethernet->parent = this;

    fr->parent = this;

    pseudowire_ether->parent = this;

    pseudowire_iw->parent = this;

    tdm->parent = this;

    vlan->parent = this;

    yang_name = "parameters"; yang_parent_name = "remote-interface";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameters' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "ethernet"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    rewrite_tag{YType::uint16, "rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "vlan"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(outer_tag.operation)
	|| is_set(rewrite_tag.operation)
	|| is_set(simple_efp.operation)
	|| is_set(vlan_rewrite_tag.operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.operation)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.operation)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    auto rewrite_tag_name_datas = rewrite_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rewrite_tag_name_datas.begin(), rewrite_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "rewrite-tag")
    {
        rewrite_tag.append(value);
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "vlan-range"; yang_parent_name = "vlan";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tdm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdmOptions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::PreferredPath()
    :
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    option{YType::enumeration, "option"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
{
    yang_name = "preferred-path"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::has_data() const
{
    return ip_tunnel_interface_number.is_set
	|| next_hop_ip.is_set
	|| option.is_set
	|| te_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_tunnel_interface_number.operation)
	|| is_set(next_hop_ip.operation)
	|| is_set(option.operation)
	|| is_set(te_tunnel_interface_number.operation)
	|| is_set(tp_tunnel_interface_number.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreferredPath' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.operation)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.operation)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.operation)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::LocalSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "local-signalling"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::~LocalSignalling()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pw_status.operation)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-signalling";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalSignalling' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.operation)) leaf_name_data.push_back(pw_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "status-tlv"; yang_parent_name = "local-signalling";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatusTlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "tlv"; yang_parent_name = "local-signalling";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "remote-signalling"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pw_status.operation)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteSignalling' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.operation)) leaf_name_data.push_back(pw_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "status-tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatusTlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;

    impostion_stats->parent = this;

    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::~Statistics()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;

    imposition_mtu_drop->parent = this;

    imposition_stat->parent = this;

    impostion_tail_drop->parent = this;

    known_unicast->parent = this;

    l2fsbi_drop->parent = this;

    multicast->parent = this;

    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FsbiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;

    dai_drop->parent = this;

    disposition_mtu_drop->parent = this;

    disposition_oo_o_drops->parent = this;

    disposition_p2mp_stats->parent = this;

    disposition_stat->parent = this;

    disposition_tail_drop->parent = this;

    ipsg_drop->parent = this;

    known_unicast->parent = this;

    mac_move->parent = this;

    multicast_drop->parent = this;

    received_drops->parent = this;

    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnicastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedDrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DaiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpsgDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionOoODrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionP2MpStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacMove' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SequenceNumber' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::P2MpPw()
    :
    local_available{YType::boolean, "local-available"},
    local_extended_tunnel_id{YType::str, "local-extended-tunnel-id"},
    local_flags{YType::uint8, "local-flags"},
    local_label{YType::uint32, "local-label"},
    local_p2mp_id{YType::uint32, "local-p2mp-id"},
    local_ptree_type{YType::enumeration, "local-ptree-type"},
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    remote_available{YType::boolean, "remote-available"},
    remote_extended_tunnel_id{YType::str, "remote-extended-tunnel-id"},
    remote_flags{YType::uint8, "remote-flags"},
    remote_label{YType::uint32, "remote-label"},
    remote_p2mp_id{YType::uint32, "remote-p2mp-id"},
    remote_ptree_type{YType::enumeration, "remote-ptree-type"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
{
    yang_name = "p2mp-pw"; yang_parent_name = "pseudo-wire";
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::~P2MpPw()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::has_data() const
{
    return local_available.is_set
	|| local_extended_tunnel_id.is_set
	|| local_flags.is_set
	|| local_label.is_set
	|| local_p2mp_id.is_set
	|| local_ptree_type.is_set
	|| local_tunnel_id.is_set
	|| remote_available.is_set
	|| remote_extended_tunnel_id.is_set
	|| remote_flags.is_set
	|| remote_label.is_set
	|| remote_p2mp_id.is_set
	|| remote_ptree_type.is_set
	|| remote_tunnel_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::has_operation() const
{
    return is_set(operation)
	|| is_set(local_available.operation)
	|| is_set(local_extended_tunnel_id.operation)
	|| is_set(local_flags.operation)
	|| is_set(local_label.operation)
	|| is_set(local_p2mp_id.operation)
	|| is_set(local_ptree_type.operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(remote_available.operation)
	|| is_set(remote_extended_tunnel_id.operation)
	|| is_set(remote_flags.operation)
	|| is_set(remote_label.operation)
	|| is_set(remote_p2mp_id.operation)
	|| is_set(remote_ptree_type.operation)
	|| is_set(remote_tunnel_id.operation);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-pw";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2MpPw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_available.is_set || is_set(local_available.operation)) leaf_name_data.push_back(local_available.get_name_leafdata());
    if (local_extended_tunnel_id.is_set || is_set(local_extended_tunnel_id.operation)) leaf_name_data.push_back(local_extended_tunnel_id.get_name_leafdata());
    if (local_flags.is_set || is_set(local_flags.operation)) leaf_name_data.push_back(local_flags.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_p2mp_id.is_set || is_set(local_p2mp_id.operation)) leaf_name_data.push_back(local_p2mp_id.get_name_leafdata());
    if (local_ptree_type.is_set || is_set(local_ptree_type.operation)) leaf_name_data.push_back(local_ptree_type.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_available.is_set || is_set(remote_available.operation)) leaf_name_data.push_back(remote_available.get_name_leafdata());
    if (remote_extended_tunnel_id.is_set || is_set(remote_extended_tunnel_id.operation)) leaf_name_data.push_back(remote_extended_tunnel_id.get_name_leafdata());
    if (remote_flags.is_set || is_set(remote_flags.operation)) leaf_name_data.push_back(remote_flags.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_p2mp_id.is_set || is_set(remote_p2mp_id.operation)) leaf_name_data.push_back(remote_p2mp_id.get_name_leafdata());
    if (remote_ptree_type.is_set || is_set(remote_ptree_type.operation)) leaf_name_data.push_back(remote_ptree_type.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-available")
    {
        local_available = value;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id = value;
    }
    if(value_path == "local-flags")
    {
        local_flags = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id = value;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type = value;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "remote-available")
    {
        remote_available = value;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id = value;
    }
    if(value_path == "remote-flags")
    {
        remote_flags = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id = value;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroups()
{
    yang_name = "xconnect-groups"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::XconnectGroups::~XconnectGroups()
{
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::has_data() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::has_operation() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-groups";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectGroups' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-group")
    {
        for(auto const & c : xconnect_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup>();
        c->parent = this;
        xconnect_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectGroups::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::XconnectGroup()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    number_xconnects{YType::uint32, "number-xconnects"}
{
    yang_name = "xconnect-group"; yang_parent_name = "xconnect-groups";
}

L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::~XconnectGroup()
{
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::has_data() const
{
    return group_name.is_set
	|| group_name_xr.is_set
	|| number_xconnects.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(group_name_xr.operation)
	|| is_set(number_xconnects.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-group" <<"[group-name='" <<group_name <<"']";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectGroup' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.operation)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (number_xconnects.is_set || is_set(number_xconnects.operation)) leaf_name_data.push_back(number_xconnects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
    }
    if(value_path == "number-xconnects")
    {
        number_xconnects = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mps()
{
    yang_name = "xconnect-mp2mps"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::~XconnectMp2Mps()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::has_data() const
{
    for (std::size_t index=0; index<xconnect_mp2mp.size(); index++)
    {
        if(xconnect_mp2mp[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp.size(); index++)
    {
        if(xconnect_mp2mp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mps";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectMp2Mps' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-mp2mp")
    {
        for(auto const & c : xconnect_mp2mp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp>();
        c->parent = this;
        xconnect_mp2mp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_mp2mp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::XconnectMp2Mp()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    l2_encapsulation{YType::enumeration, "l2-encapsulation"},
    mp2_mp_name{YType::str, "mp2-mp-name"},
    mp2mp_name{YType::str, "mp2mp-name"},
    mp2mpid{YType::uint32, "mp2mpid"},
    vpn_id{YType::uint32, "vpn-id"},
    vpn_mtu{YType::uint32, "vpn-mtu"},
    xconnect_shutdown{YType::boolean, "xconnect-shutdown"}
    	,
    discovery(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery>())
{
    discovery->parent = this;

    yang_name = "xconnect-mp2mp"; yang_parent_name = "xconnect-mp2mps";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::~XconnectMp2Mp()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::has_data() const
{
    return group_name.is_set
	|| group_name_xr.is_set
	|| l2_encapsulation.is_set
	|| mp2_mp_name.is_set
	|| mp2mp_name.is_set
	|| mp2mpid.is_set
	|| vpn_id.is_set
	|| vpn_mtu.is_set
	|| xconnect_shutdown.is_set
	|| (discovery !=  nullptr && discovery->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(group_name_xr.operation)
	|| is_set(l2_encapsulation.operation)
	|| is_set(mp2_mp_name.operation)
	|| is_set(mp2mp_name.operation)
	|| is_set(mp2mpid.operation)
	|| is_set(vpn_id.operation)
	|| is_set(vpn_mtu.operation)
	|| is_set(xconnect_shutdown.operation)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectMp2Mp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.operation)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (l2_encapsulation.is_set || is_set(l2_encapsulation.operation)) leaf_name_data.push_back(l2_encapsulation.get_name_leafdata());
    if (mp2_mp_name.is_set || is_set(mp2_mp_name.operation)) leaf_name_data.push_back(mp2_mp_name.get_name_leafdata());
    if (mp2mp_name.is_set || is_set(mp2mp_name.operation)) leaf_name_data.push_back(mp2mp_name.get_name_leafdata());
    if (mp2mpid.is_set || is_set(mp2mpid.operation)) leaf_name_data.push_back(mp2mpid.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (vpn_mtu.is_set || is_set(vpn_mtu.operation)) leaf_name_data.push_back(vpn_mtu.get_name_leafdata());
    if (xconnect_shutdown.is_set || is_set(xconnect_shutdown.operation)) leaf_name_data.push_back(xconnect_shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
    }
    if(value_path == "l2-encapsulation")
    {
        l2_encapsulation = value;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name = value;
    }
    if(value_path == "mp2mp-name")
    {
        mp2mp_name = value;
    }
    if(value_path == "mp2mpid")
    {
        mp2mpid = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
    if(value_path == "vpn-mtu")
    {
        vpn_mtu = value;
    }
    if(value_path == "xconnect-shutdown")
    {
        xconnect_shutdown = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::Discovery()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_service_connected{YType::boolean, "ad-service-connected"},
    ad_signalling_method{YType::uint32, "ad-signalling-method"},
    ce_range{YType::uint16, "ce-range"},
    export_route_policy{YType::str, "export-route-policy"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_ce2c_es{YType::uint32, "number-ce2c-es"},
    number_ce2ce_advertised{YType::uint32, "number-ce2ce-advertised"},
    number_p_ws_up{YType::uint32, "number-p-ws-up"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    vpn_added{YType::boolean, "vpn-added"}
    	,
    rd_value(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue>())
{
    rd_value->parent = this;

    yang_name = "discovery"; yang_parent_name = "xconnect-mp2mp";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::~Discovery()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::has_data() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_data())
            return true;
    }
    return ad_method.is_set
	|| ad_service_connected.is_set
	|| ad_signalling_method.is_set
	|| ce_range.is_set
	|| export_route_policy.is_set
	|| number_a_cs.is_set
	|| number_a_cs_up.is_set
	|| number_ce2c_es.is_set
	|| number_ce2ce_advertised.is_set
	|| number_p_ws_up.is_set
	|| number_pseudowires.is_set
	|| vpn_added.is_set
	|| (rd_value !=  nullptr && rd_value->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::has_operation() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ad_method.operation)
	|| is_set(ad_service_connected.operation)
	|| is_set(ad_signalling_method.operation)
	|| is_set(ce_range.operation)
	|| is_set(export_route_policy.operation)
	|| is_set(number_a_cs.operation)
	|| is_set(number_a_cs_up.operation)
	|| is_set(number_ce2c_es.operation)
	|| is_set(number_ce2ce_advertised.operation)
	|| is_set(number_p_ws_up.operation)
	|| is_set(number_pseudowires.operation)
	|| is_set(vpn_added.operation)
	|| (rd_value !=  nullptr && rd_value->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.operation)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_service_connected.is_set || is_set(ad_service_connected.operation)) leaf_name_data.push_back(ad_service_connected.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.operation)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (ce_range.is_set || is_set(ce_range.operation)) leaf_name_data.push_back(ce_range.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.operation)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.operation)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.operation)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_ce2c_es.is_set || is_set(number_ce2c_es.operation)) leaf_name_data.push_back(number_ce2c_es.get_name_leafdata());
    if (number_ce2ce_advertised.is_set || is_set(number_ce2ce_advertised.operation)) leaf_name_data.push_back(number_ce2ce_advertised.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.operation)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.operation)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.operation)) leaf_name_data.push_back(vpn_added.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export-rt")
    {
        for(auto const & c : export_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt>();
        c->parent = this;
        export_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "import-rt")
    {
        for(auto const & c : import_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt>();
        c->parent = this;
        import_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "rd-value")
    {
        if(rd_value == nullptr)
        {
            rd_value = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue>();
        }
        return rd_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import_rt)
    {
        children[c->get_segment_path()] = c;
    }

    if(rd_value != nullptr)
    {
        children["rd-value"] = rd_value;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
    }
    if(value_path == "ad-service-connected")
    {
        ad_service_connected = value;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
    }
    if(value_path == "ce-range")
    {
        ce_range = value;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
    }
    if(value_path == "number-ce2c-es")
    {
        number_ce2c_es = value;
    }
    if(value_path == "number-ce2ce-advertised")
    {
        number_ce2ce_advertised = value;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr>())
{
    auto_->parent = this;

    four_byte_as->parent = this;

    two_byte_as->parent = this;

    v4_addr->parent = this;

    yang_name = "rd-value"; yang_parent_name = "discovery";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::~RdValue()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RdValue' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-value";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-value";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-value";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-value";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr>())
{
    es_import->parent = this;

    four_byte_as->parent = this;

    two_byte_as->parent = this;

    v4_addr->parent = this;

    yang_name = "import-rt"; yang_parent_name = "discovery";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImportRt' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "import-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "import-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "import-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "import-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr>())
{
    es_import->parent = this;

    four_byte_as->parent = this;

    two_byte_as->parent = this;

    v4_addr->parent = this;

    yang_name = "export-rt"; yang_parent_name = "discovery";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExportRt' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "export-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "export-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "export-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "export-rt";
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::Indexes::Indexes()
{
    yang_name = "indexes"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::Indexes::~Indexes()
{
}

bool L2Vpnv2::Nodes::Node::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Indexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Indexes' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Indexes::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Indexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Indexes::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::Indexes::Index_::Index_()
    :
    pool_id{YType::str, "pool-id"},
    allocated_ids{YType::uint32, "allocated-ids"},
    application_type{YType::enumeration, "application-type"},
    max_num_id_mgr{YType::uint32, "max-num-id-mgr"},
    num_id_mgr_in_use{YType::uint32, "num-id-mgr-in-use"},
    pool_id_xr{YType::uint32, "pool-id-xr"},
    pool_size{YType::uint32, "pool-size"},
    zombied_ids{YType::uint32, "zombied-ids"}
{
    yang_name = "index"; yang_parent_name = "indexes";
}

L2Vpnv2::Nodes::Node::Indexes::Index_::~Index_()
{
}

bool L2Vpnv2::Nodes::Node::Indexes::Index_::has_data() const
{
    return pool_id.is_set
	|| allocated_ids.is_set
	|| application_type.is_set
	|| max_num_id_mgr.is_set
	|| num_id_mgr_in_use.is_set
	|| pool_id_xr.is_set
	|| pool_size.is_set
	|| zombied_ids.is_set;
}

bool L2Vpnv2::Nodes::Node::Indexes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(pool_id.operation)
	|| is_set(allocated_ids.operation)
	|| is_set(application_type.operation)
	|| is_set(max_num_id_mgr.operation)
	|| is_set(num_id_mgr_in_use.operation)
	|| is_set(pool_id_xr.operation)
	|| is_set(pool_size.operation)
	|| is_set(zombied_ids.operation);
}

std::string L2Vpnv2::Nodes::Node::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[pool-id='" <<pool_id <<"']";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::Indexes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.operation)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (allocated_ids.is_set || is_set(allocated_ids.operation)) leaf_name_data.push_back(allocated_ids.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.operation)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (max_num_id_mgr.is_set || is_set(max_num_id_mgr.operation)) leaf_name_data.push_back(max_num_id_mgr.get_name_leafdata());
    if (num_id_mgr_in_use.is_set || is_set(num_id_mgr_in_use.operation)) leaf_name_data.push_back(num_id_mgr_in_use.get_name_leafdata());
    if (pool_id_xr.is_set || is_set(pool_id_xr.operation)) leaf_name_data.push_back(pool_id_xr.get_name_leafdata());
    if (pool_size.is_set || is_set(pool_size.operation)) leaf_name_data.push_back(pool_size.get_name_leafdata());
    if (zombied_ids.is_set || is_set(zombied_ids.operation)) leaf_name_data.push_back(zombied_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Indexes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Indexes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool-id")
    {
        pool_id = value;
    }
    if(value_path == "allocated-ids")
    {
        allocated_ids = value;
    }
    if(value_path == "application-type")
    {
        application_type = value;
    }
    if(value_path == "max-num-id-mgr")
    {
        max_num_id_mgr = value;
    }
    if(value_path == "num-id-mgr-in-use")
    {
        num_id_mgr_in_use = value;
    }
    if(value_path == "pool-id-xr")
    {
        pool_id_xr = value;
    }
    if(value_path == "pool-size")
    {
        pool_size = value;
    }
    if(value_path == "zombied-ids")
    {
        zombied_ids = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectSummary::XconnectSummary()
    :
    admin_down_backup_interface_xconnects{YType::uint32, "admin-down-backup-interface-xconnects"},
    admin_down_backup_xconnects{YType::uint32, "admin-down-backup-xconnects"},
    down_backup_interface_xconnects{YType::uint32, "down-backup-interface-xconnects"},
    down_backup_xconnects{YType::uint32, "down-backup-xconnects"},
    number_ce2_ceconnections{YType::uint32, "number-ce2-ceconnections"},
    number_ce2ce_advertized{YType::uint32, "number-ce2ce-advertized"},
    number_ce2ce_not_advertized{YType::uint32, "number-ce2ce-not-advertized"},
    number_groups{YType::uint32, "number-groups"},
    number_mp2mp_xconnects{YType::uint32, "number-mp2mp-xconnects"},
    number_mp2mp_xconnects_advertised{YType::uint32, "number-mp2mp-xconnects-advertised"},
    number_mp2mp_xconnects_down{YType::uint32, "number-mp2mp-xconnects-down"},
    number_mp2mp_xconnects_up{YType::uint32, "number-mp2mp-xconnects-up"},
    number_mp2mp_xconnectss_not_advertised{YType::uint32, "number-mp2mp-xconnectss-not-advertised"},
    number_xconnects{YType::uint32, "number-xconnects"},
    number_xconnects_administratively_down{YType::uint32, "number-xconnects-administratively-down"},
    number_xconnects_currently_using_backup{YType::uint32, "number-xconnects-currently-using-backup"},
    number_xconnects_currently_using_backup_interface{YType::uint32, "number-xconnects-currently-using-backup-interface"},
    number_xconnects_down{YType::uint32, "number-xconnects-down"},
    number_xconnects_locally_switched{YType::uint32, "number-xconnects-locally-switched"},
    number_xconnects_type_attachment_circuit_to_pseudo_wire{YType::uint32, "number-xconnects-type-attachment-circuit-to-pseudo-wire"},
    number_xconnects_type_monitor_session_to_pseudo_wire{YType::uint32, "number-xconnects-type-monitor-session-to-pseudo-wire"},
    number_xconnects_type_pseudo_wire_to_pseudo_wire{YType::uint32, "number-xconnects-type-pseudo-wire-to-pseudo-wire"},
    number_xconnects_unresolved{YType::uint32, "number-xconnects-unresolved"},
    number_xconnects_up{YType::uint32, "number-xconnects-up"},
    number_xconnects_with_backup_interface{YType::uint32, "number-xconnects-with-backup-interface"},
    number_xconnects_with_backup_pw{YType::uint32, "number-xconnects-with-backup-pw"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    partially_programmed_xconnects{YType::uint32, "partially-programmed-xconnects"},
    standby_backup_interface_xconnects{YType::uint32, "standby-backup-interface-xconnects"},
    standby_backup_xconnects{YType::uint32, "standby-backup-xconnects"},
    standby_ready_backup_xconnects{YType::uint32, "standby-ready-backup-xconnects"},
    unresolved_backup_interface_xconnects{YType::uint32, "unresolved-backup-interface-xconnects"},
    unresolved_backup_xconnects{YType::uint32, "unresolved-backup-xconnects"}
{
    yang_name = "xconnect-summary"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::XconnectSummary::~XconnectSummary()
{
}

bool L2Vpnv2::Nodes::Node::XconnectSummary::has_data() const
{
    return admin_down_backup_interface_xconnects.is_set
	|| admin_down_backup_xconnects.is_set
	|| down_backup_interface_xconnects.is_set
	|| down_backup_xconnects.is_set
	|| number_ce2_ceconnections.is_set
	|| number_ce2ce_advertized.is_set
	|| number_ce2ce_not_advertized.is_set
	|| number_groups.is_set
	|| number_mp2mp_xconnects.is_set
	|| number_mp2mp_xconnects_advertised.is_set
	|| number_mp2mp_xconnects_down.is_set
	|| number_mp2mp_xconnects_up.is_set
	|| number_mp2mp_xconnectss_not_advertised.is_set
	|| number_xconnects.is_set
	|| number_xconnects_administratively_down.is_set
	|| number_xconnects_currently_using_backup.is_set
	|| number_xconnects_currently_using_backup_interface.is_set
	|| number_xconnects_down.is_set
	|| number_xconnects_locally_switched.is_set
	|| number_xconnects_type_attachment_circuit_to_pseudo_wire.is_set
	|| number_xconnects_type_monitor_session_to_pseudo_wire.is_set
	|| number_xconnects_type_pseudo_wire_to_pseudo_wire.is_set
	|| number_xconnects_unresolved.is_set
	|| number_xconnects_up.is_set
	|| number_xconnects_with_backup_interface.is_set
	|| number_xconnects_with_backup_pw.is_set
	|| out_of_memory_state.is_set
	|| partially_programmed_xconnects.is_set
	|| standby_backup_interface_xconnects.is_set
	|| standby_backup_xconnects.is_set
	|| standby_ready_backup_xconnects.is_set
	|| unresolved_backup_interface_xconnects.is_set
	|| unresolved_backup_xconnects.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_down_backup_interface_xconnects.operation)
	|| is_set(admin_down_backup_xconnects.operation)
	|| is_set(down_backup_interface_xconnects.operation)
	|| is_set(down_backup_xconnects.operation)
	|| is_set(number_ce2_ceconnections.operation)
	|| is_set(number_ce2ce_advertized.operation)
	|| is_set(number_ce2ce_not_advertized.operation)
	|| is_set(number_groups.operation)
	|| is_set(number_mp2mp_xconnects.operation)
	|| is_set(number_mp2mp_xconnects_advertised.operation)
	|| is_set(number_mp2mp_xconnects_down.operation)
	|| is_set(number_mp2mp_xconnects_up.operation)
	|| is_set(number_mp2mp_xconnectss_not_advertised.operation)
	|| is_set(number_xconnects.operation)
	|| is_set(number_xconnects_administratively_down.operation)
	|| is_set(number_xconnects_currently_using_backup.operation)
	|| is_set(number_xconnects_currently_using_backup_interface.operation)
	|| is_set(number_xconnects_down.operation)
	|| is_set(number_xconnects_locally_switched.operation)
	|| is_set(number_xconnects_type_attachment_circuit_to_pseudo_wire.operation)
	|| is_set(number_xconnects_type_monitor_session_to_pseudo_wire.operation)
	|| is_set(number_xconnects_type_pseudo_wire_to_pseudo_wire.operation)
	|| is_set(number_xconnects_unresolved.operation)
	|| is_set(number_xconnects_up.operation)
	|| is_set(number_xconnects_with_backup_interface.operation)
	|| is_set(number_xconnects_with_backup_pw.operation)
	|| is_set(out_of_memory_state.operation)
	|| is_set(partially_programmed_xconnects.operation)
	|| is_set(standby_backup_interface_xconnects.operation)
	|| is_set(standby_backup_xconnects.operation)
	|| is_set(standby_ready_backup_xconnects.operation)
	|| is_set(unresolved_backup_interface_xconnects.operation)
	|| is_set(unresolved_backup_xconnects.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-summary";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::XconnectSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_backup_interface_xconnects.is_set || is_set(admin_down_backup_interface_xconnects.operation)) leaf_name_data.push_back(admin_down_backup_interface_xconnects.get_name_leafdata());
    if (admin_down_backup_xconnects.is_set || is_set(admin_down_backup_xconnects.operation)) leaf_name_data.push_back(admin_down_backup_xconnects.get_name_leafdata());
    if (down_backup_interface_xconnects.is_set || is_set(down_backup_interface_xconnects.operation)) leaf_name_data.push_back(down_backup_interface_xconnects.get_name_leafdata());
    if (down_backup_xconnects.is_set || is_set(down_backup_xconnects.operation)) leaf_name_data.push_back(down_backup_xconnects.get_name_leafdata());
    if (number_ce2_ceconnections.is_set || is_set(number_ce2_ceconnections.operation)) leaf_name_data.push_back(number_ce2_ceconnections.get_name_leafdata());
    if (number_ce2ce_advertized.is_set || is_set(number_ce2ce_advertized.operation)) leaf_name_data.push_back(number_ce2ce_advertized.get_name_leafdata());
    if (number_ce2ce_not_advertized.is_set || is_set(number_ce2ce_not_advertized.operation)) leaf_name_data.push_back(number_ce2ce_not_advertized.get_name_leafdata());
    if (number_groups.is_set || is_set(number_groups.operation)) leaf_name_data.push_back(number_groups.get_name_leafdata());
    if (number_mp2mp_xconnects.is_set || is_set(number_mp2mp_xconnects.operation)) leaf_name_data.push_back(number_mp2mp_xconnects.get_name_leafdata());
    if (number_mp2mp_xconnects_advertised.is_set || is_set(number_mp2mp_xconnects_advertised.operation)) leaf_name_data.push_back(number_mp2mp_xconnects_advertised.get_name_leafdata());
    if (number_mp2mp_xconnects_down.is_set || is_set(number_mp2mp_xconnects_down.operation)) leaf_name_data.push_back(number_mp2mp_xconnects_down.get_name_leafdata());
    if (number_mp2mp_xconnects_up.is_set || is_set(number_mp2mp_xconnects_up.operation)) leaf_name_data.push_back(number_mp2mp_xconnects_up.get_name_leafdata());
    if (number_mp2mp_xconnectss_not_advertised.is_set || is_set(number_mp2mp_xconnectss_not_advertised.operation)) leaf_name_data.push_back(number_mp2mp_xconnectss_not_advertised.get_name_leafdata());
    if (number_xconnects.is_set || is_set(number_xconnects.operation)) leaf_name_data.push_back(number_xconnects.get_name_leafdata());
    if (number_xconnects_administratively_down.is_set || is_set(number_xconnects_administratively_down.operation)) leaf_name_data.push_back(number_xconnects_administratively_down.get_name_leafdata());
    if (number_xconnects_currently_using_backup.is_set || is_set(number_xconnects_currently_using_backup.operation)) leaf_name_data.push_back(number_xconnects_currently_using_backup.get_name_leafdata());
    if (number_xconnects_currently_using_backup_interface.is_set || is_set(number_xconnects_currently_using_backup_interface.operation)) leaf_name_data.push_back(number_xconnects_currently_using_backup_interface.get_name_leafdata());
    if (number_xconnects_down.is_set || is_set(number_xconnects_down.operation)) leaf_name_data.push_back(number_xconnects_down.get_name_leafdata());
    if (number_xconnects_locally_switched.is_set || is_set(number_xconnects_locally_switched.operation)) leaf_name_data.push_back(number_xconnects_locally_switched.get_name_leafdata());
    if (number_xconnects_type_attachment_circuit_to_pseudo_wire.is_set || is_set(number_xconnects_type_attachment_circuit_to_pseudo_wire.operation)) leaf_name_data.push_back(number_xconnects_type_attachment_circuit_to_pseudo_wire.get_name_leafdata());
    if (number_xconnects_type_monitor_session_to_pseudo_wire.is_set || is_set(number_xconnects_type_monitor_session_to_pseudo_wire.operation)) leaf_name_data.push_back(number_xconnects_type_monitor_session_to_pseudo_wire.get_name_leafdata());
    if (number_xconnects_type_pseudo_wire_to_pseudo_wire.is_set || is_set(number_xconnects_type_pseudo_wire_to_pseudo_wire.operation)) leaf_name_data.push_back(number_xconnects_type_pseudo_wire_to_pseudo_wire.get_name_leafdata());
    if (number_xconnects_unresolved.is_set || is_set(number_xconnects_unresolved.operation)) leaf_name_data.push_back(number_xconnects_unresolved.get_name_leafdata());
    if (number_xconnects_up.is_set || is_set(number_xconnects_up.operation)) leaf_name_data.push_back(number_xconnects_up.get_name_leafdata());
    if (number_xconnects_with_backup_interface.is_set || is_set(number_xconnects_with_backup_interface.operation)) leaf_name_data.push_back(number_xconnects_with_backup_interface.get_name_leafdata());
    if (number_xconnects_with_backup_pw.is_set || is_set(number_xconnects_with_backup_pw.operation)) leaf_name_data.push_back(number_xconnects_with_backup_pw.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.operation)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (partially_programmed_xconnects.is_set || is_set(partially_programmed_xconnects.operation)) leaf_name_data.push_back(partially_programmed_xconnects.get_name_leafdata());
    if (standby_backup_interface_xconnects.is_set || is_set(standby_backup_interface_xconnects.operation)) leaf_name_data.push_back(standby_backup_interface_xconnects.get_name_leafdata());
    if (standby_backup_xconnects.is_set || is_set(standby_backup_xconnects.operation)) leaf_name_data.push_back(standby_backup_xconnects.get_name_leafdata());
    if (standby_ready_backup_xconnects.is_set || is_set(standby_ready_backup_xconnects.operation)) leaf_name_data.push_back(standby_ready_backup_xconnects.get_name_leafdata());
    if (unresolved_backup_interface_xconnects.is_set || is_set(unresolved_backup_interface_xconnects.operation)) leaf_name_data.push_back(unresolved_backup_interface_xconnects.get_name_leafdata());
    if (unresolved_backup_xconnects.is_set || is_set(unresolved_backup_xconnects.operation)) leaf_name_data.push_back(unresolved_backup_xconnects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-down-backup-interface-xconnects")
    {
        admin_down_backup_interface_xconnects = value;
    }
    if(value_path == "admin-down-backup-xconnects")
    {
        admin_down_backup_xconnects = value;
    }
    if(value_path == "down-backup-interface-xconnects")
    {
        down_backup_interface_xconnects = value;
    }
    if(value_path == "down-backup-xconnects")
    {
        down_backup_xconnects = value;
    }
    if(value_path == "number-ce2-ceconnections")
    {
        number_ce2_ceconnections = value;
    }
    if(value_path == "number-ce2ce-advertized")
    {
        number_ce2ce_advertized = value;
    }
    if(value_path == "number-ce2ce-not-advertized")
    {
        number_ce2ce_not_advertized = value;
    }
    if(value_path == "number-groups")
    {
        number_groups = value;
    }
    if(value_path == "number-mp2mp-xconnects")
    {
        number_mp2mp_xconnects = value;
    }
    if(value_path == "number-mp2mp-xconnects-advertised")
    {
        number_mp2mp_xconnects_advertised = value;
    }
    if(value_path == "number-mp2mp-xconnects-down")
    {
        number_mp2mp_xconnects_down = value;
    }
    if(value_path == "number-mp2mp-xconnects-up")
    {
        number_mp2mp_xconnects_up = value;
    }
    if(value_path == "number-mp2mp-xconnectss-not-advertised")
    {
        number_mp2mp_xconnectss_not_advertised = value;
    }
    if(value_path == "number-xconnects")
    {
        number_xconnects = value;
    }
    if(value_path == "number-xconnects-administratively-down")
    {
        number_xconnects_administratively_down = value;
    }
    if(value_path == "number-xconnects-currently-using-backup")
    {
        number_xconnects_currently_using_backup = value;
    }
    if(value_path == "number-xconnects-currently-using-backup-interface")
    {
        number_xconnects_currently_using_backup_interface = value;
    }
    if(value_path == "number-xconnects-down")
    {
        number_xconnects_down = value;
    }
    if(value_path == "number-xconnects-locally-switched")
    {
        number_xconnects_locally_switched = value;
    }
    if(value_path == "number-xconnects-type-attachment-circuit-to-pseudo-wire")
    {
        number_xconnects_type_attachment_circuit_to_pseudo_wire = value;
    }
    if(value_path == "number-xconnects-type-monitor-session-to-pseudo-wire")
    {
        number_xconnects_type_monitor_session_to_pseudo_wire = value;
    }
    if(value_path == "number-xconnects-type-pseudo-wire-to-pseudo-wire")
    {
        number_xconnects_type_pseudo_wire_to_pseudo_wire = value;
    }
    if(value_path == "number-xconnects-unresolved")
    {
        number_xconnects_unresolved = value;
    }
    if(value_path == "number-xconnects-up")
    {
        number_xconnects_up = value;
    }
    if(value_path == "number-xconnects-with-backup-interface")
    {
        number_xconnects_with_backup_interface = value;
    }
    if(value_path == "number-xconnects-with-backup-pw")
    {
        number_xconnects_with_backup_pw = value;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
    }
    if(value_path == "partially-programmed-xconnects")
    {
        partially_programmed_xconnects = value;
    }
    if(value_path == "standby-backup-interface-xconnects")
    {
        standby_backup_interface_xconnects = value;
    }
    if(value_path == "standby-backup-xconnects")
    {
        standby_backup_xconnects = value;
    }
    if(value_path == "standby-ready-backup-xconnects")
    {
        standby_ready_backup_xconnects = value;
    }
    if(value_path == "unresolved-backup-interface-xconnects")
    {
        unresolved_backup_interface_xconnects = value;
    }
    if(value_path == "unresolved-backup-xconnects")
    {
        unresolved_backup_xconnects = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::ProcFsm()
    :
    process_role{YType::uint8, "process-role"},
    process_state{YType::uint8, "process-state"},
    state_transition_time{YType::uint32, "state-transition-time"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"},
    sync_flags{YType::uint32, "sync-flags"}
    	,
    failover_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus>())
	,issu_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus>())
	,nsr_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus>())
{
    failover_status->parent = this;

    issu_status->parent = this;

    nsr_status->parent = this;

    yang_name = "proc-fsm"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::ProcFsm::~ProcFsm()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::has_data() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : state_transition_time.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return process_role.is_set
	|| process_state.is_set
	|| sw_install_in_progress.is_set
	|| sync_flags.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool L2Vpnv2::Nodes::Node::ProcFsm::has_operation() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : state_transition_time.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(process_role.operation)
	|| is_set(process_state.operation)
	|| is_set(state_transition_time.operation)
	|| is_set(sw_install_in_progress.operation)
	|| is_set(sync_flags.operation)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-fsm";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcFsm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_role.is_set || is_set(process_role.operation)) leaf_name_data.push_back(process_role.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.operation)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.operation)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.operation)) leaf_name_data.push_back(sync_flags.get_name_leafdata());

    auto state_transition_time_name_datas = state_transition_time.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), state_transition_time_name_datas.begin(), state_transition_time_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        for(auto const & c : event_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::EventHistory>();
        c->parent = this;
        event_history.push_back(c);
        return c;
    }

    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "report-card")
    {
        for(auto const & c : report_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::ReportCard>();
        c->parent = this;
        report_card.push_back(c);
        return c;
    }

    if(child_yang_name == "xid-info")
    {
        for(auto const & c : xid_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::XidInfo>();
        c->parent = this;
        xid_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_history)
    {
        children[c->get_segment_path()] = c;
    }

    if(failover_status != nullptr)
    {
        children["failover-status"] = failover_status;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    for (auto const & c : report_card)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : xid_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-role")
    {
        process_role = value;
    }
    if(value_path == "process-state")
    {
        process_state = value;
    }
    if(value_path == "state-transition-time")
    {
        state_transition_time.append(value);
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::FailoverStatus()
    :
    master_time{YType::uint32, "master-time"},
    start_time{YType::uint32, "start-time"},
    triggered_time{YType::uint32, "triggered-time"}
{
    yang_name = "failover-status"; yang_parent_name = "proc-fsm";
}

L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::~FailoverStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::has_data() const
{
    return master_time.is_set
	|| start_time.is_set
	|| triggered_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(master_time.operation)
	|| is_set(start_time.operation)
	|| is_set(triggered_time.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FailoverStatus' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_time.is_set || is_set(master_time.operation)) leaf_name_data.push_back(master_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (triggered_time.is_set || is_set(triggered_time.operation)) leaf_name_data.push_back(triggered_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "master-time")
    {
        master_time = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "triggered-time")
    {
        triggered_time = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;

    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "proc-fsm";
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::~NsrStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrStatus' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "idt-status"; yang_parent_name = "nsr-status";
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdtStatus' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status";
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviOusIdtStatus' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;

    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "proc-fsm";
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::~IssuStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuStatus' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "idt-status"; yang_parent_name = "issu-status";
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdtStatus' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status";
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviOusIdtStatus' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{
    yang_name = "xid-info"; yang_parent_name = "proc-fsm";
}

L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::~XidInfo()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::has_data() const
{
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(app_type.operation)
	|| is_set(sent_ids.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XidInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.operation)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.operation)) leaf_name_data.push_back(sent_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "app-type")
    {
        app_type = value;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::ReportCard()
    :
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    connection_change_time{YType::uint32, "connection-change-time"},
    idt_time{YType::uint32, "idt-time"}
{
    yang_name = "report-card"; yang_parent_name = "proc-fsm";
}

L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::~ReportCard()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::has_data() const
{
    return collaborator_idt_done.is_set
	|| collaborator_is_connected.is_set
	|| collaborator_skipped.is_set
	|| connection_change_time.is_set
	|| idt_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::has_operation() const
{
    return is_set(operation)
	|| is_set(collaborator_idt_done.operation)
	|| is_set(collaborator_is_connected.operation)
	|| is_set(collaborator_skipped.operation)
	|| is_set(connection_change_time.operation)
	|| is_set(idt_time.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReportCard' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.operation)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.operation)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.operation)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.operation)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.operation)) leaf_name_data.push_back(idt_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
    }
}

L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::EventHistory()
    :
    event_timestamp{YType::uint32, "event-timestamp"},
    new_state{YType::uint8, "new-state"},
    previous_state{YType::uint8, "previous-state"},
    process_collaborator{YType::uint16, "process-collaborator"},
    process_event{YType::uint16, "process-event"}
{
    yang_name = "event-history"; yang_parent_name = "proc-fsm";
}

L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::~EventHistory()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::has_data() const
{
    return event_timestamp.is_set
	|| new_state.is_set
	|| previous_state.is_set
	|| process_collaborator.is_set
	|| process_event.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_timestamp.operation)
	|| is_set(new_state.operation)
	|| is_set(previous_state.operation)
	|| is_set(process_collaborator.operation)
	|| is_set(process_event.operation);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventHistory' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_timestamp.is_set || is_set(event_timestamp.operation)) leaf_name_data.push_back(event_timestamp.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.operation)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (previous_state.is_set || is_set(previous_state.operation)) leaf_name_data.push_back(previous_state.get_name_leafdata());
    if (process_collaborator.is_set || is_set(process_collaborator.operation)) leaf_name_data.push_back(process_collaborator.get_name_leafdata());
    if (process_event.is_set || is_set(process_event.operation)) leaf_name_data.push_back(process_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp = value;
    }
    if(value_path == "new-state")
    {
        new_state = value;
    }
    if(value_path == "previous-state")
    {
        previous_state = value;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator = value;
    }
    if(value_path == "process-event")
    {
        process_event = value;
    }
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPorts()
{
    yang_name = "mstp-ports"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::MstpPorts::~MstpPorts()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::has_data() const
{
    for (std::size_t index=0; index<mstp_port.size(); index++)
    {
        if(mstp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::has_operation() const
{
    for (std::size_t index=0; index<mstp_port.size(); index++)
    {
        if(mstp_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-ports";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::MstpPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MstpPorts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mstp-port")
    {
        for(auto const & c : mstp_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts::MstpPort>();
        c->parent = this;
        mstp_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mstp_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mstp_interface_handle{YType::str, "mstp-interface-handle"},
    protected_{YType::boolean, "protected"},
    reference_count{YType::uint32, "reference-count"}
{
    yang_name = "mstp-port"; yang_parent_name = "mstp-ports";
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::~MstpPort()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::has_data() const
{
    for (std::size_t index=0; index<msti_entry.size(); index++)
    {
        if(msti_entry[index]->has_data())
            return true;
    }
    return interface.is_set
	|| interface_name.is_set
	|| mstp_interface_handle.is_set
	|| protected_.is_set
	|| reference_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::has_operation() const
{
    for (std::size_t index=0; index<msti_entry.size(); index++)
    {
        if(msti_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation)
	|| is_set(mstp_interface_handle.operation)
	|| is_set(protected_.operation)
	|| is_set(reference_count.operation);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-port" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MstpPort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mstp_interface_handle.is_set || is_set(mstp_interface_handle.operation)) leaf_name_data.push_back(mstp_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.operation)) leaf_name_data.push_back(reference_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msti-entry")
    {
        for(auto const & c : msti_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry>();
        c->parent = this;
        msti_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : msti_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mstp-interface-handle")
    {
        mstp_interface_handle = value;
    }
    if(value_path == "protected")
    {
        protected_ = value;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
    }
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::MstiEntry()
    :
    ack_count{YType::uint32, "ack-count"},
    bd_count{YType::uint32, "bd-count"},
    cfg_ms_ti{YType::uint32, "cfg-ms-ti"},
    flush_count{YType::uint32, "flush-count"},
    interface_count{YType::uint32, "interface-count"},
    msti_flags{YType::uint32, "msti-flags"},
    msti_state{YType::enumeration, "msti-state"},
    nack_count{YType::uint32, "nack-count"},
    rcv_count{YType::uint32, "rcv-count"}
{
    yang_name = "msti-entry"; yang_parent_name = "mstp-port";
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::~MstiEntry()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::has_data() const
{
    for (std::size_t index=0; index<bd_entry.size(); index++)
    {
        if(bd_entry[index]->has_data())
            return true;
    }
    return ack_count.is_set
	|| bd_count.is_set
	|| cfg_ms_ti.is_set
	|| flush_count.is_set
	|| interface_count.is_set
	|| msti_flags.is_set
	|| msti_state.is_set
	|| nack_count.is_set
	|| rcv_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::has_operation() const
{
    for (std::size_t index=0; index<bd_entry.size(); index++)
    {
        if(bd_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ack_count.operation)
	|| is_set(bd_count.operation)
	|| is_set(cfg_ms_ti.operation)
	|| is_set(flush_count.operation)
	|| is_set(interface_count.operation)
	|| is_set(msti_flags.operation)
	|| is_set(msti_state.operation)
	|| is_set(nack_count.operation)
	|| is_set(rcv_count.operation);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msti-entry";

    return path_buffer.str();

}

const EntityPath L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MstiEntry' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_count.is_set || is_set(ack_count.operation)) leaf_name_data.push_back(ack_count.get_name_leafdata());
    if (bd_count.is_set || is_set(bd_count.operation)) leaf_name_data.push_back(bd_count.get_name_leafdata());
    if (cfg_ms_ti.is_set || is_set(cfg_ms_ti.operation)) leaf_name_data.push_back(cfg_ms_ti.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.operation)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (msti_flags.is_set || is_set(msti_flags.operation)) leaf_name_data.push_back(msti_flags.get_name_leafdata());
    if (msti_state.is_set || is_set(msti_state.operation)) leaf_name_data.push_back(msti_state.get_name_leafdata());
    if (nack_count.is_set || is_set(nack_count.operation)) leaf_name_data.push_back(nack_count.get_name_leafdata());
    if (rcv_count.is_set || is_set(rcv_count.operation)) leaf_name_data.push_back(rcv_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-entry")
    {
        for(auto const & c : bd_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry>();
        c->parent = this;
        bd_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-count")
    {
        ack_count = value;
    }
    if(value_path == "bd-count")
    {
        bd_count = value;
    }
    if(value_path == "cfg-ms-ti")
    {
        cfg_ms_ti = value;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "msti-flags")
    {
        msti_flags = value;
    }
    if(value_path == "msti-state")
    {
        msti_state = value;
    }
    if(value_path == "nack-count")
    {
        nack_count = value;
    }
    if(value_path == "rcv-count")
    {
        rcv_count = value;
    }
}


}
}

