#include "AActor.hpp"
#include "ABiped_PlayerController.hpp"
#include "ACameraStackActor.hpp"
#include "ACharacter.hpp"
#include "APlayerController.hpp"
#include "EAvaAudioDialogueMenuItemType.hpp"
#include "FConversationOption.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_Talk_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFunction.hpp"
#include "UI_BP_InteractTypeEnum\Type.hpp"
#include "UObject.hpp"
#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
#include "USocialReactor.hpp"
#include "UStationComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_InteractButton_C.hpp"
#include "UUI_BP_OptionPanel_C.hpp"
#include "UUI_BP_Vendor_C.hpp"
#include "UUserWidget.hpp"
void UBTT_Biped_Talk_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_Biped_Talk_C* UBTT_Biped_Talk_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C");
    return (UBTT_Biped_Talk_C*)res;
}
FString UBTT_Biped_Talk_C::Player_Gender_Fixup(FString OptionText, FString PlayerString, int32_t CallFunc_FindSubstring_ReturnValue, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, FString CallFunc_Left_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_Right_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.Player Gender Fixup"));
    struct Params_Player_Gender_Fixup {
        FString OptionText; // 0x0
        FString ReturnValue; // 0x10
        FString PlayerString; // 0x20
        int32_t CallFunc_FindSubstring_ReturnValue; // 0x30
        char pad_34[0x4];
        UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x38
        FString CallFunc_Left_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x50
        bool K2Node_SwitchEnum_CmpSuccess; // 0x51
        char pad_52[0x6];
        FString CallFunc_Right_ReturnValue; // 0x58
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x68
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x78
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x88
    }; // Size: 0x98
    Params_Player_Gender_Fixup params{};
    params.OptionText = (FString)OptionText;
    params.PlayerString = (FString)PlayerString;
    params.CallFunc_FindSubstring_ReturnValue = (int32_t)CallFunc_FindSubstring_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCustomizableCharacterComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_Left_ReturnValue = (FString)CallFunc_Left_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_Right_ReturnValue = (FString)CallFunc_Right_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UBTT_Biped_Talk_C::AreConversationOptionsNeeded(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FConversationOption CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_ToLower_ReturnValue, FString CallFunc_Replace_ReturnValue, FString CallFunc_Replace_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.AreConversationOptionsNeeded"));
    struct Params_AreConversationOptionsNeeded {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        FConversationOption CallFunc_Array_Get_Item; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x58
        bool CallFunc_Less_IntInt_ReturnValue; // 0x5c
        char pad_5d[0x3];
        FString CallFunc_ToLower_ReturnValue; // 0x60
        FString CallFunc_Replace_ReturnValue; // 0x70
        FString CallFunc_Replace_ReturnValue_1; // 0x80
        bool CallFunc_Array_Contains_ReturnValue; // 0x90
    }; // Size: 0x91
    Params_AreConversationOptionsNeeded params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FConversationOption)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_ToLower_ReturnValue = (FString)CallFunc_ToLower_ReturnValue;
    params.CallFunc_Replace_ReturnValue = (FString)CallFunc_Replace_ReturnValue;
    params.CallFunc_Replace_ReturnValue_1 = (FString)CallFunc_Replace_ReturnValue_1;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::OnStationInteractionExitComplete_Event_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.OnStationInteractionExitComplete_Event_0"));
    struct Params_OnStationInteractionExitComplete_Event_0 {
    }; // Size: 0x0
    Params_OnStationInteractionExitComplete_Event_0 params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::TurnOnAbilities(AActor* CallFunc_GetActorOwner_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTT_Biped_Talk_C::TurnOffAbilties(UAnimInstance* NewLocalVar_0, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue) {}
void UBTT_Biped_Talk_C::ActivatePlayerPerception(bool PlayerPerception, UUIManager* CallFunc_Get_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.ActivatePlayerPerception"));
    struct Params_ActivatePlayerPerception {
        bool PlayerPerception; // 0x0
        char pad_1[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_ActivatePlayerPerception params{};
    params.PlayerPerception = (bool)PlayerPerception;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::ShowWand(UObject* Player, bool ShowWand, UAnimInstance* AnimInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.ShowWand"));
    struct Params_ShowWand {
        UObject* Player; // 0x0
        bool ShowWand; // 0x8
        char pad_9[0x7];
        UAnimInstance* AnimInstance; // 0x10
    }; // Size: 0x18
    Params_ShowWand params{};
    params.Player = (UObject*)Player;
    params.ShowWand = (bool)ShowWand;
    params.AnimInstance = (UAnimInstance*)AnimInstance;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::HandleSceneRigStart(UObject* SRPlayerObjectRef) {}
void UBTT_Biped_Talk_C::StopSceneRigIfPlaying(USceneRigPlayer* SceneRigPlayer, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EventOccursNow_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.StopSceneRigIfPlaying"));
    struct Params_StopSceneRigIfPlaying {
        USceneRigPlayer* SceneRigPlayer; // 0x0
        bool CallFunc_IsPlaying_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x9
        bool CallFunc_EventOccursNow_ReturnValue; // 0xa
    }; // Size: 0xb
    Params_StopSceneRigIfPlaying params{};
    params.SceneRigPlayer = (USceneRigPlayer*)SceneRigPlayer;
    params.CallFunc_IsPlaying_ReturnValue = (bool)CallFunc_IsPlaying_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_EventOccursNow_ReturnValue = (bool)CallFunc_EventOccursNow_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::HandleRadiantMissionInfo(UObject* Caller, FString Message, FString CurrentMission) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.HandleRadiantMissionInfo"));
    struct Params_HandleRadiantMissionInfo {
        UObject* Caller; // 0x0
        FString Message; // 0x8
        FString CurrentMission; // 0x18
    }; // Size: 0x28
    Params_HandleRadiantMissionInfo params{};
    params.Caller = (UObject*)Caller;
    params.Message = (FString)Message;
    params.CurrentMission = (FString)CurrentMission;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::GetAudioConversationOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.GetAudioConversationOptions"));
    struct Params_GetAudioConversationOptions {
    }; // Size: 0x0
    Params_GetAudioConversationOptions params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::ShowVendorUI() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.ShowVendorUI"));
    struct Params_ShowVendorUI {
    }; // Size: 0x0
    Params_ShowVendorUI params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::CleanupBlackboard(UBlackboardComponent* BlackboardComp, FName CallFunc_MakeLiteralName_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_4, FName CallFunc_MakeLiteralName_ReturnValue_5, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue_6, int32_t CallFunc_InitializeStationInteraction_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.CleanupBlackboard"));
    struct Params_CleanupBlackboard {
        UBlackboardComponent* BlackboardComp; // 0x0
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x8
        FStationQueryData K2Node_MakeStruct_StationQueryData; // 0x10
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x30
        FName CallFunc_MakeLiteralName_ReturnValue_2; // 0x38
        FName CallFunc_MakeLiteralName_ReturnValue_3; // 0x40
        FName CallFunc_MakeLiteralName_ReturnValue_4; // 0x48
        FName CallFunc_MakeLiteralName_ReturnValue_5; // 0x50
        UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x58
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x60
        UStationComponent* K2Node_DynamicCast_AsStation_Component; // 0x68
        bool K2Node_DynamicCast_bSuccess; // 0x70
        char pad_71[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue_6; // 0x74
        int32_t CallFunc_InitializeStationInteraction_ReturnValue; // 0x7c
    }; // Size: 0x80
    Params_CleanupBlackboard params{};
    params.BlackboardComp = (UBlackboardComponent*)BlackboardComp;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.K2Node_MakeStruct_StationQueryData = (FStationQueryData)K2Node_MakeStruct_StationQueryData;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue_2 = (FName)CallFunc_MakeLiteralName_ReturnValue_2;
    params.CallFunc_MakeLiteralName_ReturnValue_3 = (FName)CallFunc_MakeLiteralName_ReturnValue_3;
    params.CallFunc_MakeLiteralName_ReturnValue_4 = (FName)CallFunc_MakeLiteralName_ReturnValue_4;
    params.CallFunc_MakeLiteralName_ReturnValue_5 = (FName)CallFunc_MakeLiteralName_ReturnValue_5;
    params.CallFunc_GetComponentByClass_ReturnValue = (UBlackboardComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsStation_Component = (UStationComponent*)K2Node_DynamicCast_AsStation_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_MakeLiteralName_ReturnValue_6 = (FName)CallFunc_MakeLiteralName_ReturnValue_6;
    params.CallFunc_InitializeStationInteraction_ReturnValue = (int32_t)CallFunc_InitializeStationInteraction_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::PrepareandStartConversation(USceneRig* L_SceneRigToUse, FName CallFunc_MakeLiteralName_ReturnValue, USceneRig* CallFunc_GetBTTBipedTalkSceneRig_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, USceneRig* K2Node_DynamicCast_AsScene_Rig, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.PrepareandStartConversation"));
    struct Params_PrepareandStartConversation {
        USceneRig* L_SceneRigToUse; // 0x0
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x8
        USceneRig* CallFunc_GetBTTBipedTalkSceneRig_ReturnValue; // 0x10
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x18
        USceneRig* K2Node_DynamicCast_AsScene_Rig; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
    }; // Size: 0x29
    Params_PrepareandStartConversation params{};
    params.L_SceneRigToUse = (USceneRig*)L_SceneRigToUse;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBTTBipedTalkSceneRig_ReturnValue = (USceneRig*)CallFunc_GetBTTBipedTalkSceneRig_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsScene_Rig = (USceneRig*)K2Node_DynamicCast_AsScene_Rig;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::AddWidgetToScreen(UUserWidget* ScreenToAdd, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.AddWidgetToScreen"));
    struct Params_AddWidgetToScreen {
        UUserWidget* ScreenToAdd; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AddWidgetToScreen params{};
    params.ScreenToAdd = (UUserWidget*)ScreenToAdd;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::Conversation_Dialogue_Line_Complete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.Conversation Dialogue Line Complete"));
    struct Params_Conversation_Dialogue_Line_Complete {
    }; // Size: 0x0
    Params_Conversation_Dialogue_Line_Complete params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::IconLookup(EAvaAudioDialogueMenuItemType ConversationIcon, UI_BP_InteractTypeEnum::Type ChatPanelIcon, bool ChatIcon, FString& Icon) {}
void UBTT_Biped_Talk_C::Y_CancelConversation_Setup(UObject* Conversation_SceneRig, USceneRigPlayer* K2Node_DynamicCast_AsScene_Rig_Player, bool K2Node_DynamicCast_bSuccess, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.Y_CancelConversation_Setup"));
    struct Params_Y_CancelConversation_Setup {
        UObject* Conversation_SceneRig; // 0x0
        USceneRigPlayer* K2Node_DynamicCast_AsScene_Rig_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Y_CancelConversation_Setup params{};
    params.Conversation_SceneRig = (UObject*)Conversation_SceneRig;
    params.K2Node_DynamicCast_AsScene_Rig_Player = (USceneRigPlayer*)K2Node_DynamicCast_AsScene_Rig_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::ButtonClicked__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.ButtonClicked__DelegateSignature"));
    struct Params_ButtonClicked__DelegateSignature {
    }; // Size: 0x0
    Params_ButtonClicked__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::HasMission(FString OptionText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.HasMission"));
    struct Params_HasMission {
        FString OptionText; // 0x0
    }; // Size: 0x10
    Params_HasMission params{};
    params.OptionText = (FString)OptionText;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::CleanupUIState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.CleanupUIState"));
    struct Params_CleanupUIState {
    }; // Size: 0x0
    Params_CleanupUIState params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::CompanionSelection(UUI_BP_InteractButton_C* Selection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.CompanionSelection"));
    struct Params_CompanionSelection {
        UUI_BP_InteractButton_C* Selection; // 0x0
    }; // Size: 0x8
    Params_CompanionSelection params{};
    params.Selection = (UUI_BP_InteractButton_C*)Selection;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::StartGearPreview(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.StartGearPreview"));
    struct Params_StartGearPreview {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_StartGearPreview params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::EndGearPreview(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.EndGearPreview"));
    struct Params_EndGearPreview {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_EndGearPreview params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::AbortTask() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.AbortTask"));
    struct Params_AbortTask {
    }; // Size: 0x0
    Params_AbortTask params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::VendorUIClosed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.VendorUIClosed"));
    struct Params_VendorUIClosed {
    }; // Size: 0x0
    Params_VendorUIClosed params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::SelectionMade(int32_t SelectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.SelectionMade"));
    struct Params_SelectionMade {
        int32_t SelectionIndex; // 0x0
    }; // Size: 0x4
    Params_SelectionMade params{};
    params.SelectionIndex = (int32_t)SelectionIndex;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::Conversation_Node_Property:MSG_UI(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.Conversation_Node_Property:MSG_UI"));
    struct Params_Conversation_Node_Property:MSG_UI {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_Conversation_Node_Property:MSG_UI params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::AbortInteraction(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.AbortInteraction"));
    struct Params_AbortInteraction {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_AbortInteraction params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::Interaction_ChoiceMade_Event(int32_t SelectedIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.Interaction_ChoiceMade_Event"));
    struct Params_Interaction_ChoiceMade_Event {
        int32_t SelectedIndex; // 0x0
    }; // Size: 0x4
    Params_Interaction_ChoiceMade_Event params{};
    params.SelectedIndex = (int32_t)SelectedIndex;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::StartInteraction_Event(AActor* Actor_Reference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.StartInteraction_Event"));
    struct Params_StartInteraction_Event {
        AActor* Actor_Reference; // 0x0
    }; // Size: 0x8
    Params_StartInteraction_Event params{};
    params.Actor_Reference = (AActor*)Actor_Reference;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::DeferStoppingPreviousSceneRig(bool IsCritical) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.DeferStoppingPreviousSceneRig"));
    struct Params_DeferStoppingPreviousSceneRig {
        bool IsCritical; // 0x0
    }; // Size: 0x1
    Params_DeferStoppingPreviousSceneRig params{};
    params.IsCritical = (bool)IsCritical;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::FreePlayerFromSceneRig(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.FreePlayerFromSceneRig"));
    struct Params_FreePlayerFromSceneRig {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FreePlayerFromSceneRig params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::CONV_UpdateActiveSceneRig(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.CONV_UpdateActiveSceneRig"));
    struct Params_CONV_UpdateActiveSceneRig {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CONV_UpdateActiveSceneRig params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::ExecuteUbergraph_BTT_Biped_Talk(int32_t EntryPoint, FName CallFunc_GetDbId_ReturnValue, FString K2Node_CustomEvent_PreviewedGearID_1, APlayerController* CallFunc_GetPlayerController_ReturnValue, FString K2Node_CustomEvent_PreviewedGearID, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, ACameraStackActor* CallFunc_SpawnCameraStackActorForTarget_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, ACameraStackActor* CallFunc_SpawnCameraStackActorForTarget_ReturnValue_1, UUI_BP_InteractButton_C* K2Node_CustomEvent_Selection, TArray<UUI_BP_InteractButton_C*>& CallFunc_BuildOptions_Button_Array, AActor* K2Node_Event_OwnerActor_1) {}
void UBTT_Biped_Talk_C::Start_Mission_Conversation__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.Start_Mission_Conversation__DelegateSignature"));
    struct Params_Start_Mission_Conversation__DelegateSignature {
    }; // Size: 0x0
    Params_Start_Mission_Conversation__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::StartConversation__DelegateSignature(AActor* Actor_Reference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.StartConversation__DelegateSignature"));
    struct Params_StartConversation__DelegateSignature {
        AActor* Actor_Reference; // 0x0
    }; // Size: 0x8
    Params_StartConversation__DelegateSignature params{};
    params.Actor_Reference = (AActor*)Actor_Reference;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Talk_C::Interaction_Event__DelegateSignature(UUI_BP_InteractButton_C* ClickedButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Talk.BTT_Biped_Talk_C.Interaction_Event__DelegateSignature"));
    struct Params_Interaction_Event__DelegateSignature {
        UUI_BP_InteractButton_C* ClickedButton; // 0x0
    }; // Size: 0x8
    Params_Interaction_Event__DelegateSignature params{};
    params.ClickedButton = (UUI_BP_InteractButton_C*)ClickedButton;
    ProcessEvent(func, &params);
}
