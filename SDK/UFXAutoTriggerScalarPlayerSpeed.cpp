#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarPlayerSpeed.hpp"
UFXAutoTriggerScalarPlayerSpeed* UFXAutoTriggerScalarPlayerSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerSpeed");
    return (UFXAutoTriggerScalarPlayerSpeed*)res;
}
