#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFieldGuideButton_Gear.hpp"
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
class UUI_BP_FieldGuideButton_Gear_C : public UFieldGuideButton_Gear {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4c0
    UWidgetAnimation* HideHighlight; // 0x4c8
    UWidgetAnimation* HatSwapAnimation; // 0x4d0
    UWidgetAnimation* TutorialBounce; // 0x4d8
    UWidgetAnimation* ShowHighlight; // 0x4e0
    UImage* ButtonBackground; // 0x4e8
    UImage* buttonImage; // 0x4f0
    UPhoenixTextBlock* CategoryLabel; // 0x4f8
    UImage* endingHat; // 0x500
    UBorder* iconBorder; // 0x508
    UCanvasPanel* LabelPanel; // 0x510
    UUI_BP_NewIndicator_C* newIndicator; // 0x518
    UImage* NewItemIcon; // 0x520
    UHorizontalBox* Root; // 0x528
    UImage* startingHat; // 0x530
    UBorder* TutorialHighlight; // 0x538
    FString CategoryLabelText; // 0x540
    UI_E_FieldGuideLabelPositions::Type LabelPosition; // 0x550
    char pad_551[0x7];
    FString buttonIcon; // 0x558
    static UUI_BP_FieldGuideButton_Gear_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Gear_0();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void Play_Button_Loop_Animation(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void Construct();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void OnSetItemIndicatorVisibility(ESlateVisibility InVisibility);
    void SetLockedState(bool IsLocked);
    void PreConstruct(bool IsDesignTime);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void ExecuteUbergraph_UI_BP_FieldGuideButton_Gear(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, ESlateVisibility K2Node_Event_InVisibility, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsLocked, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsTutorialHighlighted, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue);
}; // Size: 0x568
#pragma pack(pop)
