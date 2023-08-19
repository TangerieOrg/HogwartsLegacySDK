#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainPlayerAimBlend.hpp"
URenderSettingsCustomBlendDomainPlayerAimBlend* URenderSettingsCustomBlendDomainPlayerAimBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainPlayerAimBlend");
    return (URenderSettingsCustomBlendDomainPlayerAimBlend*)res;
}
