#include "EDaysOfTheWeek.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_DaysOfTheWeek.hpp"
UWorldEventCondition_DaysOfTheWeek* UWorldEventCondition_DaysOfTheWeek::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_DaysOfTheWeek");
    return (UWorldEventCondition_DaysOfTheWeek*)res;
}
