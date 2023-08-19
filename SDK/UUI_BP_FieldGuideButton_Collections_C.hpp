#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFieldGuideButton_Collections.hpp"
#include "UI_E_FieldGuideLabelPositions\Type.hpp"
class UUMGSequencePlayer;
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UHorizontalBox;
class UPhoenixTextBlock;
class UUI_BP_NewIndicator_C;
class UBorder;
class UTutorialSystem;
#pragma pack(push, 1)
class UUI_BP_FieldGuideButton_Collections_C : public UFieldGuideButton_Collections {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4c0
    UWidgetAnimation* LoopingAnimation; // 0x4c8
    UWidgetAnimation* HideHighlight; // 0x4d0
    UWidgetAnimation* TutorialBounce; // 0x4d8
    UWidgetAnimation* ShowHighlight; // 0x4e0
    UImage* ButtonBackground; // 0x4e8
    UImage* buttonImage; // 0x4f0
    UPhoenixTextBlock* CategoryLabel; // 0x4f8
    UBorder* iconBorder; // 0x500
    UCanvasPanel* LabelPanel; // 0x508
    UUI_BP_NewIndicator_C* newIndicator; // 0x510
    UHorizontalBox* Root; // 0x518
    UBorder* TutorialHighlight; // 0x520
    FString CategoryLabelText; // 0x528
    UI_E_FieldGuideLabelPositions::Type LabelPosition; // 0x538
    char pad_539[0x7];
    FString buttonIcon; // 0x540
    float GearAnimationFrame; // 0x550
    char pad_554[0x4];
    static UUI_BP_FieldGuideButton_Collections_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Collections_1();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Collections_0();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void PauseButtonLoopAnimation(float CallFunc_PauseAnimation_ReturnValue);
    void Play_Button_Loop_Animation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void OnSetItemIndicatorVisibility(ESlateVisibility InVisibility);
    void SetLockedState(bool IsLocked);
    void PreConstruct(bool IsDesignTime);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void ExecuteUbergraph_UI_BP_FieldGuideButton_Collections(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Event_InVisibility, bool K2Node_Event_IsLocked, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsTutorialHighlighted, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue);
}; // Size: 0x558
#pragma pack(pop)
