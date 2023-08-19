#include "EFXAutoTriggerZLocation.hpp"
#include "EFXAutoTriggerZType.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarPlayerWorldZ.hpp"
UFXAutoTriggerScalarPlayerWorldZ* UFXAutoTriggerScalarPlayerWorldZ::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerWorldZ");
    return (UFXAutoTriggerScalarPlayerWorldZ*)res;
}
