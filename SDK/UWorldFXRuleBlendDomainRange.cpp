#include "UWorldFXRuleBlendDomainPreComputed.hpp"
#include "UWorldFXRuleBlendDomainRange.hpp"
UWorldFXRuleBlendDomainRange* UWorldFXRuleBlendDomainRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainRange");
    return (UWorldFXRuleBlendDomainRange*)res;
}
