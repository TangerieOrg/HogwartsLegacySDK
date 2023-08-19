#include "UDataAsset.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainPresetAsset.hpp"
URenderSettingsCustomBlendDomainPresetAsset* URenderSettingsCustomBlendDomainPresetAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainPresetAsset");
    return (URenderSettingsCustomBlendDomainPresetAsset*)res;
}
