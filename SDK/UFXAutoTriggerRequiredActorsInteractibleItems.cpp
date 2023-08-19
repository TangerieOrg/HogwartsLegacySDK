#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsInteractibleItems.hpp"
UFXAutoTriggerRequiredActorsInteractibleItems* UFXAutoTriggerRequiredActorsInteractibleItems::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsInteractibleItems");
    return (UFXAutoTriggerRequiredActorsInteractibleItems*)res;
}
