#include "MissionStatus.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_Mission.hpp"
UWorldEventCondition_Mission* UWorldEventCondition_Mission::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_Mission");
    return (UWorldEventCondition_Mission*)res;
}
