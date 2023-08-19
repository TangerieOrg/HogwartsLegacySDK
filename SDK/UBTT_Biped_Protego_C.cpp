#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AController.hpp"
#include "AEnemy_Character.hpp"
#include "ASpellTool.hpp"
#include "AWandTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_Protego_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UBlackboardComponent.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UGameLogicObject.hpp"
void UBTT_Biped_Protego_C::SustainedProtegoTimeout(AActor* CallFunc_GetActorOwner_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.SustainedProtegoTimeout"));
    struct Params_SustainedProtegoTimeout {
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_SustainedProtegoTimeout params{};
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Biped_Protego_C* UBTT_Biped_Protego_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C");
    return (UBTT_Biped_Protego_C*)res;
}
void UBTT_Biped_Protego_C::Retaliate(UGameLogicObject* CallFunc_GetHintManagerGameLogicObject_ReturnValue, UGameLogicObject* CallFunc_GetHintManagerGameLogicObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_ActivateSpellTool_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.Retaliate"));
    struct Params_Retaliate {
        UGameLogicObject* CallFunc_GetHintManagerGameLogicObject_ReturnValue; // 0x0
        UGameLogicObject* CallFunc_GetHintManagerGameLogicObject_ReturnValue_1; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        char pad_11[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x18
        AWandTool* CallFunc_GetWand_ReturnValue; // 0x20
        ASpellTool* CallFunc_ActivateSpellTool_ReturnValue; // 0x28
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x30
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x38
    }; // Size: 0x40
    Params_Retaliate params{};
    params.CallFunc_GetHintManagerGameLogicObject_ReturnValue = (UGameLogicObject*)CallFunc_GetHintManagerGameLogicObject_ReturnValue;
    params.CallFunc_GetHintManagerGameLogicObject_ReturnValue_1 = (UGameLogicObject*)CallFunc_GetHintManagerGameLogicObject_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetWand_ReturnValue = (AWandTool*)CallFunc_GetWand_ReturnValue;
    params.CallFunc_ActivateSpellTool_ReturnValue = (ASpellTool*)CallFunc_ActivateSpellTool_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::ResetParryState(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.ResetParryState"));
    struct Params_ResetParryState {
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x0
        UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_ResetParryState params{};
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Anim_Instance = (UBiped_AnimInstance*)K2Node_DynamicCast_AsBiped_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::StartParryTimeDilation(bool Temp_bool_Variable, UCurveFloat* Temp_object_Variable, UCurveFloat* Temp_object_Variable_1, UCurveFloat* K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.StartParryTimeDilation"));
    struct Params_StartParryTimeDilation {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x7];
        UCurveFloat* Temp_object_Variable; // 0x8
        UCurveFloat* Temp_object_Variable_1; // 0x10
        UCurveFloat* K2Node_Select_Default; // 0x18
    }; // Size: 0x20
    Params_StartParryTimeDilation params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_object_Variable = (UCurveFloat*)Temp_object_Variable;
    params.Temp_object_Variable_1 = (UCurveFloat*)Temp_object_Variable_1;
    params.K2Node_Select_Default = (UCurveFloat*)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::CustActionEvt_MakeInterruptible_Protego_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_MakeInterruptible_Protego_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_MakeInterruptible_Protego_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MakeInterruptible_Protego_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::CameraTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.CameraTimeout"));
    struct Params_CameraTimeout {
    }; // Size: 0x0
    Params_CameraTimeout params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::AllowPickNewTarget(float MinTimeInto, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameTimeInSeconds_ReturnValue, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.AllowPickNewTarget"));
    struct Params_AllowPickNewTarget {
        float MinTimeInto; // 0x0
        char pad_4[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        AController* CallFunc_GetController_ReturnValue; // 0x10
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x18
        char pad_1c[0x4];
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x3];
        float CallFunc_GetGameTimeInSeconds_ReturnValue; // 0x2c
        AActor* CallFunc_GetBestAutoTargetActor_ReturnValue; // 0x30
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x38
        char pad_39[0x7];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x40
        bool K2Node_DynamicCast_bSuccess_1; // 0x48
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x49
        bool CallFunc_IsValid_ReturnValue; // 0x4a
    }; // Size: 0x4b
    Params_AllowPickNewTarget params{};
    params.MinTimeInto = (float)MinTimeInto;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetGameTimeInSeconds_ReturnValue = (float)CallFunc_GetGameTimeInSeconds_ReturnValue;
    params.CallFunc_GetBestAutoTargetActor_ReturnValue = (AActor*)CallFunc_GetBestAutoTargetActor_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::ProtegoAbilityAndState(AActor* Actor, FVariantMapHandle VariantMapHandle, bool DestroyVarMap, FVector TargetLocation, bool FromAOE) {}
void UBTT_Biped_Protego_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::ExecuteUbergraph_BTT_Biped_Protego(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* CallFunc_GetActorOwner_ReturnValue) {}
void UBTT_Biped_Protego_C::AlreadyDeflectedTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.AlreadyDeflectedTimerExpired"));
    struct Params_AlreadyDeflectedTimerExpired {
    }; // Size: 0x0
    Params_AlreadyDeflectedTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::CustActionEvt_Retaliate_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_Retaliate_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_Retaliate_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Retaliate_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::CustActionEvt_ProtegoDeflected_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_ProtegoDeflected_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_ProtegoDeflected_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ProtegoDeflected_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::GameLogicElementEvt_TUT_display_StunningSpell_desc2_K2Node_GameLogicBoolResultEvent_0(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.GameLogicElementEvt_TUT_display_StunningSpell_desc2_K2Node_GameLogicBoolResultEvent_0"));
    struct Params_GameLogicElementEvt_TUT_display_StunningSpell_desc2_K2Node_GameLogicBoolResultEvent_0 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_TUT_display_StunningSpell_desc2_K2Node_GameLogicBoolResultEvent_0 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::CustActionEvt_ProtegoImpact_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.CustActionEvt_ProtegoImpact_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_ProtegoImpact_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ProtegoImpact_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Protego_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Protego.BTT_Biped_Protego_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
