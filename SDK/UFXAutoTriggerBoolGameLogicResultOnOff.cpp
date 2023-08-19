#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerBoolGameLogicResultOnOff.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerBoolGameLogicResultOnOff* UFXAutoTriggerBoolGameLogicResultOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolGameLogicResultOnOff");
    return (UFXAutoTriggerBoolGameLogicResultOnOff*)res;
}
