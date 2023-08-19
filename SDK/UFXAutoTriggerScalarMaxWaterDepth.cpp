#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarMaxWaterDepth.hpp"
UFXAutoTriggerScalarMaxWaterDepth* UFXAutoTriggerScalarMaxWaterDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarMaxWaterDepth");
    return (UFXAutoTriggerScalarMaxWaterDepth*)res;
}
