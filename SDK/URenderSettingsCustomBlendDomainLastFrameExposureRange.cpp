#include "ELastFrameExposureValue.hpp"
#include "URenderSettingsCustomBlendDomainLastFrameExposureRange.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainLastFrameExposureRange* URenderSettingsCustomBlendDomainLastFrameExposureRange::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainLastFrameExposureRange");
    return (URenderSettingsCustomBlendDomainLastFrameExposureRange*)res;
}
