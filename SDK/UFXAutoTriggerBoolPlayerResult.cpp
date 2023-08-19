#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolPlayerResult.hpp"
UFXAutoTriggerBoolPlayerResult* UFXAutoTriggerBoolPlayerResult::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolPlayerResult");
    return (UFXAutoTriggerBoolPlayerResult*)res;
}
