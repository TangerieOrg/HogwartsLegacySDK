#include "FDbSingleColumnInfo.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_LocationSchedule.hpp"
UWorldEventCondition_LocationSchedule* UWorldEventCondition_LocationSchedule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_LocationSchedule");
    return (UWorldEventCondition_LocationSchedule*)res;
}
