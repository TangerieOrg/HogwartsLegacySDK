#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarMaxWaterLevelLocal.hpp"
UFXAutoTriggerScalarMaxWaterLevelLocal* UFXAutoTriggerScalarMaxWaterLevelLocal::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarMaxWaterLevelLocal");
    return (UFXAutoTriggerScalarMaxWaterLevelLocal*)res;
}
