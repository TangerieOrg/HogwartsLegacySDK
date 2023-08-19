#include "UBP_Impact_CamShake_Med_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_Impact_CamShake_Med_C* UBP_Impact_CamShake_Med_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_Impact_CamShake_Med.BP_Impact_CamShake_Med_C");
    return (UBP_Impact_CamShake_Med_C*)res;
}
