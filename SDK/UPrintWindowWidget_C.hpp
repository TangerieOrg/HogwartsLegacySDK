#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UButton;
class UScrollBox;
class UMultiLineEditableText;
class UTextBlock;
class UImage;
class UCanvasPanel;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UPrintWindowWidget_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UButton* CloseButton; // 0x270
    UTextBlock* CloseText; // 0x278
    UImage* Color; // 0x280
    UCanvasPanel* MainCanvas; // 0x288
    UScrollBox* MainScrollBox; // 0x290
    UButton* MinimizeButton; // 0x298
    UTextBlock* MinimizeText; // 0x2a0
    UButton* ScalingButton; // 0x2a8
    UMultiLineEditableText* textBox; // 0x2b0
    UImage* TopBackground; // 0x2b8
    UButton* TopWindowButton; // 0x2c0
    FVector2D MousePosition; // 0x2c8
    FVector2D DeltaPosition; // 0x2d0
    bool Minimized_; // 0x2d8
    char pad_2d9[0x3];
    FVector2D MaximizedScale; // 0x2dc
    char pad_2e4[0x4];
    static UPrintWindowWidget_C* StaticClass();
    void PrintText(FString TextToAdd);
    void StopPositionTimer();
    void StartPositionTimer();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature();
    void StopScalingTimer();
    void StartScalingTimer();
    void BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Tick0(FGeometry MyGeometry, float InDeltaTime);
    void Construct0();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_PrintWindowWidget(int32_t EntryPoint, bool Temp_bool_Variable, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1);
}; // Size: 0x2e8
#pragma pack(pop)
