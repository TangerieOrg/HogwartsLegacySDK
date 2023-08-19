#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UObject.hpp"
UFXAutoTriggerInteractibleItemsFilter* UFXAutoTriggerInteractibleItemsFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilter");
    return (UFXAutoTriggerInteractibleItemsFilter*)res;
}
