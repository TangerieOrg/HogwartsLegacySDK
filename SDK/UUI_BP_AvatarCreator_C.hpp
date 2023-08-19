#pragma once
#include <cstdint>
#include "EAvatarPresetType.hpp"
#include "EDifficulty.hpp"
#include "EGearSlotIDEnum.hpp"
#include "EGenderEnum.hpp"
#include "EGenderPronoun.hpp"
#include "EGenderVoice.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FGearItemID.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "SocialHeritageStatusIDs.hpp"
#include "UScreen.hpp"
class UOverlay;
class UWidgetAnimation;
class UUI_BP_AsyncLoadWrapper_C;
class UPhoenixTextBlock;
class UUI_BP_SparkleBurst_C;
class UAsyncWidgetSwitcher;
class UUI_BP_MenuFinalized_C;
class UUI_BP_Legend_Horizontal_Screen_C;
class UUI_BP_FG_CategoryNavBarHorizontal_C;
class UUI_BP_RotateActorPanel_C;
class UScaleBox;
class AUI_BP_DummyActor_C;
class USizeBoxSlot;
class UUI_BP_CharCreator_Finalize_C;
class UCanvasPanelSlot;
class ULegendItem;
class UGearManager;
class UAvatarCreatorPage;
class AActor;
class UAsyncLoadWrapper;
class UUMGSequencePlayer;
class ABiped_Player;
class UAnalyticsManager;
class UObject;
class UUserWidget;
class UIconButtonWidget;
#pragma pack(push, 1)
class UUI_BP_AvatarCreator_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* ShowAcceptanceLetter; // 0x378
    UWidgetAnimation* HideAcceptanceLetter; // 0x380
    UWidgetAnimation* ShowFinalizeButton; // 0x388
    UWidgetAnimation* SwitchAnimRB; // 0x390
    UWidgetAnimation* fadeToIntro; // 0x398
    UWidgetAnimation* avatarCreated; // 0x3a0
    UWidgetAnimation* showAvatarCreator; // 0x3a8
    UUI_BP_AsyncLoadWrapper_C* AsyncBody; // 0x3b0
    UUI_BP_AsyncLoadWrapper_C* AsyncComplexion; // 0x3b8
    UUI_BP_AsyncLoadWrapper_C* AsyncEyebrows; // 0x3c0
    UUI_BP_AsyncLoadWrapper_C* AsyncFace; // 0x3c8
    UUI_BP_AsyncLoadWrapper_C* AsyncFinalize; // 0x3d0
    UUI_BP_AsyncLoadWrapper_C* AsyncHair; // 0x3d8
    UOverlay* avatarCreatorOverlay; // 0x3e0
    UUI_BP_SparkleBurst_C* burst1; // 0x3e8
    UUI_BP_SparkleBurst_C* burst2; // 0x3f0
    UAsyncWidgetSwitcher* creatorSwitcher; // 0x3f8
    UUI_BP_MenuFinalized_C* FinalizedButton; // 0x400
    UPhoenixTextBlock* footerText; // 0x408
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x410
    UPhoenixTextBlock* letterBody; // 0x418
    UUI_BP_SparkleBurst_C* letterBurst1; // 0x420
    UUI_BP_SparkleBurst_C* letterBurst2; // 0x428
    UUI_BP_FG_CategoryNavBarHorizontal_C* NavBarHorizontal; // 0x430
    UUI_BP_RotateActorPanel_C* RotateActorPanel; // 0x438
    UScaleBox* ScaleBox_3; // 0x440
    UPhoenixTextBlock* sectionText; // 0x448
    int32_t PageIndex; // 0x450
    char pad_454[0x4];
    AUI_BP_DummyActor_C* CharacterModel; // 0x458
    EGenderEnum GenderRig; // 0x460
    char pad_461[0x3];
    FName CurrentMaleFullbody; // 0x464
    FName CurrentFemaleFullbody; // 0x46c
    char pad_474[0xa4];
    TArray<UUI_BP_AsyncLoadWrapper_C*> CustomizationPages; // 0x518
    char pad_528[0x10];
    FString CurrentGlasses; // 0x538
    TArray<FName> TEMP_SpellLocks; // 0x548
    SocialHeritageStatusIDs CurrentHeritage; // 0x558
    EGenderPronoun GenderPronoun; // 0x559
    EGenderVoice GenderVoice; // 0x55a
    char pad_55b[0x5];
    FString FirstName; // 0x560
    FString lastName; // 0x570
    bool CanBackOut; // 0x580
    EDifficulty CurrentDifficulty; // 0x581
    char pad_582[0x56];
    float FemaleZOffset; // 0x5d8
    char pad_5dc[0x4];
    TArray<FString> CustomizationPagesTitleKey; // 0x5e0
    bool InitialLoadComplete; // 0x5f0
    char pad_5f1[0x17];
    FString PlayerFullName; // 0x608
    int32_t NewPageIndex; // 0x618
    FVector2D position1; // 0x61c
    float MatRef_GlitterSwirls; // 0x624
    float MatRef_Erode; // 0x628
    float MatRef_Contrast; // 0x62c
    float MatRef_Curtain; // 0x630
    float MatRef_GlitterSize; // 0x634
    UUI_BP_CharCreator_Finalize_C* FinalizePage; // 0x638
    bool IsFinalizeButtonShowing; // 0x640
    char pad_641[0x3];
    int32_t HoveredNavBarIndex; // 0x644
    bool FirstTabIconsLoaded; // 0x648
    bool isLetterShowing; // 0x649
    char pad_64a[0x6];
    ULegendItem* LegendSelect; // 0x650
    ULegendItem* LegendBack; // 0x658
    ULegendItem* LegendStartGame; // 0x660
    ULegendItem* LegendSliderAdjust; // 0x668
    bool InTransition; // 0x670
    bool WaitingOnPresetLoad; // 0x671
    char pad_672[0x2];
    int32_t CurrentVoicePitch; // 0x674
    static UUI_BP_AvatarCreator_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_9();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_8();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_7();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_6();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_5();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_4();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_3();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_2();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_1();
    void SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_0();
    void Show_Avatar_Creator_If_Ready(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void Initial_Character_Loaded();
    void SetScreenLegend(TArray<FLegendItemData> TempLegendItems, FLegendItemData K2Node_MakeStruct_LegendItemData, ULegendItem* CallFunc_GetLegendItem_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_2, ULegendItem* CallFunc_GetLegendItem_ReturnValue_3, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array);
    void OnTabIconsLoaded(bool CallFunc_Not_PreBool_ReturnValue);
    void ValidatePlayerName(bool CheckProfanity, FString FirstName, FString lastName, bool& IsValidName, FString ReplaceChars, FString ConcatName, FString CallFunc_TrimTrailing_ReturnValue, FString CallFunc_TrimTrailing_ReturnValue_1, int32_t CallFunc_Len_ReturnValue, int32_t CallFunc_Len_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_ContainsBannedWord_ContainsBanned, bool CallFunc_ContainsBannedWord_ContainsBanned_1, bool CallFunc_ContainsBannedWord_ContainsBanned_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void AdjustForViewportWidth(float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void CreatorSliderHovered();
    void CreatorItemUnhovered();
    void CreatorItemHovered();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void RefreshTitleKey(FString CallFunc_Array_Get_Item);
    void UpdatePreviewActorGear(FString GearID, EGearSlotIDEnum Slot, bool CallFunc_NotEqual_StrStr_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, bool CallFunc_EditorClearSlot_ReturnValue);
    void AvatarPresetDefinitionsMapToStringMaps();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UAvatarCreatorPage* K2Node_DynamicCast_AsAvatar_Creator_Page, bool K2Node_DynamicCast_bSuccess);
    void SelectDefaultUniform();
    void Set_Character_Model(bool& Success, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, EGenderEnum Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_1, EGenderEnum Temp_byte_Variable_1, TArray<AActor*>& CallFunc_GetAllActorsWithTag_OutActors, AActor* CallFunc_Array_Get_Item, AUI_BP_DummyActor_C* K2Node_DynamicCast_AsUI_BP_Dummy_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
    void GetActiveFullbody(EGenderEnum Gender, FName& CurrentFullbody, bool K2Node_SwitchEnum_CmpSuccess);
    void GetActivePresets(EGenderEnum Gender);
    void GoToPage(int32_t PageIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_GoToCategory_CategoryChanged);
    void OnPresetSelected(EAvatarPresetType PresetType, FString PrestName, FName CallFunc_Conv_StringToName_ReturnValue);
    void UpdateChildPages(bool ShouldRefreshIcons);
    void On_Body_Type_Selected(FString FullBodyPreset, EGenderEnum OldGenderRig, int32_t Temp_int_Variable, FName CallFunc_Conv_StringToName_ReturnValue, EGenderEnum CallFunc_GetFullBodyPreset_OutGender);
    void UpdateCurrentFullBodyPreset(FName FullBodyID, EGenderEnum CallFunc_GetFullBodyPreset_OutGender);
    void UpdatePreviewActorFullBody(FName FullBodyPreset);
    void UpdatePreviewActor(EAvatarPresetType PresetType, FName PresetName);
    void UpdatePreviewActorGender(EGenderEnum Gender, FName CallFunc_GetActiveFullbody_CurrentFullbody);
    void UpdateCurrentPreset(EAvatarPresetType PresetType, FName PresetId);
    void ChildPageLoaded(UAsyncLoadWrapper* Child);
    void InitializePresetMaps();
    void CategorySwitch(int32_t NewIndex, int32_t Temp_int_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, int32_t Temp_int_Variable_4, int32_t Temp_int_Variable_5, int32_t Temp_int_Variable_6, int32_t Temp_int_Variable_7, int32_t Temp_int_Variable_8, int32_t Temp_int_Variable_9, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32_t K2Node_Select_Default, int32_t Temp_int_Variable_10, EGenderEnum Temp_byte_Variable, int32_t K2Node_Select_Default_1, int32_t CallFunc_Add_IntInt_ReturnValue);
    void FinalizeCharacter(FString PlayerFirstName, FString PlayerLastName, EGenderEnum Temp_byte_Variable, FString CallFunc_Concat_StrStr_ReturnValue, FString Temp_string_Variable, FString CallFunc_Concat_StrStr_ReturnValue_1, FString Temp_string_Variable_1, FString Temp_string_Variable_2, int32_t Temp_int_Array_Index_Variable, bool CallFunc_SaveCurrentVoicePitch_ReturnValue, FString Temp_string_Variable_3, FString Temp_string_Variable_4, EGenderVoice Temp_byte_Variable_1, FString Temp_string_Variable_5, FString K2Node_Select_Default, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_SetCurrentGameDifficulty_ReturnValue, FString Temp_string_Variable_6, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_SetPlayerGenderVoice_ReturnValue, bool CallFunc_SetPlayerGenderPronoun_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_SetPlayerSocialHeritage_ReturnValue, EGenderPronoun Temp_byte_Variable_2, UGearManager* CallFunc_Get_ReturnValue, FGearItemID CallFunc_GenerateGearAndAddToInventory_ReturnValue, FString K2Node_Select_Default_1, bool CallFunc_SetEquippedGearItemID_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FString K2Node_Select_Default_2, UAnalyticsManager* CallFunc_Get_ReturnValue_1, FString CallFunc_GetCharacterID_ReturnValue);
    void RequestCameraPositionChange(int32_t CameraIndex);
    void WidgetSwitch();
    void PlayBurst1();
    void PlayBurst2();
    void PlayLetterBurst1();
    void PlayLetterBurst2();
    void ShowCharacterCreator();
    void LetterRevealComplete();
    void LetterHideComplete();
    void BodyButtonClicked(UObject* Caller, FString String);
    void GenderButtonClicked(UObject* Caller, FString String);
    void PresetButtonClicked(UObject* Caller, FString String);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void VoiceToneSelected(UObject* Caller, int32_t int);
    void GlassesButtonClicked(UObject* Caller, FString String);
    void FinalizeClicked(UObject* Caller);
    void FirstNameChanged(UObject* Caller, FString String);
    void LastNameChanged(UObject* Caller, FString String);
    void WidgetAnimationEvt_avatarCreated_K2Node_WidgetAnimationEvent_0();
    void DifficultyButtonClicked(UObject* Caller, int32_t int);
    void WidgetAnimationEvt_fadeToIntro_K2Node_WidgetAnimationEvent_2();
    void Construct();
    void OnCharacterLoaded(AActor* Actor);
    void BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex);
    void BndEvt__UI_BP_AvatarCreator_creatorSwitcher_K2Node_ComponentBoundEvent_1_WidgetActiveEvent__DelegateSignature(UUserWidget* ActiveWidget);
    void BndEvt__UI_BP_AvatarCreator_AsyncBody_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_AvatarCreator_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_AvatarCreator_AsyncEyebrows_K2Node_ComponentBoundEvent_4_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_AvatarCreator_AsyncFace_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_AvatarCreator_AsyncHair_K2Node_ComponentBoundEvent_6_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_AvatarCreator_AsyncVoice_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton);
    void BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_9_UnhoveredCategory__DelegateSignature(int32_t Index, UIconButtonWidget* CategoryButton);
    void BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuFinalized_C* Button);
    void BndEvt__UI_BP_AvatarCreator_FinalizePage_K2Node_ComponentBoundEvent_12_ActivateFinalizeButton__DelegateSignature(bool Activate);
    void BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button);
    void BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_14_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button);
    void OnCharacterLoadComplete(AActor* Actor);
    void OnFullBodyPresetLoaded();
    void ShowLetter();
    void VoicePitchChanged(UObject* Caller, int32_t int);
    void ExecuteUbergraph_UI_BP_AvatarCreator(int32_t EntryPoint, EGenderVoice Temp_byte_Variable);
    void CreatorReady__DelegateSignature();
    void FinalizeButtonPressed__DelegateSignature();
}; // Size: 0x678
#pragma pack(pop)
