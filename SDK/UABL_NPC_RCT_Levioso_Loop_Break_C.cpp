#include "ACharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_Levioso_Loop_Break_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_NPC_RCT_Levioso_Loop_Break_C* UABL_NPC_RCT_Levioso_Loop_Break_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop_Break.ABL_NPC_RCT_Levioso_Loop_Break_C");
    return (UABL_NPC_RCT_Levioso_Loop_Break_C*)res;
}
void UABL_NPC_RCT_Levioso_Loop_Break_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop_Break.ABL_NPC_RCT_Levioso_Loop_Break_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_Loop_Break_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop_Break.ABL_NPC_RCT_Levioso_Loop_Break_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_Loop_Break_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop_Break.ABL_NPC_RCT_Levioso_Loop_Break_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_Loop_Break_C::ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop_Break(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso_Loop_Break.ABL_NPC_RCT_Levioso_Loop_Break_C.ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop_Break"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop_Break {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbilityContext* K2Node_Event_Context_2; // 0x10
        UAblAbilityContext* K2Node_Event_Context_1; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop_Break params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    ProcessEvent(func, &params);
}
