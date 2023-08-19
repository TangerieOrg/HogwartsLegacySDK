#pragma once
#include <cstdint>
#include "AInventoryObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class UInteractiveObjectComponent;
#pragma pack(push, 1)
class ABP_InventoryObject_C : public AInventoryObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x330
    UStaticMeshComponent* StaticMesh; // 0x338
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x340
    UInteractiveObjectComponent* InteractiveObject; // 0x348
    static ABP_InventoryObject_C* StaticClass();
    void NewFunction_0(bool NewParam);
    void ReceiveBeginPlay();
    void NotifyPickedUp0(FName ItemId, int32_t ItemCount);
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void ExecuteUbergraph_BP_InventoryObject(int32_t EntryPoint);
}; // Size: 0x350
#pragma pack(pop)
