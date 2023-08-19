#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UClass;
class AActor;
class ABiped_Player;
class UBlackboardComponent;
class UObject;
#pragma pack(push, 1)
class UBTT_Biped_Reaction_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    FName BoneName; // 0x158
    FVector ImpactPoint; // 0x160
    bool isAnimComplete; // 0x16c
    char pad_16d[0x3];
    FVector TraceDirection; // 0x170
    char pad_17c[0x4];
    UClass* ReactionAbility; // 0x180
    AActor* ImpactInstigator; // 0x188
    bool LeftBreakoutEnabled; // 0x190
    bool RightBreakoutEnabled; // 0x191
    bool TopBreakoutEnabled; // 0x192
    bool BottomBreakoutEnabled; // 0x193
    float ReactionStartTime; // 0x194
    float MaxTimeReactingInWater; // 0x198
    FVector World_Direction; // 0x19c
    bool StickMoved; // 0x1a8
    bool InCCMiniGame; // 0x1a9
    bool AllowLeftStick; // 0x1aa
    bool BreakoutSet; // 0x1ab
    float ReactionStartHeight; // 0x1ac
    bool OnButtslideSurface; // 0x1b0
    char pad_1b1[0x7];
    static UBTT_Biped_Reaction_C* StaticClass();
    void SetAutoTargetDirection(ABiped_Player* BipedPlayer);
    void SetContexts(bool Flag);
    void RetrieveValuesFromBlackboard(AActor* Owner, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_4, FVector CallFunc_Vector_Normal2D_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UClass* CallFunc_GetValueAsClass_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, UClass* K2Node_ClassDynamicCast_AsAbl_Ability, bool K2Node_ClassDynamicCast_bSuccess, FVector CallFunc_GetValueAsVector_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue_1, FName CallFunc_GetValueAsName_ReturnValue);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Landed_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AllowBreakout_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Bottom_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Left_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Right_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Breakout_Top_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_TurnOffBreakout_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_KnockedDown_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_RagdollExit_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Biped_Reaction(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, FName Temp_name_Variable, FVariantMapHandle Temp_struct_Variable, AActor* K2Node_Event_OwnerActor_2, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x1b8
#pragma pack(pop)
