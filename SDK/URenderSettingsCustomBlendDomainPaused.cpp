#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainPaused.hpp"
URenderSettingsCustomBlendDomainPaused* URenderSettingsCustomBlendDomainPaused::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainPaused");
    return (URenderSettingsCustomBlendDomainPaused*)res;
}
