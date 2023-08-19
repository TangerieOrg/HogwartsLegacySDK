#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainProbeCapture.hpp"
URenderSettingsCustomBlendDomainProbeCapture* URenderSettingsCustomBlendDomainProbeCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainProbeCapture");
    return (URenderSettingsCustomBlendDomainProbeCapture*)res;
}
