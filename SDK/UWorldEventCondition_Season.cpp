#include "ESeasonEnum.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_Season.hpp"
UWorldEventCondition_Season* UWorldEventCondition_Season::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_Season");
    return (UWorldEventCondition_Season*)res;
}
