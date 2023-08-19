#include "UWorldFXRuleSeasonBase.hpp"
#include "UWorldFXRuleSeasonFall.hpp"
UWorldFXRuleSeasonFall* UWorldFXRuleSeasonFall::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleSeasonFall");
    return (UWorldFXRuleSeasonFall*)res;
}
