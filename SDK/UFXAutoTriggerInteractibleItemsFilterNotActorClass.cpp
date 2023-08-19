#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#include "UFXAutoTriggerInteractibleItemsFilterNotActorClass.hpp"
UFXAutoTriggerInteractibleItemsFilterNotActorClass* UFXAutoTriggerInteractibleItemsFilterNotActorClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerInteractibleItemsFilterNotActorClass");
    return (UFXAutoTriggerInteractibleItemsFilterNotActorClass*)res;
}
