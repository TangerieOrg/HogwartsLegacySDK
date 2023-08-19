#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UI_BP_OptionStateEnum\Type.hpp"
#include "UTextButtonWidget.hpp"
class UWidgetAnimation;
class UImage;
class UScaleBox;
class UPhoenixImage;
class UHorizontalBox;
class UPhoenixTextBlock;
class UPhoenixRichTextBlock;
class UBorder;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_InteractButton_C : public UTextButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3e8
    UWidgetAnimation* onHovered_Right; // 0x3f0
    UWidgetAnimation* OnSelected; // 0x3f8
    UWidgetAnimation* onUnselected; // 0x400
    UWidgetAnimation* OnHovered; // 0x408
    UScaleBox* bottomBracket; // 0x410
    UPhoenixImage* bottomBracketImage; // 0x418
    UImage* buttonShadow; // 0x420
    UPhoenixTextBlock* disabledText; // 0x428
    UPhoenixRichTextBlock* DisplayText; // 0x430
    UScaleBox* gradientBack; // 0x438
    UBorder* textBorder; // 0x440
    UHorizontalBox* TextHorizontalBox; // 0x448
    UScaleBox* topBracket; // 0x450
    UPhoenixImage* topBracketImage; // 0x458
    UImage* typeIcon; // 0x460
    char pad_468[0x18];
    FString Namespace_0; // 0x480
    int32_t FontSize; // 0x490
    char pad_494[0x4];
    FSlateColor TextButtonHoveredTextColor; // 0x498
    FSlateColor TextButtonUnhoveredTextColor; // 0x4c0
    char pad_4e8[0x10];
    float TextWidth; // 0x4f8
    char pad_4fc[0xc4];
    bool isOptionAvailable; // 0x5c0
    char pad_5c1[0x3];
    FLinearColor OptionColor; // 0x5c4
    bool currentlyActive; // 0x5d4
    char pad_5d5[0x3];
    static UUI_BP_InteractButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void SetDisabledText(FString Reason, bool CallFunc_NotEqual_StrStr_ReturnValue);
    void ToggleActive(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SetOptionState(UI_BP_OptionStateEnum::Type NewState, FLinearColor tempOptionColor, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetTypeIcon(FString Type, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void ScaleButton(bool IsHoveredOver);
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_UI_BP_InteractButton(int32_t EntryPoint);
    void OnButtonUnhoverDispatcher__DelegateSignature(UUI_BP_InteractButton_C* TextButton);
    void OnButtonHoverDispatcher__DelegateSignature(UUI_BP_InteractButton_C* TextButton);
    void OnClickEventDispatcher__DelegateSignature(UUI_BP_InteractButton_C* TextButton);
}; // Size: 0x5d8
#pragma pack(pop)
