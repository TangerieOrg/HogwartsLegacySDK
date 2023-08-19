#include "UBP_CamShake_Protego_Parry_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_CamShake_Protego_Parry_C* UBP_CamShake_Protego_Parry_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_CamShake_Protego_Parry.BP_CamShake_Protego_Parry_C");
    return (UBP_CamShake_Protego_Parry_C*)res;
}
