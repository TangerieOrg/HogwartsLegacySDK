#include "URenderSettingsCustomBlendDomainBase.hpp"
#include "URenderSettingsCustomBlendDomainHDRBase.hpp"
URenderSettingsCustomBlendDomainHDRBase* URenderSettingsCustomBlendDomainHDRBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainHDRBase");
    return (URenderSettingsCustomBlendDomainHDRBase*)res;
}
