#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterActorClass.hpp"
UFXAutoTriggerInteractibleItemsFilterActorClass* UFXAutoTriggerInteractibleItemsFilterActorClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterActorClass");
    return (UFXAutoTriggerInteractibleItemsFilterActorClass*)res;
}
