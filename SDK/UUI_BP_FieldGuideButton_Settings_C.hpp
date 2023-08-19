#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UFieldGuideButtonBase.hpp"
#include "UI_E_FieldGuideLabelPositions\Type.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixTextBlock;
class UHorizontalBox;
class UBorder;
class UTutorialSystem;
#pragma pack(push, 1)
class UUI_BP_FieldGuideButton_Settings_C : public UFieldGuideButtonBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4b0
    UWidgetAnimation* RotateGearAnimation; // 0x4b8
    UWidgetAnimation* HideHighlight; // 0x4c0
    UWidgetAnimation* TutorialBounce; // 0x4c8
    UWidgetAnimation* ShowHighlight; // 0x4d0
    UImage* ButtonBackground; // 0x4d8
    UImage* buttonImage; // 0x4e0
    UPhoenixTextBlock* CategoryLabel; // 0x4e8
    UHorizontalBox* Root; // 0x4f0
    UBorder* TutorialHighlight; // 0x4f8
    FString CategoryLabelText; // 0x500
    UI_E_FieldGuideLabelPositions::Type LabelPosition; // 0x510
    char pad_511[0x7];
    FString buttonIcon; // 0x518
    float GearAnimationFrame; // 0x528
    char pad_52c[0x4];
    static UUI_BP_FieldGuideButton_Settings_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Settings_1();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Settings_0();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void PauseButtonLoopAnimation(float CallFunc_PauseAnimation_ReturnValue);
    void Play_Button_Loop_Animation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void ExecuteUbergraph_UI_BP_FieldGuideButton_Settings(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool K2Node_Event_bIsTutorialHighlighted, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue);
}; // Size: 0x530
#pragma pack(pop)
