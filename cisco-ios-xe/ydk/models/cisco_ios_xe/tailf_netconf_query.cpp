
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_netconf_query.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace tailf_netconf_query {

StartQuery::StartQuery()
    :
    input(std::make_shared<StartQuery::Input>())
	,output(std::make_shared<StartQuery::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "start-query"; yang_parent_name = "tailf-netconf-query";
}

StartQuery::~StartQuery()
{
}

bool StartQuery::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool StartQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string StartQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:start-query";

    return path_buffer.str();

}

const EntityPath StartQuery::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> StartQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<StartQuery::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<StartQuery::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StartQuery::get_children() const
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

void StartQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StartQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> StartQuery::clone_ptr() const
{
    return std::make_shared<StartQuery>();
}

std::string StartQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string StartQuery::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function StartQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> StartQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool StartQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

StartQuery::Input::Input()
    :
    foreach{YType::str, "foreach"},
    limit{YType::uint32, "limit"},
    offset{YType::uint32, "offset"},
    sort_by{YType::str, "sort-by"}
{
    yang_name = "input"; yang_parent_name = "start-query";
}

StartQuery::Input::~Input()
{
}

bool StartQuery::Input::has_data() const
{
    for (std::size_t index=0; index<select.size(); index++)
    {
        if(select[index]->has_data())
            return true;
    }
    for (auto const & leaf : sort_by.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return foreach.is_set
	|| limit.is_set
	|| offset.is_set;
}

bool StartQuery::Input::has_operation() const
{
    for (std::size_t index=0; index<select.size(); index++)
    {
        if(select[index]->has_operation())
            return true;
    }
    for (auto const & leaf : sort_by.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(foreach.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(sort_by.yfilter);
}

std::string StartQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath StartQuery::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:start-query/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreach.is_set || is_set(foreach.yfilter)) leaf_name_data.push_back(foreach.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    auto sort_by_name_datas = sort_by.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sort_by_name_datas.begin(), sort_by_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> StartQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        for(auto const & c : select)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<StartQuery::Input::Select>();
        c->parent = this;
        select.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StartQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : select)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void StartQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreach")
    {
        foreach = value;
        foreach.value_namespace = name_space;
        foreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sort-by")
    {
        sort_by.append(value);
    }
}

void StartQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreach")
    {
        foreach.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "sort-by")
    {
        sort_by.yfilter = yfilter;
    }
}

bool StartQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "foreach" || name == "limit" || name == "offset" || name == "sort-by")
        return true;
    return false;
}

StartQuery::Input::Select::Select()
    :
    expression{YType::str, "expression"},
    label{YType::str, "label"},
    result_type{YType::enumeration, "result-type"}
{
    yang_name = "select"; yang_parent_name = "input";
}

StartQuery::Input::Select::~Select()
{
}

bool StartQuery::Input::Select::has_data() const
{
    for (auto const & leaf : result_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return expression.is_set
	|| label.is_set;
}

bool StartQuery::Input::Select::has_operation() const
{
    for (auto const & leaf : result_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(expression.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(result_type.yfilter);
}

std::string StartQuery::Input::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";

    return path_buffer.str();

}

const EntityPath StartQuery::Input::Select::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:start-query/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expression.is_set || is_set(expression.yfilter)) leaf_name_data.push_back(expression.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    auto result_type_name_datas = result_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), result_type_name_datas.begin(), result_type_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> StartQuery::Input::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StartQuery::Input::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void StartQuery::Input::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expression")
    {
        expression = value;
        expression.value_namespace = name_space;
        expression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result-type")
    {
        result_type.append(value);
    }
}

void StartQuery::Input::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expression")
    {
        expression.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "result-type")
    {
        result_type.yfilter = yfilter;
    }
}

bool StartQuery::Input::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expression" || name == "label" || name == "result-type")
        return true;
    return false;
}

StartQuery::Output::Output()
    :
    query_handle{YType::uint32, "query-handle"}
{
    yang_name = "output"; yang_parent_name = "start-query";
}

StartQuery::Output::~Output()
{
}

bool StartQuery::Output::has_data() const
{
    return query_handle.is_set;
}

bool StartQuery::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_handle.yfilter);
}

std::string StartQuery::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath StartQuery::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:start-query/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> StartQuery::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StartQuery::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void StartQuery::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
}

void StartQuery::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
}

bool StartQuery::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-handle")
        return true;
    return false;
}

FetchQueryResult::FetchQueryResult()
    :
    input(std::make_shared<FetchQueryResult::Input>())
	,output(std::make_shared<FetchQueryResult::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "fetch-query-result"; yang_parent_name = "tailf-netconf-query";
}

