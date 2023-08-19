#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolGameLogicResult.hpp"
UFXAutoTriggerBoolGameLogicResult* UFXAutoTriggerBoolGameLogicResult::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolGameLogicResult");
    return (UFXAutoTriggerBoolGameLogicResult*)res;
}
