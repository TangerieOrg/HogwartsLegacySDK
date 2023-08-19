#include "UObject.hpp"
#include "USpatializationPluginSourceSettingsBase.hpp"
USpatializationPluginSourceSettingsBase* USpatializationPluginSourceSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase");
    return (USpatializationPluginSourceSettingsBase*)res;
}
