#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerBoolPlayerResultOnOff.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerBoolPlayerResultOnOff* UFXAutoTriggerBoolPlayerResultOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolPlayerResultOnOff");
    return (UFXAutoTriggerBoolPlayerResultOnOff*)res;
}
