#include "UBP_ObjectDestroyed_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_ObjectDestroyed_CamShake_C* UBP_ObjectDestroyed_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_ObjectDestroyed_CamShake.BP_ObjectDestroyed_CamShake_C");
    return (UBP_ObjectDestroyed_CamShake_C*)res;
}
