#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterCurrentTarget.hpp"
UFXAutoTriggerInteractibleItemsFilterCurrentTarget* UFXAutoTriggerInteractibleItemsFilterCurrentTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterCurrentTarget");
    return (UFXAutoTriggerInteractibleItemsFilterCurrentTarget*)res;
}
