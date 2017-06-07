
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_PW_MIB {

CiscoIetfPwMib::CiscoIetfPwMib()
    :
    cpwvcidmappingtable(std::make_shared<CiscoIetfPwMib::Cpwvcidmappingtable>())
	,cpwvcobjects(std::make_shared<CiscoIetfPwMib::Cpwvcobjects>())
	,cpwvcpeermappingtable(std::make_shared<CiscoIetfPwMib::Cpwvcpeermappingtable>())
	,cpwvcperfcurrenttable(std::make_shared<CiscoIetfPwMib::Cpwvcperfcurrenttable>())
	,cpwvcperfintervaltable(std::make_shared<CiscoIetfPwMib::Cpwvcperfintervaltable>())
	,cpwvcperftotaltable(std::make_shared<CiscoIetfPwMib::Cpwvcperftotaltable>())
	,cpwvctable(std::make_shared<CiscoIetfPwMib::Cpwvctable>())
{
    cpwvcidmappingtable->parent = this;

    cpwvcobjects->parent = this;

    cpwvcpeermappingtable->parent = this;

    cpwvcperfcurrenttable->parent = this;

    cpwvcperfintervaltable->parent = this;

    cpwvcperftotaltable->parent = this;

    cpwvctable->parent = this;

    yang_name = "CISCO-IETF-PW-MIB"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::~CiscoIetfPwMib()
{
}

bool CiscoIetfPwMib::has_data() const
{
    return (cpwvcidmappingtable !=  nullptr && cpwvcidmappingtable->has_data())
	|| (cpwvcobjects !=  nullptr && cpwvcobjects->has_data())
	|| (cpwvcpeermappingtable !=  nullptr && cpwvcpeermappingtable->has_data())
	|| (cpwvcperfcurrenttable !=  nullptr && cpwvcperfcurrenttable->has_data())
	|| (cpwvcperfintervaltable !=  nullptr && cpwvcperfintervaltable->has_data())
	|| (cpwvcperftotaltable !=  nullptr && cpwvcperftotaltable->has_data())
	|| (cpwvctable !=  nullptr && cpwvctable->has_data());
}

bool CiscoIetfPwMib::has_operation() const
{
    return is_set(operation)
	|| (cpwvcidmappingtable !=  nullptr && cpwvcidmappingtable->has_operation())
	|| (cpwvcobjects !=  nullptr && cpwvcobjects->has_operation())
	|| (cpwvcpeermappingtable !=  nullptr && cpwvcpeermappingtable->has_operation())
	|| (cpwvcperfcurrenttable !=  nullptr && cpwvcperfcurrenttable->has_operation())
	|| (cpwvcperfintervaltable !=  nullptr && cpwvcperfintervaltable->has_operation())
	|| (cpwvcperftotaltable !=  nullptr && cpwvcperftotaltable->has_operation())
	|| (cpwvctable !=  nullptr && cpwvctable->has_operation());
}

std::string CiscoIetfPwMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfPwMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcIdMappingTable")
    {
        if(cpwvcidmappingtable == nullptr)
        {
            cpwvcidmappingtable = std::make_shared<CiscoIetfPwMib::Cpwvcidmappingtable>();
        }
        return cpwvcidmappingtable;
    }

    if(child_yang_name == "cpwVcObjects")
    {
        if(cpwvcobjects == nullptr)
        {
            cpwvcobjects = std::make_shared<CiscoIetfPwMib::Cpwvcobjects>();
        }
        return cpwvcobjects;
    }

    if(child_yang_name == "cpwVcPeerMappingTable")
    {
        if(cpwvcpeermappingtable == nullptr)
        {
            cpwvcpeermappingtable = std::make_shared<CiscoIetfPwMib::Cpwvcpeermappingtable>();
        }
        return cpwvcpeermappingtable;
    }

    if(child_yang_name == "cpwVcPerfCurrentTable")
    {
        if(cpwvcperfcurrenttable == nullptr)
        {
            cpwvcperfcurrenttable = std::make_shared<CiscoIetfPwMib::Cpwvcperfcurrenttable>();
        }
        return cpwvcperfcurrenttable;
    }

    if(child_yang_name == "cpwVcPerfIntervalTable")
    {
        if(cpwvcperfintervaltable == nullptr)
        {
            cpwvcperfintervaltable = std::make_shared<CiscoIetfPwMib::Cpwvcperfintervaltable>();
        }
        return cpwvcperfintervaltable;
    }

    if(child_yang_name == "cpwVcPerfTotalTable")
    {
        if(cpwvcperftotaltable == nullptr)
        {
            cpwvcperftotaltable = std::make_shared<CiscoIetfPwMib::Cpwvcperftotaltable>();
        }
        return cpwvcperftotaltable;
    }

    if(child_yang_name == "cpwVcTable")
    {
        if(cpwvctable == nullptr)
        {
            cpwvctable = std::make_shared<CiscoIetfPwMib::Cpwvctable>();
        }
        return cpwvctable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwvcidmappingtable != nullptr)
    {
        children["cpwVcIdMappingTable"] = cpwvcidmappingtable;
    }

    if(cpwvcobjects != nullptr)
    {
        children["cpwVcObjects"] = cpwvcobjects;
    }

    if(cpwvcpeermappingtable != nullptr)
    {
        children["cpwVcPeerMappingTable"] = cpwvcpeermappingtable;
    }

    if(cpwvcperfcurrenttable != nullptr)
    {
        children["cpwVcPerfCurrentTable"] = cpwvcperfcurrenttable;
    }

    if(cpwvcperfintervaltable != nullptr)
    {
        children["cpwVcPerfIntervalTable"] = cpwvcperfintervaltable;
    }

    if(cpwvcperftotaltable != nullptr)
    {
        children["cpwVcPerfTotalTable"] = cpwvcperftotaltable;
    }

    if(cpwvctable != nullptr)
    {
        children["cpwVcTable"] = cpwvctable;
    }

    return children;
}

void CiscoIetfPwMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfPwMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfPwMib>();
}

