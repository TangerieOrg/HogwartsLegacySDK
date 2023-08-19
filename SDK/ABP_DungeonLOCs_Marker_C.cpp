#include "AActor.hpp"
#include "ABP_DungeonLOCs_C.hpp"
#include "ABP_DungeonLOCs_Marker_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABeaconLocation.hpp"
#include "FTransform.hpp"
#include "UChildActorComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_DungeonLOCs_Marker_C* ABP_DungeonLOCs_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs_Marker.BP_DungeonLOCs_Marker_C");
    return (ABP_DungeonLOCs_Marker_C*)res;
}
void ABP_DungeonLOCs_Marker_C::UserConstructionScript(TArray<UChildActorComponent*> HamletSet1, TArray<UChildActorComponent*> HamletSet2, TArray<bool> DisabledHamletBuildingList, UStaticMeshComponent* TempStaticMesh, UChildActorComponent* TempChildActor, TArray<UChildActorComponent*> TentObjectList, TArray<UStaticMeshComponent*> PropsList, TArray<bool> DisabledList, TArray<UStaticMeshComponent*> HamletSet1_StaticMeshList, TArray<UChildActorComponent*> ChildActorList, TArray<FTransform> TransformList, bool CallFunc_Contains_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, ABP_DungeonLOCs_C* K2Node_DynamicCast_AsBP_Dungeon_LOCs, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue) {}
