#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarThreeParams.hpp"
UFXAutoTriggerScalarThreeParams* UFXAutoTriggerScalarThreeParams::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarThreeParams");
    return (UFXAutoTriggerScalarThreeParams*)res;
}
