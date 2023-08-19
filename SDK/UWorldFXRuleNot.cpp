#include "UWorldFXRule.hpp"
#include "UWorldFXRuleNot.hpp"
UWorldFXRuleNot* UWorldFXRuleNot::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleNot");
    return (UWorldFXRuleNot*)res;
}
