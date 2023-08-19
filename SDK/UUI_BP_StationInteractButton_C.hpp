#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UTextButtonWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixRichTextBlock;
class UBorder;
class UImage;
#pragma pack(push, 1)
class UUI_BP_StationInteractButton_C : public UTextButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3e8
    UWidgetAnimation* OnUnhovered; // 0x3f0
    UWidgetAnimation* OnHovered; // 0x3f8
    UPhoenixRichTextBlock* ButtonCalloutText; // 0x400
    UPhoenixRichTextBlock* DisplayText; // 0x408
    UBorder* textBorder; // 0x410
    UImage* typeIcon; // 0x418
    char pad_420[0x18];
    FString Namespace_0; // 0x438
    int32_t FontSize; // 0x448
    char pad_44c[0x4];
    FSlateColor TextButtonHoveredTextColor; // 0x450
    FSlateColor TextButtonUnhoveredTextColor; // 0x478
    float TextWidth; // 0x4a0
    char pad_4a4[0xa4];
    bool isOptionAvailable; // 0x548
    char pad_549[0x3];
    FLinearColor OptionColor; // 0x54c
    char pad_55c[0x14];
    static UUI_BP_StationInteractButton_C* StaticClass();
    void ToggleActive(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue_1);
    void SetTypeIcon(FString Type, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1);
    void ScaleButton(bool IsHoveredOver);
    void Construct();
    void BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_StationInteractButton(int32_t EntryPoint);
    void OnStationButtonSelected__DelegateSignature(UUI_BP_StationInteractButton_C* SelectedOption);
}; // Size: 0x570
#pragma pack(pop)
