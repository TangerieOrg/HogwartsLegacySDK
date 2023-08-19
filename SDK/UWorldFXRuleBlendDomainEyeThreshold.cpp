#include "UWorldFXRuleBlendDomainEyeThreshold.hpp"
#include "UWorldFXRuleBlendDomainThreshold.hpp"
UWorldFXRuleBlendDomainEyeThreshold* UWorldFXRuleBlendDomainEyeThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainEyeThreshold");
    return (UWorldFXRuleBlendDomainEyeThreshold*)res;
}
