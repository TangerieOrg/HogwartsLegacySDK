#include "UFXAutoTriggerValue.hpp"
#include "UObject.hpp"
UFXAutoTriggerValue* UFXAutoTriggerValue::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerValue");
    return (UFXAutoTriggerValue*)res;
}
