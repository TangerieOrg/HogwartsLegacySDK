#include "UFXAutoTriggerInteractibleItemsFilterHasTag.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterNotHasTag.hpp"
UFXAutoTriggerInteractibleItemsFilterNotHasTag* UFXAutoTriggerInteractibleItemsFilterNotHasTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterNotHasTag");
    return (UFXAutoTriggerInteractibleItemsFilterNotHasTag*)res;
}
