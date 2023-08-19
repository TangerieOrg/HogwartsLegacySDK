#include "FName_GameLogicVarFloat.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
#include "UWorldFXRulePlayerVariableFloat.hpp"
UWorldFXRulePlayerVariableFloat* UWorldFXRulePlayerVariableFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerVariableFloat");
    return (UWorldFXRulePlayerVariableFloat*)res;
}
