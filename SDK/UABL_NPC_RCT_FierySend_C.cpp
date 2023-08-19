#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_FierySend_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_NPC_RCT_FierySend_C* UABL_NPC_RCT_FierySend_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/FierySend/ABL_NPC_RCT_FierySend.ABL_NPC_RCT_FierySend_C");
    return (UABL_NPC_RCT_FierySend_C*)res;
}
void UABL_NPC_RCT_FierySend_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/FierySend/ABL_NPC_RCT_FierySend.ABL_NPC_RCT_FierySend_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_FierySend_C::ExecuteUbergraph_ABL_NPC_RCT_FierySend(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetInstigator_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/FierySend/ABL_NPC_RCT_FierySend.ABL_NPC_RCT_FierySend_C.ExecuteUbergraph_ABL_NPC_RCT_FierySend"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_FierySend {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetInstigator_ReturnValue; // 0x10
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_ABL_NPC_RCT_FierySend params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetInstigator_ReturnValue = (AActor*)CallFunc_GetInstigator_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    ProcessEvent(func, &params);
}