std::string CiscoIetfPwMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfPwMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfPwMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfPwMib::Cpwvcobjects::Cpwvcobjects()
    :
    cpwvcindexnext{YType::uint32, "cpwVcIndexNext"},
    cpwvcnotifrate{YType::uint32, "cpwVcNotifRate"},
    cpwvcperftotalerrorpackets{YType::uint64, "cpwVcPerfTotalErrorPackets"},
    cpwvcupdownnotifenable{YType::boolean, "cpwVcUpDownNotifEnable"}
{
    yang_name = "cpwVcObjects"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::Cpwvcobjects::~Cpwvcobjects()
{
}

bool CiscoIetfPwMib::Cpwvcobjects::has_data() const
{
    return cpwvcindexnext.is_set
	|| cpwvcnotifrate.is_set
	|| cpwvcperftotalerrorpackets.is_set
	|| cpwvcupdownnotifenable.is_set;
}

bool CiscoIetfPwMib::Cpwvcobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindexnext.operation)
	|| is_set(cpwvcnotifrate.operation)
	|| is_set(cpwvcperftotalerrorpackets.operation)
	|| is_set(cpwvcupdownnotifenable.operation);
}

std::string CiscoIetfPwMib::Cpwvcobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcObjects";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindexnext.is_set || is_set(cpwvcindexnext.operation)) leaf_name_data.push_back(cpwvcindexnext.get_name_leafdata());
    if (cpwvcnotifrate.is_set || is_set(cpwvcnotifrate.operation)) leaf_name_data.push_back(cpwvcnotifrate.get_name_leafdata());
    if (cpwvcperftotalerrorpackets.is_set || is_set(cpwvcperftotalerrorpackets.operation)) leaf_name_data.push_back(cpwvcperftotalerrorpackets.get_name_leafdata());
    if (cpwvcupdownnotifenable.is_set || is_set(cpwvcupdownnotifenable.operation)) leaf_name_data.push_back(cpwvcupdownnotifenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMib::Cpwvcobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndexNext")
    {
        cpwvcindexnext = value;
    }
    if(value_path == "cpwVcNotifRate")
    {
        cpwvcnotifrate = value;
    }
    if(value_path == "cpwVcPerfTotalErrorPackets")
    {
        cpwvcperftotalerrorpackets = value;
    }
    if(value_path == "cpwVcUpDownNotifEnable")
    {
        cpwvcupdownnotifenable = value;
    }
}

