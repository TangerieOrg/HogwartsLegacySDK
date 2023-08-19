#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AController.hpp"
#include "AReparoSpellTool.hpp"
#include "ASpellTool.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTT_Biped_WandCast_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UTargetTypeBase.hpp"
void UBTT_Biped_WandCast_C::FlushQueuedActions(AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.FlushQueuedActions"));
    struct Params_FlushQueuedActions {
        AActor* Owner; // 0x0
    }; // Size: 0x8
    Params_FlushQueuedActions params{};
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
}
UBTT_Biped_WandCast_C* UBTT_Biped_WandCast_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C");
    return (UBTT_Biped_WandCast_C*)res;
}
void UBTT_Biped_WandCast_C::ProtectCharacterFromDamage(AActor* InActor, bool Flag, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.ProtectCharacterFromDamage"));
    struct Params_ProtectCharacterFromDamage {
        AActor* InActor; // 0x0
        bool Flag; // 0x8
        char pad_9[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ProtectCharacterFromDamage params{};
    params.InActor = (AActor*)InActor;
    params.Flag = (bool)Flag;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::AcquireNewTarget(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_1, AController* CallFunc_GetController_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_2, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, FVector CallFunc_GetBestAutoTargetActor_WorldLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.AcquireNewTarget"));
    struct Params_AcquireNewTarget {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue; // 0x8
        UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_1; // 0x10
        AController* CallFunc_GetController_ReturnValue; // 0x18
        UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_2; // 0x20
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x7];
        AActor* CallFunc_GetBestAutoTargetActor_ReturnValue; // 0x38
        FVector CallFunc_GetBestAutoTargetActor_WorldLocation_ReturnValue; // 0x40
        bool CallFunc_IsValid_ReturnValue; // 0x4c
        char pad_4d[0x3];
        AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue; // 0x50
    }; // Size: 0x58
    Params_AcquireNewTarget params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_AddTarget_DesiredDirection_ReturnValue = (UTargetTypeBase*)CallFunc_AddTarget_DesiredDirection_ReturnValue;
    params.CallFunc_AddTarget_DesiredDirection_ReturnValue_1 = (UTargetTypeBase*)CallFunc_AddTarget_DesiredDirection_ReturnValue_1;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.CallFunc_AddTarget_DesiredDirection_ReturnValue_2 = (UTargetTypeBase*)CallFunc_AddTarget_DesiredDirection_ReturnValue_2;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBestAutoTargetActor_ReturnValue = (AActor*)CallFunc_GetBestAutoTargetActor_ReturnValue;
    params.CallFunc_GetBestAutoTargetActor_WorldLocation_ReturnValue = (FVector)CallFunc_GetBestAutoTargetActor_WorldLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue = (AActor*)CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::ConditionalCancelSpell(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AReparoSpellTool* K2Node_DynamicCast_AsReparo_Spell_Tool, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.ConditionalCancelSpell"));
    struct Params_ConditionalCancelSpell {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        AReparoSpellTool* K2Node_DynamicCast_AsReparo_Spell_Tool; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_ConditionalCancelSpell params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.K2Node_DynamicCast_AsReparo_Spell_Tool = (AReparoSpellTool*)K2Node_DynamicCast_AsReparo_Spell_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_Protego_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_Protego_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_Protego_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Protego_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::SetTargetTrackers(AActor* InputPin, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_1, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.SetTargetTrackers"));
    struct Params_SetTargetTrackers {
        AActor* InputPin; // 0x0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue; // 0x18
        AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue; // 0x20
        UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_1; // 0x28
        UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_2; // 0x30
    }; // Size: 0x38
    Params_SetTargetTrackers params{};
    params.InputPin = (AActor*)InputPin;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_AddTarget_DesiredDirection_ReturnValue = (UTargetTypeBase*)CallFunc_AddTarget_DesiredDirection_ReturnValue;
    params.CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue = (AActor*)CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue;
    params.CallFunc_AddTarget_DesiredDirection_ReturnValue_1 = (UTargetTypeBase*)CallFunc_AddTarget_DesiredDirection_ReturnValue_1;
    params.CallFunc_AddTarget_DesiredDirection_ReturnValue_2 = (UTargetTypeBase*)CallFunc_AddTarget_DesiredDirection_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::StickValid(float StickX, float StickY, bool& IsValid, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.StickValid"));
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
void UBTT_Biped_WandCast_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::StartWandAbility(AActor* InActor, UClass* DefaultAbility, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {}
void UBTT_Biped_WandCast_C::SpellMadeContact(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.SpellMadeContact"));
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
void UBTT_Biped_WandCast_C::GetWandAbility(FName WandCastName, bool IsInStealth, UClass*& WandCastAbility, UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue, UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue_1, UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue_2, FString CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsValidClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.GetWandAbility"));
    struct Params_GetWandAbility {
        FName WandCastName; // 0x0
        bool IsInStealth; // 0x8
        char pad_9[0x7];
        UClass* WandCastAbility; // 0x10
        UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue; // 0x18
        UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue_1; // 0x20
        UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue_2; // 0x28
        FString CallFunc_GetClassDisplayName_ReturnValue; // 0x30
        bool CallFunc_Contains_ReturnValue; // 0x40
        bool CallFunc_IsValidClass_ReturnValue; // 0x41
    }; // Size: 0x42
    Params_GetWandAbility params{};
    params.WandCastName = (FName)WandCastName;
    params.IsInStealth = (bool)IsInStealth;
    params.WandCastAbility = (UClass*)WandCastAbility;
    params.CallFunc_GetExecutionClassFromKeyWord_ReturnValue = (UClass*)CallFunc_GetExecutionClassFromKeyWord_ReturnValue;
    params.CallFunc_GetExecutionClassFromKeyWord_ReturnValue_1 = (UClass*)CallFunc_GetExecutionClassFromKeyWord_ReturnValue_1;
    params.CallFunc_GetExecutionClassFromKeyWord_ReturnValue_2 = (UClass*)CallFunc_GetExecutionClassFromKeyWord_ReturnValue_2;
    params.CallFunc_GetClassDisplayName_ReturnValue = (FString)CallFunc_GetClassDisplayName_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_IsValidClass_ReturnValue = (bool)CallFunc_IsValidClass_ReturnValue;
    ProcessEvent(func, &params);
    WandCastAbility = params.WandCastAbility;
}
void UBTT_Biped_WandCast_C::ExecuteUbergraph_BTT_Biped_WandCast(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1) {}
void UBTT_Biped_WandCast_C::CustActionEvt_FireWand_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_9"));
    struct Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_FireWand_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_8"));
    struct Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_7"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_6"));
    struct Params_CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_WandCast_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_WandCast.BTT_Biped_WandCast_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
