#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "FCalloutInformation.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UBoxComponent;
class ULootDropComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class USceneComponent;
#pragma pack(push, 1)
class ABP_DeadNPC_Loot_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UBoxComponent* Box; // 0x2b8
    ULootDropComponent* LootDrop; // 0x2c0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8
    USceneComponent* DefaultSceneRoot; // 0x2d0
    static ABP_DeadNPC_Loot_C* StaticClass();
    void ReceiveBeginPlay();
    void SetSpecificLoot(int32_t NoteIndex);
    void BndEvt__BP_DeadNPC_Loot_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature(UObject* i_caller);
    void ExecuteUbergraph_BP_DeadNPC_Loot(int32_t EntryPoint, UObject* K2Node_ComponentBoundEvent_i_caller, int32_t K2Node_CustomEvent_NoteIndex, FCalloutInformation K2Node_MakeStruct_CalloutInformation);
}; // Size: 0x2d8
#pragma pack(pop)
