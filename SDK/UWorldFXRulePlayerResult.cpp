#include "FName_GameLogicBoolResult.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
#include "UWorldFXRulePlayerResult.hpp"
UWorldFXRulePlayerResult* UWorldFXRulePlayerResult::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerResult");
    return (UWorldFXRulePlayerResult*)res;
}
