#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFieldGuideButtonBase.hpp"
#include "UI_E_FieldGuideLabelPositions\Type.hpp"
class UUMGSequencePlayer;
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UHorizontalBox;
class UPhoenixTextBlock;
class UBorder;
class UUIManager;
class UTutorialSystem;
class UMapSubSystem;
#pragma pack(push, 1)
class UUI_BP_FieldGuideButton_Map_C : public UFieldGuideButtonBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4b0
    UWidgetAnimation* LoopingAnimation; // 0x4b8
    UWidgetAnimation* HideHighlight; // 0x4c0
    UWidgetAnimation* TutorialBounce; // 0x4c8
    UWidgetAnimation* ShowHighlight; // 0x4d0
    UImage* ButtonBackground; // 0x4d8
    UImage* buttonImage; // 0x4e0
    UPhoenixTextBlock* CategoryLabel; // 0x4e8
    UBorder* iconBorder; // 0x4f0
    UCanvasPanel* LabelPanel; // 0x4f8
    UPhoenixTextBlock* MapNotAvailableLabel; // 0x500
    UHorizontalBox* Root; // 0x508
    UBorder* TutorialHighlight; // 0x510
    FString CategoryLabelText; // 0x518
    UI_E_FieldGuideLabelPositions::Type LabelPosition; // 0x528
    char pad_529[0x7];
    FString buttonIcon; // 0x530
    float GearAnimationFrame; // 0x540
    char pad_544[0x4];
    static UUI_BP_FieldGuideButton_Map_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_1();
    void SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_0();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void PauseButtonLoopAnimation(float CallFunc_PauseAnimation_ReturnValue);
    void Play_Button_Loop_Animation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void SetLockedState(bool IsLocked);
    void PreConstruct(bool IsDesignTime);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void ExecuteUbergraph_UI_BP_FieldGuideButton_Map(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, bool CallFunc_IsDungeon_ReturnValue, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_IsLocked, float K2Node_Select_Default_2, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsTutorialHighlighted, UTutorialSystem* CallFunc_Get_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue);
}; // Size: 0x548
#pragma pack(pop)
