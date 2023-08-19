#include "UObject.hpp"
#include "URenderSettingsCustomBlendDomainBase.hpp"
URenderSettingsCustomBlendDomainBase* URenderSettingsCustomBlendDomainBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainBase");
    return (URenderSettingsCustomBlendDomainBase*)res;
}
