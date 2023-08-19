#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainCurtainDown.hpp"
URenderSettingsCustomBlendDomainCurtainDown* URenderSettingsCustomBlendDomainCurtainDown::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainCurtainDown");
    return (URenderSettingsCustomBlendDomainCurtainDown*)res;
}