FetchQueryResult::~FetchQueryResult()
{
}

bool FetchQueryResult::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool FetchQueryResult::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string FetchQueryResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:fetch-query-result";

    return path_buffer.str();

}

const EntityPath FetchQueryResult::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> FetchQueryResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<FetchQueryResult::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<FetchQueryResult::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FetchQueryResult::get_children() const
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

void FetchQueryResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FetchQueryResult::clone_ptr() const
{
    return std::make_shared<FetchQueryResult>();
}

std::string FetchQueryResult::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string FetchQueryResult::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function FetchQueryResult::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FetchQueryResult::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool FetchQueryResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

FetchQueryResult::Input::Input()
    :
    query_handle{YType::uint32, "query-handle"}
{
    yang_name = "input"; yang_parent_name = "fetch-query-result";
}

FetchQueryResult::Input::~Input()
{
}

bool FetchQueryResult::Input::has_data() const
{
    return query_handle.is_set;
}

bool FetchQueryResult::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_handle.yfilter);
}

std::string FetchQueryResult::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath FetchQueryResult::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:fetch-query-result/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FetchQueryResult::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FetchQueryResult::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FetchQueryResult::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
}

void FetchQueryResult::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
}

bool FetchQueryResult::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-handle")
        return true;
    return false;
}

FetchQueryResult::Output::Output()
    :
    query_result(std::make_shared<FetchQueryResult::Output::QueryResult>())
{
    query_result->parent = this;

    yang_name = "output"; yang_parent_name = "fetch-query-result";
}

FetchQueryResult::Output::~Output()
{
}

bool FetchQueryResult::Output::has_data() const
{
    return (query_result !=  nullptr && query_result->has_data());
}

bool FetchQueryResult::Output::has_operation() const
{
    return is_set(yfilter)
	|| (query_result !=  nullptr && query_result->has_operation());
}

std::string FetchQueryResult::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath FetchQueryResult::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:fetch-query-result/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FetchQueryResult::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query-result")
    {
        if(query_result == nullptr)
        {
            query_result = std::make_shared<FetchQueryResult::Output::QueryResult>();
        }
        return query_result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FetchQueryResult::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query_result != nullptr)
    {
        children["query-result"] = query_result;
    }

    return children;
}

void FetchQueryResult::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FetchQueryResult::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-result")
        return true;
    return false;
}

FetchQueryResult::Output::QueryResult::QueryResult()
{
    yang_name = "query-result"; yang_parent_name = "output";
}

FetchQueryResult::Output::QueryResult::~QueryResult()
{
}

bool FetchQueryResult::Output::QueryResult::has_data() const
{
    for (std::size_t index=0; index<result.size(); index++)
    {
        if(result[index]->has_data())
            return true;
    }
    return false;
}

bool FetchQueryResult::Output::QueryResult::has_operation() const
{
    for (std::size_t index=0; index<result.size(); index++)
    {
        if(result[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FetchQueryResult::Output::QueryResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-result";

    return path_buffer.str();

}

const EntityPath FetchQueryResult::Output::QueryResult::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:fetch-query-result/output/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FetchQueryResult::Output::QueryResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "result")
    {
        for(auto const & c : result)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FetchQueryResult::Output::QueryResult::Result>();
        c->parent = this;
        result.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FetchQueryResult::Output::QueryResult::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : result)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FetchQueryResult::Output::QueryResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::Output::QueryResult::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FetchQueryResult::Output::QueryResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

FetchQueryResult::Output::QueryResult::Result::Result()
{
    yang_name = "result"; yang_parent_name = "query-result";
}

FetchQueryResult::Output::QueryResult::Result::~Result()
{
}

bool FetchQueryResult::Output::QueryResult::Result::has_data() const
{
    for (std::size_t index=0; index<select.size(); index++)
    {
        if(select[index]->has_data())
            return true;
    }
    return false;
}

bool FetchQueryResult::Output::QueryResult::Result::has_operation() const
{
    for (std::size_t index=0; index<select.size(); index++)
    {
        if(select[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FetchQueryResult::Output::QueryResult::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";

    return path_buffer.str();

}

const EntityPath FetchQueryResult::Output::QueryResult::Result::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:fetch-query-result/output/query-result/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FetchQueryResult::Output::QueryResult::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        for(auto const & c : select)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FetchQueryResult::Output::QueryResult::Result::Select>();
        c->parent = this;
        select.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FetchQueryResult::Output::QueryResult::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : select)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FetchQueryResult::Output::QueryResult::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FetchQueryResult::Output::QueryResult::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FetchQueryResult::Output::QueryResult::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select")
        return true;
    return false;
}

FetchQueryResult::Output::QueryResult::Result::Select::Select()
    :
    data{YType::str, "data"},
    label{YType::str, "label"},
    path{YType::str, "path"},
    value_{YType::str, "value"}
{
    yang_name = "select"; yang_parent_name = "result";
}

FetchQueryResult::Output::QueryResult::Result::Select::~Select()
{
}

bool FetchQueryResult::Output::QueryResult::Result::Select::has_data() const
{
    return data.is_set
	|| label.is_set
	|| path.is_set
	|| value_.is_set;
}

bool FetchQueryResult::Output::QueryResult::Result::Select::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string FetchQueryResult::Output::QueryResult::Result::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";

    return path_buffer.str();

}

const EntityPath FetchQueryResult::Output::QueryResult::Result::Select::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:fetch-query-result/output/query-result/result/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FetchQueryResult::Output::QueryResult::Result::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FetchQueryResult::Output::QueryResult::Result::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FetchQueryResult::Output::QueryResult::Result::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void FetchQueryResult::Output::QueryResult::Result::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool FetchQueryResult::Output::QueryResult::Result::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "label" || name == "path" || name == "value")
        return true;
    return false;
}

