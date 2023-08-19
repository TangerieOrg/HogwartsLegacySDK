#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterHasTag.hpp"
UFXAutoTriggerInteractibleItemsFilterHasTag* UFXAutoTriggerInteractibleItemsFilterHasTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterHasTag");
    return (UFXAutoTriggerInteractibleItemsFilterHasTag*)res;
}
