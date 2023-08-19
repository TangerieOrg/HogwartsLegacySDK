#pragma once
#include <cstdint>
#include "AForagable.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UCognitionStimuliSourceComponent;
class UStaticMeshComponent;
class UObject;
class UBTService_AvaAITree;
#pragma pack(push, 1)
class ABP_Foragable_C : public AForagable {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8
    UStaticMeshComponent* StaticMesh; // 0x2d0
    FName CharacterID; // 0x2d8
    int32_t Delta; // 0x2e0
    FName InventoryItem; // 0x2e4
    bool bIsPickedUp; // 0x2ec
    char pad_2ed[0x3];
    static ABP_Foragable_C* StaticClass();
    FName GetItemID0();
    int32_t GetItemCount0();
    void AddToInventory(bool& Success, int32_t CallFunc_CanAddItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue);
    void ReceiveBeginPlay();
    void Interact(UBTService_AvaAITree* AvaService);
    void ObjectPickedUp(UObject* Caller);
    void OnPickedUp();
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void ExecuteUbergraph_BP_Foragable(int32_t EntryPoint);
}; // Size: 0x2f0
#pragma pack(pop)
