#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_Creature_C.hpp"
UUI_BPI_Creature_C* UUI_BPI_Creature_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_Creature.UI_BPI_Creature_C");
    return (UUI_BPI_Creature_C*)res;
}
void UUI_BPI_Creature_C::I_SetCreatureState(UCreatureState* CreatureState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Creature.UI_BPI_Creature_C.I_SetCreatureState"));
    struct Params_I_SetCreatureState {
        UCreatureState* CreatureState; // 0x0
    }; // Size: 0x8
    Params_I_SetCreatureState params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    ProcessEvent(func, &params);
}
