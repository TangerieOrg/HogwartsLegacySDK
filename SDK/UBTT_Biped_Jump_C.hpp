#pragma once
#include <cstdint>
#include "EJumpingType\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UBiped_MovementComponent;
class UAnimInstance;
class UAmbulatory_AnimInstance;
class AAmbulatory_Character;
class UAmbulatory_MovementComponent;
#pragma pack(push, 1)
class UBTT_Biped_Jump_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool RestoreIKState; // 0x158
    char pad_159[0x3];
    float HeightAtJumpStart; // 0x15c
    bool AllowLand; // 0x160
    bool Landed; // 0x161
    char pad_162[0x6];
    static UBTT_Biped_Jump_C* StaticClass();
    void SetAllowLand(bool AllowLand, AActor* CallFunc_GetActorOwner_ReturnValue, UBiped_MovementComponent* CallFunc_GetComponentByClass_ReturnValue);
    void EndIK(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void StartIK(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void ExecuteJump(AActor* OwnerActor);
    void CalculateJumpingType(AActor* Actor, EJumpingType::Type& JumpingType);
    void CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Landed_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void OnCharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
    void ExecuteUbergraph_BTT_Biped_Jump(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, AActor* CallFunc_GetActorOwner_ReturnValue_2, UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, AActor* CallFunc_GetActorOwner_ReturnValue_3);
}; // Size: 0x168
#pragma pack(pop)
