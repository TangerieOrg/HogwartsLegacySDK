#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Chicken_TransfigSpawn_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_Chicken_TransfigSpawn_C* UABL_Chicken_TransfigSpawn_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/Chicken/ABL_Chicken_TransfigSpawn.ABL_Chicken_TransfigSpawn_C");
    return (UABL_Chicken_TransfigSpawn_C*)res;
}
void UABL_Chicken_TransfigSpawn_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Chicken/ABL_Chicken_TransfigSpawn.ABL_Chicken_TransfigSpawn_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_Chicken_TransfigSpawn_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Chicken/ABL_Chicken_TransfigSpawn.ABL_Chicken_TransfigSpawn_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Chicken_TransfigSpawn_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Chicken/ABL_Chicken_TransfigSpawn.ABL_Chicken_TransfigSpawn_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Chicken_TransfigSpawn_C::ExecuteUbergraph_ABL_Chicken_TransfigSpawn(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbilityContext* K2Node_Event_Context_2, AActor* CallFunc_GetSelfActor_ReturnValue_1, UAblAbilityContext* K2Node_Event_Context_1, AActor* CallFunc_GetSelfActor_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Chicken/ABL_Chicken_TransfigSpawn.ABL_Chicken_TransfigSpawn_C.ExecuteUbergraph_ABL_Chicken_TransfigSpawn"));
    struct Params_ExecuteUbergraph_ABL_Chicken_TransfigSpawn {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x18
        UAblAbilityContext* K2Node_Event_Context_2; // 0x20
        AActor* CallFunc_GetSelfActor_ReturnValue_1; // 0x28
        UAblAbilityContext* K2Node_Event_Context_1; // 0x30
        AActor* CallFunc_GetSelfActor_ReturnValue_2; // 0x38
    }; // Size: 0x40
    Params_ExecuteUbergraph_ABL_Chicken_TransfigSpawn params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.CallFunc_GetSelfActor_ReturnValue_1 = (AActor*)CallFunc_GetSelfActor_ReturnValue_1;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.CallFunc_GetSelfActor_ReturnValue_2 = (AActor*)CallFunc_GetSelfActor_ReturnValue_2;
    ProcessEvent(func, &params);
}
