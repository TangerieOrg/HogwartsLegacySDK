#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterHasSenseFromList.hpp"
UFXAutoTriggerInteractibleItemsFilterHasSenseFromList* UFXAutoTriggerInteractibleItemsFilterHasSenseFromList::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterHasSenseFromList");
    return (UFXAutoTriggerInteractibleItemsFilterHasSenseFromList*)res;
}
