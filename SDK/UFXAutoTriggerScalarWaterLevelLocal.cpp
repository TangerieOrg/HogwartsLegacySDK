#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarWaterLevelLocal.hpp"
UFXAutoTriggerScalarWaterLevelLocal* UFXAutoTriggerScalarWaterLevelLocal::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarWaterLevelLocal");
    return (UFXAutoTriggerScalarWaterLevelLocal*)res;
}
