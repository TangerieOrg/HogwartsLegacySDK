#include "UBP_LookAt_AimModeAimTransition_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_AimModeAimTransition_C* UBP_LookAt_AimModeAimTransition_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_AimModeAimTransition.BP_LookAt_AimModeAimTransition_C");
    return (UBP_LookAt_AimModeAimTransition_C*)res;
}
