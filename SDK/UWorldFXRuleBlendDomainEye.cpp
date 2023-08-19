#include "UWorldFXRuleBlendDomainEye.hpp"
#include "UWorldFXRuleBlendDomainRange.hpp"
UWorldFXRuleBlendDomainEye* UWorldFXRuleBlendDomainEye::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainEye");
    return (UWorldFXRuleBlendDomainEye*)res;
}
