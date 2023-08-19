#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
#pragma pack(push, 1)
class UBTT_MoveToLastKnownTargetLoc_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FName LocKeyName; // 0xb0
    float InterpSpeed; // 0xb8
    ENPC_Mobility MobilityMode; // 0xbc
    char pad_bd[0x3];
    static UBTT_MoveToLastKnownTargetLoc_C* StaticClass();
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_MoveToLastKnownTargetLoc(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* K2Node_Event_OwnerActor, bool CallFunc_IsStationary_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsStationary_ReturnValue_1, FVector CallFunc_GetLastKnownTargetLoc_ReturnValue, FVector CallFunc_GetLastKnownTargetLoc_ReturnValue_1, bool CallFunc_MoveToLocation_ReturnValue, bool CallFunc_InitMoveToLocation_ReturnValue);
}; // Size: 0xc0
#pragma pack(pop)
