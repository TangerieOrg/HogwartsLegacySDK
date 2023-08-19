#include "UWorldFXRule.hpp"
#include "UWorldFXRuleNightDay.hpp"
UWorldFXRuleNightDay* UWorldFXRuleNightDay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleNightDay");
    return (UWorldFXRuleNightDay*)res;
}
