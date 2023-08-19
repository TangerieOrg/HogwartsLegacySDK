#include "AActor.hpp"
#include "ACharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_Levioso_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UAblReactionData.hpp"
#include "UBP_LeviosoReactionComp_C.hpp"
#include "UFunction.hpp"
UABL_NPC_RCT_Levioso_C* UABL_NPC_RCT_Levioso_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso.ABL_NPC_RCT_Levioso_C");
    return (UABL_NPC_RCT_Levioso_C*)res;
}
void UABL_NPC_RCT_Levioso_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso.ABL_NPC_RCT_Levioso_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso.ABL_NPC_RCT_Levioso_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso.ABL_NPC_RCT_Levioso_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso.ABL_NPC_RCT_Levioso_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Levioso_C::ExecuteUbergraph_ABL_NPC_RCT_Levioso(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, UAblReactionData* CallFunc_GetReactionData_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, UBP_LeviosoReactionComp_C* CallFunc_AddComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Levioso.ABL_NPC_RCT_Levioso_C.ExecuteUbergraph_ABL_NPC_RCT_Levioso"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_Levioso {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        UAblAbilityContext* K2Node_Event_Context_3; // 0x18
        UAblAbilityContext* K2Node_Event_Context_2; // 0x20
        UAblReactionData* CallFunc_GetReactionData_ReturnValue; // 0x28
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x30
        UAblAbilityContext* K2Node_Event_Context_1; // 0x38
        UBP_LeviosoReactionComp_C* CallFunc_AddComponentByClass_ReturnValue; // 0x40
    }; // Size: 0x48
    Params_ExecuteUbergraph_ABL_NPC_RCT_Levioso params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.CallFunc_GetReactionData_ReturnValue = (UAblReactionData*)CallFunc_GetReactionData_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.CallFunc_AddComponentByClass_ReturnValue = (UBP_LeviosoReactionComp_C*)CallFunc_AddComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
