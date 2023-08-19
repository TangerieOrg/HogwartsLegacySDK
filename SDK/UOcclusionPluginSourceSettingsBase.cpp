#include "UObject.hpp"
#include "UOcclusionPluginSourceSettingsBase.hpp"
UOcclusionPluginSourceSettingsBase* UOcclusionPluginSourceSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase");
    return (UOcclusionPluginSourceSettingsBase*)res;
}
