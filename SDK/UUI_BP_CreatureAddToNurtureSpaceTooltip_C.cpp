#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UUI_BP_CreatureAddToNurtureSpaceTooltip_C.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_CreatureAddToNurtureSpaceTooltip_C* UUI_BP_CreatureAddToNurtureSpaceTooltip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureAddToNurtureSpaceTooltip.UI_BP_CreatureAddToNurtureSpaceTooltip_C");
    return (UUI_BP_CreatureAddToNurtureSpaceTooltip_C*)res;
}
void UUI_BP_CreatureAddToNurtureSpaceTooltip_C::Init(UCreatureState* Creature_State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAddToNurtureSpaceTooltip.UI_BP_CreatureAddToNurtureSpaceTooltip_C.Init"));
    struct Params_Init {
        UCreatureState* Creature_State; // 0x0
    }; // Size: 0x8
    Params_Init params{};
    params.Creature_State = (UCreatureState*)Creature_State;
    ProcessEvent(func, &params);
}
