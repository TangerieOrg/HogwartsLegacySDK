#include "UWorldFXRule.hpp"
#include "UWorldFXRuleOvercast.hpp"
UWorldFXRuleOvercast* UWorldFXRuleOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleOvercast");
    return (UWorldFXRuleOvercast*)res;
}
