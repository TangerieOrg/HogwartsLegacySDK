#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainPreset.hpp"
#include "URenderSettingsCustomBlendDomainPresetAsset.hpp"
URenderSettingsCustomBlendDomainPreset* URenderSettingsCustomBlendDomainPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainPreset");
    return (URenderSettingsCustomBlendDomainPreset*)res;
}
