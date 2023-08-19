#include "UBP_Impact_CamShake_Hard_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_Impact_CamShake_Hard_C* UBP_Impact_CamShake_Hard_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_Impact_CamShake_Hard.BP_Impact_CamShake_Hard_C");
    return (UBP_Impact_CamShake_Hard_C*)res;
}
