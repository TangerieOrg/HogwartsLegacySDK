#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UPhoenixImage;
class UImage;
class UPhoenixTextBlock;
class UUI_BP_SelectedBox_C;
class UButton;
class UMaterialInstanceDynamic;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_GenderTextButton_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnButtonDeselected; // 0x330
    UWidgetAnimation* OnButtonSelected; // 0x338
    UWidgetAnimation* OnHover; // 0x340
    UPhoenixImage* BackGorund; // 0x348
    UImage* buttonSmoke; // 0x350
    UImage* FlareBack; // 0x358
    UImage* Frame; // 0x360
    UImage* Glitter; // 0x368
    UImage* Glitter2; // 0x370
    UUI_BP_SelectedBox_C* selectedBox; // 0x378
    UButton* TheButton; // 0x380
    UPhoenixTextBlock* TheText; // 0x388
    char pad_390[0x30];
    FString ButtonText; // 0x3c0
    bool IsActive; // 0x3d0
    bool Hovered; // 0x3d1
    char pad_3d2[0x6];
    UMaterialInstanceDynamic* SmokeMaterial; // 0x3d8
    float UTiling; // 0x3e0
    char pad_3e4[0x4];
    static UUI_BP_GenderTextButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetIsSelected(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void SetButtonText(FString ButtonText);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_GenderTextButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, FSlateBrush K2Node_MakeStruct_SlateBrush, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
}; // Size: 0x3e8
#pragma pack(pop)
