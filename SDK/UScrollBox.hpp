#pragma once
#include <cstdint>
#include "EConsumeMouseWheel.hpp"
#include "EDescendantScrollDestination.hpp"
#include "EOrientation.hpp"
#include "EScrollWhenFocusChanges.hpp"
#include "ESlateVisibility.hpp"
#include "FMargin.hpp"
#include "FScrollBarStyle.hpp"
#include "FScrollBoxStyle.hpp"
#include "FVector2D.hpp"
#include "UPanelWidget.hpp"
class USlateWidgetStyleAsset;
class UWidget;
#pragma pack(push, 1)
class UScrollBox : public UPanelWidget {
public:
    FScrollBoxStyle WidgetStyle; // 0x120
    FScrollBarStyle WidgetBarStyle; // 0x348
    USlateWidgetStyleAsset* Style; // 0x818
    USlateWidgetStyleAsset* BarStyle; // 0x820
    EOrientation Orientation; // 0x828
    ESlateVisibility ScrollBarVisibility; // 0x829
    EConsumeMouseWheel ConsumeMouseWheel; // 0x82a
    char pad_82b[0x1];
    FVector2D ScrollbarThickness; // 0x82c
    FMargin ScrollbarPadding; // 0x834
    bool AlwaysShowScrollbar; // 0x844
    bool AlwaysShowScrollbarTrack; // 0x845
    bool AllowOverscroll; // 0x846
    bool bAnimateWheelScrolling; // 0x847
    EDescendantScrollDestination NavigationDestination; // 0x848
    char pad_849[0x3];
    float NavigationScrollPadding; // 0x84c
    EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850
    bool bAllowRightClickDragScrolling; // 0x851
    char pad_852[0x2];
    float WheelScrollMultiplier; // 0x854
    char pad_858[0x28];
    static UScrollBox* StaticClass();
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);
    void SetScrollOffset(float NewScrollOffset);
    void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
    void SetScrollbarThickness(FVector2D& NewScrollbarThickness);
    void SetScrollbarPadding(FMargin& NewScrollbarPadding);
    void SetOrientation(EOrientation NewOrientation);
    void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
    void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    void SetAllowOverscroll(bool NewAllowOverscroll);
    void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
    void ScrollToStart();
    void ScrollToEnd();
    float GetViewOffsetFraction();
    float GetScrollOffsetOfEnd();
    float GetScrollOffset();
    void EndInertialScrolling();
}; // Size: 0x880
#pragma pack(pop)
