#include "EWorldBaseHeightAffect.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainCameraHeight.hpp"
URenderSettingsCustomBlendDomainCameraHeight* URenderSettingsCustomBlendDomainCameraHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainCameraHeight");
    return (URenderSettingsCustomBlendDomainCameraHeight*)res;
}
