#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#include "UFXAutoTriggerRequiredActorsMatchName.hpp"
UFXAutoTriggerRequiredActorsMatchName* UFXAutoTriggerRequiredActorsMatchName::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatchName");
    return (UFXAutoTriggerRequiredActorsMatchName*)res;
}
