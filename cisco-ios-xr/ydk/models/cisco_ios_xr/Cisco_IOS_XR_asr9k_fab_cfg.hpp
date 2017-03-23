#ifndef _CISCO_IOS_XR_ASR9K_FAB_CFG_
#define _CISCO_IOS_XR_ASR9K_FAB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_fab_cfg {

class FabVqiConfig : public Entity
{
    public:
        FabVqiConfig();
        ~FabVqiConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Operates; //type: FabVqiConfig::Operates

        std::shared_ptr<Cisco_IOS_XR_asr9k_fab_cfg::FabVqiConfig::Operates> operates;


}; // FabVqiConfig


class FabVqiConfig::Operates : public Entity
{
    public:
        Operates();
        ~Operates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Operate; //type: FabVqiConfig::Operates::Operate

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_fab_cfg::FabVqiConfig::Operates::Operate> > operate;


}; // FabVqiConfig::Operates


class FabVqiConfig::Operates::Operate : public Entity
{
    public:
        Operate();
        ~Operate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id1; //type: string
        YLeaf id1_xr; //type: int32
        YLeaf id2; //type: int32



}; // FabVqiConfig::Operates::Operate


}
}

#endif /* _CISCO_IOS_XR_ASR9K_FAB_CFG_ */
