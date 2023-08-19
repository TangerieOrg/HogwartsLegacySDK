#include "AActor.hpp"
#include "ABP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr_C.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UBP_ID_OmniLight_Master_C.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UPointLightComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr_C* ABP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr.BP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr_C");
    return (ABP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr_C*)res;
}
