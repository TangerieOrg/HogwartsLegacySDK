#include "ACharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_Levioso_Loop_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityBlueprint.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_NPC_RCT_Levioso_Loop_C* UABL_NPC_RCT_Levioso_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop.ABL_NPC_RCT_Levioso_Loop_C");
    return (UABL_NPC_RCT_Levioso_Loop_C*)res;
}
void UABL_NPC_RCT_Levioso_Loop_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop.ABL_NPC_RCT_Levioso_Loop_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_Loop_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop.ABL_NPC_RCT_Levioso_Loop_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_Loop_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop.ABL_NPC_RCT_Levioso_Loop_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_Loop_C::ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop.ABL_NPC_RCT_Levioso_Loop_C.ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbilityContext* K2Node_Event_Context_2; // 0x10
        UAblAbilityContext* K2Node_Event_Context_1; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    ProcessEvent(func, &params);
}
