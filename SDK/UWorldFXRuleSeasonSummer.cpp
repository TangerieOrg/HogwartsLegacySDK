#include "UWorldFXRuleSeasonBase.hpp"
#include "UWorldFXRuleSeasonSummer.hpp"
UWorldFXRuleSeasonSummer* UWorldFXRuleSeasonSummer::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleSeasonSummer");
    return (UWorldFXRuleSeasonSummer*)res;
}
