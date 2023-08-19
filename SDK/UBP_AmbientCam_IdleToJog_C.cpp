#include "UBP_AmbientCam_IdleToJog_C.hpp"
#include "UCameraStackBehaviorCrossBlendBySpeed.hpp"
UBP_AmbientCam_IdleToJog_C* UBP_AmbientCam_IdleToJog_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/AmbientMovement/BP_AmbientCam_IdleToJog.BP_AmbientCam_IdleToJog_C");
    return (UBP_AmbientCam_IdleToJog_C*)res;
}
