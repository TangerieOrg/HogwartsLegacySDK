#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UNamedSlot.hpp"
#include "UParallaxWidget.hpp"
#include "UUI_BP_ParallaxWidget_C.hpp"
UUI_BP_ParallaxWidget_C* UUI_BP_ParallaxWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_ParallaxWidget.UI_BP_ParallaxWidget_C");
    return (UUI_BP_ParallaxWidget_C*)res;
}
void UUI_BP_ParallaxWidget_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ParallaxWidget.UI_BP_ParallaxWidget_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ParallaxWidget_C::ExecuteUbergraph_UI_BP_ParallaxWidget(int32_t EntryPoint, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_ParallaxWidget.UI_BP_ParallaxWidget_C.ExecuteUbergraph_UI_BP_ParallaxWidget"));
    struct Params_ExecuteUbergraph_UI_BP_ParallaxWidget {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x8
        FGeometry K2Node_Event_MyGeometry; // 0x10
        float K2Node_Event_InDeltaTime; // 0x48
    }; // Size: 0x4c
    Params_ExecuteUbergraph_UI_BP_ParallaxWidget params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    ProcessEvent(func, &params);
}
