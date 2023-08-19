#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarWaterDepth.hpp"
UFXAutoTriggerScalarWaterDepth* UFXAutoTriggerScalarWaterDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarWaterDepth");
    return (UFXAutoTriggerScalarWaterDepth*)res;
}
