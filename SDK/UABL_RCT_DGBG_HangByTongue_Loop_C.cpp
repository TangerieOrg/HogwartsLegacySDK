#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_RCT_DGBG_HangByTongue_Loop_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_RCT_DGBG_HangByTongue_Loop_C* UABL_RCT_DGBG_HangByTongue_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_HangByTongue_Loop.ABL_RCT_DGBG_HangByTongue_Loop_C");
    return (UABL_RCT_DGBG_HangByTongue_Loop_C*)res;
}
void UABL_RCT_DGBG_HangByTongue_Loop_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_HangByTongue_Loop.ABL_RCT_DGBG_HangByTongue_Loop_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_RCT_DGBG_HangByTongue_Loop_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_HangByTongue_Loop.ABL_RCT_DGBG_HangByTongue_Loop_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_RCT_DGBG_HangByTongue_Loop_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_HangByTongue_Loop.ABL_RCT_DGBG_HangByTongue_Loop_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_RCT_DGBG_HangByTongue_Loop_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_HangByTongue_Loop.ABL_RCT_DGBG_HangByTongue_Loop_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_RCT_DGBG_HangByTongue_Loop_C::ExecuteUbergraph_ABL_RCT_DGBG_HangByTongue_Loop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, FName Temp_name_Variable, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, AActor* CallFunc_GetOwner_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, int32_t CallFunc_Array_AddUnique_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_HangByTongue_Loop.ABL_RCT_DGBG_HangByTongue_Loop_C.ExecuteUbergraph_ABL_RCT_DGBG_HangByTongue_Loop"));
    struct Params_ExecuteUbergraph_ABL_RCT_DGBG_HangByTongue_Loop {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        FName Temp_name_Variable; // 0x18
        UAblAbilityContext* K2Node_Event_Context_3; // 0x20
        UAblAbilityContext* K2Node_Event_Context_2; // 0x28
        AActor* CallFunc_GetOwner_ReturnValue; // 0x30
        UAblAbilityContext* K2Node_Event_Context_1; // 0x38
        int32_t CallFunc_Array_AddUnique_ReturnValue; // 0x40
    }; // Size: 0x44
    Params_ExecuteUbergraph_ABL_RCT_DGBG_HangByTongue_Loop params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.CallFunc_Array_AddUnique_ReturnValue = (int32_t)CallFunc_Array_AddUnique_ReturnValue;
    ProcessEvent(func, &params);
}