#include "UBP_JumpLandSoft_CamShake_Pitch_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_JumpLandSoft_CamShake_Pitch_C* UBP_JumpLandSoft_CamShake_Pitch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_JumpLandSoft_CamShake_Pitch.BP_JumpLandSoft_CamShake_Pitch_C");
    return (UBP_JumpLandSoft_CamShake_Pitch_C*)res;
}
