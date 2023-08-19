#include "UBP_RotateTowardSecondaryTarget_Mount_C.hpp"
#include "UCameraStackBehaviorRotateTowardsSecondaryTarget.hpp"
UBP_RotateTowardSecondaryTarget_Mount_C* UBP_RotateTowardSecondaryTarget_Mount_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_RotateTowardSecondaryTarget_Mount.BP_RotateTowardSecondaryTarget_Mount_C");
    return (UBP_RotateTowardSecondaryTarget_Mount_C*)res;
}
