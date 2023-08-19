#pragma once
#include <cstdint>
#include "ETextJustify\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UImage;
class UPhoenixTextBlock;
class UButton;
class UMaterialInstanceDynamic;
class UUMGSequencePlayer;
class UUI_BP_MenuTextButton_C;
#pragma pack(push, 1)
class UUI_BP_MenuFinalized_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnTextButtonHoveredActive; // 0x330
    UWidgetAnimation* OnTextButtonActive; // 0x338
    UWidgetAnimation* OnTextButtonSelected; // 0x340
    UWidgetAnimation* OnTextButtonHovered; // 0x348
    UImage* Burst; // 0x350
    UImage* buttonBack; // 0x358
    UImage* detailsPanelVortex; // 0x360
    UImage* detailsPanelVortex_0; // 0x368
    UImage* detailsPanelVortex_1; // 0x370
    UImage* detailsPanelVortex_2; // 0x378
    UImage* Glitter; // 0x380
    UButton* TheButton; // 0x388
    UPhoenixTextBlock* TheText; // 0x390
    char pad_398[0x30];
    FString ButtonText; // 0x3c8
    ETextJustify::Type ButtonTextJustification; // 0x3d8
    bool IsButtonSelected; // 0x3d9
    bool TranslateButtonText; // 0x3da
    bool IsActive; // 0x3db
    char pad_3dc[0x4];
    static UUI_BP_MenuFinalized_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void PlayFinalizedAnim(bool& NewParam, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetActivate(bool Activate, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void HandleUnhovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighjlight, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void HandleHovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighlight, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void SetButtonState(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void Hovered(bool CurrentlyHovered, bool CallFunc_BooleanAND_ReturnValue);
    void SetButtonText(FString ButtonText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_MenuFinalized(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button);
    void MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button);
    void MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuFinalized_C* Button);
}; // Size: 0x3e0
#pragma pack(pop)
