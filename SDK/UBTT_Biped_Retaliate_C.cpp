#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AController.hpp"
#include "AEnemy_Character.hpp"
#include "AFinisherSpellTool.hpp"
#include "ASpellTool.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_Retaliate_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UGameLogicVar_Int32.hpp"
#include "UObject.hpp"
void UBTT_Biped_Retaliate_C::StartWandAbility(AActor* InActor, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
UBTT_Biped_Retaliate_C* UBTT_Biped_Retaliate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C");
    return (UBTT_Biped_Retaliate_C*)res;
}
void UBTT_Biped_Retaliate_C::GetInitialRetaliateVictim(ABiped_Player* BipedPlayer, AActor*& AsActor, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, AController* CallFunc_GetController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, AActor* CallFunc_GetLockedOnActor_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.GetInitialRetaliateVictim"));
    struct Params_GetInitialRetaliateVictim {
        ABiped_Player* BipedPlayer; // 0x0
        AActor* AsActor; // 0x8
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x10
        AController* CallFunc_GetController_ReturnValue; // 0x18
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x20
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x7];
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x38
        AActor* CallFunc_GetBestAutoTargetActor_ReturnValue; // 0x40
        AActor* K2Node_DynamicCast_AsActor; // 0x48
        bool K2Node_DynamicCast_bSuccess_1; // 0x50
        char pad_51[0x7];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x58
        bool K2Node_DynamicCast_bSuccess_2; // 0x60
        char pad_61[0x7];
        AActor* CallFunc_GetLockedOnActor_ReturnValue; // 0x68
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1; // 0x70
        bool K2Node_DynamicCast_bSuccess_3; // 0x78
    }; // Size: 0x79
    Params_GetInitialRetaliateVictim params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    params.AsActor = (AActor*)AsActor;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.CallFunc_GetBestAutoTargetActor_ReturnValue = (AActor*)CallFunc_GetBestAutoTargetActor_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_GetLockedOnActor_ReturnValue = (AActor*)CallFunc_GetLockedOnActor_ReturnValue;
    params.K2Node_DynamicCast_AsEnemy_Character_1 = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character_1;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    ProcessEvent(func, &params);
    AsActor = params.AsActor;
}
void UBTT_Biped_Retaliate_C::DisableAimModeInFinisher(bool Flag, int32_t Delta, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AFinisherSpellTool* K2Node_DynamicCast_AsFinisher_Spell_Tool, bool K2Node_DynamicCast_bSuccess, UGameLogicVar_Int32* CallFunc_GetReferenceToInt32Variable_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.DisableAimModeInFinisher"));
    struct Params_DisableAimModeInFinisher {
        bool Flag; // 0x0
        char pad_1[0x3];
        int32_t Delta; // 0x4
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        AFinisherSpellTool* K2Node_DynamicCast_AsFinisher_Spell_Tool; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UGameLogicVar_Int32* CallFunc_GetReferenceToInt32Variable_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_DisableAimModeInFinisher params{};
    params.Flag = (bool)Flag;
    params.Delta = (int32_t)Delta;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.K2Node_DynamicCast_AsFinisher_Spell_Tool = (AFinisherSpellTool*)K2Node_DynamicCast_AsFinisher_Spell_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetReferenceToInt32Variable_ReturnValue = (UGameLogicVar_Int32*)CallFunc_GetReferenceToInt32Variable_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::AllowPickNewTarget(float MaxTimeIntoAttack, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, AController* CallFunc_GetController_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.AllowPickNewTarget"));
    struct Params_AllowPickNewTarget {
        float MaxTimeIntoAttack; // 0x0
        char pad_4[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue; // 0x10
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x18
        char pad_1c[0x4];
        AController* CallFunc_GetController_ReturnValue; // 0x20
        float CallFunc_GetGameTimeInSeconds_ReturnValue; // 0x28
        char pad_2c[0x4];
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x39
        char pad_3a[0x6];
        AActor* CallFunc_GetBestAutoTargetActor_ReturnValue; // 0x40
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x48
        bool K2Node_DynamicCast_bSuccess_1; // 0x50
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x51
        bool CallFunc_IsValid_ReturnValue; // 0x52
    }; // Size: 0x53
    Params_AllowPickNewTarget params{};
    params.MaxTimeIntoAttack = (float)MaxTimeIntoAttack;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue = (AActor*)CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.CallFunc_GetGameTimeInSeconds_ReturnValue = (float)CallFunc_GetGameTimeInSeconds_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_GetBestAutoTargetActor_ReturnValue = (AActor*)CallFunc_GetBestAutoTargetActor_ReturnValue;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::GetFinisherIndex(bool& Found, int32_t& FinisherIndex, AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_GetManagedContext_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.GetFinisherIndex"));
    struct Params_GetFinisherIndex {
        bool Found; // 0x0
        char pad_1[0x3];
        int32_t FinisherIndex; // 0x4
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        bool CallFunc_GetManagedContext_ReturnValue; // 0x10
        char pad_11[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x14
        char pad_1c[0x4];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x20
        int32_t CallFunc_GetValueAsInt_ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_GetFinisherIndex params{};
    params.Found = (bool)Found;
    params.FinisherIndex = (int32_t)FinisherIndex;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetManagedContext_ReturnValue = (bool)CallFunc_GetManagedContext_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsInt_ReturnValue = (int32_t)CallFunc_GetValueAsInt_ReturnValue;
    ProcessEvent(func, &params);
    FinisherIndex = params.FinisherIndex;
    Found = params.Found;
}
void UBTT_Biped_Retaliate_C::CustActionEvt_FireWand_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::StickValid(float StickX, float StickY, bool& IsValid, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.StickValid"));
    struct Params_StickValid {
        float StickX; // 0x0
        float StickY; // 0x4
        bool IsValid; // 0x8
        bool CallFunc_NotEqual_FloatFloat_ReturnValue; // 0x9
        bool CallFunc_NotEqual_FloatFloat_ReturnValue_1; // 0xa
        bool CallFunc_BooleanOR_ReturnValue; // 0xb
    }; // Size: 0xc
    Params_StickValid params{};
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    params.IsValid = (bool)IsValid;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    IsValid = params.IsValid;
}
void UBTT_Biped_Retaliate_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::CustActionEvt_CheckChannelAction_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_CheckChannelAction_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_CheckChannelAction_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_CheckChannelAction_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::CustActionEvt_Protego_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_Protego_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_Protego_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Protego_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::SpellMadeContact(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.SpellMadeContact"));
    struct Params_SpellMadeContact {
        UObject* Caller; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_SpellMadeContact params{};
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void UBTT_Biped_Retaliate_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::ObjectDestroyed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Retaliate.BTT_Biped_Retaliate_C.ObjectDestroyed"));
    struct Params_ObjectDestroyed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ObjectDestroyed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Retaliate_C::ExecuteUbergraph_BTT_Biped_Retaliate(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, bool CallFunc_GetContextOnActor_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetWorldDeltaSeconds_ReturnValue) {}
