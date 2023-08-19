#include "UWorldFXRule.hpp"
#include "UWorldFXRuleBlendDomainBase.hpp"
UWorldFXRuleBlendDomainBase* UWorldFXRuleBlendDomainBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainBase");
    return (UWorldFXRuleBlendDomainBase*)res;
}
