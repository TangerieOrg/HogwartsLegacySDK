#include "UBP_Impact_CamShake_Light_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_Impact_CamShake_Light_C* UBP_Impact_CamShake_Light_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_Impact_CamShake_Light.BP_Impact_CamShake_Light_C");
    return (UBP_Impact_CamShake_Light_C*)res;
}
