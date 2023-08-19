#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UCognitionStimuliSourceComponent;
class UStaticMeshComponent;
class UObject;
class ULootDropComponent;
#pragma pack(push, 1)
class ABP_TV_DeadBody_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2b8
    ULootDropComponent* LootDrop; // 0x2c0
    UStaticMeshComponent* StaticMesh; // 0x2c8
    static ABP_TV_DeadBody_C* StaticClass();
    void ReceiveBeginPlay();
    void InteractionInitiated(UObject* Caller);
    void ExecuteUbergraph_BP_TV_DeadBody(int32_t EntryPoint);
}; // Size: 0x2d0
#pragma pack(pop)
