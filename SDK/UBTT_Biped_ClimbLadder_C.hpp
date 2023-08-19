#pragma once
#include <cstdint>
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ALadder;
class AActor;
class UObject;
class UStaticMeshComponent;
class ACharacter;
class ABiped_Player;
class APlayerController;
class ABiped_PlayerController;
class UAnimInstance;
class UBiped_AnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_ClimbLadder_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    float OriginalCapsuleRadius; // 0x158
    float ClimbingCapsuleRadius; // 0x15c
    ALadder* Ladder; // 0x160
    float DeadZone; // 0x168
    bool StickPressed; // 0x16c
    bool MoveUp; // 0x16d
    char pad_16e[0x2];
    int32_t DismountBottomRungs; // 0x170
    int32_t DismountTopRungs; // 0x174
    bool DismountTopAnimStarted; // 0x178
    char pad_179[0x7];
    FHermesBPDelegateHandle DismountTopAnimStartHandle; // 0x180
    static UBTT_Biped_ClimbLadder_C* StaticClass();
    void RevertMovementMode(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
    void IgnoreLadderWhenMoving(bool Ignore, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    bool CheckForDismountBottom(float CallFunc_GetLadderBottomZ_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, float CallFunc_GetMeshHeight_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    bool CheckForDismountTop(float CallFunc_GetLadderTopZ_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, float CallFunc_GetMeshHeight_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void DismountTopAnimStart(UObject* Caller);
    void ExecuteUbergraph_BTT_Biped_ClimbLadder(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2);
}; // Size: 0x190
#pragma pack(pop)
