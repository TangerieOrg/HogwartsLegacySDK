#include "UBP_RotateTowardsSecondaryTarget_BlinkEnemy_C.hpp"
#include "UCameraStackBehaviorRotateTowardsSecondaryTarget.hpp"
UBP_RotateTowardsSecondaryTarget_BlinkEnemy_C* UBP_RotateTowardsSecondaryTarget_BlinkEnemy_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_RotateTowardsSecondaryTarget_BlinkEnemy.BP_RotateTowardsSecondaryTarget_BlinkEnemy_C");
    return (UBP_RotateTowardsSecondaryTarget_BlinkEnemy_C*)res;
}
