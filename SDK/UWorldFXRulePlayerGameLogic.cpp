#include "UWorldFXRule.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
UWorldFXRulePlayerGameLogic* UWorldFXRulePlayerGameLogic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerGameLogic");
    return (UWorldFXRulePlayerGameLogic*)res;
}
