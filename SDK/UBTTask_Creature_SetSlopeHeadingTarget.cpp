#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_SetSlopeHeadingTarget.hpp"
UBTTask_Creature_SetSlopeHeadingTarget* UBTTask_Creature_SetSlopeHeadingTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_SetSlopeHeadingTarget");
    return (UBTTask_Creature_SetSlopeHeadingTarget*)res;
}
