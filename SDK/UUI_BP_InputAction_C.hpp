#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixRichTextBlock;
class UButton;
#pragma pack(push, 1)
class UUI_BP_InputAction_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnInputActionSelected; // 0x330
    UWidgetAnimation* OnInputActionHovered; // 0x338
    UImage* buttonBack; // 0x340
    UImage* goldleafBorder; // 0x348
    UImage* highlight; // 0x350
    UPhoenixRichTextBlock* KBTextBlock; // 0x358
    UButton* KeyboardButton; // 0x360
    UImage* LockedIcon; // 0x368
    FName ActionName; // 0x370
    FInputActionKeyMapping KeyboardKey; // 0x378
    char pad_3b0[0x10];
    bool IsPrimary; // 0x3c0
    char pad_3c1[0x3];
    FName GroupName; // 0x3c4
    bool IsLocked; // 0x3cc
    char pad_3cd[0x23];
    static UUI_BP_InputAction_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void SetKeyboardKey(FInputActionKeyMapping Key, bool IsPrimary, bool IsLocked, bool CallFunc_IsActionKeyValid_ReturnValue, FString CallFunc_KeyToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_InputAction(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void KeyboardButtonUnhovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAction_C* InputAction);
    void KeyboardButtonHovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAction_C* InputAction);
    void KeyboardButtonClicked__DelegateSignature(bool IsPrimary, UUI_BP_InputAction_C* InputAction);
}; // Size: 0x3f0
#pragma pack(pop)
