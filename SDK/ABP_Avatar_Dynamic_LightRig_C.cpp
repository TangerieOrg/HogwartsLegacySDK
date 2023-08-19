#include "ABP_Avatar_Dynamic_LightRig_C.hpp"
#include "ADynamicCharacterLightRig.hpp"
#include "USpotLightComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Avatar_Dynamic_LightRig_C* ABP_Avatar_Dynamic_LightRig_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/LightRigs/BP_Avatar_Dynamic_LightRig.BP_Avatar_Dynamic_LightRig_C");
    return (ABP_Avatar_Dynamic_LightRig_C*)res;
}
