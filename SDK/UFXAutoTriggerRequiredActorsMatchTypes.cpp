#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#include "UFXAutoTriggerRequiredActorsMatchTypes.hpp"
UFXAutoTriggerRequiredActorsMatchTypes* UFXAutoTriggerRequiredActorsMatchTypes::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatchTypes");
    return (UFXAutoTriggerRequiredActorsMatchTypes*)res;
}
