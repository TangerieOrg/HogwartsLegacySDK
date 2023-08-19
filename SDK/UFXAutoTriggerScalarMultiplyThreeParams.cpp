#include "UFXAutoTriggerScalarMultiplyThreeParams.hpp"
#include "UFXAutoTriggerScalarThreeParams.hpp"
UFXAutoTriggerScalarMultiplyThreeParams* UFXAutoTriggerScalarMultiplyThreeParams::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarMultiplyThreeParams");
    return (UFXAutoTriggerScalarMultiplyThreeParams*)res;
}
