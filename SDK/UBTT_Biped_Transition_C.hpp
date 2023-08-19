#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UClass;
class UObject;
class UBlackboardComponent;
class ABiped_Player;
class UCharacterMovementComponent;
class UPawnMovementComponent;
class AActor;
class UUIManager;
class APawn;
class AController;
class ABiped_PlayerController;
#pragma pack(push, 1)
class UBTT_Biped_Transition_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    UClass* TransitionAbilityClass; // 0x158
    bool IKRestoreState; // 0x160
    char pad_161[0x7];
    static UBTT_Biped_Transition_C* StaticClass();
    void MakeSurePlayerIsOnGround(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_PlaceOnGround_ReturnValue, UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void IgnoreInteractActor(bool Flag, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
    void EnableHUD(bool Flag, UUIManager* CallFunc_Get_ReturnValue);
    void SetContexts(bool Flag);
    void ToggleLockOnCamera(UObject* Object, bool Allowed, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_DisableIK_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Landed_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_Transition(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue);
}; // Size: 0x168
#pragma pack(pop)
