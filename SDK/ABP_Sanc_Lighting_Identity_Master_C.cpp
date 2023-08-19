#include "ABP_Sanc_Lighting_Identity_Master_C.hpp"
#include "ASanctuaryLightingIdentityMaster.hpp"
ABP_Sanc_Lighting_Identity_Master_C* ABP_Sanc_Lighting_Identity_Master_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Sanctuary/Blueprints/Lighting/BP_Sanc_Lighting_Identity_Master.BP_Sanc_Lighting_Identity_Master_C");
    return (ABP_Sanc_Lighting_Identity_Master_C*)res;
}
