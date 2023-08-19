#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixRichTextBlock;
class UButton;
#pragma pack(push, 1)
class UUI_BP_InputAxis_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnInputAxisSelected; // 0x330
    UWidgetAnimation* OnInputAxisHovered; // 0x338
    UImage* buttonBack; // 0x340
    UImage* goldleafBorder; // 0x348
    UImage* highlight; // 0x350
    UPhoenixRichTextBlock* KBTextBlock; // 0x358
    UButton* KeyboardButton; // 0x360
    UImage* LockedIcon; // 0x368
    FString DisplayActionName; // 0x370
    FInputAxisKeyMapping KeyboardKey; // 0x380
    char pad_3b8[0x10];
    FString RealActionName; // 0x3c8
    FName AxisName; // 0x3d8
    bool IsPrimary; // 0x3e0
    char pad_3e1[0x3];
    FName GroupName; // 0x3e4
    bool IsLocked; // 0x3ec
    char pad_3ed[0x23];
    static UUI_BP_InputAxis_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void SetRebindingFlair(bool IsRebinding, FLinearColor HighlightColor, FLinearColor DefaultColor, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void SetKeyboardKey(FInputAxisKeyMapping Key, bool IsPrimary, bool IsLocked, FInputAxisKeyMapping NewLocalVar_0, bool CallFunc_IsAxisKeyValid_ReturnValue, FString CallFunc_KeyToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_InputAxis(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void KeyboardButtonUnhovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis);
    void KeyboardButtonHovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis);
    void KeyboardButtonClicked__DelegateSignature(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis);
}; // Size: 0x410
#pragma pack(pop)
