#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainNotProbeCapture.hpp"
URenderSettingsCustomBlendDomainNotProbeCapture* URenderSettingsCustomBlendDomainNotProbeCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainNotProbeCapture");
    return (URenderSettingsCustomBlendDomainNotProbeCapture*)res;
}
