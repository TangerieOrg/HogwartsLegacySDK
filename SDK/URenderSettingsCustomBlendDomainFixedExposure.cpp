#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainFixedExposure.hpp"
URenderSettingsCustomBlendDomainFixedExposure* URenderSettingsCustomBlendDomainFixedExposure::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainFixedExposure");
    return (URenderSettingsCustomBlendDomainFixedExposure*)res;
}
