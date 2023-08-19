#include "AActor.hpp"
#include "AHUD.hpp"
#include "APhoenixHud_C.hpp"
#include "APlayerController.hpp"
#include "FColor.hpp"
#include "FConversationOption.hpp"
#include "FDialogueSequenceReference.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBP_ConversationMenuAction_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
#include "UStoryNode_DialogueSequence.hpp"
#include "UTimeRigPlayer.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
#include "UUI_BP_OptionPanel_C.hpp"
UBP_ConversationMenuAction_C* UBP_ConversationMenuAction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C");
    return (UBP_ConversationMenuAction_C*)res;
}
FLinearColor UBP_ConversationMenuAction_C::GetActionColor0(FColor K2Node_MakeStruct_Color, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.GetActionColor"));
    struct Params_GetActionColor {
        FLinearColor ReturnValue; // 0x0
        FColor K2Node_MakeStruct_Color; // 0x10
        FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue; // 0x14
    }; // Size: 0x24
    Params_GetActionColor params{};
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_Conv_ColorToLinearColor_ReturnValue = (FLinearColor)CallFunc_Conv_ColorToLinearColor_ReturnValue;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UBP_ConversationMenuAction_C::RemoveAllSubtitles(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHud_C* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess) {}
void UBP_ConversationMenuAction_C::GetDialogueSequenceReference(UObject* Caller, FDialogueSequenceReference& OutReference, UTimeRig_StoryGraphNode* CallFunc_GetStoryGraphNode_ReturnValue, bool CallFunc_DialogueSequenceReferenceIsValid_ReturnValue, UStoryNode_DialogueSequence* K2Node_DynamicCast_AsStory_Node_Dialogue_Sequence, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.GetDialogueSequenceReference"));
    struct Params_GetDialogueSequenceReference {
        UObject* Caller; // 0x0
        FDialogueSequenceReference OutReference; // 0x8
        UTimeRig_StoryGraphNode* CallFunc_GetStoryGraphNode_ReturnValue; // 0x28
        bool CallFunc_DialogueSequenceReferenceIsValid_ReturnValue; // 0x30
        char pad_31[0x7];
        UStoryNode_DialogueSequence* K2Node_DynamicCast_AsStory_Node_Dialogue_Sequence; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
    }; // Size: 0x41
    Params_GetDialogueSequenceReference params{};
    params.Caller = (UObject*)Caller;
    params.OutReference = (FDialogueSequenceReference)OutReference;
    params.CallFunc_GetStoryGraphNode_ReturnValue = (UTimeRig_StoryGraphNode*)CallFunc_GetStoryGraphNode_ReturnValue;
    params.CallFunc_DialogueSequenceReferenceIsValid_ReturnValue = (bool)CallFunc_DialogueSequenceReferenceIsValid_ReturnValue;
    params.K2Node_DynamicCast_AsStory_Node_Dialogue_Sequence = (UStoryNode_DialogueSequence*)K2Node_DynamicCast_AsStory_Node_Dialogue_Sequence;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    OutReference = params.OutReference;
}
bool UBP_ConversationMenuAction_C::IsProxyRequiredBP0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.IsProxyRequiredBP"));
    struct Params_IsProxyRequiredBP {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProxyRequiredBP params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_ConversationMenuAction_C::CreateConversationOptions(UObject* Caller, TArray<FConversationOption>& outConversationOptions, TArray<FName>& OutBranchIDs, FName& LastLineID) {}
void UBP_ConversationMenuAction_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::OnCreate0(UObject* ActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnCreate"));
    struct Params_OnCreate {
        UObject* ActionState; // 0x0
    }; // Size: 0x8
    Params_OnCreate params{};
    params.ActionState = (UObject*)ActionState;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnExitInterval"));
    struct Params_OnExitInterval {
        float Time; // 0x0
        bool Cancelled; // 0x4
        bool IsScrubbing; // 0x5
    }; // Size: 0x6
    Params_OnExitInterval params{};
    params.Time = (float)Time;
    params.Cancelled = (bool)Cancelled;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::OnOptionSelected(int32_t OptionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnOptionSelected"));
    struct Params_OnOptionSelected {
        int32_t OptionIndex; // 0x0
    }; // Size: 0x4
    Params_OnOptionSelected params{};
    params.OptionIndex = (int32_t)OptionIndex;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::OnMenuCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnMenuCancelled"));
    struct Params_OnMenuCancelled {
    }; // Size: 0x0
    Params_OnMenuCancelled params{};
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_ConversationMenuAction.BP_ConversationMenuAction_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_ConversationMenuAction_C::ExecuteUbergraph_BP_ConversationMenuAction(int32_t EntryPoint, int32_t K2Node_CustomEvent_OptionIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_DevOnly_IsHammerTime_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue) {}
