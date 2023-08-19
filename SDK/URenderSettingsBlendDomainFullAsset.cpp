#include "FBlendDomain.hpp"
#include "URenderSettingsBlendDomainAsset.hpp"
#include "URenderSettingsBlendDomainFullAsset.hpp"
URenderSettingsBlendDomainFullAsset* URenderSettingsBlendDomainFullAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsBlendDomainFullAsset");
    return (URenderSettingsBlendDomainFullAsset*)res;
}
