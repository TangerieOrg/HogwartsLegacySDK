#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UScrollingTextWidget.hpp"
class UWidgetAnimation;
#pragma pack(push, 1)
class UUI_BP_ScrollingTextBlock_C : public UScrollingTextWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x400
    UWidgetAnimation* ScrollingTextAnimation; // 0x408
    static UUI_BP_ScrollingTextBlock_C* StaticClass();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);
    void OnMouseLeave(FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_BP_ScrollingTextBlock(int32_t EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FGeometry K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, FGeometry K2Node_Event_MyGeometry, FPointerEvent K2Node_Event_MouseEvent_1, FPointerEvent K2Node_Event_MouseEvent);
}; // Size: 0x410
#pragma pack(pop)
