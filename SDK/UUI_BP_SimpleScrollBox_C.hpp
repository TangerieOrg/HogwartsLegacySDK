#pragma once
#include <cstdint>
#include "EDescendantScrollDestination.hpp"
#include "EOrientation.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FMargin.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FScrollBarStyle.hpp"
#include "FScrollBoxStyle.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UInvalidationBox;
class UNamedSlot;
class UItemScrollBox;
#pragma pack(push, 1)
class UUI_BP_SimpleScrollBox_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UInvalidationBox* ContentInvalidationBox; // 0x330
    UItemScrollBox* InternalScrollBox; // 0x338
    UNamedSlot* ScrollContent; // 0x340
    bool ComboBoxOpened; // 0x348
    char pad_349[0x3];
    float InputBuffer; // 0x34c
    char pad_350[0x10];
    FVector2D WindowSize; // 0x360
    float StickScrollStepSize; // 0x368
    char pad_36c[0x4];
    FScrollBoxStyle Style; // 0x370
    FScrollBarStyle BarStyle; // 0x598
    EOrientation Orientation; // 0xa68
    ESlateVisibility ScrollBarVisibility; // 0xa69
    char pad_a6a[0x2];
    FVector2D ScrollbarThickness; // 0xa6c
    FMargin ScrollbarPadding; // 0xa74
    bool AlwaysShowScrollbar; // 0xa84
    bool AlwaysShowScrollbarTrack; // 0xa85
    bool AllowOverscroll; // 0xa86
    bool AnimateWheelScrolling; // 0xa87
    EDescendantScrollDestination NavigationDestination; // 0xa88
    char pad_a89[0x3];
    float NavigationScrollPadding; // 0xa8c
    float WheelScrollMultiplier; // 0xa90
    char pad_a94[0x4];
    static UUI_BP_SimpleScrollBox_C* StaticClass();
    void SetCanCache(bool CanCache);
    void Set_Scrollbar_Thickness(FVector2D Thickness);
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    void BndEvt__InternalScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BlueprintConsolidatedUMGInputAxis(FUMGConsolidatedAxisInputData& AxisInputData);
    void OnMouseLeave(FPointerEvent& MouseEvent);
    void BlueprintFocusLost();
    void OnInitialized();
    void ExecuteUbergraph_UI_BP_SimpleScrollBox(int32_t EntryPoint, bool CallFunc_IsHovered_ReturnValue, FPointerEvent K2Node_Event_MouseEvent, FUMGConsolidatedAxisInputData K2Node_Event_AxisInputData, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_ComponentBoundEvent_CurrentOffset, FGeometry K2Node_Event_MyGeometry, FPointerEvent K2Node_Event_MouseEvent_1, bool K2Node_Event_IsDesignTime);
    void ScrollFocusLost__DelegateSignature();
}; // Size: 0xa98
#pragma pack(pop)
