#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ABP_ShadowSprint_C;
class ACharacter;
class ABiped_Player;
class USceneComponent;
class UCapsuleComponent;
class AActor;
#pragma pack(push, 1)
class UBTT_Biped_ShadowSprint_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool IKRestoreState; // 0x158
    bool MinTimerExpired; // 0x159
    bool ExitMechanic; // 0x15a
    bool OnButtslideSurface; // 0x15b
    bool IsInterruptible; // 0x15c
    char pad_15d[0x3];
    float OldCapsuleRadius; // 0x160
    FVector LastDirection; // 0x164
    ABP_ShadowSprint_C* ShadowSprintActor; // 0x170
    float OldCapsuleHalfHeight; // 0x178
    char pad_17c[0x4];
    static UBTT_Biped_ShadowSprint_C* StaticClass();
    void ShrinkCapsule(ACharacter* Character, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue);
    void SpawnShadowSprintActor(ABiped_Player* BipedPlayer, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UCapsuleComponent* CallFunc_GetCapsuleComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_ShadowSprint_C* CallFunc_FinishSpawningActor_ReturnValue);
    void RecoverCapsule(ACharacter* Character);
    void StopShadowSprint(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
    void SetContexts(bool Flag);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MovementModeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void MinShadowSprintTimerExpired();
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_ShadowSprint(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_2, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle);
}; // Size: 0x180
#pragma pack(pop)
