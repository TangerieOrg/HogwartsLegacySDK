#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class UChildActorComponent;
class ABP_DeadNPC_Loot_C;
#pragma pack(push, 1)
class ABP_DeadNPC_Body_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* Dead_Body; // 0x250
    UChildActorComponent* Loot; // 0x258
    static ABP_DeadNPC_Body_C* StaticClass();
    void Assign_Loot_Level(int32_t NewParam);
    void ExecuteUbergraph_BP_DeadNPC_Body(int32_t EntryPoint, int32_t K2Node_CustomEvent_NewParam, ABP_DeadNPC_Loot_C* K2Node_DynamicCast_AsBP_Dead_NPC_Loot, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x260
#pragma pack(pop)
