#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#include "UFXAutoTriggerRequiredActorsMatchNameContains.hpp"
UFXAutoTriggerRequiredActorsMatchNameContains* UFXAutoTriggerRequiredActorsMatchNameContains::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatchNameContains");
    return (UFXAutoTriggerRequiredActorsMatchNameContains*)res;
}
