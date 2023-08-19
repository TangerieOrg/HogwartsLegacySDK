#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUI_BP_BaseCursor_C.hpp"
#include "UUI_BP_MenuCursor_C.hpp"
UUI_BP_MenuCursor_C* UUI_BP_MenuCursor_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/MenuCursor/UI_BP_MenuCursor.UI_BP_MenuCursor_C");
    return (UUI_BP_MenuCursor_C*)res;
}
void UUI_BP_MenuCursor_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_MenuCursor.UI_BP_MenuCursor_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MenuCursor_C::Tick0(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_MenuCursor.UI_BP_MenuCursor_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuCursor_C::ExecuteUbergraph_UI_BP_MenuCursor(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_MenuCursor.UI_BP_MenuCursor_C.ExecuteUbergraph_UI_BP_MenuCursor"));
    struct Params_ExecuteUbergraph_UI_BP_MenuCursor {
        int32_t EntryPoint; // 0x0
        FGeometry K2Node_Event_MyGeometry; // 0x4
        float K2Node_Event_InDeltaTime; // 0x3c
    }; // Size: 0x40
    Params_ExecuteUbergraph_UI_BP_MenuCursor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    ProcessEvent(func, &params);
}
