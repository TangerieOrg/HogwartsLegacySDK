#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UUI_BP_LegendBar_C.hpp"
#include "UUI_BP_LegendBox_C.hpp"
#include "UUserWidget.hpp"
void UUI_BP_LegendBar_C::I_SetButtonLegend(TArray<FString>& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.I_SetButtonLegend"));
    struct Params_I_SetButtonLegend {
        TArray<FString> NewParam; // 0x0
    }; // Size: 0x10
    Params_I_SetButtonLegend params{};
    params.NewParam = (TArray<FString>)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void UUI_BP_LegendBar_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
UUI_BP_LegendBar_C* UUI_BP_LegendBar_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C");
    return (UUI_BP_LegendBar_C*)res;
}
void UUI_BP_LegendBar_C::SetButtonLegend(TArray<FString>& LegendArray) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.SetButtonLegend"));
    struct Params_SetButtonLegend {
        TArray<FString> LegendArray; // 0x0
    }; // Size: 0x10
    Params_SetButtonLegend params{};
    params.LegendArray = (TArray<FString>)LegendArray;
    ProcessEvent(func, &params);
    LegendArray = params.LegendArray;
}
void UUI_BP_LegendBar_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_LegendBar_C::SetHouseColors(FLinearColor TempHouseColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.SetHouseColors"));
    struct Params_SetHouseColors {
        FLinearColor TempHouseColor; // 0x0
    }; // Size: 0x10
    Params_SetHouseColors params{};
    params.TempHouseColor = (FLinearColor)TempHouseColor;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendBar_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LegendBar_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendBar_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LegendBar_C::ExecuteUbergraph_UI_BP_LegendBar(int32_t EntryPoint, UUserWidget* K2Node_Event_Parent, TArray<FString>& K2Node_Event_NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_LegendBar.UI_BP_LegendBar_C.ExecuteUbergraph_UI_BP_LegendBar"));
    struct Params_ExecuteUbergraph_UI_BP_LegendBar {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUserWidget* K2Node_Event_Parent; // 0x8
        TArray<FString> K2Node_Event_NewParam; // 0x10
    }; // Size: 0x20
    Params_ExecuteUbergraph_UI_BP_LegendBar params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Parent = (UUserWidget*)K2Node_Event_Parent;
    params.K2Node_Event_NewParam = (TArray<FString>)K2Node_Event_NewParam;
    ProcessEvent(func, &params);
    K2Node_Event_NewParam = params.K2Node_Event_NewParam;
}
