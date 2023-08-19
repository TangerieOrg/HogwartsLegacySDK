#include "UFXAutoTriggerScalarAddThreeParams.hpp"
#include "UFXAutoTriggerScalarThreeParams.hpp"
UFXAutoTriggerScalarAddThreeParams* UFXAutoTriggerScalarAddThreeParams::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarAddThreeParams");
    return (UFXAutoTriggerScalarAddThreeParams*)res;
}
