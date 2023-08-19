#include "UBP_CamShake_Sprint_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_CamShake_Sprint_C* UBP_CamShake_Sprint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_CamShake_Sprint.BP_CamShake_Sprint_C");
    return (UBP_CamShake_Sprint_C*)res;
}
