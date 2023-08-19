#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolIsInteractibleItem.hpp"
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
UFXAutoTriggerBoolIsInteractibleItem* UFXAutoTriggerBoolIsInteractibleItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolIsInteractibleItem");
    return (UFXAutoTriggerBoolIsInteractibleItem*)res;
}
