#include "URenderSettingsCustomBlendDomainPaused.hpp"
#include "URenderSettingsCustomBlendDomainPausedSmoothed.hpp"
URenderSettingsCustomBlendDomainPausedSmoothed* URenderSettingsCustomBlendDomainPausedSmoothed::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainPausedSmoothed");
    return (URenderSettingsCustomBlendDomainPausedSmoothed*)res;
}
