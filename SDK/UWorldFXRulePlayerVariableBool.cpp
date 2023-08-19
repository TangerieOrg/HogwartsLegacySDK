#include "FName_GameLogicVarBool.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
#include "UWorldFXRulePlayerVariableBool.hpp"
UWorldFXRulePlayerVariableBool* UWorldFXRulePlayerVariableBool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePlayerVariableBool");
    return (UWorldFXRulePlayerVariableBool*)res;
}
