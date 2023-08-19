#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalarPlayerInCinematic.hpp"
UFXAutoTriggerScalarPlayerInCinematic* UFXAutoTriggerScalarPlayerInCinematic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerInCinematic");
    return (UFXAutoTriggerScalarPlayerInCinematic*)res;
}
