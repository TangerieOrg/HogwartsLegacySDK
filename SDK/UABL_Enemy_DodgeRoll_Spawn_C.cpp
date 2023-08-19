#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Enemy_DodgeRoll_Spawn_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_Enemy_DodgeRoll_Spawn_C* UABL_Enemy_DodgeRoll_Spawn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/DarkWizard/Data/Abilities/Spawn/ABL_Enemy_DodgeRoll_Spawn.ABL_Enemy_DodgeRoll_Spawn_C");
    return (UABL_Enemy_DodgeRoll_Spawn_C*)res;
}
void UABL_Enemy_DodgeRoll_Spawn_C::OnAbilityEnd0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/Data/Abilities/Spawn/ABL_Enemy_DodgeRoll_Spawn.ABL_Enemy_DodgeRoll_Spawn_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Enemy_DodgeRoll_Spawn_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/Data/Abilities/Spawn/ABL_Enemy_DodgeRoll_Spawn.ABL_Enemy_DodgeRoll_Spawn_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Enemy_DodgeRoll_Spawn_C::OnAbilityInterrupt0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/Data/Abilities/Spawn/ABL_Enemy_DodgeRoll_Spawn.ABL_Enemy_DodgeRoll_Spawn_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Enemy_DodgeRoll_Spawn_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/Data/Abilities/Spawn/ABL_Enemy_DodgeRoll_Spawn.ABL_Enemy_DodgeRoll_Spawn_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_Enemy_DodgeRoll_Spawn_C::ExecuteUbergraph_ABL_Enemy_DodgeRoll_Spawn(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, int32_t CallFunc_PostDialogueEvent_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/Data/Abilities/Spawn/ABL_Enemy_DodgeRoll_Spawn.ABL_Enemy_DodgeRoll_Spawn_C.ExecuteUbergraph_ABL_Enemy_DodgeRoll_Spawn"));
    struct Params_ExecuteUbergraph_ABL_Enemy_DodgeRoll_Spawn {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        UAblAbilityContext* K2Node_Event_Context_3; // 0x18
        UAblAbilityContext* K2Node_Event_Context_2; // 0x20
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x28
        UAblAbilityContext* K2Node_Event_Context_1; // 0x30
        int32_t CallFunc_PostDialogueEvent_ReturnValue; // 0x38
        int32_t CallFunc_PostDialogueEvent_ReturnValue_1; // 0x3c
    }; // Size: 0x40
    Params_ExecuteUbergraph_ABL_Enemy_DodgeRoll_Spawn params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.CallFunc_PostDialogueEvent_ReturnValue = (int32_t)CallFunc_PostDialogueEvent_ReturnValue;
    params.CallFunc_PostDialogueEvent_ReturnValue_1 = (int32_t)CallFunc_PostDialogueEvent_ReturnValue_1;
    ProcessEvent(func, &params);
}
