#include "UWorldFXRule.hpp"
#include "UWorldFXRuleSeasonBase.hpp"
UWorldFXRuleSeasonBase* UWorldFXRuleSeasonBase::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleSeasonBase");
    return (UWorldFXRuleSeasonBase*)res;
}
