#include "EMonthsOfTheYear.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_MonthsOfTheYear.hpp"
UWorldEventCondition_MonthsOfTheYear* UWorldEventCondition_MonthsOfTheYear::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_MonthsOfTheYear");
    return (UWorldEventCondition_MonthsOfTheYear*)res;
}
