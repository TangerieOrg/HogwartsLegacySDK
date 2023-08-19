#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UCognitionStimuliSourceComponent;
class UCapsuleComponent;
class UWidgetComponent;
class UBillboardComponent;
class ABP_DungeonLOCs_C;
class UBTService_AvaAITree;
class USceneComponent;
#pragma pack(push, 1)
class ABP_DungeonInteract_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250
    UCapsuleComponent* Capsule; // 0x258
    UWidgetComponent* TextName; // 0x260
    UBillboardComponent* Billboard; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    char pad_278[0x10];
    ABP_DungeonLOCs_C* Parent; // 0x288
    bool ShowUI; // 0x290
    char pad_291[0x3];
    FName DungeonName; // 0x294
    char pad_29c[0x4];
    static ABP_DungeonInteract_C* StaticClass();
    void Interact(UBTService_AvaAITree* AvaService);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_DungeonInteract(int32_t EntryPoint, bool Temp_bool_Variable, FName Temp_name_Variable, UBTService_AvaAITree* K2Node_Event_AvaService, bool CallFunc_EqualEqual_NameName_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, FName K2Node_Select_Default, ABP_DungeonLOCs_C* K2Node_DynamicCast_AsBP_Dungeon_LOCs, bool K2Node_DynamicCast_bSuccess);
    void InteractedWith__DelegateSignature();
}; // Size: 0x2a0
#pragma pack(pop)
