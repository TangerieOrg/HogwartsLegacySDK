#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FConversationOption.hpp"
#include "FDialogueSequenceReference.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "USceneAction_Blueprint.hpp"
class UUI_BP_OptionPanel_C;
class AActor;
class UObject;
class UTimeRigPlayer;
class APlayerController;
class AHUD;
class APhoenixHud_C;
class UTimeRig_StoryGraphNode;
class UStoryNode_DialogueSequence;
#pragma pack(push, 1)
class UBP_ConversationMenuAction_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    UUI_BP_OptionPanel_C* OptionPanel; // 0xb0
    AActor* OwningActor; // 0xb8
    FDialogueSequenceReference DialogueSequence; // 0xc0
    TArray<FName> BranchIDs; // 0xe0
    bool IsCancellable; // 0xf0
    char pad_f1[0x7];
    UTimeRigPlayer* OwningSRPlayer; // 0xf8
    FString TranslatedLastLine; // 0x100
    int32_t OptionCount; // 0x110
    char pad_114[0x4];
    static UBP_ConversationMenuAction_C* StaticClass();
    void RemoveAllSubtitles(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHud_C* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess);
    void GetDialogueSequenceReference(UObject* Caller, FDialogueSequenceReference& OutReference, UTimeRig_StoryGraphNode* CallFunc_GetStoryGraphNode_ReturnValue, bool CallFunc_DialogueSequenceReferenceIsValid_ReturnValue, UStoryNode_DialogueSequence* K2Node_DynamicCast_AsStory_Node_Dialogue_Sequence, bool K2Node_DynamicCast_bSuccess);
    void CreateConversationOptions(UObject* Caller, TArray<FConversationOption>& outConversationOptions, TArray<FName>& OutBranchIDs, FName& LastLineID);
    FLinearColor GetActionColor0(FColor K2Node_MakeStruct_Color, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue);
    bool IsProxyRequiredBP0();
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void OnCreate0(UObject* ActionState);
    void OnOptionSelected(int32_t OptionIndex);
    void OnMenuCancelled();
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void ExecuteUbergraph_BP_ConversationMenuAction(int32_t EntryPoint, int32_t K2Node_CustomEvent_OptionIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_DevOnly_IsHammerTime_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue);
}; // Size: 0x118
#pragma pack(pop)
