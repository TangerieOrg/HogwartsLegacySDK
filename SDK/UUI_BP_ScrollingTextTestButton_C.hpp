#pragma once
#include <cstdint>
#include "ETextJustify\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UUI_BP_ScrollingTextBlock_C;
class UButton;
class UUI_BP_MenuTextButton_C;
#pragma pack(push, 1)
class UUI_BP_ScrollingTextTestButton_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* OnTextButtonDeselected; // 0x270
    UWidgetAnimation* OnTextButtonSelected; // 0x278
    UWidgetAnimation* OnTextButtonUnhovered; // 0x280
    UWidgetAnimation* OnTextButtonHovered; // 0x288
    UImage* goldleafBorder; // 0x290
    UUI_BP_ScrollingTextBlock_C* scrollingText; // 0x298
    UImage* selected; // 0x2a0
    UButton* TheButton; // 0x2a8
    char pad_2b0[0x30];
    FString ButtonText; // 0x2e0
    ETextJustify::Type ButtonTextJustification; // 0x2f0
    bool IsButtonSelected; // 0x2f1
    char pad_2f2[0x6];
    static UUI_BP_ScrollingTextTestButton_C* StaticClass();
    void HandleUnhovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighjlight, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void HandleHovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighlight, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void SetButtonState(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void Hovered(bool CurrentlyHovered);
    void SetButtonText(FString ButtonText);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_ScrollingTextTestButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime);
    void ScrollingTextButtonUnhovered__DelegateSignature(UUI_BP_ScrollingTextTestButton_C* Button);
    void ScrollingTextButtonHovered__DelegateSignature(UUI_BP_ScrollingTextTestButton_C* Button);
    void ScrollingTextButtonClicked__DelegateSignature(UUI_BP_ScrollingTextTestButton_C* Button);
}; // Size: 0x2f8
#pragma pack(pop)
