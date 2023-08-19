#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FTransform.hpp"
class UChildActorComponent;
class ABP_DungeonLOCs_C;
class USceneComponent;
class UStaticMeshComponent;
class AActor;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_DungeonLOCs_Marker_C : public ABP_Marker_Base_C {
public:
    UChildActorComponent* BeaconLocation; // 0x308
    USceneComponent* Scene; // 0x310
    FString BeaconText; // 0x318
    static ABP_DungeonLOCs_Marker_C* StaticClass();
    void UserConstructionScript(TArray<UChildActorComponent*> HamletSet1, TArray<UChildActorComponent*> HamletSet2, TArray<bool> DisabledHamletBuildingList, UStaticMeshComponent* TempStaticMesh, UChildActorComponent* TempChildActor, TArray<UChildActorComponent*> TentObjectList, TArray<UStaticMeshComponent*> PropsList, TArray<bool> DisabledList, TArray<UStaticMeshComponent*> HamletSet1_StaticMeshList, TArray<UChildActorComponent*> ChildActorList, TArray<FTransform> TransformList, bool CallFunc_Contains_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, ABP_DungeonLOCs_C* K2Node_DynamicCast_AsBP_Dungeon_LOCs, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue);
}; // Size: 0x328
#pragma pack(pop)
