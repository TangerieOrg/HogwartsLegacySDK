#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsNamedCustomBlendDomainBase.hpp"
URenderSettingsNamedCustomBlendDomainBase* URenderSettingsNamedCustomBlendDomainBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsNamedCustomBlendDomainBase");
    return (URenderSettingsNamedCustomBlendDomainBase*)res;
}
