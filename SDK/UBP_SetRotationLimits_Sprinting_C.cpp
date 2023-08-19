#include "UBP_SetRotationLimits_Sprinting_C.hpp"
#include "UCameraStackBehaviorSetRotationLimits.hpp"
UBP_SetRotationLimits_Sprinting_C* UBP_SetRotationLimits_Sprinting_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_SetRotationLimits_Sprinting.BP_SetRotationLimits_Sprinting_C");
    return (UBP_SetRotationLimits_Sprinting_C*)res;
}
