#include "UObject.hpp"
#include "UReverbPluginSourceSettingsBase.hpp"
UReverbPluginSourceSettingsBase* UReverbPluginSourceSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase");
    return (UReverbPluginSourceSettingsBase*)res;
}
