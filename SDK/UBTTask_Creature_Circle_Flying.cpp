#include "ECirclingDirection.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_Circle_Flying.hpp"
UBTTask_Creature_Circle_Flying* UBTTask_Creature_Circle_Flying::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_Circle_Flying");
    return (UBTTask_Creature_Circle_Flying*)res;
}
