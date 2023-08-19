#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterHasSense.hpp"
UFXAutoTriggerInteractibleItemsFilterHasSense* UFXAutoTriggerInteractibleItemsFilterHasSense::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterHasSense");
    return (UFXAutoTriggerInteractibleItemsFilterHasSense*)res;
}
