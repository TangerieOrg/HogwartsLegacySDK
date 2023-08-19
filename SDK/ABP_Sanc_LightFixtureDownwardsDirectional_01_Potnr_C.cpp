#include "AActor.hpp"
#include "ABP_Sanc_LightFixtureDownwardsDirectional_01_Potnr_C.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UBP_ID_DownwardsDirectional_Master1_C.hpp"
#include "UPointLightComponent.hpp"
#include "USceneComponent.hpp"
#include "USpotLightComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Sanc_LightFixtureDownwardsDirectional_01_Potnr_C* ABP_Sanc_LightFixtureDownwardsDirectional_01_Potnr_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_LightFixtureDownwardsDirectional_01_Potnr.BP_Sanc_LightFixtureDownwardsDirectional_01_Potnr_C");
    return (ABP_Sanc_LightFixtureDownwardsDirectional_01_Potnr_C*)res;
}
