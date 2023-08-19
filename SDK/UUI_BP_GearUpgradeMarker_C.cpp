#include "ESlateVisibility.hpp"
#include "UFunction.hpp"
#include "UPhoenixImage.hpp"
#include "UUI_BP_GearUpgradeMarker_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_GearUpgradeMarker_C* UUI_BP_GearUpgradeMarker_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgradeMarker.UI_BP_GearUpgradeMarker_C");
    return (UUI_BP_GearUpgradeMarker_C*)res;
}
void UUI_BP_GearUpgradeMarker_C::SetMarker(bool ShowMorker, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgradeMarker.UI_BP_GearUpgradeMarker_C.SetMarker"));
    struct Params_SetMarker {
        bool ShowMorker; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_SetMarker params{};
    params.ShowMorker = (bool)ShowMorker;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
