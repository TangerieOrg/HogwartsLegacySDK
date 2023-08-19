#include "FLegendItemData.hpp"
#include "UFrontEnd_MenuWidget.hpp"
#include "UFunction.hpp"
#include "UScreen.hpp"
UFrontEnd_MenuWidget* UFrontEnd_MenuWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FrontEnd_MenuWidget");
    return (UFrontEnd_MenuWidget*)res;
}
void UFrontEnd_MenuWidget::SetMenuLegend(TArray<FLegendItemData>& LegendArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrontEnd_MenuWidget.SetMenuLegend"));
    struct Params_SetMenuLegend {
        TArray<FLegendItemData> LegendArray; // 0x0
    }; // Size: 0x10
    Params_SetMenuLegend params{};
    params.LegendArray = (TArray<FLegendItemData>)LegendArray;
    ProcessEvent(func, &params);
    LegendArray = params.LegendArray;
}
bool UFrontEnd_MenuWidget::ExecuteLoad(FString Filename, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrontEnd_MenuWidget.ExecuteLoad"));
    struct Params_ExecuteLoad {
        FString Filename; // 0x0
        int32_t CharacterID; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ExecuteLoad params{};
    params.Filename = (FString)Filename;
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