CiscoIetfPwMib::Cpwvctable::Cpwvctable()
{
    yang_name = "cpwVcTable"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::Cpwvctable::~Cpwvctable()
{
}

bool CiscoIetfPwMib::Cpwvctable::has_data() const
{
    for (std::size_t index=0; index<cpwvcentry.size(); index++)
    {
        if(cpwvcentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMib::Cpwvctable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcentry.size(); index++)
    {
        if(cpwvcentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMib::Cpwvctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvctable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEntry")
    {
        for(auto const & c : cpwvcentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMib::Cpwvctable::Cpwvcentry>();
        c->parent = this;
        cpwvcentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMib::Cpwvctable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMib::Cpwvctable::Cpwvcentry::Cpwvcentry()
    :
    cpwvcindex{YType::uint32, "cpwVcIndex"},
    cpwvcadminstatus{YType::enumeration, "cpwVcAdminStatus"},
    cpwvccontrolword{YType::boolean, "cpwVcControlWord"},
    cpwvccreatetime{YType::uint32, "cpwVcCreateTime"},
    cpwvcdescr{YType::str, "cpwVcDescr"},
    cpwvcholdingpriority{YType::int32, "cpwVcHoldingPriority"},
    cpwvcid{YType::uint32, "cpwVcID"},
    cpwvcinboundmode{YType::enumeration, "cpwVcInboundMode"},
    cpwvcinboundoperstatus{YType::enumeration, "cpwVcInboundOperStatus"},
    cpwvcinboundvclabel{YType::uint32, "cpwVcInboundVcLabel"},
    cpwvclocalgroupid{YType::uint32, "cpwVcLocalGroupID"},
    cpwvclocalifmtu{YType::uint32, "cpwVcLocalIfMtu"},
    cpwvclocalifstring{YType::boolean, "cpwVcLocalIfString"},
    cpwvcname{YType::str, "cpwVcName"},
    cpwvcoperstatus{YType::enumeration, "cpwVcOperStatus"},
    cpwvcoutboundoperstatus{YType::enumeration, "cpwVcOutboundOperStatus"},
    cpwvcoutboundvclabel{YType::uint32, "cpwVcOutboundVcLabel"},
    cpwvcowner{YType::enumeration, "cpwVcOwner"},
    cpwvcpeeraddr{YType::str, "cpwVcPeerAddr"},
    cpwvcpeeraddrtype{YType::enumeration, "cpwVcPeerAddrType"},
    cpwvcpsntype{YType::enumeration, "cpwVcPsnType"},
    cpwvcremotecontrolword{YType::enumeration, "cpwVcRemoteControlWord"},
    cpwvcremotegroupid{YType::uint32, "cpwVcRemoteGroupID"},
    cpwvcremoteifmtu{YType::uint32, "cpwVcRemoteIfMtu"},
    cpwvcremoteifstring{YType::str, "cpwVcRemoteIfString"},
    cpwvcrowstatus{YType::enumeration, "cpwVcRowStatus"},
    cpwvcsetuppriority{YType::int32, "cpwVcSetUpPriority"},
    cpwvcstoragetype{YType::enumeration, "cpwVcStorageType"},
    cpwvctimeelapsed{YType::int32, "cpwVcTimeElapsed"},
    cpwvctype{YType::enumeration, "cpwVcType"},
    cpwvcuptime{YType::uint32, "cpwVcUpTime"},
    cpwvcvalidintervals{YType::int32, "cpwVcValidIntervals"}
{
    yang_name = "cpwVcEntry"; yang_parent_name = "cpwVcTable";
}

CiscoIetfPwMib::Cpwvctable::Cpwvcentry::~Cpwvcentry()
{
}

bool CiscoIetfPwMib::Cpwvctable::Cpwvcentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcadminstatus.is_set
	|| cpwvccontrolword.is_set
	|| cpwvccreatetime.is_set
	|| cpwvcdescr.is_set
	|| cpwvcholdingpriority.is_set
	|| cpwvcid.is_set
	|| cpwvcinboundmode.is_set
	|| cpwvcinboundoperstatus.is_set
	|| cpwvcinboundvclabel.is_set
	|| cpwvclocalgroupid.is_set
	|| cpwvclocalifmtu.is_set
	|| cpwvclocalifstring.is_set
	|| cpwvcname.is_set
	|| cpwvcoperstatus.is_set
	|| cpwvcoutboundoperstatus.is_set
	|| cpwvcoutboundvclabel.is_set
	|| cpwvcowner.is_set
	|| cpwvcpeeraddr.is_set
	|| cpwvcpeeraddrtype.is_set
	|| cpwvcpsntype.is_set
	|| cpwvcremotecontrolword.is_set
	|| cpwvcremotegroupid.is_set
	|| cpwvcremoteifmtu.is_set
	|| cpwvcremoteifstring.is_set
	|| cpwvcrowstatus.is_set
	|| cpwvcsetuppriority.is_set
	|| cpwvcstoragetype.is_set
	|| cpwvctimeelapsed.is_set
	|| cpwvctype.is_set
	|| cpwvcuptime.is_set
	|| cpwvcvalidintervals.is_set;
}

bool CiscoIetfPwMib::Cpwvctable::Cpwvcentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcadminstatus.operation)
	|| is_set(cpwvccontrolword.operation)
	|| is_set(cpwvccreatetime.operation)
	|| is_set(cpwvcdescr.operation)
	|| is_set(cpwvcholdingpriority.operation)
	|| is_set(cpwvcid.operation)
	|| is_set(cpwvcinboundmode.operation)
	|| is_set(cpwvcinboundoperstatus.operation)
	|| is_set(cpwvcinboundvclabel.operation)
	|| is_set(cpwvclocalgroupid.operation)
	|| is_set(cpwvclocalifmtu.operation)
	|| is_set(cpwvclocalifstring.operation)
	|| is_set(cpwvcname.operation)
	|| is_set(cpwvcoperstatus.operation)
	|| is_set(cpwvcoutboundoperstatus.operation)
	|| is_set(cpwvcoutboundvclabel.operation)
	|| is_set(cpwvcowner.operation)
	|| is_set(cpwvcpeeraddr.operation)
	|| is_set(cpwvcpeeraddrtype.operation)
	|| is_set(cpwvcpsntype.operation)
	|| is_set(cpwvcremotecontrolword.operation)
	|| is_set(cpwvcremotegroupid.operation)
	|| is_set(cpwvcremoteifmtu.operation)
	|| is_set(cpwvcremoteifstring.operation)
	|| is_set(cpwvcrowstatus.operation)
	|| is_set(cpwvcsetuppriority.operation)
	|| is_set(cpwvcstoragetype.operation)
	|| is_set(cpwvctimeelapsed.operation)
	|| is_set(cpwvctype.operation)
	|| is_set(cpwvcuptime.operation)
	|| is_set(cpwvcvalidintervals.operation);
}

std::string CiscoIetfPwMib::Cpwvctable::Cpwvcentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvctable::Cpwvcentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcadminstatus.is_set || is_set(cpwvcadminstatus.operation)) leaf_name_data.push_back(cpwvcadminstatus.get_name_leafdata());
    if (cpwvccontrolword.is_set || is_set(cpwvccontrolword.operation)) leaf_name_data.push_back(cpwvccontrolword.get_name_leafdata());
    if (cpwvccreatetime.is_set || is_set(cpwvccreatetime.operation)) leaf_name_data.push_back(cpwvccreatetime.get_name_leafdata());
    if (cpwvcdescr.is_set || is_set(cpwvcdescr.operation)) leaf_name_data.push_back(cpwvcdescr.get_name_leafdata());
    if (cpwvcholdingpriority.is_set || is_set(cpwvcholdingpriority.operation)) leaf_name_data.push_back(cpwvcholdingpriority.get_name_leafdata());
    if (cpwvcid.is_set || is_set(cpwvcid.operation)) leaf_name_data.push_back(cpwvcid.get_name_leafdata());
    if (cpwvcinboundmode.is_set || is_set(cpwvcinboundmode.operation)) leaf_name_data.push_back(cpwvcinboundmode.get_name_leafdata());
    if (cpwvcinboundoperstatus.is_set || is_set(cpwvcinboundoperstatus.operation)) leaf_name_data.push_back(cpwvcinboundoperstatus.get_name_leafdata());
    if (cpwvcinboundvclabel.is_set || is_set(cpwvcinboundvclabel.operation)) leaf_name_data.push_back(cpwvcinboundvclabel.get_name_leafdata());
    if (cpwvclocalgroupid.is_set || is_set(cpwvclocalgroupid.operation)) leaf_name_data.push_back(cpwvclocalgroupid.get_name_leafdata());
    if (cpwvclocalifmtu.is_set || is_set(cpwvclocalifmtu.operation)) leaf_name_data.push_back(cpwvclocalifmtu.get_name_leafdata());
    if (cpwvclocalifstring.is_set || is_set(cpwvclocalifstring.operation)) leaf_name_data.push_back(cpwvclocalifstring.get_name_leafdata());
    if (cpwvcname.is_set || is_set(cpwvcname.operation)) leaf_name_data.push_back(cpwvcname.get_name_leafdata());
    if (cpwvcoperstatus.is_set || is_set(cpwvcoperstatus.operation)) leaf_name_data.push_back(cpwvcoperstatus.get_name_leafdata());
    if (cpwvcoutboundoperstatus.is_set || is_set(cpwvcoutboundoperstatus.operation)) leaf_name_data.push_back(cpwvcoutboundoperstatus.get_name_leafdata());
    if (cpwvcoutboundvclabel.is_set || is_set(cpwvcoutboundvclabel.operation)) leaf_name_data.push_back(cpwvcoutboundvclabel.get_name_leafdata());
    if (cpwvcowner.is_set || is_set(cpwvcowner.operation)) leaf_name_data.push_back(cpwvcowner.get_name_leafdata());
    if (cpwvcpeeraddr.is_set || is_set(cpwvcpeeraddr.operation)) leaf_name_data.push_back(cpwvcpeeraddr.get_name_leafdata());
    if (cpwvcpeeraddrtype.is_set || is_set(cpwvcpeeraddrtype.operation)) leaf_name_data.push_back(cpwvcpeeraddrtype.get_name_leafdata());
    if (cpwvcpsntype.is_set || is_set(cpwvcpsntype.operation)) leaf_name_data.push_back(cpwvcpsntype.get_name_leafdata());
    if (cpwvcremotecontrolword.is_set || is_set(cpwvcremotecontrolword.operation)) leaf_name_data.push_back(cpwvcremotecontrolword.get_name_leafdata());
    if (cpwvcremotegroupid.is_set || is_set(cpwvcremotegroupid.operation)) leaf_name_data.push_back(cpwvcremotegroupid.get_name_leafdata());
    if (cpwvcremoteifmtu.is_set || is_set(cpwvcremoteifmtu.operation)) leaf_name_data.push_back(cpwvcremoteifmtu.get_name_leafdata());
    if (cpwvcremoteifstring.is_set || is_set(cpwvcremoteifstring.operation)) leaf_name_data.push_back(cpwvcremoteifstring.get_name_leafdata());
    if (cpwvcrowstatus.is_set || is_set(cpwvcrowstatus.operation)) leaf_name_data.push_back(cpwvcrowstatus.get_name_leafdata());
    if (cpwvcsetuppriority.is_set || is_set(cpwvcsetuppriority.operation)) leaf_name_data.push_back(cpwvcsetuppriority.get_name_leafdata());
    if (cpwvcstoragetype.is_set || is_set(cpwvcstoragetype.operation)) leaf_name_data.push_back(cpwvcstoragetype.get_name_leafdata());
    if (cpwvctimeelapsed.is_set || is_set(cpwvctimeelapsed.operation)) leaf_name_data.push_back(cpwvctimeelapsed.get_name_leafdata());
    if (cpwvctype.is_set || is_set(cpwvctype.operation)) leaf_name_data.push_back(cpwvctype.get_name_leafdata());
    if (cpwvcuptime.is_set || is_set(cpwvcuptime.operation)) leaf_name_data.push_back(cpwvcuptime.get_name_leafdata());
    if (cpwvcvalidintervals.is_set || is_set(cpwvcvalidintervals.operation)) leaf_name_data.push_back(cpwvcvalidintervals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvctable::Cpwvcentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvctable::Cpwvcentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMib::Cpwvctable::Cpwvcentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcAdminStatus")
    {
        cpwvcadminstatus = value;
    }
    if(value_path == "cpwVcControlWord")
    {
        cpwvccontrolword = value;
    }
    if(value_path == "cpwVcCreateTime")
    {
        cpwvccreatetime = value;
    }
    if(value_path == "cpwVcDescr")
    {
        cpwvcdescr = value;
    }
    if(value_path == "cpwVcHoldingPriority")
    {
        cpwvcholdingpriority = value;
    }
    if(value_path == "cpwVcID")
    {
        cpwvcid = value;
    }
    if(value_path == "cpwVcInboundMode")
    {
        cpwvcinboundmode = value;
    }
    if(value_path == "cpwVcInboundOperStatus")
    {
        cpwvcinboundoperstatus = value;
    }
    if(value_path == "cpwVcInboundVcLabel")
    {
        cpwvcinboundvclabel = value;
    }
    if(value_path == "cpwVcLocalGroupID")
    {
        cpwvclocalgroupid = value;
    }
    if(value_path == "cpwVcLocalIfMtu")
    {
        cpwvclocalifmtu = value;
    }
    if(value_path == "cpwVcLocalIfString")
    {
        cpwvclocalifstring = value;
    }
    if(value_path == "cpwVcName")
    {
        cpwvcname = value;
    }
    if(value_path == "cpwVcOperStatus")
    {
        cpwvcoperstatus = value;
    }
    if(value_path == "cpwVcOutboundOperStatus")
    {
        cpwvcoutboundoperstatus = value;
    }
    if(value_path == "cpwVcOutboundVcLabel")
    {
        cpwvcoutboundvclabel = value;
    }
    if(value_path == "cpwVcOwner")
    {
        cpwvcowner = value;
    }
    if(value_path == "cpwVcPeerAddr")
    {
        cpwvcpeeraddr = value;
    }
    if(value_path == "cpwVcPeerAddrType")
    {
        cpwvcpeeraddrtype = value;
    }
    if(value_path == "cpwVcPsnType")
    {
        cpwvcpsntype = value;
    }
    if(value_path == "cpwVcRemoteControlWord")
    {
        cpwvcremotecontrolword = value;
    }
    if(value_path == "cpwVcRemoteGroupID")
    {
        cpwvcremotegroupid = value;
    }
    if(value_path == "cpwVcRemoteIfMtu")
    {
        cpwvcremoteifmtu = value;
    }
    if(value_path == "cpwVcRemoteIfString")
    {
        cpwvcremoteifstring = value;
    }
    if(value_path == "cpwVcRowStatus")
    {
        cpwvcrowstatus = value;
    }
    if(value_path == "cpwVcSetUpPriority")
    {
        cpwvcsetuppriority = value;
    }
    if(value_path == "cpwVcStorageType")
    {
        cpwvcstoragetype = value;
    }
    if(value_path == "cpwVcTimeElapsed")
    {
        cpwvctimeelapsed = value;
    }
    if(value_path == "cpwVcType")
    {
        cpwvctype = value;
    }
    if(value_path == "cpwVcUpTime")
    {
        cpwvcuptime = value;
    }
    if(value_path == "cpwVcValidIntervals")
    {
        cpwvcvalidintervals = value;
    }
}

CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrenttable()
{
    yang_name = "cpwVcPerfCurrentTable"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::Cpwvcperfcurrenttable::~Cpwvcperfcurrenttable()
{
}

bool CiscoIetfPwMib::Cpwvcperfcurrenttable::has_data() const
{
    for (std::size_t index=0; index<cpwvcperfcurrententry.size(); index++)
    {
        if(cpwvcperfcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMib::Cpwvcperfcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcperfcurrententry.size(); index++)
    {
        if(cpwvcperfcurrententry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMib::Cpwvcperfcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfCurrentTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcperfcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcperfcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPerfCurrentEntry")
    {
        for(auto const & c : cpwvcperfcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry>();
        c->parent = this;
        cpwvcperfcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcperfcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcperfcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMib::Cpwvcperfcurrenttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::Cpwvcperfcurrententry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcperfcurrentinhcbytes{YType::uint64, "cpwVcPerfCurrentInHCBytes"},
    cpwvcperfcurrentinhcpackets{YType::uint64, "cpwVcPerfCurrentInHCPackets"},
    cpwvcperfcurrentouthcbytes{YType::uint64, "cpwVcPerfCurrentOutHCBytes"},
    cpwvcperfcurrentouthcpackets{YType::uint64, "cpwVcPerfCurrentOutHCPackets"}
{
    yang_name = "cpwVcPerfCurrentEntry"; yang_parent_name = "cpwVcPerfCurrentTable";
}

CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::~Cpwvcperfcurrententry()
{
}

bool CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcperfcurrentinhcbytes.is_set
	|| cpwvcperfcurrentinhcpackets.is_set
	|| cpwvcperfcurrentouthcbytes.is_set
	|| cpwvcperfcurrentouthcpackets.is_set;
}

bool CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcperfcurrentinhcbytes.operation)
	|| is_set(cpwvcperfcurrentinhcpackets.operation)
	|| is_set(cpwvcperfcurrentouthcbytes.operation)
	|| is_set(cpwvcperfcurrentouthcpackets.operation);
}

std::string CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfCurrentEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPerfCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcperfcurrentinhcbytes.is_set || is_set(cpwvcperfcurrentinhcbytes.operation)) leaf_name_data.push_back(cpwvcperfcurrentinhcbytes.get_name_leafdata());
    if (cpwvcperfcurrentinhcpackets.is_set || is_set(cpwvcperfcurrentinhcpackets.operation)) leaf_name_data.push_back(cpwvcperfcurrentinhcpackets.get_name_leafdata());
    if (cpwvcperfcurrentouthcbytes.is_set || is_set(cpwvcperfcurrentouthcbytes.operation)) leaf_name_data.push_back(cpwvcperfcurrentouthcbytes.get_name_leafdata());
    if (cpwvcperfcurrentouthcpackets.is_set || is_set(cpwvcperfcurrentouthcpackets.operation)) leaf_name_data.push_back(cpwvcperfcurrentouthcpackets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcPerfCurrentInHCBytes")
    {
        cpwvcperfcurrentinhcbytes = value;
    }
    if(value_path == "cpwVcPerfCurrentInHCPackets")
    {
        cpwvcperfcurrentinhcpackets = value;
    }
    if(value_path == "cpwVcPerfCurrentOutHCBytes")
    {
        cpwvcperfcurrentouthcbytes = value;
    }
    if(value_path == "cpwVcPerfCurrentOutHCPackets")
    {
        cpwvcperfcurrentouthcpackets = value;
    }
}

CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervaltable()
{
    yang_name = "cpwVcPerfIntervalTable"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::Cpwvcperfintervaltable::~Cpwvcperfintervaltable()
{
}

bool CiscoIetfPwMib::Cpwvcperfintervaltable::has_data() const
{
    for (std::size_t index=0; index<cpwvcperfintervalentry.size(); index++)
    {
        if(cpwvcperfintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMib::Cpwvcperfintervaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcperfintervalentry.size(); index++)
    {
        if(cpwvcperfintervalentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMib::Cpwvcperfintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfIntervalTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcperfintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcperfintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPerfIntervalEntry")
    {
        for(auto const & c : cpwvcperfintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry>();
        c->parent = this;
        cpwvcperfintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcperfintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcperfintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMib::Cpwvcperfintervaltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::Cpwvcperfintervalentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcperfintervalnumber{YType::int32, "cpwVcPerfIntervalNumber"},
    cpwvcperfintervalinhcbytes{YType::uint64, "cpwVcPerfIntervalInHCBytes"},
    cpwvcperfintervalinhcpackets{YType::uint64, "cpwVcPerfIntervalInHCPackets"},
    cpwvcperfintervalouthcbytes{YType::uint64, "cpwVcPerfIntervalOutHCBytes"},
    cpwvcperfintervalouthcpackets{YType::uint64, "cpwVcPerfIntervalOutHCPackets"},
    cpwvcperfintervaltimeelapsed{YType::int32, "cpwVcPerfIntervalTimeElapsed"},
    cpwvcperfintervalvaliddata{YType::boolean, "cpwVcPerfIntervalValidData"}
{
    yang_name = "cpwVcPerfIntervalEntry"; yang_parent_name = "cpwVcPerfIntervalTable";
}

CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::~Cpwvcperfintervalentry()
{
}

bool CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcperfintervalnumber.is_set
	|| cpwvcperfintervalinhcbytes.is_set
	|| cpwvcperfintervalinhcpackets.is_set
	|| cpwvcperfintervalouthcbytes.is_set
	|| cpwvcperfintervalouthcpackets.is_set
	|| cpwvcperfintervaltimeelapsed.is_set
	|| cpwvcperfintervalvaliddata.is_set;
}

bool CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcperfintervalnumber.operation)
	|| is_set(cpwvcperfintervalinhcbytes.operation)
	|| is_set(cpwvcperfintervalinhcpackets.operation)
	|| is_set(cpwvcperfintervalouthcbytes.operation)
	|| is_set(cpwvcperfintervalouthcpackets.operation)
	|| is_set(cpwvcperfintervaltimeelapsed.operation)
	|| is_set(cpwvcperfintervalvaliddata.operation);
}

std::string CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfIntervalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwVcPerfIntervalNumber='" <<cpwvcperfintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPerfIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcperfintervalnumber.is_set || is_set(cpwvcperfintervalnumber.operation)) leaf_name_data.push_back(cpwvcperfintervalnumber.get_name_leafdata());
    if (cpwvcperfintervalinhcbytes.is_set || is_set(cpwvcperfintervalinhcbytes.operation)) leaf_name_data.push_back(cpwvcperfintervalinhcbytes.get_name_leafdata());
    if (cpwvcperfintervalinhcpackets.is_set || is_set(cpwvcperfintervalinhcpackets.operation)) leaf_name_data.push_back(cpwvcperfintervalinhcpackets.get_name_leafdata());
    if (cpwvcperfintervalouthcbytes.is_set || is_set(cpwvcperfintervalouthcbytes.operation)) leaf_name_data.push_back(cpwvcperfintervalouthcbytes.get_name_leafdata());
    if (cpwvcperfintervalouthcpackets.is_set || is_set(cpwvcperfintervalouthcpackets.operation)) leaf_name_data.push_back(cpwvcperfintervalouthcpackets.get_name_leafdata());
    if (cpwvcperfintervaltimeelapsed.is_set || is_set(cpwvcperfintervaltimeelapsed.operation)) leaf_name_data.push_back(cpwvcperfintervaltimeelapsed.get_name_leafdata());
    if (cpwvcperfintervalvaliddata.is_set || is_set(cpwvcperfintervalvaliddata.operation)) leaf_name_data.push_back(cpwvcperfintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcPerfIntervalNumber")
    {
        cpwvcperfintervalnumber = value;
    }
    if(value_path == "cpwVcPerfIntervalInHCBytes")
    {
        cpwvcperfintervalinhcbytes = value;
    }
    if(value_path == "cpwVcPerfIntervalInHCPackets")
    {
        cpwvcperfintervalinhcpackets = value;
    }
    if(value_path == "cpwVcPerfIntervalOutHCBytes")
    {
        cpwvcperfintervalouthcbytes = value;
    }
    if(value_path == "cpwVcPerfIntervalOutHCPackets")
    {
        cpwvcperfintervalouthcpackets = value;
    }
    if(value_path == "cpwVcPerfIntervalTimeElapsed")
    {
        cpwvcperfintervaltimeelapsed = value;
    }
    if(value_path == "cpwVcPerfIntervalValidData")
    {
        cpwvcperfintervalvaliddata = value;
    }
}

CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotaltable()
{
    yang_name = "cpwVcPerfTotalTable"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::Cpwvcperftotaltable::~Cpwvcperftotaltable()
{
}

bool CiscoIetfPwMib::Cpwvcperftotaltable::has_data() const
{
    for (std::size_t index=0; index<cpwvcperftotalentry.size(); index++)
    {
        if(cpwvcperftotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMib::Cpwvcperftotaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcperftotalentry.size(); index++)
    {
        if(cpwvcperftotalentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMib::Cpwvcperftotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfTotalTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcperftotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcperftotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPerfTotalEntry")
    {
        for(auto const & c : cpwvcperftotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry>();
        c->parent = this;
        cpwvcperftotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcperftotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcperftotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMib::Cpwvcperftotaltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::Cpwvcperftotalentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcperftotaldiscontinuitytime{YType::uint32, "cpwVcPerfTotalDiscontinuityTime"},
    cpwvcperftotalinhcbytes{YType::uint64, "cpwVcPerfTotalInHCBytes"},
    cpwvcperftotalinhcpackets{YType::uint64, "cpwVcPerfTotalInHCPackets"},
    cpwvcperftotalouthcbytes{YType::uint64, "cpwVcPerfTotalOutHCBytes"},
    cpwvcperftotalouthcpackets{YType::uint64, "cpwVcPerfTotalOutHCPackets"}
{
    yang_name = "cpwVcPerfTotalEntry"; yang_parent_name = "cpwVcPerfTotalTable";
}

CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::~Cpwvcperftotalentry()
{
}

bool CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcperftotaldiscontinuitytime.is_set
	|| cpwvcperftotalinhcbytes.is_set
	|| cpwvcperftotalinhcpackets.is_set
	|| cpwvcperftotalouthcbytes.is_set
	|| cpwvcperftotalouthcpackets.is_set;
}

bool CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcperftotaldiscontinuitytime.operation)
	|| is_set(cpwvcperftotalinhcbytes.operation)
	|| is_set(cpwvcperftotalinhcpackets.operation)
	|| is_set(cpwvcperftotalouthcbytes.operation)
	|| is_set(cpwvcperftotalouthcpackets.operation);
}

std::string CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfTotalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPerfTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcperftotaldiscontinuitytime.is_set || is_set(cpwvcperftotaldiscontinuitytime.operation)) leaf_name_data.push_back(cpwvcperftotaldiscontinuitytime.get_name_leafdata());
    if (cpwvcperftotalinhcbytes.is_set || is_set(cpwvcperftotalinhcbytes.operation)) leaf_name_data.push_back(cpwvcperftotalinhcbytes.get_name_leafdata());
    if (cpwvcperftotalinhcpackets.is_set || is_set(cpwvcperftotalinhcpackets.operation)) leaf_name_data.push_back(cpwvcperftotalinhcpackets.get_name_leafdata());
    if (cpwvcperftotalouthcbytes.is_set || is_set(cpwvcperftotalouthcbytes.operation)) leaf_name_data.push_back(cpwvcperftotalouthcbytes.get_name_leafdata());
    if (cpwvcperftotalouthcpackets.is_set || is_set(cpwvcperftotalouthcpackets.operation)) leaf_name_data.push_back(cpwvcperftotalouthcpackets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcPerfTotalDiscontinuityTime")
    {
        cpwvcperftotaldiscontinuitytime = value;
    }
    if(value_path == "cpwVcPerfTotalInHCBytes")
    {
        cpwvcperftotalinhcbytes = value;
    }
    if(value_path == "cpwVcPerfTotalInHCPackets")
    {
        cpwvcperftotalinhcpackets = value;
    }
    if(value_path == "cpwVcPerfTotalOutHCBytes")
    {
        cpwvcperftotalouthcbytes = value;
    }
    if(value_path == "cpwVcPerfTotalOutHCPackets")
    {
        cpwvcperftotalouthcpackets = value;
    }
}

CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingtable()
{
    yang_name = "cpwVcIdMappingTable"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::Cpwvcidmappingtable::~Cpwvcidmappingtable()
{
}

bool CiscoIetfPwMib::Cpwvcidmappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcidmappingentry.size(); index++)
    {
        if(cpwvcidmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMib::Cpwvcidmappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcidmappingentry.size(); index++)
    {
        if(cpwvcidmappingentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMib::Cpwvcidmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcIdMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcidmappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcidmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcIdMappingEntry")
    {
        for(auto const & c : cpwvcidmappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry>();
        c->parent = this;
        cpwvcidmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcidmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcidmappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMib::Cpwvcidmappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::Cpwvcidmappingentry()
    :
    cpwvcidmappingvctype{YType::enumeration, "cpwVcIdMappingVcType"},
    cpwvcidmappingvcid{YType::uint32, "cpwVcIdMappingVcID"},
    cpwvcidmappingpeeraddrtype{YType::enumeration, "cpwVcIdMappingPeerAddrType"},
    cpwvcidmappingpeeraddr{YType::str, "cpwVcIdMappingPeerAddr"},
    cpwvcidmappingvcindex{YType::uint32, "cpwVcIdMappingVcIndex"}
{
    yang_name = "cpwVcIdMappingEntry"; yang_parent_name = "cpwVcIdMappingTable";
}

CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::~Cpwvcidmappingentry()
{
}

bool CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::has_data() const
{
    return cpwvcidmappingvctype.is_set
	|| cpwvcidmappingvcid.is_set
	|| cpwvcidmappingpeeraddrtype.is_set
	|| cpwvcidmappingpeeraddr.is_set
	|| cpwvcidmappingvcindex.is_set;
}

bool CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcidmappingvctype.operation)
	|| is_set(cpwvcidmappingvcid.operation)
	|| is_set(cpwvcidmappingpeeraddrtype.operation)
	|| is_set(cpwvcidmappingpeeraddr.operation)
	|| is_set(cpwvcidmappingvcindex.operation);
}

std::string CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcIdMappingEntry" <<"[cpwVcIdMappingVcType='" <<cpwvcidmappingvctype <<"']" <<"[cpwVcIdMappingVcID='" <<cpwvcidmappingvcid <<"']" <<"[cpwVcIdMappingPeerAddrType='" <<cpwvcidmappingpeeraddrtype <<"']" <<"[cpwVcIdMappingPeerAddr='" <<cpwvcidmappingpeeraddr <<"']" <<"[cpwVcIdMappingVcIndex='" <<cpwvcidmappingvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcIdMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcidmappingvctype.is_set || is_set(cpwvcidmappingvctype.operation)) leaf_name_data.push_back(cpwvcidmappingvctype.get_name_leafdata());
    if (cpwvcidmappingvcid.is_set || is_set(cpwvcidmappingvcid.operation)) leaf_name_data.push_back(cpwvcidmappingvcid.get_name_leafdata());
    if (cpwvcidmappingpeeraddrtype.is_set || is_set(cpwvcidmappingpeeraddrtype.operation)) leaf_name_data.push_back(cpwvcidmappingpeeraddrtype.get_name_leafdata());
    if (cpwvcidmappingpeeraddr.is_set || is_set(cpwvcidmappingpeeraddr.operation)) leaf_name_data.push_back(cpwvcidmappingpeeraddr.get_name_leafdata());
    if (cpwvcidmappingvcindex.is_set || is_set(cpwvcidmappingvcindex.operation)) leaf_name_data.push_back(cpwvcidmappingvcindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIdMappingVcType")
    {
        cpwvcidmappingvctype = value;
    }
    if(value_path == "cpwVcIdMappingVcID")
    {
        cpwvcidmappingvcid = value;
    }
    if(value_path == "cpwVcIdMappingPeerAddrType")
    {
        cpwvcidmappingpeeraddrtype = value;
    }
    if(value_path == "cpwVcIdMappingPeerAddr")
    {
        cpwvcidmappingpeeraddr = value;
    }
    if(value_path == "cpwVcIdMappingVcIndex")
    {
        cpwvcidmappingvcindex = value;
    }
}

CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingtable()
{
    yang_name = "cpwVcPeerMappingTable"; yang_parent_name = "CISCO-IETF-PW-MIB";
}

CiscoIetfPwMib::Cpwvcpeermappingtable::~Cpwvcpeermappingtable()
{
}

bool CiscoIetfPwMib::Cpwvcpeermappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcpeermappingentry.size(); index++)
    {
        if(cpwvcpeermappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMib::Cpwvcpeermappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcpeermappingentry.size(); index++)
    {
        if(cpwvcpeermappingentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMib::Cpwvcpeermappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPeerMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcpeermappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcpeermappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPeerMappingEntry")
    {
        for(auto const & c : cpwvcpeermappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry>();
        c->parent = this;
        cpwvcpeermappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcpeermappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcpeermappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMib::Cpwvcpeermappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::Cpwvcpeermappingentry()
    :
    cpwvcpeermappingpeeraddrtype{YType::enumeration, "cpwVcPeerMappingPeerAddrType"},
    cpwvcpeermappingpeeraddr{YType::str, "cpwVcPeerMappingPeerAddr"},
    cpwvcpeermappingvctype{YType::enumeration, "cpwVcPeerMappingVcType"},
    cpwvcpeermappingvcid{YType::uint32, "cpwVcPeerMappingVcID"},
    cpwvcpeermappingvcindex{YType::uint32, "cpwVcPeerMappingVcIndex"}
{
    yang_name = "cpwVcPeerMappingEntry"; yang_parent_name = "cpwVcPeerMappingTable";
}

CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::~Cpwvcpeermappingentry()
{
}

bool CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::has_data() const
{
    return cpwvcpeermappingpeeraddrtype.is_set
	|| cpwvcpeermappingpeeraddr.is_set
	|| cpwvcpeermappingvctype.is_set
	|| cpwvcpeermappingvcid.is_set
	|| cpwvcpeermappingvcindex.is_set;
}

bool CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcpeermappingpeeraddrtype.operation)
	|| is_set(cpwvcpeermappingpeeraddr.operation)
	|| is_set(cpwvcpeermappingvctype.operation)
	|| is_set(cpwvcpeermappingvcid.operation)
	|| is_set(cpwvcpeermappingvcindex.operation);
}

std::string CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPeerMappingEntry" <<"[cpwVcPeerMappingPeerAddrType='" <<cpwvcpeermappingpeeraddrtype <<"']" <<"[cpwVcPeerMappingPeerAddr='" <<cpwvcpeermappingpeeraddr <<"']" <<"[cpwVcPeerMappingVcType='" <<cpwvcpeermappingvctype <<"']" <<"[cpwVcPeerMappingVcID='" <<cpwvcpeermappingvcid <<"']" <<"[cpwVcPeerMappingVcIndex='" <<cpwvcpeermappingvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPeerMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcpeermappingpeeraddrtype.is_set || is_set(cpwvcpeermappingpeeraddrtype.operation)) leaf_name_data.push_back(cpwvcpeermappingpeeraddrtype.get_name_leafdata());
    if (cpwvcpeermappingpeeraddr.is_set || is_set(cpwvcpeermappingpeeraddr.operation)) leaf_name_data.push_back(cpwvcpeermappingpeeraddr.get_name_leafdata());
    if (cpwvcpeermappingvctype.is_set || is_set(cpwvcpeermappingvctype.operation)) leaf_name_data.push_back(cpwvcpeermappingvctype.get_name_leafdata());
    if (cpwvcpeermappingvcid.is_set || is_set(cpwvcpeermappingvcid.operation)) leaf_name_data.push_back(cpwvcpeermappingvcid.get_name_leafdata());
    if (cpwvcpeermappingvcindex.is_set || is_set(cpwvcpeermappingvcindex.operation)) leaf_name_data.push_back(cpwvcpeermappingvcindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcPeerMappingPeerAddrType")
    {
        cpwvcpeermappingpeeraddrtype = value;
    }
    if(value_path == "cpwVcPeerMappingPeerAddr")
    {
        cpwvcpeermappingpeeraddr = value;
    }
    if(value_path == "cpwVcPeerMappingVcType")
    {
        cpwvcpeermappingvctype = value;
    }
    if(value_path == "cpwVcPeerMappingVcID")
    {
        cpwvcpeermappingvcid = value;
    }
    if(value_path == "cpwVcPeerMappingVcIndex")
    {
        cpwvcpeermappingvcindex = value;
    }
}

const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcownerEnum::manual {1, "manual"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcownerEnum::maintenanceProtocol {2, "maintenanceProtocol"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcownerEnum::other {3, "other"};

const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcpsntypeEnum::mpls {1, "mpls"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcpsntypeEnum::l2tp {2, "l2tp"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcpsntypeEnum::ip {3, "ip"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcpsntypeEnum::mplsOverIp {4, "mplsOverIp"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcpsntypeEnum::gre {5, "gre"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcpsntypeEnum::other {6, "other"};

const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcinboundmodeEnum::loose {1, "loose"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcinboundmodeEnum::strict {2, "strict"};

const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcremotecontrolwordEnum::noControlWord {1, "noControlWord"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcremotecontrolwordEnum::withControlWord {2, "withControlWord"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcremotecontrolwordEnum::notYetKnown {3, "notYetKnown"};

const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcadminstatusEnum::up {1, "up"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcadminstatusEnum::down {2, "down"};
const Enum::YLeaf CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcadminstatusEnum::testing {3, "testing"};


}
}

