
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_10.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24History()
    :
    optics_hour24_optics_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories>())
	,optics_hour24fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories>())
{
    optics_hour24_optics_histories->parent = this;
    children["optics-hour24-optics-histories"] = optics_hour24_optics_histories;

    optics_hour24fec_histories->parent = this;
    children["optics-hour24fec-histories"] = optics_hour24fec_histories;

    yang_name = "optics-hour24-history"; yang_parent_name = "optics-port-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::~OpticsHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::has_data() const
{
    return (optics_hour24_optics_histories !=  nullptr && optics_hour24_optics_histories->has_data())
	|| (optics_hour24fec_histories !=  nullptr && optics_hour24fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::has_operation() const
{
    return is_set(operation)
	|| (optics_hour24_optics_histories !=  nullptr && optics_hour24_optics_histories->has_operation())
	|| (optics_hour24fec_histories !=  nullptr && optics_hour24fec_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-history";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24History' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24-optics-histories")
    {
        if(optics_hour24_optics_histories != nullptr)
        {
            children["optics-hour24-optics-histories"] = optics_hour24_optics_histories;
        }
        else
        {
            optics_hour24_optics_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories>();
            optics_hour24_optics_histories->parent = this;
            children["optics-hour24-optics-histories"] = optics_hour24_optics_histories;
        }
        return children.at("optics-hour24-optics-histories");
    }

    if(child_yang_name == "optics-hour24fec-histories")
    {
        if(optics_hour24fec_histories != nullptr)
        {
            children["optics-hour24fec-histories"] = optics_hour24fec_histories;
        }
        else
        {
            optics_hour24fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories>();
            optics_hour24fec_histories->parent = this;
            children["optics-hour24fec-histories"] = optics_hour24fec_histories;
        }
        return children.at("optics-hour24fec-histories");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::get_children()
{
    if(children.find("optics-hour24-optics-histories") == children.end())
    {
        if(optics_hour24_optics_histories != nullptr)
        {
            children["optics-hour24-optics-histories"] = optics_hour24_optics_histories;
        }
    }

    if(children.find("optics-hour24fec-histories") == children.end())
    {
        if(optics_hour24fec_histories != nullptr)
        {
            children["optics-hour24fec-histories"] = optics_hour24fec_histories;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistories()
{
    yang_name = "optics-hour24-optics-histories"; yang_parent_name = "optics-hour24-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::~OpticsHour24OpticsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::has_data() const
{
    for (std::size_t index=0; index<optics_hour24_optics_history.size(); index++)
    {
        if(optics_hour24_optics_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24_optics_history.size(); index++)
    {
        if(optics_hour24_optics_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24OpticsHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24-optics-history")
    {
        for(auto const & c : optics_hour24_optics_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory>();
        c->parent = this;
        optics_hour24_optics_history.push_back(std::move(c));
        children[segment_path] = optics_hour24_optics_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::get_children()
{
    for (auto const & c : optics_hour24_optics_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_hour24_optics_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances>())
{
    optics_hour24_optics_time_line_instances->parent = this;
    children["optics-hour24-optics-time-line-instances"] = optics_hour24_optics_time_line_instances;

    yang_name = "optics-hour24-optics-history"; yang_parent_name = "optics-hour24-optics-histories";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::~OpticsHour24OpticsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::has_data() const
{
    return number.is_set
	|| (optics_hour24_optics_time_line_instances !=  nullptr && optics_hour24_optics_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (optics_hour24_optics_time_line_instances !=  nullptr && optics_hour24_optics_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24OpticsHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24-optics-time-line-instances")
    {
        if(optics_hour24_optics_time_line_instances != nullptr)
        {
            children["optics-hour24-optics-time-line-instances"] = optics_hour24_optics_time_line_instances;
        }
        else
        {
            optics_hour24_optics_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances>();
            optics_hour24_optics_time_line_instances->parent = this;
            children["optics-hour24-optics-time-line-instances"] = optics_hour24_optics_time_line_instances;
        }
        return children.at("optics-hour24-optics-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::get_children()
{
    if(children.find("optics-hour24-optics-time-line-instances") == children.end())
    {
        if(optics_hour24_optics_time_line_instances != nullptr)
        {
            children["optics-hour24-optics-time-line-instances"] = optics_hour24_optics_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstances()
{
    yang_name = "optics-hour24-optics-time-line-instances"; yang_parent_name = "optics-hour24-optics-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::~OpticsHour24OpticsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_hour24_optics_time_line_instance.size(); index++)
    {
        if(optics_hour24_optics_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24_optics_time_line_instance.size(); index++)
    {
        if(optics_hour24_optics_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24OpticsTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24-optics-time-line-instance")
    {
        for(auto const & c : optics_hour24_optics_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance>();
        c->parent = this;
        optics_hour24_optics_time_line_instance.push_back(std::move(c));
        children[segment_path] = optics_hour24_optics_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::get_children()
{
    for (auto const & c : optics_hour24_optics_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::OpticsHour24OpticsTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    cd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd>())
	,lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr>())
	,opt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt>())
	,osnr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr>())
	,pcr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr>())
	,pdl(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl>())
	,pmd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd>())
	,pn(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow>())
{
    cd->parent = this;
    children["cd"] = cd;

    center_wavelength->parent = this;
    children["center-wavelength"] = center_wavelength;

    dgd->parent = this;
    children["dgd"] = dgd;

    lbc->parent = this;
    children["lbc"] = lbc;

    lbc_pc->parent = this;
    children["lbc-pc"] = lbc_pc;

    low_sig_freq_off->parent = this;
    children["low-sig-freq-off"] = low_sig_freq_off;

    opr->parent = this;
    children["opr"] = opr;

    opt->parent = this;
    children["opt"] = opt;

    osnr->parent = this;
    children["osnr"] = osnr;

    pcr->parent = this;
    children["pcr"] = pcr;

    pdl->parent = this;
    children["pdl"] = pdl;

    pmd->parent = this;
    children["pmd"] = pmd;

    pn->parent = this;
    children["pn"] = pn;

    rx_sig_pow->parent = this;
    children["rx-sig-pow"] = rx_sig_pow;

    yang_name = "optics-hour24-optics-time-line-instance"; yang_parent_name = "optics-hour24-optics-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::~OpticsHour24OpticsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24OpticsTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cd")
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
        else
        {
            cd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd>();
            cd->parent = this;
            children["cd"] = cd;
        }
        return children.at("cd");
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
        else
        {
            center_wavelength = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength>();
            center_wavelength->parent = this;
            children["center-wavelength"] = center_wavelength;
        }
        return children.at("center-wavelength");
    }

    if(child_yang_name == "dgd")
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
        else
        {
            dgd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd>();
            dgd->parent = this;
            children["dgd"] = dgd;
        }
        return children.at("dgd");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
        else
        {
            lbc_pc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc>();
            lbc_pc->parent = this;
            children["lbc-pc"] = lbc_pc;
        }
        return children.at("lbc-pc");
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        else
        {
            low_sig_freq_off = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff>();
            low_sig_freq_off->parent = this;
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        return children.at("low-sig-freq-off");
    }

    if(child_yang_name == "opr")
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
        else
        {
            opr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr>();
            opr->parent = this;
            children["opr"] = opr;
        }
        return children.at("opr");
    }

    if(child_yang_name == "opt")
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
        else
        {
            opt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt>();
            opt->parent = this;
            children["opt"] = opt;
        }
        return children.at("opt");
    }

    if(child_yang_name == "osnr")
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
        else
        {
            osnr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr>();
            osnr->parent = this;
            children["osnr"] = osnr;
        }
        return children.at("osnr");
    }

    if(child_yang_name == "pcr")
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
        else
        {
            pcr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr>();
            pcr->parent = this;
            children["pcr"] = pcr;
        }
        return children.at("pcr");
    }

    if(child_yang_name == "pdl")
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
        else
        {
            pdl = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl>();
            pdl->parent = this;
            children["pdl"] = pdl;
        }
        return children.at("pdl");
    }

    if(child_yang_name == "pmd")
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
        else
        {
            pmd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd>();
            pmd->parent = this;
            children["pmd"] = pmd;
        }
        return children.at("pmd");
    }

    if(child_yang_name == "pn")
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
        else
        {
            pn = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn>();
            pn->parent = this;
            children["pn"] = pn;
        }
        return children.at("pn");
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
        else
        {
            rx_sig_pow = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::get_children()
{
    if(children.find("cd") == children.end())
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
    }

    if(children.find("center-wavelength") == children.end())
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
    }

    if(children.find("dgd") == children.end())
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("lbc-pc") == children.end())
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
    }

    if(children.find("low-sig-freq-off") == children.end())
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
    }

    if(children.find("opr") == children.end())
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
    }

    if(children.find("opt") == children.end())
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
    }

    if(children.find("osnr") == children.end())
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
    }

    if(children.find("pcr") == children.end())
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
    }

    if(children.find("pdl") == children.end())
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
    }

    if(children.find("pmd") == children.end())
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
    }

    if(children.find("pn") == children.end())
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
    }

    if(children.find("rx-sig-pow") == children.end())
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::LbcPc()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc-pc"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::~LbcPc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LbcPc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::Opt()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opt"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::~Opt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::Opr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opr"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::~Opr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "cd"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::~Cd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::Dgd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "dgd"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::~Dgd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dgd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::Pmd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pmd"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::~Pmd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::Osnr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "osnr"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::~Osnr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::CenterWavelength()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "center-wavelength"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CenterWavelength' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::Pdl()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pdl"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::~Pdl()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pdl' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::Pcr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pcr"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::~Pcr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::Pn()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pn"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::~Pn()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::RxSigPow()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-sig-pow"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxSigPow' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-hour24-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowSigFreqOff' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistories()
{
    yang_name = "optics-hour24fec-histories"; yang_parent_name = "optics-hour24-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::~OpticsHour24FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::has_data() const
{
    for (std::size_t index=0; index<optics_hour24fec_history.size(); index++)
    {
        if(optics_hour24fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24fec_history.size(); index++)
    {
        if(optics_hour24fec_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fec-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24FecHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24fec-history")
    {
        for(auto const & c : optics_hour24fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory>();
        c->parent = this;
        optics_hour24fec_history.push_back(std::move(c));
        children[segment_path] = optics_hour24fec_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::get_children()
{
    for (auto const & c : optics_hour24fec_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_hour24fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances>())
{
    optics_hour24fec_time_line_instances->parent = this;
    children["optics-hour24fec-time-line-instances"] = optics_hour24fec_time_line_instances;

    yang_name = "optics-hour24fec-history"; yang_parent_name = "optics-hour24fec-histories";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::~OpticsHour24FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::has_data() const
{
    return number.is_set
	|| (optics_hour24fec_time_line_instances !=  nullptr && optics_hour24fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (optics_hour24fec_time_line_instances !=  nullptr && optics_hour24fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fec-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24FecHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24fec-time-line-instances")
    {
        if(optics_hour24fec_time_line_instances != nullptr)
        {
            children["optics-hour24fec-time-line-instances"] = optics_hour24fec_time_line_instances;
        }
        else
        {
            optics_hour24fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances>();
            optics_hour24fec_time_line_instances->parent = this;
            children["optics-hour24fec-time-line-instances"] = optics_hour24fec_time_line_instances;
        }
        return children.at("optics-hour24fec-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::get_children()
{
    if(children.find("optics-hour24fec-time-line-instances") == children.end())
    {
        if(optics_hour24fec_time_line_instances != nullptr)
        {
            children["optics-hour24fec-time-line-instances"] = optics_hour24fec_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstances()
{
    yang_name = "optics-hour24fec-time-line-instances"; yang_parent_name = "optics-hour24fec-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::~OpticsHour24FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_hour24fec_time_line_instance.size(); index++)
    {
        if(optics_hour24fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24fec_time_line_instance.size(); index++)
    {
        if(optics_hour24fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fec-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24FecTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24fec-time-line-instance")
    {
        for(auto const & c : optics_hour24fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance>();
        c->parent = this;
        optics_hour24fec_time_line_instance.push_back(std::move(c));
        children[segment_path] = optics_hour24fec_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::get_children()
{
    for (auto const & c : optics_hour24fec_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::OpticsHour24FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "optics-hour24fec-time-line-instance"; yang_parent_name = "optics-hour24fec-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::~OpticsHour24FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fec-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24FecTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "optics-hour24fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "optics-hour24fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "optics-hour24fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "optics-hour24fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "optics-hour24fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "optics-hour24fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30History()
    :
    optics_second30_optics_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories>())
	,optics_second30fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories>())
{
    optics_second30_optics_histories->parent = this;
    children["optics-second30-optics-histories"] = optics_second30_optics_histories;

    optics_second30fec_histories->parent = this;
    children["optics-second30fec-histories"] = optics_second30fec_histories;

    yang_name = "optics-second30-history"; yang_parent_name = "optics-port-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::~OpticsSecond30History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::has_data() const
{
    return (optics_second30_optics_histories !=  nullptr && optics_second30_optics_histories->has_data())
	|| (optics_second30fec_histories !=  nullptr && optics_second30fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::has_operation() const
{
    return is_set(operation)
	|| (optics_second30_optics_histories !=  nullptr && optics_second30_optics_histories->has_operation())
	|| (optics_second30fec_histories !=  nullptr && optics_second30fec_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-history";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30History' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30-optics-histories")
    {
        if(optics_second30_optics_histories != nullptr)
        {
            children["optics-second30-optics-histories"] = optics_second30_optics_histories;
        }
        else
        {
            optics_second30_optics_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories>();
            optics_second30_optics_histories->parent = this;
            children["optics-second30-optics-histories"] = optics_second30_optics_histories;
        }
        return children.at("optics-second30-optics-histories");
    }

    if(child_yang_name == "optics-second30fec-histories")
    {
        if(optics_second30fec_histories != nullptr)
        {
            children["optics-second30fec-histories"] = optics_second30fec_histories;
        }
        else
        {
            optics_second30fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories>();
            optics_second30fec_histories->parent = this;
            children["optics-second30fec-histories"] = optics_second30fec_histories;
        }
        return children.at("optics-second30fec-histories");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_children()
{
    if(children.find("optics-second30-optics-histories") == children.end())
    {
        if(optics_second30_optics_histories != nullptr)
        {
            children["optics-second30-optics-histories"] = optics_second30_optics_histories;
        }
    }

    if(children.find("optics-second30fec-histories") == children.end())
    {
        if(optics_second30fec_histories != nullptr)
        {
            children["optics-second30fec-histories"] = optics_second30fec_histories;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistories()
{
    yang_name = "optics-second30-optics-histories"; yang_parent_name = "optics-second30-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::~OpticsSecond30OpticsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::has_data() const
{
    for (std::size_t index=0; index<optics_second30_optics_history.size(); index++)
    {
        if(optics_second30_optics_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_second30_optics_history.size(); index++)
    {
        if(optics_second30_optics_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30OpticsHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30-optics-history")
    {
        for(auto const & c : optics_second30_optics_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory>();
        c->parent = this;
        optics_second30_optics_history.push_back(std::move(c));
        children[segment_path] = optics_second30_optics_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_children()
{
    for (auto const & c : optics_second30_optics_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_second30_optics_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances>())
{
    optics_second30_optics_time_line_instances->parent = this;
    children["optics-second30-optics-time-line-instances"] = optics_second30_optics_time_line_instances;

    yang_name = "optics-second30-optics-history"; yang_parent_name = "optics-second30-optics-histories";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::~OpticsSecond30OpticsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::has_data() const
{
    return number.is_set
	|| (optics_second30_optics_time_line_instances !=  nullptr && optics_second30_optics_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (optics_second30_optics_time_line_instances !=  nullptr && optics_second30_optics_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30OpticsHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30-optics-time-line-instances")
    {
        if(optics_second30_optics_time_line_instances != nullptr)
        {
            children["optics-second30-optics-time-line-instances"] = optics_second30_optics_time_line_instances;
        }
        else
        {
            optics_second30_optics_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances>();
            optics_second30_optics_time_line_instances->parent = this;
            children["optics-second30-optics-time-line-instances"] = optics_second30_optics_time_line_instances;
        }
        return children.at("optics-second30-optics-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_children()
{
    if(children.find("optics-second30-optics-time-line-instances") == children.end())
    {
        if(optics_second30_optics_time_line_instances != nullptr)
        {
            children["optics-second30-optics-time-line-instances"] = optics_second30_optics_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstances()
{
    yang_name = "optics-second30-optics-time-line-instances"; yang_parent_name = "optics-second30-optics-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::~OpticsSecond30OpticsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_second30_optics_time_line_instance.size(); index++)
    {
        if(optics_second30_optics_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_second30_optics_time_line_instance.size(); index++)
    {
        if(optics_second30_optics_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30OpticsTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30-optics-time-line-instance")
    {
        for(auto const & c : optics_second30_optics_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance>();
        c->parent = this;
        optics_second30_optics_time_line_instance.push_back(std::move(c));
        children[segment_path] = optics_second30_optics_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_children()
{
    for (auto const & c : optics_second30_optics_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::OpticsSecond30OpticsTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    cd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd>())
	,lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr>())
	,opt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt>())
	,osnr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr>())
	,pcr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr>())
	,pdl(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl>())
	,pmd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd>())
	,pn(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow>())
{
    cd->parent = this;
    children["cd"] = cd;

    center_wavelength->parent = this;
    children["center-wavelength"] = center_wavelength;

    dgd->parent = this;
    children["dgd"] = dgd;

    lbc->parent = this;
    children["lbc"] = lbc;

    lbc_pc->parent = this;
    children["lbc-pc"] = lbc_pc;

    low_sig_freq_off->parent = this;
    children["low-sig-freq-off"] = low_sig_freq_off;

    opr->parent = this;
    children["opr"] = opr;

    opt->parent = this;
    children["opt"] = opt;

    osnr->parent = this;
    children["osnr"] = osnr;

    pcr->parent = this;
    children["pcr"] = pcr;

    pdl->parent = this;
    children["pdl"] = pdl;

    pmd->parent = this;
    children["pmd"] = pmd;

    pn->parent = this;
    children["pn"] = pn;

    rx_sig_pow->parent = this;
    children["rx-sig-pow"] = rx_sig_pow;

    yang_name = "optics-second30-optics-time-line-instance"; yang_parent_name = "optics-second30-optics-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::~OpticsSecond30OpticsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30OpticsTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cd")
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
        else
        {
            cd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd>();
            cd->parent = this;
            children["cd"] = cd;
        }
        return children.at("cd");
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
        else
        {
            center_wavelength = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength>();
            center_wavelength->parent = this;
            children["center-wavelength"] = center_wavelength;
        }
        return children.at("center-wavelength");
    }

    if(child_yang_name == "dgd")
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
        else
        {
            dgd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd>();
            dgd->parent = this;
            children["dgd"] = dgd;
        }
        return children.at("dgd");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
        else
        {
            lbc_pc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc>();
            lbc_pc->parent = this;
            children["lbc-pc"] = lbc_pc;
        }
        return children.at("lbc-pc");
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        else
        {
            low_sig_freq_off = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff>();
            low_sig_freq_off->parent = this;
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        return children.at("low-sig-freq-off");
    }

    if(child_yang_name == "opr")
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
        else
        {
            opr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr>();
            opr->parent = this;
            children["opr"] = opr;
        }
        return children.at("opr");
    }

    if(child_yang_name == "opt")
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
        else
        {
            opt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt>();
            opt->parent = this;
            children["opt"] = opt;
        }
        return children.at("opt");
    }

    if(child_yang_name == "osnr")
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
        else
        {
            osnr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr>();
            osnr->parent = this;
            children["osnr"] = osnr;
        }
        return children.at("osnr");
    }

    if(child_yang_name == "pcr")
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
        else
        {
            pcr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr>();
            pcr->parent = this;
            children["pcr"] = pcr;
        }
        return children.at("pcr");
    }

    if(child_yang_name == "pdl")
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
        else
        {
            pdl = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl>();
            pdl->parent = this;
            children["pdl"] = pdl;
        }
        return children.at("pdl");
    }

    if(child_yang_name == "pmd")
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
        else
        {
            pmd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd>();
            pmd->parent = this;
            children["pmd"] = pmd;
        }
        return children.at("pmd");
    }

    if(child_yang_name == "pn")
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
        else
        {
            pn = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn>();
            pn->parent = this;
            children["pn"] = pn;
        }
        return children.at("pn");
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
        else
        {
            rx_sig_pow = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_children()
{
    if(children.find("cd") == children.end())
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
    }

    if(children.find("center-wavelength") == children.end())
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
    }

    if(children.find("dgd") == children.end())
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("lbc-pc") == children.end())
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
    }

    if(children.find("low-sig-freq-off") == children.end())
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
    }

    if(children.find("opr") == children.end())
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
    }

    if(children.find("opt") == children.end())
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
    }

    if(children.find("osnr") == children.end())
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
    }

    if(children.find("pcr") == children.end())
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
    }

    if(children.find("pdl") == children.end())
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
    }

    if(children.find("pmd") == children.end())
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
    }

    if(children.find("pn") == children.end())
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
    }

    if(children.find("rx-sig-pow") == children.end())
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::LbcPc()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc-pc"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::~LbcPc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LbcPc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::Opt()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opt"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::~Opt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::Opr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opr"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::~Opr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "cd"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::~Cd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::Dgd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "dgd"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::~Dgd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dgd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::Pmd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pmd"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::~Pmd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::Osnr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "osnr"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::~Osnr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::CenterWavelength()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "center-wavelength"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CenterWavelength' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::Pdl()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pdl"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::~Pdl()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pdl' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::Pcr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pcr"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::~Pcr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::Pn()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pn"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::~Pn()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::RxSigPow()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-sig-pow"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxSigPow' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-second30-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowSigFreqOff' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistories()
{
    yang_name = "optics-second30fec-histories"; yang_parent_name = "optics-second30-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::~OpticsSecond30FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::has_data() const
{
    for (std::size_t index=0; index<optics_second30fec_history.size(); index++)
    {
        if(optics_second30fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_second30fec_history.size(); index++)
    {
        if(optics_second30fec_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30FecHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30fec-history")
    {
        for(auto const & c : optics_second30fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory>();
        c->parent = this;
        optics_second30fec_history.push_back(std::move(c));
        children[segment_path] = optics_second30fec_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_children()
{
    for (auto const & c : optics_second30fec_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_second30fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances>())
{
    optics_second30fec_time_line_instances->parent = this;
    children["optics-second30fec-time-line-instances"] = optics_second30fec_time_line_instances;

    yang_name = "optics-second30fec-history"; yang_parent_name = "optics-second30fec-histories";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::~OpticsSecond30FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::has_data() const
{
    return number.is_set
	|| (optics_second30fec_time_line_instances !=  nullptr && optics_second30fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (optics_second30fec_time_line_instances !=  nullptr && optics_second30fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30FecHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30fec-time-line-instances")
    {
        if(optics_second30fec_time_line_instances != nullptr)
        {
            children["optics-second30fec-time-line-instances"] = optics_second30fec_time_line_instances;
        }
        else
        {
            optics_second30fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances>();
            optics_second30fec_time_line_instances->parent = this;
            children["optics-second30fec-time-line-instances"] = optics_second30fec_time_line_instances;
        }
        return children.at("optics-second30fec-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_children()
{
    if(children.find("optics-second30fec-time-line-instances") == children.end())
    {
        if(optics_second30fec_time_line_instances != nullptr)
        {
            children["optics-second30fec-time-line-instances"] = optics_second30fec_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstances()
{
    yang_name = "optics-second30fec-time-line-instances"; yang_parent_name = "optics-second30fec-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::~OpticsSecond30FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_second30fec_time_line_instance.size(); index++)
    {
        if(optics_second30fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_second30fec_time_line_instance.size(); index++)
    {
        if(optics_second30fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30FecTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30fec-time-line-instance")
    {
        for(auto const & c : optics_second30fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance>();
        c->parent = this;
        optics_second30fec_time_line_instance.push_back(std::move(c));
        children[segment_path] = optics_second30fec_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_children()
{
    for (auto const & c : optics_second30fec_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::OpticsSecond30FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "optics-second30fec-time-line-instance"; yang_parent_name = "optics-second30fec-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::~OpticsSecond30FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30FecTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "optics-second30fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "optics-second30fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "optics-second30fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "optics-second30fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "optics-second30fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "optics-second30fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15History()
    :
    optics_minute15_optics_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories>())
	,optics_minute15fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories>())
{
    optics_minute15_optics_histories->parent = this;
    children["optics-minute15-optics-histories"] = optics_minute15_optics_histories;

    optics_minute15fec_histories->parent = this;
    children["optics-minute15fec-histories"] = optics_minute15fec_histories;

    yang_name = "optics-minute15-history"; yang_parent_name = "optics-port-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::~OpticsMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::has_data() const
{
    return (optics_minute15_optics_histories !=  nullptr && optics_minute15_optics_histories->has_data())
	|| (optics_minute15fec_histories !=  nullptr && optics_minute15fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::has_operation() const
{
    return is_set(operation)
	|| (optics_minute15_optics_histories !=  nullptr && optics_minute15_optics_histories->has_operation())
	|| (optics_minute15fec_histories !=  nullptr && optics_minute15fec_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-history";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15History' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15-optics-histories")
    {
        if(optics_minute15_optics_histories != nullptr)
        {
            children["optics-minute15-optics-histories"] = optics_minute15_optics_histories;
        }
        else
        {
            optics_minute15_optics_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories>();
            optics_minute15_optics_histories->parent = this;
            children["optics-minute15-optics-histories"] = optics_minute15_optics_histories;
        }
        return children.at("optics-minute15-optics-histories");
    }

    if(child_yang_name == "optics-minute15fec-histories")
    {
        if(optics_minute15fec_histories != nullptr)
        {
            children["optics-minute15fec-histories"] = optics_minute15fec_histories;
        }
        else
        {
            optics_minute15fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories>();
            optics_minute15fec_histories->parent = this;
            children["optics-minute15fec-histories"] = optics_minute15fec_histories;
        }
        return children.at("optics-minute15fec-histories");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_children()
{
    if(children.find("optics-minute15-optics-histories") == children.end())
    {
        if(optics_minute15_optics_histories != nullptr)
        {
            children["optics-minute15-optics-histories"] = optics_minute15_optics_histories;
        }
    }

    if(children.find("optics-minute15fec-histories") == children.end())
    {
        if(optics_minute15fec_histories != nullptr)
        {
            children["optics-minute15fec-histories"] = optics_minute15fec_histories;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistories()
{
    yang_name = "optics-minute15-optics-histories"; yang_parent_name = "optics-minute15-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::~OpticsMinute15OpticsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::has_data() const
{
    for (std::size_t index=0; index<optics_minute15_optics_history.size(); index++)
    {
        if(optics_minute15_optics_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15_optics_history.size(); index++)
    {
        if(optics_minute15_optics_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15OpticsHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15-optics-history")
    {
        for(auto const & c : optics_minute15_optics_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory>();
        c->parent = this;
        optics_minute15_optics_history.push_back(std::move(c));
        children[segment_path] = optics_minute15_optics_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_children()
{
    for (auto const & c : optics_minute15_optics_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_minute15_optics_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances>())
{
    optics_minute15_optics_time_line_instances->parent = this;
    children["optics-minute15-optics-time-line-instances"] = optics_minute15_optics_time_line_instances;

    yang_name = "optics-minute15-optics-history"; yang_parent_name = "optics-minute15-optics-histories";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::~OpticsMinute15OpticsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::has_data() const
{
    return number.is_set
	|| (optics_minute15_optics_time_line_instances !=  nullptr && optics_minute15_optics_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (optics_minute15_optics_time_line_instances !=  nullptr && optics_minute15_optics_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15OpticsHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15-optics-time-line-instances")
    {
        if(optics_minute15_optics_time_line_instances != nullptr)
        {
            children["optics-minute15-optics-time-line-instances"] = optics_minute15_optics_time_line_instances;
        }
        else
        {
            optics_minute15_optics_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances>();
            optics_minute15_optics_time_line_instances->parent = this;
            children["optics-minute15-optics-time-line-instances"] = optics_minute15_optics_time_line_instances;
        }
        return children.at("optics-minute15-optics-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_children()
{
    if(children.find("optics-minute15-optics-time-line-instances") == children.end())
    {
        if(optics_minute15_optics_time_line_instances != nullptr)
        {
            children["optics-minute15-optics-time-line-instances"] = optics_minute15_optics_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstances()
{
    yang_name = "optics-minute15-optics-time-line-instances"; yang_parent_name = "optics-minute15-optics-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::~OpticsMinute15OpticsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_minute15_optics_time_line_instance.size(); index++)
    {
        if(optics_minute15_optics_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15_optics_time_line_instance.size(); index++)
    {
        if(optics_minute15_optics_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15OpticsTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15-optics-time-line-instance")
    {
        for(auto const & c : optics_minute15_optics_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance>();
        c->parent = this;
        optics_minute15_optics_time_line_instance.push_back(std::move(c));
        children[segment_path] = optics_minute15_optics_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_children()
{
    for (auto const & c : optics_minute15_optics_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::OpticsMinute15OpticsTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    cd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd>())
	,lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr>())
	,opt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt>())
	,osnr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr>())
	,pcr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr>())
	,pdl(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl>())
	,pmd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd>())
	,pn(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow>())
{
    cd->parent = this;
    children["cd"] = cd;

    center_wavelength->parent = this;
    children["center-wavelength"] = center_wavelength;

    dgd->parent = this;
    children["dgd"] = dgd;

    lbc->parent = this;
    children["lbc"] = lbc;

    lbc_pc->parent = this;
    children["lbc-pc"] = lbc_pc;

    low_sig_freq_off->parent = this;
    children["low-sig-freq-off"] = low_sig_freq_off;

    opr->parent = this;
    children["opr"] = opr;

    opt->parent = this;
    children["opt"] = opt;

    osnr->parent = this;
    children["osnr"] = osnr;

    pcr->parent = this;
    children["pcr"] = pcr;

    pdl->parent = this;
    children["pdl"] = pdl;

    pmd->parent = this;
    children["pmd"] = pmd;

    pn->parent = this;
    children["pn"] = pn;

    rx_sig_pow->parent = this;
    children["rx-sig-pow"] = rx_sig_pow;

    yang_name = "optics-minute15-optics-time-line-instance"; yang_parent_name = "optics-minute15-optics-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::~OpticsMinute15OpticsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15OpticsTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cd")
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
        else
        {
            cd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd>();
            cd->parent = this;
            children["cd"] = cd;
        }
        return children.at("cd");
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
        else
        {
            center_wavelength = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength>();
            center_wavelength->parent = this;
            children["center-wavelength"] = center_wavelength;
        }
        return children.at("center-wavelength");
    }

    if(child_yang_name == "dgd")
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
        else
        {
            dgd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd>();
            dgd->parent = this;
            children["dgd"] = dgd;
        }
        return children.at("dgd");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
        else
        {
            lbc_pc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc>();
            lbc_pc->parent = this;
            children["lbc-pc"] = lbc_pc;
        }
        return children.at("lbc-pc");
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        else
        {
            low_sig_freq_off = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff>();
            low_sig_freq_off->parent = this;
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        return children.at("low-sig-freq-off");
    }

    if(child_yang_name == "opr")
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
        else
        {
            opr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr>();
            opr->parent = this;
            children["opr"] = opr;
        }
        return children.at("opr");
    }

    if(child_yang_name == "opt")
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
        else
        {
            opt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt>();
            opt->parent = this;
            children["opt"] = opt;
        }
        return children.at("opt");
    }

    if(child_yang_name == "osnr")
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
        else
        {
            osnr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr>();
            osnr->parent = this;
            children["osnr"] = osnr;
        }
        return children.at("osnr");
    }

    if(child_yang_name == "pcr")
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
        else
        {
            pcr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr>();
            pcr->parent = this;
            children["pcr"] = pcr;
        }
        return children.at("pcr");
    }

    if(child_yang_name == "pdl")
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
        else
        {
            pdl = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl>();
            pdl->parent = this;
            children["pdl"] = pdl;
        }
        return children.at("pdl");
    }

    if(child_yang_name == "pmd")
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
        else
        {
            pmd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd>();
            pmd->parent = this;
            children["pmd"] = pmd;
        }
        return children.at("pmd");
    }

    if(child_yang_name == "pn")
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
        else
        {
            pn = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn>();
            pn->parent = this;
            children["pn"] = pn;
        }
        return children.at("pn");
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
        else
        {
            rx_sig_pow = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_children()
{
    if(children.find("cd") == children.end())
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
    }

    if(children.find("center-wavelength") == children.end())
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
    }

    if(children.find("dgd") == children.end())
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("lbc-pc") == children.end())
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
    }

    if(children.find("low-sig-freq-off") == children.end())
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
    }

    if(children.find("opr") == children.end())
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
    }

    if(children.find("opt") == children.end())
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
    }

    if(children.find("osnr") == children.end())
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
    }

    if(children.find("pcr") == children.end())
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
    }

    if(children.find("pdl") == children.end())
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
    }

    if(children.find("pmd") == children.end())
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
    }

    if(children.find("pn") == children.end())
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
    }

    if(children.find("rx-sig-pow") == children.end())
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::LbcPc()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc-pc"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::~LbcPc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LbcPc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::Opt()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opt"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::~Opt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::Opr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opr"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::~Opr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "cd"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::~Cd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::Dgd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "dgd"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::~Dgd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dgd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::Pmd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pmd"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::~Pmd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::Osnr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "osnr"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::~Osnr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::CenterWavelength()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "center-wavelength"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CenterWavelength' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::Pdl()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pdl"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::~Pdl()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pdl' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::Pcr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pcr"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::~Pcr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::Pn()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pn"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::~Pn()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::RxSigPow()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-sig-pow"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxSigPow' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-minute15-optics-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowSigFreqOff' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistories()
{
    yang_name = "optics-minute15fec-histories"; yang_parent_name = "optics-minute15-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::~OpticsMinute15FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::has_data() const
{
    for (std::size_t index=0; index<optics_minute15fec_history.size(); index++)
    {
        if(optics_minute15fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec_history.size(); index++)
    {
        if(optics_minute15fec_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15FecHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15fec-history")
    {
        for(auto const & c : optics_minute15fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory>();
        c->parent = this;
        optics_minute15fec_history.push_back(std::move(c));
        children[segment_path] = optics_minute15fec_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_children()
{
    for (auto const & c : optics_minute15fec_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_minute15fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances>())
{
    optics_minute15fec_time_line_instances->parent = this;
    children["optics-minute15fec-time-line-instances"] = optics_minute15fec_time_line_instances;

    yang_name = "optics-minute15fec-history"; yang_parent_name = "optics-minute15fec-histories";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::~OpticsMinute15FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::has_data() const
{
    return number.is_set
	|| (optics_minute15fec_time_line_instances !=  nullptr && optics_minute15fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (optics_minute15fec_time_line_instances !=  nullptr && optics_minute15fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15FecHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15fec-time-line-instances")
    {
        if(optics_minute15fec_time_line_instances != nullptr)
        {
            children["optics-minute15fec-time-line-instances"] = optics_minute15fec_time_line_instances;
        }
        else
        {
            optics_minute15fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances>();
            optics_minute15fec_time_line_instances->parent = this;
            children["optics-minute15fec-time-line-instances"] = optics_minute15fec_time_line_instances;
        }
        return children.at("optics-minute15fec-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_children()
{
    if(children.find("optics-minute15fec-time-line-instances") == children.end())
    {
        if(optics_minute15fec_time_line_instances != nullptr)
        {
            children["optics-minute15fec-time-line-instances"] = optics_minute15fec_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstances()
{
    yang_name = "optics-minute15fec-time-line-instances"; yang_parent_name = "optics-minute15fec-history";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::~OpticsMinute15FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_minute15fec_time_line_instance.size(); index++)
    {
        if(optics_minute15fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec_time_line_instance.size(); index++)
    {
        if(optics_minute15fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15FecTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15fec-time-line-instance")
    {
        for(auto const & c : optics_minute15fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance>();
        c->parent = this;
        optics_minute15fec_time_line_instance.push_back(std::move(c));
        children[segment_path] = optics_minute15fec_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_children()
{
    for (auto const & c : optics_minute15fec_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::OpticsMinute15FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "optics-minute15fec-time-line-instance"; yang_parent_name = "optics-minute15fec-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::~OpticsMinute15FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15FecTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "optics-minute15fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "optics-minute15fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "optics-minute15fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "optics-minute15fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "optics-minute15fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "optics-minute15fec-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcHistory()
    :
    oc_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories>())
{
    oc_port_histories->parent = this;
    children["oc-port-histories"] = oc_port_histories;

    yang_name = "oc-history"; yang_parent_name = "periodic";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::~OcHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_data() const
{
    return (oc_port_histories !=  nullptr && oc_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_operation() const
{
    return is_set(operation)
	|| (oc_port_histories !=  nullptr && oc_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-history";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-port-histories")
    {
        if(oc_port_histories != nullptr)
        {
            children["oc-port-histories"] = oc_port_histories;
        }
        else
        {
            oc_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories>();
            oc_port_histories->parent = this;
            children["oc-port-histories"] = oc_port_histories;
        }
        return children.at("oc-port-histories");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::get_children()
{
    if(children.find("oc-port-histories") == children.end())
    {
        if(oc_port_histories != nullptr)
        {
            children["oc-port-histories"] = oc_port_histories;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistories()
{
    yang_name = "oc-port-histories"; yang_parent_name = "oc-history";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::~OcPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_data() const
{
    for (std::size_t index=0; index<oc_port_history.size(); index++)
    {
        if(oc_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_port_history.size(); index++)
    {
        if(oc_port_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/oc-history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-port-history")
    {
        for(auto const & c : oc_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory>();
        c->parent = this;
        oc_port_history.push_back(std::move(c));
        children[segment_path] = oc_port_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_children()
{
    for (auto const & c : oc_port_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcPortHistory()
    :
    name{YType::str, "name"}
    	,
    oc_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History>())
	,oc_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History>())
{
    oc_hour24_history->parent = this;
    children["oc-hour24-history"] = oc_hour24_history;

    oc_minute15_history->parent = this;
    children["oc-minute15-history"] = oc_minute15_history;

    yang_name = "oc-port-history"; yang_parent_name = "oc-port-histories";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::~OcPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_data() const
{
    return name.is_set
	|| (oc_hour24_history !=  nullptr && oc_hour24_history->has_data())
	|| (oc_minute15_history !=  nullptr && oc_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (oc_hour24_history !=  nullptr && oc_hour24_history->has_operation())
	|| (oc_minute15_history !=  nullptr && oc_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port-history" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/oc-history/oc-port-histories/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24-history")
    {
        if(oc_hour24_history != nullptr)
        {
            children["oc-hour24-history"] = oc_hour24_history;
        }
        else
        {
            oc_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History>();
            oc_hour24_history->parent = this;
            children["oc-hour24-history"] = oc_hour24_history;
        }
        return children.at("oc-hour24-history");
    }

    if(child_yang_name == "oc-minute15-history")
    {
        if(oc_minute15_history != nullptr)
        {
            children["oc-minute15-history"] = oc_minute15_history;
        }
        else
        {
            oc_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History>();
            oc_minute15_history->parent = this;
            children["oc-minute15-history"] = oc_minute15_history;
        }
        return children.at("oc-minute15-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_children()
{
    if(children.find("oc-hour24-history") == children.end())
    {
        if(oc_hour24_history != nullptr)
        {
            children["oc-hour24-history"] = oc_hour24_history;
        }
    }

    if(children.find("oc-minute15-history") == children.end())
    {
        if(oc_minute15_history != nullptr)
        {
            children["oc-minute15-history"] = oc_minute15_history;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24History()
    :
    oc_hour24ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories>())
{
    oc_hour24ocn_histories->parent = this;
    children["oc-hour24ocn-histories"] = oc_hour24ocn_histories;

    yang_name = "oc-hour24-history"; yang_parent_name = "oc-port-history";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::~OcHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_data() const
{
    return (oc_hour24ocn_histories !=  nullptr && oc_hour24ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_operation() const
{
    return is_set(operation)
	|| (oc_hour24ocn_histories !=  nullptr && oc_hour24ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-history";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24History' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24ocn-histories")
    {
        if(oc_hour24ocn_histories != nullptr)
        {
            children["oc-hour24ocn-histories"] = oc_hour24ocn_histories;
        }
        else
        {
            oc_hour24ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories>();
            oc_hour24ocn_histories->parent = this;
            children["oc-hour24ocn-histories"] = oc_hour24ocn_histories;
        }
        return children.at("oc-hour24ocn-histories");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_children()
{
    if(children.find("oc-hour24ocn-histories") == children.end())
    {
        if(oc_hour24ocn_histories != nullptr)
        {
            children["oc-hour24ocn-histories"] = oc_hour24ocn_histories;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistories()
{
    yang_name = "oc-hour24ocn-histories"; yang_parent_name = "oc-hour24-history";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::~OcHour24OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn_history.size(); index++)
    {
        if(oc_hour24ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_history.size(); index++)
    {
        if(oc_hour24ocn_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24ocn-history")
    {
        for(auto const & c : oc_hour24ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory>();
        c->parent = this;
        oc_hour24ocn_history.push_back(std::move(c));
        children[segment_path] = oc_hour24ocn_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_children()
{
    for (auto const & c : oc_hour24ocn_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    oc_hour24ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances>())
{
    oc_hour24ocn_time_line_instances->parent = this;
    children["oc-hour24ocn-time-line-instances"] = oc_hour24ocn_time_line_instances;

    yang_name = "oc-hour24ocn-history"; yang_parent_name = "oc-hour24ocn-histories";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::~OcHour24OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_data() const
{
    return number.is_set
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24ocn-time-line-instances")
    {
        if(oc_hour24ocn_time_line_instances != nullptr)
        {
            children["oc-hour24ocn-time-line-instances"] = oc_hour24ocn_time_line_instances;
        }
        else
        {
            oc_hour24ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances>();
            oc_hour24ocn_time_line_instances->parent = this;
            children["oc-hour24ocn-time-line-instances"] = oc_hour24ocn_time_line_instances;
        }
        return children.at("oc-hour24ocn-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_children()
{
    if(children.find("oc-hour24ocn-time-line-instances") == children.end())
    {
        if(oc_hour24ocn_time_line_instances != nullptr)
        {
            children["oc-hour24ocn-time-line-instances"] = oc_hour24ocn_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstances()
{
    yang_name = "oc-hour24ocn-time-line-instances"; yang_parent_name = "oc-hour24ocn-history";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::~OcHour24OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.size(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.size(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24ocn-time-line-instance")
    {
        for(auto const & c : oc_hour24ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance>();
        c->parent = this;
        oc_hour24ocn_time_line_instance.push_back(std::move(c));
        children[segment_path] = oc_hour24ocn_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_children()
{
    for (auto const & c : oc_hour24ocn_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::OcHour24OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "oc-hour24ocn-time-line-instance"; yang_parent_name = "oc-hour24ocn-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::~OcHour24OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
        else
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine>();
            fe_line->parent = this;
            children["fe-line"] = fe_line;
        }
        return children.at("fe-line");
    }

    if(child_yang_name == "line")
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
        else
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line>();
            line->parent = this;
            children["line"] = line;
        }
        return children.at("line");
    }

    if(child_yang_name == "section")
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
        else
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_children()
{
    if(children.find("fe-line") == children.end())
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
    }

    if(children.find("line") == children.end())
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
    }

    if(children.find("section") == children.end())
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    children["section-c-vs"] = section_c_vs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_sef_ss->parent = this;
    children["section-sef-ss"] = section_sef_ss;

    yang_name = "section"; yang_parent_name = "oc-hour24ocn-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Section' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.operation)) leaf_name_data.push_back(section_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
        else
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs>();
            section_c_vs->parent = this;
            children["section-c-vs"] = section_c_vs;
        }
        return children.at("section-c-vs");
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
        else
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs>();
            section_e_ss->parent = this;
            children["section-e-ss"] = section_e_ss;
        }
        return children.at("section-e-ss");
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
        else
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs>();
            section_se_ss->parent = this;
            children["section-se-ss"] = section_se_ss;
        }
        return children.at("section-se-ss");
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
        else
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs>();
            section_sef_ss->parent = this;
            children["section-sef-ss"] = section_sef_ss;
        }
        return children.at("section-sef-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_children()
{
    if(children.find("section-c-vs") == children.end())
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
    }

    if(children.find("section-e-ss") == children.end())
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
    }

    if(children.find("section-se-ss") == children.end())
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
    }

    if(children.find("section-sef-ss") == children.end())
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-sef-ss"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSefSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-c-vs"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    children["line-c-vs"] = line_c_vs;

    line_e_ss->parent = this;
    children["line-e-ss"] = line_e_ss;

    line_fc_ls->parent = this;
    children["line-fc-ls"] = line_fc_ls;

    line_se_ss->parent = this;
    children["line-se-ss"] = line_se_ss;

    line_ua_ss->parent = this;
    children["line-ua-ss"] = line_ua_ss;

    yang_name = "line"; yang_parent_name = "oc-hour24ocn-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Line' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.operation)) leaf_name_data.push_back(line_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
        else
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs>();
            line_c_vs->parent = this;
            children["line-c-vs"] = line_c_vs;
        }
        return children.at("line-c-vs");
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
        else
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs>();
            line_e_ss->parent = this;
            children["line-e-ss"] = line_e_ss;
        }
        return children.at("line-e-ss");
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
        else
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs>();
            line_fc_ls->parent = this;
            children["line-fc-ls"] = line_fc_ls;
        }
        return children.at("line-fc-ls");
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
        else
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs>();
            line_se_ss->parent = this;
            children["line-se-ss"] = line_se_ss;
        }
        return children.at("line-se-ss");
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
        else
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_children()
{
    if(children.find("line-c-vs") == children.end())
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
    }

    if(children.find("line-e-ss") == children.end())
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
    }

    if(children.find("line-fc-ls") == children.end())
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
    }

    if(children.find("line-se-ss") == children.end())
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
    }

    if(children.find("line-ua-ss") == children.end())
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-c-vs"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-fc-ls"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    children["far-end-line-c-vs"] = far_end_line_c_vs;

    far_end_line_e_ss->parent = this;
    children["far-end-line-e-ss"] = far_end_line_e_ss;

    far_end_line_fc_ls->parent = this;
    children["far-end-line-fc-ls"] = far_end_line_fc_ls;

    far_end_line_se_ss->parent = this;
    children["far-end-line-se-ss"] = far_end_line_se_ss;

    far_end_line_ua_ss->parent = this;
    children["far-end-line-ua-ss"] = far_end_line_ua_ss;

    yang_name = "fe-line"; yang_parent_name = "oc-hour24ocn-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FeLine' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        else
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>();
            far_end_line_c_vs->parent = this;
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        return children.at("far-end-line-c-vs");
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        else
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs>();
            far_end_line_e_ss->parent = this;
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        return children.at("far-end-line-e-ss");
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        else
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
            far_end_line_fc_ls->parent = this;
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        return children.at("far-end-line-fc-ls");
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        else
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
            far_end_line_se_ss->parent = this;
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        return children.at("far-end-line-se-ss");
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        else
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_children()
{
    if(children.find("far-end-line-c-vs") == children.end())
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
    }

    if(children.find("far-end-line-e-ss") == children.end())
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
    }

    if(children.find("far-end-line-fc-ls") == children.end())
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
    }

    if(children.find("far-end-line-se-ss") == children.end())
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
    }

    if(children.find("far-end-line-ua-ss") == children.end())
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15History()
    :
    oc_minute15ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories>())
{
    oc_minute15ocn_histories->parent = this;
    children["oc-minute15ocn-histories"] = oc_minute15ocn_histories;

    yang_name = "oc-minute15-history"; yang_parent_name = "oc-port-history";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::~OcMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_data() const
{
    return (oc_minute15ocn_histories !=  nullptr && oc_minute15ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_operation() const
{
    return is_set(operation)
	|| (oc_minute15ocn_histories !=  nullptr && oc_minute15ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-history";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15History' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15ocn-histories")
    {
        if(oc_minute15ocn_histories != nullptr)
        {
            children["oc-minute15ocn-histories"] = oc_minute15ocn_histories;
        }
        else
        {
            oc_minute15ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories>();
            oc_minute15ocn_histories->parent = this;
            children["oc-minute15ocn-histories"] = oc_minute15ocn_histories;
        }
        return children.at("oc-minute15ocn-histories");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_children()
{
    if(children.find("oc-minute15ocn-histories") == children.end())
    {
        if(oc_minute15ocn_histories != nullptr)
        {
            children["oc-minute15ocn-histories"] = oc_minute15ocn_histories;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistories()
{
    yang_name = "oc-minute15ocn-histories"; yang_parent_name = "oc-minute15-history";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::~OcMinute15OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn_history.size(); index++)
    {
        if(oc_minute15ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_history.size(); index++)
    {
        if(oc_minute15ocn_history[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-histories";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnHistories' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15ocn-history")
    {
        for(auto const & c : oc_minute15ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory>();
        c->parent = this;
        oc_minute15ocn_history.push_back(std::move(c));
        children[segment_path] = oc_minute15ocn_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_children()
{
    for (auto const & c : oc_minute15ocn_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    oc_minute15ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances>())
{
    oc_minute15ocn_time_line_instances->parent = this;
    children["oc-minute15ocn-time-line-instances"] = oc_minute15ocn_time_line_instances;

    yang_name = "oc-minute15ocn-history"; yang_parent_name = "oc-minute15ocn-histories";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::~OcMinute15OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_data() const
{
    return number.is_set
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-history" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnHistory' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15ocn-time-line-instances")
    {
        if(oc_minute15ocn_time_line_instances != nullptr)
        {
            children["oc-minute15ocn-time-line-instances"] = oc_minute15ocn_time_line_instances;
        }
        else
        {
            oc_minute15ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances>();
            oc_minute15ocn_time_line_instances->parent = this;
            children["oc-minute15ocn-time-line-instances"] = oc_minute15ocn_time_line_instances;
        }
        return children.at("oc-minute15ocn-time-line-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_children()
{
    if(children.find("oc-minute15ocn-time-line-instances") == children.end())
    {
        if(oc_minute15ocn_time_line_instances != nullptr)
        {
            children["oc-minute15ocn-time-line-instances"] = oc_minute15ocn_time_line_instances;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstances()
{
    yang_name = "oc-minute15ocn-time-line-instances"; yang_parent_name = "oc-minute15ocn-history";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::~OcMinute15OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.size(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.size(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instances";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnTimeLineInstances' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15ocn-time-line-instance")
    {
        for(auto const & c : oc_minute15ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance>();
        c->parent = this;
        oc_minute15ocn_time_line_instance.push_back(std::move(c));
        children[segment_path] = oc_minute15ocn_time_line_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_children()
{
    for (auto const & c : oc_minute15ocn_time_line_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::OcMinute15OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "oc-minute15ocn-time-line-instance"; yang_parent_name = "oc-minute15ocn-time-line-instances";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::~OcMinute15OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnTimeLineInstance' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
        else
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine>();
            fe_line->parent = this;
            children["fe-line"] = fe_line;
        }
        return children.at("fe-line");
    }

    if(child_yang_name == "line")
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
        else
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line>();
            line->parent = this;
            children["line"] = line;
        }
        return children.at("line");
    }

    if(child_yang_name == "section")
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
        else
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_children()
{
    if(children.find("fe-line") == children.end())
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
    }

    if(children.find("line") == children.end())
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
    }

    if(children.find("section") == children.end())
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    children["section-c-vs"] = section_c_vs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_sef_ss->parent = this;
    children["section-sef-ss"] = section_sef_ss;

    yang_name = "section"; yang_parent_name = "oc-minute15ocn-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Section' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.operation)) leaf_name_data.push_back(section_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
        else
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs>();
            section_c_vs->parent = this;
            children["section-c-vs"] = section_c_vs;
        }
        return children.at("section-c-vs");
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
        else
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs>();
            section_e_ss->parent = this;
            children["section-e-ss"] = section_e_ss;
        }
        return children.at("section-e-ss");
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
        else
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs>();
            section_se_ss->parent = this;
            children["section-se-ss"] = section_se_ss;
        }
        return children.at("section-se-ss");
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
        else
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs>();
            section_sef_ss->parent = this;
            children["section-sef-ss"] = section_sef_ss;
        }
        return children.at("section-sef-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_children()
{
    if(children.find("section-c-vs") == children.end())
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
    }

    if(children.find("section-e-ss") == children.end())
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
    }

    if(children.find("section-se-ss") == children.end())
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
    }

    if(children.find("section-sef-ss") == children.end())
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-sef-ss"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSefSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-c-vs"; yang_parent_name = "section";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    children["line-c-vs"] = line_c_vs;

    line_e_ss->parent = this;
    children["line-e-ss"] = line_e_ss;

    line_fc_ls->parent = this;
    children["line-fc-ls"] = line_fc_ls;

    line_se_ss->parent = this;
    children["line-se-ss"] = line_se_ss;

    line_ua_ss->parent = this;
    children["line-ua-ss"] = line_ua_ss;

    yang_name = "line"; yang_parent_name = "oc-minute15ocn-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Line' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.operation)) leaf_name_data.push_back(line_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
        else
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs>();
            line_c_vs->parent = this;
            children["line-c-vs"] = line_c_vs;
        }
        return children.at("line-c-vs");
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
        else
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs>();
            line_e_ss->parent = this;
            children["line-e-ss"] = line_e_ss;
        }
        return children.at("line-e-ss");
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
        else
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs>();
            line_fc_ls->parent = this;
            children["line-fc-ls"] = line_fc_ls;
        }
        return children.at("line-fc-ls");
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
        else
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs>();
            line_se_ss->parent = this;
            children["line-se-ss"] = line_se_ss;
        }
        return children.at("line-se-ss");
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
        else
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_children()
{
    if(children.find("line-c-vs") == children.end())
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
    }

    if(children.find("line-e-ss") == children.end())
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
    }

    if(children.find("line-fc-ls") == children.end())
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
    }

    if(children.find("line-se-ss") == children.end())
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
    }

    if(children.find("line-ua-ss") == children.end())
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-c-vs"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-fc-ls"; yang_parent_name = "line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    children["far-end-line-c-vs"] = far_end_line_c_vs;

    far_end_line_e_ss->parent = this;
    children["far-end-line-e-ss"] = far_end_line_e_ss;

    far_end_line_fc_ls->parent = this;
    children["far-end-line-fc-ls"] = far_end_line_fc_ls;

    far_end_line_se_ss->parent = this;
    children["far-end-line-se-ss"] = far_end_line_se_ss;

    far_end_line_ua_ss->parent = this;
    children["far-end-line-ua-ss"] = far_end_line_ua_ss;

    yang_name = "fe-line"; yang_parent_name = "oc-minute15ocn-time-line-instance";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FeLine' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        else
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>();
            far_end_line_c_vs->parent = this;
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        return children.at("far-end-line-c-vs");
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        else
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>();
            far_end_line_e_ss->parent = this;
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        return children.at("far-end-line-e-ss");
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        else
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
            far_end_line_fc_ls->parent = this;
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        return children.at("far-end-line-fc-ls");
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        else
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
            far_end_line_se_ss->parent = this;
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        return children.at("far-end-line-se-ss");
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        else
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_children()
{
    if(children.find("far-end-line-c-vs") == children.end())
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
    }

    if(children.find("far-end-line-e-ss") == children.end())
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
    }

    if(children.find("far-end-line-fc-ls") == children.end())
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
    }

    if(children.find("far-end-line-se-ss") == children.end())
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
    }

    if(children.find("far-end-line-ua-ss") == children.end())
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line";
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children()
{
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}


}
}
