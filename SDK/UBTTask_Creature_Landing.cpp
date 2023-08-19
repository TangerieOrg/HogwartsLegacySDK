#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_Landing.hpp"
UBTTask_Creature_Landing* UBTTask_Creature_Landing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_Landing");
    return (UBTTask_Creature_Landing*)res;
}
