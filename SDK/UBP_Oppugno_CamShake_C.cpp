#include "UBP_Oppugno_CamShake_C.hpp"
#include "UCameraShakeBase.hpp"
UBP_Oppugno_CamShake_C* UBP_Oppugno_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_Oppugno_CamShake.BP_Oppugno_CamShake_C");
    return (UBP_Oppugno_CamShake_C*)res;
}
