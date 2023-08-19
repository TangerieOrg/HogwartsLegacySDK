#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalarPlayerOnMount.hpp"
UFXAutoTriggerScalarPlayerOnMount* UFXAutoTriggerScalarPlayerOnMount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerOnMount");
    return (UFXAutoTriggerScalarPlayerOnMount*)res;
}
