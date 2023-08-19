#include "FName_GameLogicPropInt32.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarGameLogicPropositionalInt32.hpp"
UFXAutoTriggerScalarGameLogicPropositionalInt32* UFXAutoTriggerScalarGameLogicPropositionalInt32::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarGameLogicPropositionalInt32");
    return (UFXAutoTriggerScalarGameLogicPropositionalInt32*)res;
}
