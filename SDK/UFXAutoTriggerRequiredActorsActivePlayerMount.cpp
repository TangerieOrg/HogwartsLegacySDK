#include "UFXAutoTriggerRequiredActorsActivePlayerMount.hpp"
#include "UFXAutoTriggerRequiredActorsBase.hpp"
UFXAutoTriggerRequiredActorsActivePlayerMount* UFXAutoTriggerRequiredActorsActivePlayerMount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsActivePlayerMount");
    return (UFXAutoTriggerRequiredActorsActivePlayerMount*)res;
}
