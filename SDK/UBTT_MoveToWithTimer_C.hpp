#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class APawn;
class UEnemyAIComponent;
class AEnemy_Character;
class AAIController;
class UCharacterMovementComponent;
class UBlackboardComponent;
class AActor;
#pragma pack(push, 1)
class UBTT_MoveToWithTimer_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    APawn* Pawn; // 0xb0
    AAIController* Controller; // 0xb8
    FName LocationKeyName; // 0xc0
    float ElapsedTime; // 0xc8
    float MaxTime; // 0xcc
    ENPC_Mobility Mobility; // 0xd0
    bool OverrideMobility; // 0xd1
    char pad_d2[0x6];
    UEnemyAIComponent* EnemyComp; // 0xd8
    UBlackboardComponent* BBComp; // 0xe0
    bool MoveStarted; // 0xe8
    char pad_e9[0x3];
    FVector MoveLoc; // 0xec
    float AtTargetDist; // 0xf8
    float MoveTimeout; // 0xfc
    static UBTT_MoveToWithTimer_C* StaticClass();
    void ReceiveExecute0(AActor* OwnerActor);
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_MoveToWithTimer(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue, bool CallFunc_MoveToLocation_ReturnValue);
}; // Size: 0x100
#pragma pack(pop)
