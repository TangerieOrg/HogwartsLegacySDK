#include "UWorldFXRuleIsDay.hpp"
#include "UWorldFXRuleNightDay.hpp"
UWorldFXRuleIsDay* UWorldFXRuleIsDay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleIsDay");
    return (UWorldFXRuleIsDay*)res;
}
