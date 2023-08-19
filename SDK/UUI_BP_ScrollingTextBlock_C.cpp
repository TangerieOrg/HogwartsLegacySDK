#include "FGeometry.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UScrollingTextWidget.hpp"
#include "UUI_BP_ScrollingTextBlock_C.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_ScrollingTextBlock_C* UUI_BP_ScrollingTextBlock_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Widgets/UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C");
    return (UUI_BP_ScrollingTextBlock_C*)res;
}
void UUI_BP_ScrollingTextBlock_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextBlock_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextBlock_C::OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.OnMouseEnter"));
    struct Params_OnMouseEnter {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
    }; // Size: 0xa8
    Params_OnMouseEnter params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_ScrollingTextBlock_C::ExecuteUbergraph_UI_BP_ScrollingTextBlock(int32_t EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FGeometry K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, FGeometry K2Node_Event_MyGeometry, FPointerEvent K2Node_Event_MouseEvent_1, FPointerEvent K2Node_Event_MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.ExecuteUbergraph_UI_BP_ScrollingTextBlock"));
    struct Params_ExecuteUbergraph_UI_BP_ScrollingTextBlock {
        int32_t EntryPoint; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x4
        char pad_5[0x3];
        FGeometry K2Node_Event_MyGeometry_1; // 0x8
        float K2Node_Event_InDeltaTime; // 0x40
        FGeometry K2Node_Event_MyGeometry; // 0x44
        char pad_7c[0x4];
        FPointerEvent K2Node_Event_MouseEvent_1; // 0x80
        FPointerEvent K2Node_Event_MouseEvent; // 0xf0
    }; // Size: 0x160
    Params_ExecuteUbergraph_UI_BP_ScrollingTextBlock params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.K2Node_Event_MyGeometry_1 = (FGeometry)K2Node_Event_MyGeometry_1;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_MouseEvent_1 = (FPointerEvent)K2Node_Event_MouseEvent_1;
    params.K2Node_Event_MouseEvent = (FPointerEvent)K2Node_Event_MouseEvent;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextBlock_C::OnMouseLeave(FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_ScrollingTextBlock.UI_BP_ScrollingTextBlock_C.OnMouseLeave"));
    struct Params_OnMouseLeave {
        FPointerEvent MouseEvent; // 0x0
    }; // Size: 0x70
    Params_OnMouseLeave params{};
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
