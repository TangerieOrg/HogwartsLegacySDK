#include "FPointerToUberGraphFrame.hpp"
#include "UCombatParryWidget.hpp"
#include "UFunction.hpp"
#include "UUI_BP_CombatParry_C.hpp"
UUI_BP_CombatParry_C* UUI_BP_CombatParry_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/CombatParry/UI_BP_CombatParry.UI_BP_CombatParry_C");
    return (UUI_BP_CombatParry_C*)res;
}
void UUI_BP_CombatParry_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry.UI_BP_CombatParry_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_C::ExecuteUbergraph_UI_BP_CombatParry(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry.UI_BP_CombatParry_C.ExecuteUbergraph_UI_BP_CombatParry"));
    struct Params_ExecuteUbergraph_UI_BP_CombatParry {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_CombatParry params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
