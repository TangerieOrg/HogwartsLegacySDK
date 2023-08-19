#pragma once
#include <cstdint>
#include "EGenderEnum.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "E_AVA_DungeonEntrance\Type.hpp"
#include "FCharacterSaveGameInfo.hpp"
#include "FGearName.hpp"
#include "FLegendItemData.hpp"
#include "FMOTD.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_MissionSkipDisplayNames.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "HouseIds.hpp"
#include "UFrontEnd_MenuWidget.hpp"
class UCanvasPanel;
class UUI_BP_FG_DetailsPanelBack_C;
class UWidgetAnimation;
class UUI_BP_CharacterSelectButton_C;
class UUI_BP_MenuTextButton_C;
class UUI_BP_CinematicPicker_C;
class UVerticalBox;
class UImage;
class UObject;
class UPhoenixTextBlock;
class UPersistentData;
class UUI_BP_Legend_Horizontal_Screen_C;
class UUI_BP_LoadMenu_C;
class UUI_BP_SettingsDropDownButton_C;
class UUI_BP_FrontEndDetails_C;
class UWidgetSwitcher;
class AActor;
class UBorder;
class UTexture2DDynamic;
class UUI_BP_PhxComboBox_C;
class USizeBox;
class UUI_BP_ScrollingTextBlock_C;
class UUI_BP_SystemMenu_C;
class UUI_BP_InstallManagerProgressBar_C;
class UUserWidget;
class UUI_BP_StartPage_C;
class UUMGSequencePlayer;
class UClass;
class UPopupScreen;
class APlayerController;
class UUI_BP_RewardNotification_C;
class UOverlaySlot;
class UMenuCursorWidget;
class ULegendItem;
class UPhoenixGameInstance;
class UCustomizableCharacterComponent;
class UUIManager;
class UUI_BP_TempFEButton_C;
class UUIOnlineManager;
class UUI_BP_Store_C;
class UAsyncTaskDownloadImage;
#pragma pack(push, 1)
class UUI_BP_FrontEnd_Menu_C : public UFrontEnd_MenuWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x380
    UWidgetAnimation* DeleteCharacterFade; // 0x388
    UWidgetAnimation* showMainDetails; // 0x390
    UWidgetAnimation* MOTDSlide; // 0x398
    UWidgetAnimation* Outro_SubMenu; // 0x3a0
    UWidgetAnimation* Outro_Normal; // 0x3a8
    UUI_BP_CharacterSelectButton_C* characterSlot1; // 0x3b0
    UUI_BP_CharacterSelectButton_C* characterSlot2; // 0x3b8
    UUI_BP_CharacterSelectButton_C* characterSlot3; // 0x3c0
    UUI_BP_CharacterSelectButton_C* characterSlot4; // 0x3c8
    UUI_BP_MenuTextButton_C* CinematicBinkLauncherButton; // 0x3d0
    UUI_BP_CinematicPicker_C* CinematicPicker; // 0x3d8
    UUI_BP_MenuTextButton_C* crossGenSaveData; // 0x3e0
    UUI_BP_MenuTextButton_C* DebugCreditsButton; // 0x3e8
    UUI_BP_MenuTextButton_C* DebugLoadingScreenButton; // 0x3f0
    UPhoenixTextBlock* DeletingStr; // 0x3f8
    UUI_BP_FG_DetailsPanelBack_C* detailsBack; // 0x400
    UPhoenixTextBlock* developerLevelTitle; // 0x408
    UVerticalBox* DevLevelsList; // 0x410
    UCanvasPanel* DevMenu; // 0x418
    UUI_BP_MenuTextButton_C* exitButton; // 0x420
    UUI_BP_Legend_Horizontal_Screen_C* FrontendLegend; // 0x428
    UPhoenixTextBlock* gamerTagTitle; // 0x430
    UUI_BP_SettingsDropDownButton_C* GenderDropdown; // 0x438
    UVerticalBox* Header; // 0x440
    UUI_BP_SettingsDropDownButton_C* HouseDropdown; // 0x448
    UUI_BP_FrontEndDetails_C* mainDetailsPanel; // 0x450
    UCanvasPanel* MainOverlay; // 0x458
    UBorder* menuBorder; // 0x460
    UUI_BP_MenuTextButton_C* MissionCustom; // 0x468
    UUI_BP_SettingsDropDownButton_C* MissionDropDown; // 0x470
    UUI_BP_PhxComboBox_C* MissionSkipOptions; // 0x478
    USizeBox* MOTD; // 0x480
    UImage* MOTD_Image; // 0x488
    UPhoenixTextBlock* OptionsTitle; // 0x490
    UUI_BP_MenuTextButton_C* OverlandCustom; // 0x498
    UUI_BP_SettingsDropDownButton_C* OverlandStartDropDown; // 0x4a0
    UBorder* ProfileDeletePopup; // 0x4a8
    UUI_BP_MenuTextButton_C* SanctuaryCustom; // 0x4b0
    UUI_BP_SettingsDropDownButton_C* SanctuaryIdentityDropDown; // 0x4b8
    UUI_BP_ScrollingTextBlock_C* scrollingMOTDText; // 0x4c0
    UUI_BP_SystemMenu_C* settingsMenu; // 0x4c8
    UUI_BP_MenuTextButton_C* storeButton; // 0x4d0
    UBorder* subMenuBorder; // 0x4d8
    UWidgetSwitcher* subMenuSwitcher; // 0x4e0
    UUI_BP_InstallManagerProgressBar_C* UI_BP_InstallManagerProgressBar; // 0x4e8
    UUI_BP_LoadMenu_C* UI_BP_LoadMenu; // 0x4f0
    TArray<FName> ListItems; // 0x4f8
    AActor* CharacterActor; // 0x508
    UUserWidget* TooltipPopout; // 0x510
    UUI_BP_StartPage_C* StartPage; // 0x518
    bool isSubMenu; // 0x520
    char pad_521[0x7];
    UClass* LevelButtonClass; // 0x528
    bool isSettingsMenu; // 0x530
    char pad_531[0x7];
    TArray<FString> DEV_OverlandStartPoints; // 0x538
    TArray<FName> CurrentAvatarPresetIDs; // 0x548
    TArray<FName> CurrentGearAppearanceIDs; // 0x558
    char pad_568[0x50];
    UPopupScreen* DummyPopup; // 0x5b8
    bool ShowMOTD; // 0x5c0
    char pad_5c1[0x3];
    FVector2D MOTDSize; // 0x5c4
    char pad_5cc[0x4];
    TArray<FMOTD> MOTDs; // 0x5d0
    TArray<FString> SkipOptionStrings; // 0x5e0
    int32_t HoveredCharacterID; // 0x5f0
    bool MOTDisLoaded; // 0x5f4
    char pad_5f5[0x3];
    FString CurrentGearTags; // 0x5f8
    int32_t MOTDNum; // 0x608
    char pad_60c[0x4];
    static UUI_BP_FrontEnd_Menu_C* StaticClass();
    void DisplayNextRewardNotification(bool FirstCall, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_RewardNotification_C* CallFunc_Create_ReturnValue);
    void AdjustForViewportResolution(float IdealRatio, float IdealWidth, float CurrentRatio, float CurrentWidth, FMargin K2Node_MakeStruct_Margin, float CallFunc_Subtract_FloatFloat_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1);
    void DeleteCharacterTooltipDismissed(UPopupScreen* Popup, int32_t Response, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void ShowDeleteCharacterPopup();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void OnCharacterDeletedAsync(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUI_BP_CharacterSelectButton_C* CallFunc_GetHoveredCharacterButton_HoveredButton, bool CallFunc_IsValid_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, UPersistentData* CallFunc_GetInstance_ReturnValue);
    FString GetCurrentlySelectedSkipOption(int32_t CallFunc_GetSelectedIndex_SelectedIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue);
    void GetSkipOptionDisplayStrings(TArray<FString>& SkipOptions, TArray<FString>& OutDisplayStrings, TArray<FString> DisplayStrings, FString Temp_string_Variable, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FSTR_MissionSkipDisplayNames CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_2);
    void LegendHoldComplete(ULegendItem* LegendItem, bool HoldWasCompleted, bool CallFunc_BooleanAND_ReturnValue);
    void SetLegend(TArray<FLegendItemData>& LegendData, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FLegendItemData CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void Set_Default_Legend_Data(TArray<FLegendItemData> DefaultLegendLocal, bool Temp_bool_Variable, TArray<FLegendItemData>& Temp_struct_Variable, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable_1, TArray<FLegendItemData>& Temp_struct_Variable_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, bool CallFunc_IsPackagedForDistribution_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array_2, TArray<FLegendItemData>& K2Node_Select_Default, TArray<FLegendItemData>& K2Node_Select_Default_1);
    void SetPlayingFromFrontendBasedOnOverlandSelection(UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, FString CallFunc_GetSelectedOption_SelectedOption, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6);
    void SetDefaultCharSlotTooltipLegend(bool IsEmptySlot, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array_1);
    void OnMenuButtonHovered(UUI_BP_MenuTextButton_C* hoveredButton, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_PostEventAtLocation_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array);
    void On_Character_Loaded(AActor* Actor, EGenderEnum Gender, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, UObject* Temp_object_Variable, TArray<void*>& CallFunc_GetGearAppearanceItemDefinitions_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, FLegendItemData CallFunc_Array_Get_Item, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, int32_t CallFunc_GetHoveredCharacterButtonID_CharacterID, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_GetHoveredCharacterButtonID_CharacterID_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, FLegendItemData CallFunc_Array_Get_Item_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Back_BackedOut, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8);
    void ShowLoadOptions();
    void SetDefaultHouseAndGender(int32_t CharacterID, FString& House, FString& Gender, HouseIds HouseEnum, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetSelectedOption_SelectedOption, bool CallFunc_SetPlayerGenderVoice_ReturnValue, bool CallFunc_SetPlayerGenderVoice_ReturnValue_1, bool CallFunc_SetPlayerGenderPronoun_ReturnValue, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_1, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_2, bool CallFunc_SetPlayerGenderVoice_ReturnValue_2, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_3, bool CallFunc_UpdatePlayableCharacterGender_ReturnValue, bool CallFunc_UpdatePlayableCharacterGender_ReturnValue_1, EGenderEnum CallFunc_GetFullBodyPreset_OutGender);
    void AddDefaultInventory();
    void ShowSettings();
    void Equip_Announce_Gear(FGearName DefaultIntroOutfit, FGearName DefaultAnnounceBack, FGearName DefaultAnnounceOutfit);
    void GetHoveredCharacterButton(UUI_BP_CharacterSelectButton_C*& hoveredButton, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UUI_BP_CharacterSelectButton_C*>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsHovered_ReturnValue);
    void AddDungeonLevels(TArray<FName>& Levels, TArray<FName> LocalDungeonList, E_AVA_DungeonEntrance::Type DungeonEnum, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void InitCharacterModel();
    void UpdateCharacterModel(int32_t CharacterID, EGenderEnum Temp_byte_Variable, FCharacterSaveGameInfo CallFunc_GetPlayableCharacter_ReturnValue);
    void OnCharacterButtonHovered(UUI_BP_CharacterSelectButton_C* hoveredButton, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
    void GetHoveredCharacterButtonID(int32_t& CharacterID, UUI_BP_CharacterSelectButton_C* CallFunc_GetHoveredCharacterButton_HoveredButton, bool CallFunc_IsValid_ReturnValue);
    void SetTooltipLegend(TArray<FLegendItemData>& Legends, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue);
    void DeleteCharacterProfileAsync(int32_t CharacterID, bool CallFunc_AsyncRemovePlayableCharacter_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue);
    void DeleteCharacterProfile(int32_t CharacterID, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_RemovePlayableCharacter_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void Back(bool& BackedOut, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, ESlateVisibility K2Node_Select_Default, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void InitCharacterSlotButtons(int32_t tempSlotCount, TArray<UUI_BP_CharacterSelectButton_C*> SlotArray, HouseIds House, TArray<FCharacterSaveGameInfo> PlayableCharacters, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item, TArray<UUI_BP_CharacterSelectButton_C*>& K2Node_MakeArray_Array, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_2, FCharacterSaveGameInfo CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FCharacterSaveGameInfo>& CallFunc_GetAllPlayableCharacters_ReturnValue);
    void ShowCharacterToolTip(UUI_BP_CharacterSelectButton_C* Character);
    void CharacterButtonSelected(UUI_BP_CharacterSelectButton_C* SelectedButton, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void HoverListItem(UUI_BP_TempFEButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void ShowActors(TArray<AActor*>& Array, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void SetButtonText();
    void InitMainMenu(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_DoesCrossGenSaveDataExist_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetDisplayedUserTag_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void Select_List_Item(UUI_BP_MenuTextButton_C* SelectedButton, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FString CallFunc_GetSelectedOption_SelectedOption, HouseIds CallFunc_GetHouseIDFromRegistryID_ReturnValue, EGenderEnum CallFunc_GetFullBodyPreset_OutGender);
    void InitList(bool InDeveloperMode, UUI_BP_MenuTextButton_C* tempLevelButton, TArray<FName> Levels);
    void OnFail_86D2838448573BC41D7DE4A2119C5C12(UTexture2DDynamic* Texture);
    void OnSuccess_86D2838448573BC41D7DE4A2119C5C12(UTexture2DDynamic* Texture);
    void BndEvt__OverlandCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__SanctuaryCustom_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void SetMenuLegend(TArray<FLegendItemData>& LegendArray);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void DevMenuButton();
    void BndEvt__MissionCustom_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__characterSlot4_K2Node_ComponentBoundEvent_18_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__characterSlot4_K2Node_ComponentBoundEvent_16_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void MOTDLoaded(UObject* Caller, int32_t int);
    void BndEvt__characterSlot4_K2Node_ComponentBoundEvent_15_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void AsyncMOTDImage(FString Image_URL);
    void AsyncMOTDImageLoaded(FSlateBrush Texture);
    void BndEvt__characterSlot3_K2Node_ComponentBoundEvent_14_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__characterSlot3_K2Node_ComponentBoundEvent_13_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void OnIntroEnded(int32_t IntroType);
    void BndEvt__characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void OnOutroEnded(int32_t OutroType);
    void BndEvt__characterSlot2_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__characterSlot2_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__characterSlot1_K2Node_ComponentBoundEvent_7_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__characterSlot1_K2Node_ComponentBoundEvent_6_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_FrontEnd_Menu_UI_BP_LoadMenu_K2Node_ComponentBoundEvent_23_OnLoadSave__DelegateSignature(FString Filename, int32_t CharacterID);
    void OnCharacterClicked(UUI_BP_CharacterSelectButton_C* IconButton);
    void OnFullGameNotInstalledPopupClosed_Event(bool continueToGame);
    void SelectListItemButtonSFX(UUI_BP_MenuTextButton_C* Button);
    void OnShowLoadOptions();
    void CustomEvent(bool continueToGame);
    void BndEvt__UI_BP_FrontEnd_Menu_CinematicBinkLauncher_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_K2Node_ComponentBoundEvent_19_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void OnExitRequested();
    void SettingsRequestedNewLegend(TArray<FLegendItemData>& NewLegend);
    void NetworkChange(UObject* Caller, int32_t int);
    void BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_20_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_22_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_31_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_32_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_33_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_34_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_35_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_36_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void OnMissionSelectionChanged(int32_t NewOptionIndex, UUI_BP_SettingsDropDownButton_C* Button);
    void BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_1_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void QuitGamePopupDismissed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void OnRewardNotificationClosed();
    void Construct();
    void ResolutionSettingsApplied(UObject* Caller);
    void OnLoadLookFromArraysComplete(AActor* Actor, bool Success);
    void ExecuteUbergraph_UI_BP_FrontEnd_Menu(int32_t EntryPoint, FString CallFunc_GetSelectedOption_SelectedOption, bool K2Node_SwitchString_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_13, int32_t CallFunc_AdjustCount_ReturnValue, TArray<FLegendItemData>& K2Node_Event_LegendArray, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_12, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_11, FString CallFunc_GetSelectedOption_SelectedOption_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_10, UUIOnlineManager* CallFunc_Get_ReturnValue, TArray<FMOTD>& CallFunc_GetMOTD_ReturnValue, UObject* K2Node_CustomEvent_Caller_2, int32_t K2Node_CustomEvent_Int_1, bool CallFunc_Greater_IntInt_ReturnValue, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_9, APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUI_BP_Store_C* CallFunc_Create_ReturnValue, FString K2Node_CustomEvent_Image_URL, UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue);
}; // Size: 0x610
#pragma pack(pop)
