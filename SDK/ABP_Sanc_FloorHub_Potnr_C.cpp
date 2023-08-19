#include "ABP_Sanc_FloorHub_Potnr_C.hpp"
#include "ATransfigurationStructureBase.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTransformationFxInfoComponent.hpp"
ABP_Sanc_FloorHub_Potnr_C* ABP_Sanc_FloorHub_Potnr_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_FloorHub_Potnr.BP_Sanc_FloorHub_Potnr_C");
    return (ABP_Sanc_FloorHub_Potnr_C*)res;
}
