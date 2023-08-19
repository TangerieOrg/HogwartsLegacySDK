#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UUI_BP_CreatureInNurtureSpaceTooltip_C.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_CreatureInNurtureSpaceTooltip_C* UUI_BP_CreatureInNurtureSpaceTooltip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureInNurtureSpaceTooltip.UI_BP_CreatureInNurtureSpaceTooltip_C");
    return (UUI_BP_CreatureInNurtureSpaceTooltip_C*)res;
}
void UUI_BP_CreatureInNurtureSpaceTooltip_C::Init(UCreatureState* In_Creature_State, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureInNurtureSpaceTooltip.UI_BP_CreatureInNurtureSpaceTooltip_C.Init"));
    struct Params_Init {
        UCreatureState* In_Creature_State; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Init params{};
    params.In_Creature_State = (UCreatureState*)In_Creature_State;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
