#include "URenderSettingsCustomBlendDomainConstant.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainConstant* URenderSettingsCustomBlendDomainConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainConstant");
    return (URenderSettingsCustomBlendDomainConstant*)res;
}
