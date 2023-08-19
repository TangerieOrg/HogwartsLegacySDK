#include "URenderSettingsCustomBlendDomainBase.hpp"
#include "URenderSettingsCustomBlendDomainLastFrameExposure.hpp"
URenderSettingsCustomBlendDomainLastFrameExposure* URenderSettingsCustomBlendDomainLastFrameExposure::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainLastFrameExposure");
    return (URenderSettingsCustomBlendDomainLastFrameExposure*)res;
}
