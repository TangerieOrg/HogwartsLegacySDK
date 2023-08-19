#pragma once
#include <cstdint>
#include "FCompanionFollowParams.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class APawn;
class UEnemyAIComponent;
class AAIController;
class UCharacterMovementComponent;
class UNPC_PathFollowingComponent;
class AActor;
#pragma pack(push, 1)
class UBTT_Companion_FollowPlayer_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    APawn* PlayerPawn; // 0xb0
    UEnemyAIComponent* EnemyAIComp; // 0xb8
    AAIController* AIController; // 0xc0
    FVector Destination; // 0xc8
    char pad_d4[0x4];
    UCharacterMovementComponent* CharMoveComp; // 0xd8
    UNPC_PathFollowingComponent* NPCPathFollowComp; // 0xe0
    APawn* MyPawn; // 0xe8
    float CrouchSwimSpeed; // 0xf0
    float SlowSpeed; // 0xf4
    float SprintSpeed; // 0xf8
    float CloseDistanceSquared; // 0xfc
    float MinDistanceToMoveSquared; // 0x100
    bool bShouldMove; // 0x104
    char pad_105[0x3];
    float DestinationAcceptanceRadius; // 0x108
    char pad_10c[0x4];
    static UBTT_Companion_FollowPlayer_C* StaticClass();
    bool ShouldRepath(FVector CallFunc_K2_GetActorLocation_ReturnValue, FCompanionFollowParams CallFunc_GetCompanionFollowParamsBP_Params, bool CallFunc_GetCompanionFollowParamsBP_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void ChoseSpeed(bool CallFunc_IsValid_ReturnValue, FVector CallFunc_FindLinkOnCurrentPath_OutPos, bool CallFunc_FindLinkOnCurrentPath_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void ReceiveExecute0(AActor* OwnerActor);
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void TimeOutEvent();
    void Repath();
    void ExecuteUbergraph_BTT_Companion_FollowPlayer(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, bool CallFunc_GetMoveToDone_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue);
}; // Size: 0x110
#pragma pack(pop)
