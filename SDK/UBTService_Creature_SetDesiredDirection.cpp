#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_SetDesiredDirection.hpp"
UBTService_Creature_SetDesiredDirection* UBTService_Creature_SetDesiredDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_SetDesiredDirection");
    return (UBTService_Creature_SetDesiredDirection*)res;
}
