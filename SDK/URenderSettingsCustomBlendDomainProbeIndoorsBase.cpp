#include "URenderSettingsCustomBlendDomainBase.hpp"
#include "URenderSettingsCustomBlendDomainProbeIndoorsBase.hpp"
URenderSettingsCustomBlendDomainProbeIndoorsBase* URenderSettingsCustomBlendDomainProbeIndoorsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainProbeIndoorsBase");
    return (URenderSettingsCustomBlendDomainProbeIndoorsBase*)res;
}
