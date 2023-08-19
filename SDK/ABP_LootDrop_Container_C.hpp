#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EEnvironment\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class ULootDropComponent;
class UCognitionStimuliSourceComponent;
class UStaticMeshComponent;
class UAkComponent;
class UObject;
class UNiagaraComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_LootDrop_Container_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    ULootDropComponent* LootDrop; // 0x2b8
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c0
    UStaticMeshComponent* StaticMesh; // 0x2c8
    UAkComponent* NewVar_0; // 0x2d0
    EEnvironment::Type Environment; // 0x2d8
    bool AutoSelectLoot; // 0x2d9
    char pad_2da[0x16];
    UNiagaraComponent* Beacon; // 0x2f0
    bool Collected; // 0x2f8
    bool AllowBeacon; // 0x2f9
    char pad_2fa[0x2];
    float fxStartTime; // 0x2fc
    float fxScaleInDuration; // 0x300
    float fxScaleOutDuration; // 0x304
    static ABP_LootDrop_Container_C* StaticClass();
    UNiagaraComponent* SpawnBeacon(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation, FName Temp_name_Variable, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller);
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void ShowNonCinematicElements(UObject* Caller);
    void HideNonCinematicElements(UObject* Caller);
    void ExecuteUbergraph_BP_LootDrop_Container(int32_t EntryPoint);
    void onBagEmpty__DelegateSignature();
}; // Size: 0x308
#pragma pack(pop)
