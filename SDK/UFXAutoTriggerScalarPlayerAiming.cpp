#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarPlayerAiming.hpp"
UFXAutoTriggerScalarPlayerAiming* UFXAutoTriggerScalarPlayerAiming::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerAiming");
    return (UFXAutoTriggerScalarPlayerAiming*)res;
}
