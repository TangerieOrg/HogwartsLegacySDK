#pragma once
#include <cstdint>
#include "EAvaAudioDialogueMenuItemType.hpp"
#include "FConversationOption.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UI_BP_InteractTypeEnum\Type.hpp"
class AActor;
class UUI_BP_OptionPanel_C;
class ABiped_PlayerController;
class UUIManager;
class UUI_BP_InteractButton_C;
class USceneRigPlayer;
class ACharacter;
class UBlackboardComponent;
class UUI_BP_Vendor_C;
class UUserWidget;
class USocialReactor;
class UCustomizableCharacterComponent;
class UAnimInstance;
class UObject;
class UStationComponent;
class USceneRig;
class APlayerController;
class ACameraStackActor;
#pragma pack(push, 1)
class UBTT_Biped_Talk_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    char pad_158[0x10];
    AActor* Interaction_Target; // 0x168
    UUI_BP_OptionPanel_C* Panel_Reference; // 0x170
    char pad_178[0x10];
    TArray<UUI_BP_InteractButton_C*> Button_Array; // 0x188
    AActor* Player_Actor_Reference; // 0x198
    char pad_1a0[0x10];
    bool Continue; // 0x1b0
    char pad_1b1[0x17];
    FString Mission_ConversationID; // 0x1c8
    int32_t MissionMenuNodeID; // 0x1d8
    char pad_1dc[0x4];
    UUIManager* UI_Manager; // 0x1e0
    FName TargetActorDBId; // 0x1e8
    int32_t MissionTextCount; // 0x1f0
    uint8_t Conversation_Flags; // 0x1f4
    char pad_1f5[0x3];
    UBlackboardComponent* Blackboard; // 0x1f8
    FHermesBPDelegateHandle RadiantHandle; // 0x200
    bool RadiantMission; // 0x210
    char pad_211[0x7];
    UUI_BP_Vendor_C* VendorWidget; // 0x218
    bool PassiveSceneRig; // 0x220
    char pad_221[0x7];
    USceneRigPlayer* Conversation_SceneRig; // 0x228
    UUserWidget* OnScreenWidget; // 0x230
    bool Conversation_Started; // 0x238
    char pad_239[0x7];
    TArray<FConversationOption> ConversationOptions; // 0x240
    FHermesBPDelegateHandle SceneRigUpdateMsgHandle; // 0x250
    TArray<FString> AudioConversationNames; // 0x260
    bool CurrentlyExtorting; // 0x270
    char pad_271[0x7];
    FString TopItemForSpeakingIntroLine; // 0x278
    bool Missions; // 0x288
    char pad_289[0x7];
    USceneRigPlayer* PreviousConvSceneRig; // 0x290
    TArray<AActor*> AdditionalSpecifiedActors; // 0x298
    USocialReactor* SocialReactor; // 0x2a8
    AActor* PlayerProxy; // 0x2b0
    bool AudioConversations; // 0x2b8
    bool AutomatedMode; // 0x2b9
    bool SkipLineSocial; // 0x2ba
    char pad_2bb[0x5];
    TArray<FString> SkipConversationOptionsArray; // 0x2c0
    static UBTT_Biped_Talk_C* StaticClass();
    void AreConversationOptionsNeeded(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FConversationOption CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_ToLower_ReturnValue, FString CallFunc_Replace_ReturnValue, FString CallFunc_Replace_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue);
    FString Player_Gender_Fixup(FString OptionText, FString PlayerString, int32_t CallFunc_FindSubstring_ReturnValue, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, FString CallFunc_Left_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_Right_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2);
    void TurnOnAbilities(AActor* CallFunc_GetActorOwner_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void TurnOffAbilties(UAnimInstance* NewLocalVar_0, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue);
    void ShowWand(UObject* Player, bool ShowWand, UAnimInstance* AnimInstance);
    void HandleSceneRigStart(UObject* SRPlayerObjectRef);
    void ActivatePlayerPerception(bool PlayerPerception, UUIManager* CallFunc_Get_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess);
    void StopSceneRigIfPlaying(USceneRigPlayer* SceneRigPlayer, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EventOccursNow_ReturnValue);
    void GetAudioConversationOptions();
    void CleanupBlackboard(UBlackboardComponent* BlackboardComp, FName CallFunc_MakeLiteralName_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_4, FName CallFunc_MakeLiteralName_ReturnValue_5, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue_6, int32_t CallFunc_InitializeStationInteraction_ReturnValue);
    void PrepareandStartConversation(USceneRig* L_SceneRigToUse, FName CallFunc_MakeLiteralName_ReturnValue, USceneRig* CallFunc_GetBTTBipedTalkSceneRig_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, USceneRig* K2Node_DynamicCast_AsScene_Rig, bool K2Node_DynamicCast_bSuccess);
    void AddWidgetToScreen(UUserWidget* ScreenToAdd, bool CallFunc_IsValid_ReturnValue);
    void IconLookup(EAvaAudioDialogueMenuItemType ConversationIcon, UI_BP_InteractTypeEnum::Type ChatPanelIcon, bool ChatIcon, FString& Icon);
    void Y_CancelConversation_Setup(UObject* Conversation_SceneRig, USceneRigPlayer* K2Node_DynamicCast_AsScene_Rig_Player, bool K2Node_DynamicCast_bSuccess, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue);
    void HandleRadiantMissionInfo(UObject* Caller, FString Message, FString CurrentMission);
    void HasMission(FString OptionText);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CleanupUIState();
    void CompanionSelection(UUI_BP_InteractButton_C* Selection);
    void ShowVendorUI();
    void StartGearPreview(FString PreviewedGearID);
    void EndGearPreview(FString PreviewedGearID);
    void VendorUIClosed();
    void ExitTask(AActor* OwnerActor);
    void Conversation_Dialogue_Line_Complete();
    void SelectionMade(int32_t SelectionIndex);
    void ReceiveExecute(AActor* OwnerActor);
    void Conversation_Node_Property:MSG_UI(UObject* Caller, FString String);
    void AbortTask();
    void AbortInteraction(UObject* Caller);
    void Interaction_ChoiceMade_Event(int32_t SelectedIndex);
    void StartInteraction_Event(AActor* Actor_Reference);
    void DeferStoppingPreviousSceneRig(bool IsCritical);
    void FreePlayerFromSceneRig(UObject* Caller);
    void OnStationInteractionExitComplete_Event_0();
    void CONV_UpdateActiveSceneRig(UObject* Caller);
    void ExecuteUbergraph_BTT_Biped_Talk(int32_t EntryPoint, FName CallFunc_GetDbId_ReturnValue, FString K2Node_CustomEvent_PreviewedGearID_1, APlayerController* CallFunc_GetPlayerController_ReturnValue, FString K2Node_CustomEvent_PreviewedGearID, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, ACameraStackActor* CallFunc_SpawnCameraStackActorForTarget_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, ACameraStackActor* CallFunc_SpawnCameraStackActorForTarget_ReturnValue_1, UUI_BP_InteractButton_C* K2Node_CustomEvent_Selection, TArray<UUI_BP_InteractButton_C*>& CallFunc_BuildOptions_Button_Array, AActor* K2Node_Event_OwnerActor_1);
    void Start_Mission_Conversation__DelegateSignature();
    void Interaction_Event__DelegateSignature(UUI_BP_InteractButton_C* ClickedButton);
    void ButtonClicked__DelegateSignature();
    void StartConversation__DelegateSignature(AActor* Actor_Reference);
}; // Size: 0x2d0
#pragma pack(pop)
