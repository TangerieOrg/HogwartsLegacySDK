#include "URenderSettingsCustomBlendDomainIndoorsBase.hpp"
#include "URenderSettingsNamedCustomBlendDomain.hpp"
URenderSettingsCustomBlendDomainIndoorsBase* URenderSettingsCustomBlendDomainIndoorsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainIndoorsBase");
    return (URenderSettingsCustomBlendDomainIndoorsBase*)res;
}
