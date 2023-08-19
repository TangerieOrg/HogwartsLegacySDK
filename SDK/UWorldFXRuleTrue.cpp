#include "UWorldFXRule.hpp"
#include "UWorldFXRuleTrue.hpp"
UWorldFXRuleTrue* UWorldFXRuleTrue::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleTrue");
    return (UWorldFXRuleTrue*)res;
}
