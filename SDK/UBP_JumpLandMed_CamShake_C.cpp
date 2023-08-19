#include "UBP_JumpLandMed_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_JumpLandMed_CamShake_C* UBP_JumpLandMed_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_JumpLandMed_CamShake.BP_JumpLandMed_CamShake_C");
    return (UBP_JumpLandMed_CamShake_C*)res;
}
