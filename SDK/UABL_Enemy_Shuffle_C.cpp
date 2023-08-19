#include "AActor.hpp"
#include "UABL_Enemy_Shuffle_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UABL_Enemy_Shuffle_C* UABL_Enemy_Shuffle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Enemy_Shuffle.ABL_Enemy_Shuffle_C");
    return (UABL_Enemy_Shuffle_C*)res;
}
UAblAbility* UABL_Enemy_Shuffle_C::OnGetBranchAbility0(UAblAbilityContext* Context, FName& EventName, AActor* CallFunc_GetSelfActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Enemy_Shuffle.ABL_Enemy_Shuffle_C.OnGetBranchAbility"));
    struct Params_OnGetBranchAbility {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        UAblAbility* ReturnValue; // 0x10
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x18
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_OnGetBranchAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    return (UAblAbility*)params.ReturnValue;
}
