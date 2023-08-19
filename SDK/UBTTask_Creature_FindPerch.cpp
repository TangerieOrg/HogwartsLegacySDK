#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_FindPerch.hpp"
UBTTask_Creature_FindPerch* UBTTask_Creature_FindPerch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_FindPerch");
    return (UBTTask_Creature_FindPerch*)res;
}
