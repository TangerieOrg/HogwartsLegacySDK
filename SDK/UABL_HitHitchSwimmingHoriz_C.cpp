#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_HitHitchSwimmingHoriz_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
UABL_HitHitchSwimmingHoriz_C* UABL_HitHitchSwimmingHoriz_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/Additive/ABL_HitHitchSwimmingHoriz.ABL_HitHitchSwimmingHoriz_C");
    return (UABL_HitHitchSwimmingHoriz_C*)res;
}
void UABL_HitHitchSwimmingHoriz_C::ExecuteUbergraph_ABL_HitHitchSwimmingHoriz(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_1, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/Additive/ABL_HitHitchSwimmingHoriz.ABL_HitHitchSwimmingHoriz_C.ExecuteUbergraph_ABL_HitHitchSwimmingHoriz"));
    struct Params_ExecuteUbergraph_ABL_HitHitchSwimmingHoriz {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        UAblAbilityContext* K2Node_Event_Context_1; // 0x18
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x20
        int32_t CallFunc_PostDialogueEvent_ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_ExecuteUbergraph_ABL_HitHitchSwimmingHoriz params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_PostDialogueEvent_ReturnValue = (int32_t)CallFunc_PostDialogueEvent_ReturnValue;
    ProcessEvent(func, &params);
}
bool UABL_HitHitchSwimmingHoriz_C::CustomCanBranchTo0(UAblAbilityContext* Context, AActor* CallFunc_GetSelfActor_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/Additive/ABL_HitHitchSwimmingHoriz.ABL_HitHitchSwimmingHoriz_C.CustomCanBranchTo"));
    struct Params_CustomCanBranchTo {
        UAblAbilityContext* Context; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x18
        float CallFunc_GetHealth_ReturnValue; // 0x20
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x24
    }; // Size: 0x25
    Params_CustomCanBranchTo params{};
    params.Context = (UAblAbilityContext*)Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetHealth_ReturnValue = (float)CallFunc_GetHealth_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UABL_HitHitchSwimmingHoriz_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/Additive/ABL_HitHitchSwimmingHoriz.ABL_HitHitchSwimmingHoriz_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_HitHitchSwimmingHoriz_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/Additive/ABL_HitHitchSwimmingHoriz.ABL_HitHitchSwimmingHoriz_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
