#include "URenderSettingsCustomBlendDomainBase.hpp"
#include "URenderSettingsCustomBlendDomainProbeCaptureBase.hpp"
URenderSettingsCustomBlendDomainProbeCaptureBase* URenderSettingsCustomBlendDomainProbeCaptureBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainProbeCaptureBase");
    return (URenderSettingsCustomBlendDomainProbeCaptureBase*)res;
}
