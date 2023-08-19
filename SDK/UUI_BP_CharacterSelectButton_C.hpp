#pragma once
#include <cstdint>
#include "EIconButtonState.hpp"
#include "FDateTime.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "FVector2D.hpp"
#include "HouseIds.hpp"
#include "UIconButtonWidget.hpp"
class UClass;
class UCanvasPanel;
class UWidgetAnimation;
class UPhoenixTextBlock;
class UPhoenixImage;
class UNamedSlot;
class USizeBox;
class UHorizontalBox;
class UHorizontalBoxSlot;
class UMaterialInstanceDynamic;
class UWidget;
class UUserWidget;
class UPanelSlot;
class UCanvasPanelSlot;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_CharacterSelectButton_C : public UIconButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
    UWidgetAnimation* OnButtonSelected; // 0x4b0
    UWidgetAnimation* OnButtonHovered; // 0x4b8
    UPhoenixTextBlock* ButtonTitle; // 0x4c0
    UPhoenixImage* cardColorImage; // 0x4c8
    UCanvasPanel* contentHolder; // 0x4d0
    UNamedSlot* ContentSlot; // 0x4d8
    UPhoenixTextBlock* dateInfo; // 0x4e0
    UHorizontalBox* existingCharacter; // 0x4e8
    UPhoenixImage* flagMaterial; // 0x4f0
    USizeBox* iconSizeBox; // 0x4f8
    UPhoenixImage* LevelBack; // 0x500
    UHorizontalBox* NewGame; // 0x508
    UPhoenixTextBlock* NewGameTitle; // 0x510
    UPhoenixImage* PhoenixImage_85; // 0x518
    UPhoenixTextBlock* playerLevelText; // 0x520
    char pad_528[0x30];
    bool IsSelected; // 0x558
    char pad_559[0x7];
    UClass* CursorClass; // 0x560
    bool IsEmptySlot; // 0x568
    char pad_569[0x3];
    int32_t CharacterID; // 0x56c
    UHorizontalBoxSlot* rayBurst; // 0x570
    FString CharacterName; // 0x578
    FSaveGameInfo LatestSaveGame; // 0x588
    HouseIds House; // 0x600
    char pad_601[0x7];
    static UUI_BP_CharacterSelectButton_C* StaticClass();
    void I_GetIconName(FString& IconName);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void GetIsIntroSave(bool& Result, FSaveGameInfo NewLocalVar_0, FString CallFunc_ToLower_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
    void SetHouse(bool IsEmpty, HouseIds PlayerHouse, FLinearColor tempLevelBack, FLinearColor tempTopColor, FLinearColor tempMiddleColor, FLinearColor tempBaseColor, FString tempHouseIcon, bool K2Node_SwitchEnum_CmpSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void SetCharacterData(bool IsCharacter, FString CharacterName, HouseIds House, FString SaveText, int32_t CharacterID, int32_t CharacterLevel, FString SaveTimeOverride, FDateTime CallFunc_DateTimeFromString_Result, bool CallFunc_DateTimeFromString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
    void SetIsCurrentSelection(bool IsCurrent);
    void SetIsSelected(bool buttonSelected);
    bool SetButtonIcons0(FString BackgroundImage);
    UWidget* GetExtraContent0(UWidget* CallFunc_GetChildAt_ReturnValue, UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess);
    bool HandleNonExistent0();
    bool HandleMissing0();
    bool HandleDisabled0();
    bool HandleEnabled0();
    bool RemoveExtraContent0(bool CallFunc_RemoveChildAt_ReturnValue);
    bool AddExtraContent0(UWidget* NewContent, UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool SetState0(bool IsActive);
    bool IsInteractable();
    void I_SetIconName(FString IconName);
    void I_SetImage(FString ImageName);
    void I_AddExtraContent(UWidget* NewContent);
    void Construct();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void I_SetIconSize(FVector2D Size);
    void HighlightButton0(bool isHighlighted);
    void SetButtonState0(EIconButtonState NewState);
    void OnSynchronizeProperties0();
    void ExecuteUbergraph_UI_BP_CharacterSelectButton(int32_t EntryPoint, FString K2Node_Event_ImageName, UWidget* K2Node_Event_NewContent, bool CallFunc_AddExtraContent_ReturnValue, FVector2D K2Node_Event_Size, bool K2Node_Event_isHighlighted, EIconButtonState K2Node_Event_NewState, bool CallFunc_HandleEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HandleDisabled_ReturnValue, bool CallFunc_HandleMissing_ReturnValue, bool CallFunc_HandleNonExistent_ReturnValue, FString K2Node_Event_IconName, bool CallFunc_NotEqual_StrStr_ReturnValue, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
}; // Size: 0x608
#pragma pack(pop)
