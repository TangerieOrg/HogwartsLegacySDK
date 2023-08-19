#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NpcReact_CowerWandLinkLoop_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_NpcReact_CowerWandLinkLoop_C* UABL_NpcReact_CowerWandLinkLoop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_CowerWandLinkLoop.ABL_NpcReact_CowerWandLinkLoop_C");
    return (UABL_NpcReact_CowerWandLinkLoop_C*)res;
}
void UABL_NpcReact_CowerWandLinkLoop_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_CowerWandLinkLoop.ABL_NpcReact_CowerWandLinkLoop_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NpcReact_CowerWandLinkLoop_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_CowerWandLinkLoop.ABL_NpcReact_CowerWandLinkLoop_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_NpcReact_CowerWandLinkLoop_C::ExecuteUbergraph_ABL_NpcReact_CowerWandLinkLoop(int32_t EntryPoint, int32_t CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_CowerWandLinkLoop.ABL_NpcReact_CowerWandLinkLoop_C.ExecuteUbergraph_ABL_NpcReact_CowerWandLinkLoop"));
    struct Params_ExecuteUbergraph_ABL_NpcReact_CowerWandLinkLoop {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_RandomIntegerInRange_ReturnValue; // 0x4
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x8
        char pad_9[0x7];
        UAblAbilityContext* K2Node_Event_Context_1; // 0x10
        UAblAbilityContext* K2Node_Event_Context; // 0x18
        UAblAbility* K2Node_Event_NextAbility; // 0x20
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x28
        int32_t CallFunc_PostDialogueEvent_ReturnValue; // 0x30
    }; // Size: 0x34
    Params_ExecuteUbergraph_ABL_NpcReact_CowerWandLinkLoop params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_RandomIntegerInRange_ReturnValue = (int32_t)CallFunc_RandomIntegerInRange_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_PostDialogueEvent_ReturnValue = (int32_t)CallFunc_PostDialogueEvent_ReturnValue;
    ProcessEvent(func, &params);
}
