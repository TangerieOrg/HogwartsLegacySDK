#include "EInteractiveState.hpp"
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterIsState.hpp"
UFXAutoTriggerInteractibleItemsFilterIsState* UFXAutoTriggerInteractibleItemsFilterIsState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterIsState");
    return (UFXAutoTriggerInteractibleItemsFilterIsState*)res;
}
