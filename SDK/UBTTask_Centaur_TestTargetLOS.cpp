#include "ECollisionChannel.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Centaur_TestTargetLOS.hpp"
UBTTask_Centaur_TestTargetLOS* UBTTask_Centaur_TestTargetLOS::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.BTTask_Centaur_TestTargetLOS");
    return (UBTTask_Centaur_TestTargetLOS*)res;
}
