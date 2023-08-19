#include "UBP_SpellImpact_Hitch_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_SpellImpact_Hitch_CamShake_C* UBP_SpellImpact_Hitch_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_SpellImpact_Hitch_CamShake.BP_SpellImpact_Hitch_CamShake_C");
    return (UBP_SpellImpact_Hitch_CamShake_C*)res;
}
