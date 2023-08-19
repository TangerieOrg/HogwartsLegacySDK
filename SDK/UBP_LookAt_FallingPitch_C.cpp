#include "UBP_LookAt_FallingPitch_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_FallingPitch_C* UBP_LookAt_FallingPitch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_FallingPitch.BP_LookAt_FallingPitch_C");
    return (UBP_LookAt_FallingPitch_C*)res;
}
