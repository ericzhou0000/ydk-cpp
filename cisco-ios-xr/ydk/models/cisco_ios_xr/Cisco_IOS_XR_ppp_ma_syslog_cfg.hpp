#ifndef _CISCO_IOS_XR_PPP_MA_SYSLOG_CFG_
#define _CISCO_IOS_XR_PPP_MA_SYSLOG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ppp_ma_syslog_cfg {

class Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Syslog; //type: Ppp::Syslog

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_syslog_cfg::Ppp::Syslog> syslog;
        
}; // Ppp


class Ppp::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable_session_status; //type: empty

}; // Ppp::Syslog


}
}

#endif /* _CISCO_IOS_XR_PPP_MA_SYSLOG_CFG_ */

