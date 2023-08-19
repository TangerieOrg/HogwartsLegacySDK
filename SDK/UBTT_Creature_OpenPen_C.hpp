#pragma once
#include <cstdint>
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class UCreatureSpawnSlotComponent;
class UIcarus3DMovementComponent;
class APawn;
class UCharacterMovementComponent;
class AAIController;
class UBlackboardComponent;
class UObject;
#pragma pack(push, 1)
class UBTT_Creature_OpenPen_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    float Total_Time; // 0xb0
    char pad_b4[0x4];
    FHermesBPDelegateHandle HermesAnimCompleteHandle; // 0xb8
    bool Success; // 0xc8
    char pad_c9[0x7];
    UCreatureSpawnSlotComponent* CreatureSpawnSlot; // 0xd0
    FName BlackboardKey; // 0xd8
    static UBTT_Creature_OpenPen_C* StaticClass();
    void SetMovementModeOnFinishExit(APawn* InPawn, APawn* Pawn, UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, UIcarus3DMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_OpenPen(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue);
}; // Size: 0xe0
#pragma pack(pop)
