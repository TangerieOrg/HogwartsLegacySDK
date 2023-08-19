#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixImage;
class UButton;
class UBorder;
class UPhoenixTextBlock;
class UMapSubSystem;
#pragma pack(push, 1)
class UUI_BP_FastTravelButton_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnTextButtonDeselected; // 0x330
    UWidgetAnimation* OnTextButtonSelected; // 0x338
    UWidgetAnimation* OnTextButtonHovered; // 0x340
    UPhoenixImage* fastTravelIcon; // 0x348
    UBorder* textBorder; // 0x350
    UButton* TheButton; // 0x358
    UPhoenixTextBlock* TheText; // 0x360
    char pad_368[0x30];
    FString ButtonText; // 0x398
    bool IsButtonSelected; // 0x3a8
    char pad_3a9[0x27];
    bool IsLocked; // 0x3d0
    char pad_3d1[0x7];
    static UUI_BP_FastTravelButton_C* StaticClass();
    void Set_Unlocked(UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FLinearColor CallFunc_GetIconColorByState_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor);
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void HandleUnhovered(UUI_BP_FastTravelButton_C* Button, bool JustChangeHighjlight, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void HandleHovered(UUI_BP_FastTravelButton_C* Button, bool JustChangeHighlight, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SetButtonState(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void Hovered(bool CurrentlyHovered);
    void SetButtonText(FString ButtonText);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExpandAnimationComplete();
    void CollapseAnimationComplete();
    void ExecuteUbergraph_UI_BP_FastTravelButton(int32_t EntryPoint, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1);
    void CollapseComplete__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
    void ExpandComplete__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
    void FastTravelButtonUnhovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
    void FastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
    void FastTravelButtonClicked__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
}; // Size: 0x3d8
#pragma pack(pop)
