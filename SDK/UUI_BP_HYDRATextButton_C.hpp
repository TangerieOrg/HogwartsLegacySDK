#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UPhoenixImage;
class UImage;
class UButton;
class UPhoenixRichTextBlock;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_HYDRATextButton_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnHover; // 0x330
    UPhoenixImage* BackGorund; // 0x338
    UImage* FlareBack; // 0x340
    UButton* TheButton; // 0x348
    UPhoenixRichTextBlock* TheText; // 0x350
    char pad_358[0x30];
    FString ButtonText; // 0x388
    static UUI_BP_HYDRATextButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void Hovered(bool CurrentlyHovered);
    void SetButtonText(FString ButtonText);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_HYDRATextButton(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void HYDRATextButtonUnhovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
}; // Size: 0x398
#pragma pack(pop)
