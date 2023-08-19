#include "EInteractiveState.hpp"
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterIsStateFromList.hpp"
UFXAutoTriggerInteractibleItemsFilterIsStateFromList* UFXAutoTriggerInteractibleItemsFilterIsStateFromList::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterIsStateFromList");
    return (UFXAutoTriggerInteractibleItemsFilterIsStateFromList*)res;
}
