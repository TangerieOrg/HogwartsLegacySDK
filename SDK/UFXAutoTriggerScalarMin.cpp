#include "UFXAutoTriggerScalarMin.hpp"
#include "UFXAutoTriggerScalarTwoParams.hpp"
UFXAutoTriggerScalarMin* UFXAutoTriggerScalarMin::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarMin");
    return (UFXAutoTriggerScalarMin*)res;
}
