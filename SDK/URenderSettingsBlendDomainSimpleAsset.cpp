#include "FSimpleBlendDomain.hpp"
#include "URenderSettingsBlendDomainAsset.hpp"
#include "URenderSettingsBlendDomainSimpleAsset.hpp"
URenderSettingsBlendDomainSimpleAsset* URenderSettingsBlendDomainSimpleAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsBlendDomainSimpleAsset");
    return (URenderSettingsBlendDomainSimpleAsset*)res;
}
