#include "UBP_SpellImpactDamage_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_SpellImpactDamage_CamShake_C* UBP_SpellImpactDamage_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_SpellImpactDamage_CamShake.BP_SpellImpactDamage_CamShake_C");
    return (UBP_SpellImpactDamage_CamShake_C*)res;
}
