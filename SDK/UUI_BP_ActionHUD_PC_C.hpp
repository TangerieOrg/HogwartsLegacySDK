#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActionDiamondRing.hpp"
class UWidgetAnimation;
class UUI_BP_ActionRingItem_C;
class UBorder;
class UPhoenixRichTextBlock;
class UUIManager;
class UUI_BP_ActionHUD_PC_MiniHUD_C;
class UHorizontalBox;
class UImage;
class ABiped_Player;
struct FLockManagerLock;
class UUMGSequencePlayer;
class UObject;
#pragma pack(push, 1)
class UUI_BP_ActionHUD_PC_C : public UActionDiamondRing {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x318
    UWidgetAnimation* hideFocusFX; // 0x320
    UWidgetAnimation* showFocusFX; // 0x328
    UWidgetAnimation* SwapGroupDown; // 0x330
    UWidgetAnimation* SwapGroupUp; // 0x338
    UBorder* actionHUD; // 0x340
    UUI_BP_ActionRingItem_C* actionItem_1; // 0x348
    UUI_BP_ActionRingItem_C* actionItem_2; // 0x350
    UUI_BP_ActionRingItem_C* actionItem_3; // 0x358
    UUI_BP_ActionRingItem_C* actionItem_4; // 0x360
    UPhoenixRichTextBlock* buttonGraphic_1; // 0x368
    UPhoenixRichTextBlock* buttonGraphic_2; // 0x370
    UPhoenixRichTextBlock* buttonGraphic_3; // 0x378
    UPhoenixRichTextBlock* buttonGraphic_4; // 0x380
    UUI_BP_ActionHUD_PC_MiniHUD_C* groupNotification; // 0x388
    UPhoenixRichTextBlock* PhoenixRichTextBlock; // 0x390
    UPhoenixRichTextBlock* PhoenixRichTextBlock_68; // 0x398
    UHorizontalBox* revelioCallout; // 0x3a0
    UHorizontalBox* SpellSelectHorizontalBox; // 0x3a8
    UImage* ActiveMiniBack; // 0x3b0
    UImage* ActiveMiniFill; // 0x3b8
    bool isFocusFXShowing; // 0x3c0
    char pad_3c1[0x7];
    static UUI_BP_ActionHUD_PC_C* StaticClass();
    void SetGroupNotificationVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_GetBonusSpellLoadouts_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void SetSpellSelectionVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void SetActionBarVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void HideDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void ShowDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SetButtonVisibility(UPhoenixRichTextBlock* Button, bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetShouldShowButtonGraphics_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void SetRevelioVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void UpdateMiniDiamond0(int32_t GroupIndex);
    void NewDiamondSelected0();
    void PassiveSpellLockChanged(UObject* Caller, FLockManagerLock& Lock);
    void ShowMiniDiamond0();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature();
    void BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature();
    void OnShowButtonsChanged0(bool Show);
    void OnShowHUDElement0(bool IgnoreLocks);
    void OnHideHUDElement0(ESlateVisibility HiddenState);
    void EnableAllSpellsChanged(UObject* Caller, int32_t int);
    void MenuSpellSelectionLockChanged(UObject* Caller, FLockManagerLock& Lock);
    void ExecuteUbergraph_UI_BP_ActionHUD_PC(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable);
}; // Size: 0x3c8
#pragma pack(pop)
