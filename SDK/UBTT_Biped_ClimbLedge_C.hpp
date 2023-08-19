#pragma once
#include <cstdint>
#include "EClimbingLedgeState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UAnimInstance;
class ABiped_Player;
class ABiped_Character;
class APlayerCameraManager;
#pragma pack(push, 1)
class UBTT_Biped_ClimbLedge_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    float StickX; // 0x158
    float StickY; // 0x15c
    float StickMag; // 0x160
    char pad_164[0x4];
    AActor* Ledge_Actor; // 0x168
    static UBTT_Biped_ClimbLedge_C* StaticClass();
    void ShouldAutoPullUp(bool& Result, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsCurrentLedgeAnOverhang_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    bool ShouldFallOffLedge(ABiped_Character* Player, bool CallFunc_EvaluateFilterOnActor_ReturnValue, EClimbingLedgeState::Type CallFunc_GetClimbingLedgeState_OutType, FTransform CallFunc_GetOriginalLedgeTransform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FTransform CallFunc_GetLedgeTransform_LedgeTransform, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FVector CallFunc_Vector_Up_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_LessLess_VectorRotator_ReturnValue, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Acos_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void RevertMovementMode(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, EJumpingType::Type CallFunc_GetJumpingType_OutType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void GetCameraRelativeDirection(float X, float Y, FVector& Direction, FVector CallFunc_Vector_Up_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Normal_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_2);
    void SetRightArmState(EClimbingLedgeState::Type ClimbLedgeState, ERightArmState::Type RightArmState, AActor* CallFunc_GetActorOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void SetContexts(bool Flag);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ClimbButton_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ClimbAnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ClimbAnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Biped_ClimbLedge(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, AActor* CallFunc_GetActorOwner_ReturnValue, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x170
#pragma pack(pop)
