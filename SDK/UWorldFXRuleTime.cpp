#include "UWorldFXRule.hpp"
#include "UWorldFXRuleTime.hpp"
UWorldFXRuleTime* UWorldFXRuleTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleTime");
    return (UWorldFXRuleTime*)res;
}
