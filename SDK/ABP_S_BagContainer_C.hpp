#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EEnvironment\Type.hpp"
#include "FMeshList.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
class ULootDropComponent;
class UCognitionStimuliSourceComponent;
class UStaticMeshComponent;
class UAkComponent;
class UObject;
class UStaticMesh;
#pragma pack(push, 1)
class ABP_S_BagContainer_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    ULootDropComponent* LootDrop; // 0x2b8
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c0
    UStaticMeshComponent* StaticMesh; // 0x2c8
    UAkComponent* NewVar_0; // 0x2d0
    EEnvironment::Type Environment; // 0x2d8
    char pad_2d9[0x3];
    int32_t PropIndex; // 0x2dc
    char pad_2e0[0x50];
    bool AutoSelectLoot; // 0x330
    char pad_331[0x17];
    bool BagEmpty; // 0x348
    bool Compiled_List; // 0x349
    char pad_34a[0x2];
    FRandomStream Random_Seed; // 0x34c
    char pad_354[0x54];
    UStaticMesh* LoadedOpenedMesh; // 0x3a8
    UStaticMesh* LoadedClosedMesh; // 0x3b0
    FVector SavedLinearVelocity; // 0x3b8
    bool SavedSimulatePhysics; // 0x3c4
    char pad_3c5[0x3];
    static ABP_S_BagContainer_C* StaticClass();
    void UserConstructionScript(FMeshList MeshesOpen, FMeshList Meshes, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream);
    void OnLoaded_7E28B5E6437622A54BEC36AB24E49C42(UObject* Loaded);
    void OnLoaded_F2E9B2D244606875283867BCBE5D873B(UObject* Loaded);
    void ReceiveBeginPlay();
    void InteractionInitiated(UObject* Caller);
    void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller);
    void CloseContainer(UObject* Caller);
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void CheckLoot();
    void SavePhysics();
    void RestorePhysics();
    void ExecuteUbergraph_BP_S_BagContainer(int32_t EntryPoint);
    void onBagEmpty__DelegateSignature();
}; // Size: 0x3c8
#pragma pack(pop)
