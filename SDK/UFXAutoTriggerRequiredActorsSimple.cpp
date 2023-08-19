#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsSimple.hpp"
UFXAutoTriggerRequiredActorsSimple* UFXAutoTriggerRequiredActorsSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsSimple");
    return (UFXAutoTriggerRequiredActorsSimple*)res;
}
