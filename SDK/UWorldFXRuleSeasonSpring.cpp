#include "UWorldFXRuleSeasonBase.hpp"
#include "UWorldFXRuleSeasonSpring.hpp"
UWorldFXRuleSeasonSpring* UWorldFXRuleSeasonSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleSeasonSpring");
    return (UWorldFXRuleSeasonSpring*)res;
}