ResetQuery::ResetQuery()
    :
    input(std::make_shared<ResetQuery::Input>())
{
    input->parent = this;

    yang_name = "reset-query"; yang_parent_name = "tailf-netconf-query";
}

ResetQuery::~ResetQuery()
{
}

bool ResetQuery::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ResetQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ResetQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:reset-query";

    return path_buffer.str();

}

const EntityPath ResetQuery::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ResetQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ResetQuery::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ResetQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ResetQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ResetQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ResetQuery::clone_ptr() const
{
    return std::make_shared<ResetQuery>();
}

std::string ResetQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ResetQuery::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ResetQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ResetQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ResetQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ResetQuery::Input::Input()
    :
    offset{YType::uint32, "offset"},
    query_handle{YType::uint32, "query-handle"}
{
    yang_name = "input"; yang_parent_name = "reset-query";
}

ResetQuery::Input::~Input()
{
}

bool ResetQuery::Input::has_data() const
{
    return offset.is_set
	|| query_handle.is_set;
}

bool ResetQuery::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(query_handle.yfilter);
}

std::string ResetQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ResetQuery::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:reset-query/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ResetQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ResetQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ResetQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
}

void ResetQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
}

bool ResetQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "query-handle")
        return true;
    return false;
}

StopQuery::StopQuery()
    :
    input(std::make_shared<StopQuery::Input>())
{
    input->parent = this;

    yang_name = "stop-query"; yang_parent_name = "tailf-netconf-query";
}

StopQuery::~StopQuery()
{
}

bool StopQuery::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool StopQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string StopQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-query:stop-query";

    return path_buffer.str();

}

const EntityPath StopQuery::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> StopQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<StopQuery::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StopQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void StopQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StopQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> StopQuery::clone_ptr() const
{
    return std::make_shared<StopQuery>();
}

std::string StopQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string StopQuery::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function StopQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> StopQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool StopQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

StopQuery::Input::Input()
    :
    query_handle{YType::uint32, "query-handle"}
{
    yang_name = "input"; yang_parent_name = "stop-query";
}

StopQuery::Input::~Input()
{
}

bool StopQuery::Input::has_data() const
{
    return query_handle.is_set;
}

bool StopQuery::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_handle.yfilter);
}

std::string StopQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath StopQuery::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-query:stop-query/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_handle.is_set || is_set(query_handle.yfilter)) leaf_name_data.push_back(query_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> StopQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StopQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void StopQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-handle")
    {
        query_handle = value;
        query_handle.value_namespace = name_space;
        query_handle.value_namespace_prefix = name_space_prefix;
    }
}

void StopQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-handle")
    {
        query_handle.yfilter = yfilter;
    }
}

bool StopQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-handle")
        return true;
    return false;
}

const Enum::YLeaf StartQuery::Input::Select::ResultType::string {0, "string"};
const Enum::YLeaf StartQuery::Input::Select::ResultType::path {1, "path"};
const Enum::YLeaf StartQuery::Input::Select::ResultType::leaf_value {2, "leaf-value"};
const Enum::YLeaf StartQuery::Input::Select::ResultType::inline_ {3, "inline"};


}
}
