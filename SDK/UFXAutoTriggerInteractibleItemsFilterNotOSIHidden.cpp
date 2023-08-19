#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterNotOSIHidden.hpp"
UFXAutoTriggerInteractibleItemsFilterNotOSIHidden* UFXAutoTriggerInteractibleItemsFilterNotOSIHidden::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterNotOSIHidden");
    return (UFXAutoTriggerInteractibleItemsFilterNotOSIHidden*)res;
}
