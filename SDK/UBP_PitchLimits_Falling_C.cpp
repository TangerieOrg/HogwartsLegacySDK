#include "UBP_PitchLimits_Falling_C.hpp"
#include "UCameraStackBehaviorSetRotationLimits.hpp"
UBP_PitchLimits_Falling_C* UBP_PitchLimits_Falling_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_PitchLimits_Falling.BP_PitchLimits_Falling_C");
    return (UBP_PitchLimits_Falling_C*)res;
}
