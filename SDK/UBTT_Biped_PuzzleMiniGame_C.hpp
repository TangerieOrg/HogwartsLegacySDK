#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class ABP_AlohomoraLock_C;
class ABiped_Player;
class ADoor;
class APhoenixHUD;
class APlayerController;
class AHUD;
class ULockableComponent;
class UMeshComponent;
class UObject;
struct FHitBySpellData;
struct FMunitionImpactData;
#pragma pack(push, 1)
class UBTT_Biped_PuzzleMiniGame_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* PuzzleActor; // 0x158
    float RotationSpeed; // 0x160
    float InterpPosSpeed; // 0x164
    float DistFromSite; // 0x168
    bool ExitingStation; // 0x16c
    char pad_16d[0x3];
    float StandFar; // 0x170
    float StandNear; // 0x174
    FVector DesiredPosition; // 0x178
    bool IsAlohomoraObject; // 0x184
    char pad_185[0x3];
    ABP_AlohomoraLock_C* AlohomoraLockPuzzle; // 0x188
    float DistanceFromPuzzle; // 0x190
    float HeightOffsetFromPlayer; // 0x194
    bool AllowCancel; // 0x198
    bool Cancelled; // 0x199
    char pad_19a[0x6];
    static UBTT_Biped_PuzzleMiniGame_C* StaticClass();
    ABP_AlohomoraLock_C* SpawnLock(FVector LockScale, FVector PuzzleToPlayer, ABP_AlohomoraLock_C* LockPuzzle, FVector CallFunc_Conv_FloatToVector_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetActorBounds_Origin, FVector CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FName Temp_name_Variable, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_GetActorBounds_Origin_1, FVector CallFunc_GetActorBounds_BoxExtent_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, ABP_AlohomoraLock_C* CallFunc_FinishSpawningActor_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_GetActorRightVector_ReturnValue, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, ABP_AlohomoraLock_C* CallFunc_FinishSpawningActor_ReturnValue_1);
    void HideHudElements(bool Hide, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, AHUD* CallFunc_GetHUD_ReturnValue_1);
    void GetTargetDirection(FVector& Direction, FVector StationRight, FVector PlayerForward, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ULockableComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UMeshComponent* CallFunc_GetLockMeshComponent_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, ULockableComponent* CallFunc_GetComponentByClass_ReturnValue_1, UMeshComponent* CallFunc_GetLockMeshComponent_ReturnValue_1, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_GetActorBounds_Origin, FVector CallFunc_GetActorBounds_BoxExtent, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Normal_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_2, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void CustActionEvt_Success_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ParselTongue_Top_Left_K2Node_CustomInputActionEvent_17(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ParselTongue_Top_Right_K2Node_CustomInputActionEvent_16(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ParselTongue_Bottom_Left_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ParselTongue_Bottom_Right_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void SetAlohomoraOrCancel();
    void ActorHitBySpell(UObject* Caller, FHitBySpellData& HitBySpell);
    void MunitionImpactDamage(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void ExecuteUbergraph_BTT_Biped_PuzzleMiniGame(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_4, FVariantMapHandle Temp_struct_Variable, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_3, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_2, FVariantMapHandle Temp_struct_Variable_1);
}; // Size: 0x1a0
#pragma pack(pop)
