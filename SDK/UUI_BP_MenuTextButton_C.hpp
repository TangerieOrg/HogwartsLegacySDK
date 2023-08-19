#pragma once
#include <cstdint>
#include "ETextJustify\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixImage;
class UButton;
class UImage;
class UPhoenixTextBlock;
class UUI_BP_SelectedBox_C;
#pragma pack(push, 1)
class UUI_BP_MenuTextButton_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ShowSparkles; // 0x330
    UWidgetAnimation* OnTextButtonDeselected; // 0x338
    UWidgetAnimation* OnTextButtonSelected; // 0x340
    UWidgetAnimation* OnTextButtonHovered; // 0x348
    UPhoenixImage* BackGorund; // 0x350
    UImage* Border; // 0x358
    UImage* goldleafL; // 0x360
    UImage* goldleafR; // 0x368
    UButton* TheButton; // 0x370
    UPhoenixTextBlock* TheText; // 0x378
    UUI_BP_SelectedBox_C* UI_BP_SelectedBox; // 0x380
    char pad_388[0x30];
    FString ButtonText; // 0x3b8
    ETextJustify::Type ButtonTextJustification; // 0x3c8
    bool IsButtonSelected; // 0x3c9
    bool TranslateButtonText; // 0x3ca
    char pad_3cb[0x5];
    static UUI_BP_MenuTextButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void HandleUnhovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighjlight, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void HandleHovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighlight, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void SetButtonState(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void Hovered(bool CurrentlyHovered);
    void SetButtonText(FString ButtonText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_MenuTextButton(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
}; // Size: 0x3d0
#pragma pack(pop)
