#include "UCurveFloat.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainCurveRemap.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainCurveRemap* URenderSettingsCustomBlendDomainCurveRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainCurveRemap");
    return (URenderSettingsCustomBlendDomainCurveRemap*)res;
}
