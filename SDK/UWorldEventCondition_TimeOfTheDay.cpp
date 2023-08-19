#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_TimeOfTheDay.hpp"
UWorldEventCondition_TimeOfTheDay* UWorldEventCondition_TimeOfTheDay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_TimeOfTheDay");
    return (UWorldEventCondition_TimeOfTheDay*)res;
}
