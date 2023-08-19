#include "UBP_SpellImpactDamageLarge_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_SpellImpactDamageLarge_CamShake_C* UBP_SpellImpactDamageLarge_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_SpellImpactDamageLarge_CamShake.BP_SpellImpactDamageLarge_CamShake_C");
    return (UBP_SpellImpactDamageLarge_CamShake_C*)res;
}
