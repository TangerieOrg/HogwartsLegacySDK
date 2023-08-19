#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterOr.hpp"
UFXAutoTriggerInteractibleItemsFilterOr* UFXAutoTriggerInteractibleItemsFilterOr::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterOr");
    return (UFXAutoTriggerInteractibleItemsFilterOr*)res;
}
