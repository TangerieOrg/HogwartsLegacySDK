#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "APawn.hpp"
#include "ASimpleInteractObject.hpp"
#include "AWandTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UBTS_Biped_MoveAndIdle_C.hpp"
#include "UBTService_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UKnowledgeManager.hpp"
#include "UObject.hpp"
#include "USceneRig.hpp"
#include "UStationComponent.hpp"
#include "UUserWidget.hpp"
void UBTS_Biped_MoveAndIdle_C::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTS_Biped_MoveAndIdle_C* UBTS_Biped_MoveAndIdle_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C");
    return (UBTS_Biped_MoveAndIdle_C*)res;
}
void UBTS_Biped_MoveAndIdle_C::InteractCanceled_Station(AActor* CallFunc_GetActorOwner_ReturnValue) {}
void UBTS_Biped_MoveAndIdle_C::StationStoryEnded(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.StationStoryEnded"));
    struct Params_StationStoryEnded {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StationStoryEnded params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::PlayPartialBodyReaction(UObject* Object, FName Selection, AActor* Instigator, bool K2Node_SwitchName_CmpSuccess, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, ASimpleInteractObject* K2Node_DynamicCast_AsSimple_Interact_Object, bool K2Node_DynamicCast_bSuccess_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
void UBTS_Biped_MoveAndIdle_C::AbortTask() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.AbortTask"));
    struct Params_AbortTask {
    }; // Size: 0x0
    Params_AbortTask params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::InteractInitiated_Station(UBlackboardComponent* BlackboardComponent, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue) {}
void UBTS_Biped_MoveAndIdle_C::CleanupStation(FName CallFunc_MakeLiteralName_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UnlockStationBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CleanupStation"));
    struct Params_CleanupStation {
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x0
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue; // 0x10
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x18
        UStationComponent* K2Node_DynamicCast_AsStation_Component; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        bool CallFunc_UnlockStationBP_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_CleanupStation params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetBlackboard_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsStation_Component = (UStationComponent*)K2Node_DynamicCast_AsStation_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_UnlockStationBP_ReturnValue = (bool)CallFunc_UnlockStationBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::AddWidgetToScreen(UUserWidget* ScreenToAdd) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.AddWidgetToScreen"));
    struct Params_AddWidgetToScreen {
        UUserWidget* ScreenToAdd; // 0x0
    }; // Size: 0x8
    Params_AddWidgetToScreen params{};
    params.ScreenToAdd = (UUserWidget*)ScreenToAdd;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::Interact_Station(APawn* CallFunc_GetPlayerPawn_ReturnValue) {}
void UBTS_Biped_MoveAndIdle_C::GainKnowledge(UKnowledgeManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.GainKnowledge"));
    struct Params_GainKnowledge {
        UKnowledgeManager* CallFunc_Get_ReturnValue; // 0x0
        FName CallFunc_GetDbId_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GainKnowledge params{};
    params.CallFunc_Get_ReturnValue = (UKnowledgeManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::PartialBodyReaction(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.PartialBodyReaction"));
    struct Params_PartialBodyReaction {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_PartialBodyReaction params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void UBTS_Biped_MoveAndIdle_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::CustActionEvt_PartialBodyReaction_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_PartialBodyReaction_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_PartialBodyReaction_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_PartialBodyReaction_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::IsStrafing(bool& Redirected, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.IsStrafing"));
    struct Params_IsStrafing {
        bool Redirected; // 0x0
        char pad_1[0x7];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x8
        UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_IsStrafing params{};
    params.Redirected = (bool)Redirected;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Anim_Instance = (UAmbulatory_AnimInstance*)K2Node_DynamicCast_AsAmbulatory_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    Redirected = params.Redirected;
}
void UBTS_Biped_MoveAndIdle_C::CustActionEvt_AncientMagicDetect_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_AncientMagicDetect_K2Node_BTCustomActionEvent_6"));
    struct Params_CustActionEvt_AncientMagicDetect_K2Node_BTCustomActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AncientMagicDetect_K2Node_BTCustomActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::CustActionEvt_SpellMadeContact_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_SpellMadeContact_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_SpellMadeContact_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellMadeContact_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::CustActionEvt_OpenDoorLeft_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_OpenDoorLeft_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_OpenDoorLeft_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_OpenDoorLeft_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::CustActionEvt_OpenDoorRight_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_OpenDoorRight_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_OpenDoorRight_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_OpenDoorRight_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::MountCreature_DismountEnd(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_MoveAndIdle.BTS_Biped_MoveAndIdle_C.MountCreature_DismountEnd"));
    struct Params_MountCreature_DismountEnd {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MountCreature_DismountEnd params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_MoveAndIdle_C::ExecuteUbergraph_BTS_Biped_MoveAndIdle(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AWandTool* CallFunc_GetWand_ReturnValue) {}
