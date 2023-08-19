#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_RCT_NPC_ShrinkAndSquish_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
UABL_RCT_NPC_ShrinkAndSquish_C* UABL_RCT_NPC_ShrinkAndSquish_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_RCT_NPC_ShrinkAndSquish.ABL_RCT_NPC_ShrinkAndSquish_C");
    return (UABL_RCT_NPC_ShrinkAndSquish_C*)res;
}
void UABL_RCT_NPC_ShrinkAndSquish_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_RCT_NPC_ShrinkAndSquish.ABL_RCT_NPC_ShrinkAndSquish_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_RCT_NPC_ShrinkAndSquish_C::ExecuteUbergraph_ABL_RCT_NPC_ShrinkAndSquish(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_RCT_NPC_ShrinkAndSquish.ABL_RCT_NPC_ShrinkAndSquish_C.ExecuteUbergraph_ABL_RCT_NPC_ShrinkAndSquish"));
    struct Params_ExecuteUbergraph_ABL_RCT_NPC_ShrinkAndSquish {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ExecuteUbergraph_ABL_RCT_NPC_ShrinkAndSquish params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
