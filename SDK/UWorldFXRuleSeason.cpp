#include "UWorldFXRuleSeason.hpp"
#include "UWorldFXRuleSeasonBase.hpp"
UWorldFXRuleSeason* UWorldFXRuleSeason::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleSeason");
    return (UWorldFXRuleSeason*)res;
}
