#include "UFXAdjustments.hpp"
#include "UFXAdjustmentsKillFXAutoGroup.hpp"
UFXAdjustmentsKillFXAutoGroup* UFXAdjustmentsKillFXAutoGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustmentsKillFXAutoGroup");
    return (UFXAdjustmentsKillFXAutoGroup*)res;
}
