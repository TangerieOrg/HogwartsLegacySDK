#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalarPlayerOnBroom.hpp"
UFXAutoTriggerScalarPlayerOnBroom* UFXAutoTriggerScalarPlayerOnBroom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerOnBroom");
    return (UFXAutoTriggerScalarPlayerOnBroom*)res;
}
