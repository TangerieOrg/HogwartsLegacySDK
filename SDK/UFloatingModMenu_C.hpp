#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UVerticalBox;
class UScrollBox;
class UButton;
class UTextBlock;
class UImage;
class UCanvasPanel;
class UEditableText;
class UModloaderChildWidget_C;
class UFloatingModMenuModEntry_C;
class UPanelSlot;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UFloatingModMenu_C : public UUserWidget {
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
    UVerticalBox* ScrollBoxVerticalBox; // 0x2b0
    UEditableText* textBox; // 0x2b8
    UButton* TopWindowButton; // 0x2c0
    FVector2D MousePosition; // 0x2c8
    FVector2D DeltaPosition; // 0x2d0
    bool Minimized_; // 0x2d8
    char pad_2d9[0x3];
    FVector2D MaximizedScale; // 0x2dc
    FVector Location; // 0x2e4
    FRotator Rotation; // 0x2f0
    char pad_2fc[0x4];
    UModloaderChildWidget_C* ChildWidget; // 0x300
    float MinimumX; // 0x308
    float MinimumY; // 0x30c
    FKey MenuKey; // 0x310
    bool LoadSuccess; // 0x328
    char pad_329[0x57];
    static UFloatingModMenu_C* StaticClass();
    void AddChildFunc(FString Mod, UFloatingModMenuModEntry_C* CallFunc_Create_ReturnValue, UFloatingModMenuModEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void PrintToModLoader(FString Message);
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
    void LoadEvent();
    void ShowEvent();
    void KeyboardFocusEvent();
    void BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature();
    void Destruct0();
    void VisibilityToggleEvent();
    void OnModUnloaded(FString Mod);
    void OnModLoaded(FString Mod);
    void ExecuteUbergraph_FloatingModMenu(int32_t EntryPoint, FString K2Node_CustomEvent_Mod, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetPosition_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, FVector2D CallFunc_GetSize_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, FVector2D CallFunc_GetSize_ReturnValue_1, FVector2D CallFunc_GetPosition_ReturnValue_1, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_2, FVector2D CallFunc_GetSize_ReturnValue_2, FVector2D CallFunc_GetPosition_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_3, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_2, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FString K2Node_CustomEvent_Message, ESlateVisibility Temp_byte_Variable);
}; // Size: 0x380
#pragma pack(pop)
