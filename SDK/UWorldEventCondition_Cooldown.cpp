#include "FWorldEventTimeSpan.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_Cooldown.hpp"
UWorldEventCondition_Cooldown* UWorldEventCondition_Cooldown::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_Cooldown");
    return (UWorldEventCondition_Cooldown*)res;
}
