#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_MoveToWithDirection_Flying.hpp"
UBTTask_Creature_MoveToWithDirection_Flying* UBTTask_Creature_MoveToWithDirection_Flying::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_MoveToWithDirection_Flying");
    return (UBTTask_Creature_MoveToWithDirection_Flying*)res;
}
