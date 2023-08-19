#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCameraAspectRatioWidget.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUI_BP_AspectRatioWidget_C.hpp"
UUI_BP_AspectRatioWidget_C* UUI_BP_AspectRatioWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/Data/Camera/UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C");
    return (UUI_BP_AspectRatioWidget_C*)res;
}
void UUI_BP_AspectRatioWidget_C::UI_HideBars0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.UI_HideBars"));
    struct Params_UI_HideBars {
    }; // Size: 0x0
    Params_UI_HideBars params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AspectRatioWidget_C::UI_UpdateLetterbox0(float InBarScale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.UI_UpdateLetterbox"));
    struct Params_UI_UpdateLetterbox {
        float InBarScale; // 0x0
    }; // Size: 0x4
    Params_UI_UpdateLetterbox params{};
    params.InBarScale = (float)InBarScale;
    ProcessEvent(func, &params);
}
void UUI_BP_AspectRatioWidget_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AspectRatioWidget_C::UI_UpdatePillarbox0(float InBarScale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.UI_UpdatePillarbox"));
    struct Params_UI_UpdatePillarbox {
        float InBarScale; // 0x0
    }; // Size: 0x4
    Params_UI_UpdatePillarbox params{};
    params.InBarScale = (float)InBarScale;
    ProcessEvent(func, &params);
}
void UUI_BP_AspectRatioWidget_C::ExecuteUbergraph_UI_BP_AspectRatioWidget(int32_t EntryPoint, float K2Node_Event_InBarScale_1, float K2Node_Event_InBarScale, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/UI_BP_AspectRatioWidget.UI_BP_AspectRatioWidget_C.ExecuteUbergraph_UI_BP_AspectRatioWidget"));
    struct Params_ExecuteUbergraph_UI_BP_AspectRatioWidget {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_InBarScale_1; // 0x4
        float K2Node_Event_InBarScale; // 0x8
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0xc
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x14
    }; // Size: 0x1c
    Params_ExecuteUbergraph_UI_BP_AspectRatioWidget params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_InBarScale_1 = (float)K2Node_Event_InBarScale_1;
    params.K2Node_Event_InBarScale = (float)K2Node_Event_InBarScale;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    ProcessEvent(func, &params);
}
