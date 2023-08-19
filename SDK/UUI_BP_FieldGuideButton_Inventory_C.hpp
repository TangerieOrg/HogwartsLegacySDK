#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFieldGuideButton_Inventory.hpp"
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
class UUI_BP_FieldGuideButton_Inventory_C : public UFieldGuideButton_Inventory {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4c0
    UWidgetAnimation* HideHighlight; // 0x4c8
    UWidgetAnimation* TutorialBounce; // 0x4d0
    UWidgetAnimation* ShowHighlight; // 0x4d8
    UImage* ButtonBackground; // 0x4e0
    UImage* buttonImage; // 0x4e8
    UPhoenixTextBlock* CategoryLabel; // 0x4f0
    UBorder* iconBorder; // 0x4f8
    UCanvasPanel* LabelPanel; // 0x500
    UUI_BP_NewIndicator_C* newIndicator; // 0x508
    UHorizontalBox* Root; // 0x510
    UBorder* TutorialHighlight; // 0x518
    FString CategoryLabelText; // 0x520
    UI_E_FieldGuideLabelPositions::Type LabelPosition; // 0x530
    char pad_531[0x7];
    FString buttonIcon; // 0x538
    static UUI_BP_FieldGuideButton_Inventory_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Inventory_0();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void Play_Button_Loop_Animation();
    void Construct();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void OnSetItemIndicatorVisibility(ESlateVisibility InVisibility);
    void SetLockedState(bool IsLocked);
    void PreConstruct(bool IsDesignTime);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void ExecuteUbergraph_UI_BP_FieldGuideButton_Inventory(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Event_InVisibility, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsLocked, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsTutorialHighlighted, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue);
}; // Size: 0x548
#pragma pack(pop)
