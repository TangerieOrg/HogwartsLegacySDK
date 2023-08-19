#include "UWorldFXRuleBlendDomainPlayerThreshold.hpp"
#include "UWorldFXRuleBlendDomainThreshold.hpp"
UWorldFXRuleBlendDomainPlayerThreshold* UWorldFXRuleBlendDomainPlayerThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainPlayerThreshold");
    return (UWorldFXRuleBlendDomainPlayerThreshold*)res;
}
