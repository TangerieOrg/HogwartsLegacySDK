#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActionDiamondRing.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UBorder;
class UUI_BP_ActionRingItem_C;
class UPhoenixRichTextBlock;
class UUIManager;
class UUI_BP_MiniSelectionDiamond_C;
class UHorizontalBox;
class UImage;
class ABiped_Player;
struct FLockManagerLock;
class UUMGSequencePlayer;
class UWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_ActionDiamondRing_C : public UActionDiamondRing {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x318
    UWidgetAnimation* hideFocusFX; // 0x320
    UWidgetAnimation* showFocusFX; // 0x328
    UWidgetAnimation* MiniDiamondLeft; // 0x330
    UWidgetAnimation* MiniDiamondBottom; // 0x338
    UWidgetAnimation* MiniDiamondRight; // 0x340
    UWidgetAnimation* MiniDiamondTop; // 0x348
    UWidgetAnimation* SwapGroup; // 0x350
    UWidgetAnimation* ShowSpellCallouts; // 0x358
    UUI_BP_ActionRingItem_C* actionItem_Bottom; // 0x360
    UUI_BP_ActionRingItem_C* actionItem_Left; // 0x368
    UUI_BP_ActionRingItem_C* actionItem_Right; // 0x370
    UUI_BP_ActionRingItem_C* actionItem_Top; // 0x378
    UBorder* ActionRing; // 0x380
    UCanvasPanel* BottomButton; // 0x388
    UPhoenixRichTextBlock* bottomButtonGraphic; // 0x390
    UPhoenixRichTextBlock* CalloutButton; // 0x398
    UPhoenixRichTextBlock* dpadCallout; // 0x3a0
    UPhoenixRichTextBlock* dpadCallout_Both; // 0x3a8
    UCanvasPanel* LeftButton; // 0x3b0
    UPhoenixRichTextBlock* leftButtonGraphic; // 0x3b8
    UHorizontalBox* leftHanded; // 0x3c0
    UPhoenixRichTextBlock* leftHandedRevelio; // 0x3c8
    UPhoenixRichTextBlock* leftHandedSpellSelection; // 0x3d0
    UUI_BP_MiniSelectionDiamond_C* mini1; // 0x3d8
    UUI_BP_MiniSelectionDiamond_C* mini2; // 0x3e0
    UUI_BP_MiniSelectionDiamond_C* mini3; // 0x3e8
    UUI_BP_MiniSelectionDiamond_C* mini4; // 0x3f0
    UBorder* miniDiamond; // 0x3f8
    UCanvasPanel* MiniDiamondElements; // 0x400
    UBorder* miniDpad; // 0x408
    UHorizontalBox* miniFaceButtons; // 0x410
    UImage* RevelioIcon; // 0x418
    UCanvasPanel* RightButton; // 0x420
    UPhoenixRichTextBlock* rightButtonGraphic; // 0x428
    UHorizontalBox* rightHanded; // 0x430
    UImage* spellSelectIcon; // 0x438
    UCanvasPanel* TopButton; // 0x440
    UPhoenixRichTextBlock* topButtonGraphic; // 0x448
    UImage* ActiveMiniBack; // 0x450
    UImage* ActiveMiniFill; // 0x458
    bool isFocusFXShowing; // 0x460
    char pad_461[0x7];
    TArray<UUI_BP_MiniSelectionDiamond_C*> MiniDiamondArray; // 0x468
    bool isRevelioAvailable; // 0x478
    char pad_479[0x7];
    static UUI_BP_ActionDiamondRing_C* StaticClass();
    void AdjustButtonGraphicsForSwitch(bool UseSwitchGraphics, bool Temp_bool_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, bool Temp_bool_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, bool Temp_bool_Variable_2, FString Temp_string_Variable_4, FString Temp_string_Variable_5, bool Temp_bool_Variable_3, FString Temp_string_Variable_6, FString Temp_string_Variable_7, FString K2Node_Select_Default, FString K2Node_Select_Default_1, FString K2Node_Select_Default_2, FString K2Node_Select_Default_3, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void ToggleRevelioSpellSelectionPrompts(bool InSouthpaw);
    void SetMiniDiamondElementsVisibility(int32_t GroupIndex, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_GetBonusSpellLoadouts_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SetActionRingVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void SetSpellSelectionVisibility(bool IgnoreLocks, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void ToggleMiniDiamondPrompts(bool InSouthpaw);
    void HideDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void ShowDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SetButtonVisibility(UWidget* Button, bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetShouldShowButtonGraphics_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void SetRevelioVisibility(bool IgnoreLocks, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void UpdateBackAndFill(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void UpdateMiniDiamond0(int32_t GroupIndex);
    void Construct();
    void ShowButtonCallouts0(bool Show);
    void NewDiamondSelected0();
    void PassiveSpellLockChanged(UObject* Caller, FLockManagerLock& Lock);
    void ShowMiniDiamond0();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature();
    void OnShowButtonsChanged0(bool Show);
    void Settings_SouthpawToggled(UObject* Caller, int32_t int);
    void OnHideHUDElement0(ESlateVisibility HiddenState);
    void OnShowHUDElement0(bool IgnoreLocks);
    void EnableAllSpellsChanged(UObject* Caller, int32_t int);
    void MenuSpellSelectionLockChanged(UObject* Caller, FLockManagerLock& Lock);
    void LockedDiamondSelected(UObject* Caller, int32_t int);
    void BeginChannelingWingardiumLeviosa(UObject* Caller);
    void EndChannelingWidgardiumLeviosa(UObject* Caller);
    void RefreshButtonCallouts(UObject* Caller);
    void ExecuteUbergraph_UI_BP_ActionDiamondRing(int32_t EntryPoint);
}; // Size: 0x480
#pragma pack(pop)
