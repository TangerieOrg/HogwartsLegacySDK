#include "UDataAsset.hpp"
#include "URenderSettingsBlendDomainAsset.hpp"
URenderSettingsBlendDomainAsset* URenderSettingsBlendDomainAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsBlendDomainAsset");
    return (URenderSettingsBlendDomainAsset*)res;
}
