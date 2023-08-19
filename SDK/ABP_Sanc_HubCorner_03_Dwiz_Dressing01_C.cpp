#include "AActor.hpp"
#include "ABP_Sanc_HubCorner_03_Dwiz_Dressing01_C.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UBP_ID_WallCandles_Master_C.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "UPointLightComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Sanc_HubCorner_03_Dwiz_Dressing01_C* ABP_Sanc_HubCorner_03_Dwiz_Dressing01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubCorner_03_Dwiz_Dressing01.BP_Sanc_HubCorner_03_Dwiz_Dressing01_C");
    return (ABP_Sanc_HubCorner_03_Dwiz_Dressing01_C*)res;
}
