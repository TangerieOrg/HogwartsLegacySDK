#include "UBP_JumpLandHard_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_JumpLandHard_CamShake_C* UBP_JumpLandHard_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_JumpLandHard_CamShake.BP_JumpLandHard_CamShake_C");
    return (UBP_JumpLandHard_CamShake_C*)res;
}
