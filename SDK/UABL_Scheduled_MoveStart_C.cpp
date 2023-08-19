#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Scheduled_MoveStart_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
void UABL_Scheduled_MoveStart_C::ExecuteUbergraph_ABL_Scheduled_MoveStart(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Scheduled_MoveStart.ABL_Scheduled_MoveStart_C.ExecuteUbergraph_ABL_Scheduled_MoveStart"));
    struct Params_ExecuteUbergraph_ABL_Scheduled_MoveStart {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_Scheduled_MoveStart params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
UABL_Scheduled_MoveStart_C* UABL_Scheduled_MoveStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Scheduled_MoveStart.ABL_Scheduled_MoveStart_C");
    return (UABL_Scheduled_MoveStart_C*)res;
}
void UABL_Scheduled_MoveStart_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Scheduled_MoveStart.ABL_Scheduled_MoveStart_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
