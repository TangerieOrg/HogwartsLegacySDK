#include "FName_GameLogicPropInt32.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolGameLogicPropositionalInt32.hpp"
UFXAutoTriggerBoolGameLogicPropositionalInt32* UFXAutoTriggerBoolGameLogicPropositionalInt32::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolGameLogicPropositionalInt32");
    return (UFXAutoTriggerBoolGameLogicPropositionalInt32*)res;
}
