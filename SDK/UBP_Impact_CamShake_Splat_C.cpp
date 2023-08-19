#include "UBP_Impact_CamShake_Splat_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_Impact_CamShake_Splat_C* UBP_Impact_CamShake_Splat_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_Impact_CamShake_Splat.BP_Impact_CamShake_Splat_C");
    return (UBP_Impact_CamShake_Splat_C*)res;
}
