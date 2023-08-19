#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainFadeToBlack.hpp"
URenderSettingsCustomBlendDomainFadeToBlack* URenderSettingsCustomBlendDomainFadeToBlack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainFadeToBlack");
    return (URenderSettingsCustomBlendDomainFadeToBlack*)res;
}
