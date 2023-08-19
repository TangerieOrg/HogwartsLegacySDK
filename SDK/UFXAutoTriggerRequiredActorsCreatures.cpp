#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsCreatures.hpp"
UFXAutoTriggerRequiredActorsCreatures* UFXAutoTriggerRequiredActorsCreatures::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsCreatures");
    return (UFXAutoTriggerRequiredActorsCreatures*)res;
}
