#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixImage;
class UButton;
class UImage;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_SettingsCheckboxButton_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ToggleOn; // 0x330
    UWidgetAnimation* OnHover; // 0x338
    UPhoenixImage* BackGorund; // 0x340
    UImage* goldleafBorder; // 0x348
    UImage* goldleafLeft; // 0x350
    UImage* goldleafRigth; // 0x358
    UPhoenixTextBlock* onOffText; // 0x360
    UButton* TheButton; // 0x368
    UPhoenixTextBlock* TheText; // 0x370
    FString ButtonText; // 0x378
    bool isCheckmarkChecked; // 0x388
    char pad_389[0x37];
    static UUI_BP_SettingsCheckboxButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetCheckmarkState(bool IsChecked, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void ToggleCheckmark(bool& IsChecked, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void SetButtonText(FString ButtonText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_SettingsCheckboxButton(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_ToggleCheckmark_isChecked, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button);
    void ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button);
    void SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button);
}; // Size: 0x3c0
#pragma pack(pop)
