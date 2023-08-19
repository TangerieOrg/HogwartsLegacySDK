#include "UWorldFXRuleBlendDomainPreComputed.hpp"
#include "UWorldFXRuleBlendDomainThreshold.hpp"
UWorldFXRuleBlendDomainThreshold* UWorldFXRuleBlendDomainThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainThreshold");
    return (UWorldFXRuleBlendDomainThreshold*)res;
}
