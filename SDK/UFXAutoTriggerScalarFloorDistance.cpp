#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarFloorDistance.hpp"
UFXAutoTriggerScalarFloorDistance* UFXAutoTriggerScalarFloorDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarFloorDistance");
    return (UFXAutoTriggerScalarFloorDistance*)res;
}
