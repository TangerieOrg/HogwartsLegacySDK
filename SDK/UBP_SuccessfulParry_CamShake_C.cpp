#include "UBP_SuccessfulParry_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_SuccessfulParry_CamShake_C* UBP_SuccessfulParry_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_SuccessfulParry_CamShake.BP_SuccessfulParry_CamShake_C");
    return (UBP_SuccessfulParry_CamShake_C*)res;
}
