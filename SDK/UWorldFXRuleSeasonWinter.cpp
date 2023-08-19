#include "UWorldFXRuleSeasonBase.hpp"
#include "UWorldFXRuleSeasonWinter.hpp"
UWorldFXRuleSeasonWinter* UWorldFXRuleSeasonWinter::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleSeasonWinter");
    return (UWorldFXRuleSeasonWinter*)res;
}
