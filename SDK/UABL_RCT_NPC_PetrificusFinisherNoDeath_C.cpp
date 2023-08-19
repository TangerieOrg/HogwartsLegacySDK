#include "AActor.hpp"
#include "UABL_RCT_NPC_PetrificusFinisherNoDeath_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_RCT_NPC_PetrificusFinisherNoDeath_C* UABL_RCT_NPC_PetrificusFinisherNoDeath_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_RCT_NPC_PetrificusFinisherNoDeath.ABL_RCT_NPC_PetrificusFinisherNoDeath_C");
    return (UABL_RCT_NPC_PetrificusFinisherNoDeath_C*)res;
}
void UABL_RCT_NPC_PetrificusFinisherNoDeath_C::OnCustomEvent(UAblAbilityContext* Context, FName& EventName, AActor* CallFunc_GetSelfActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_RCT_NPC_PetrificusFinisherNoDeath.ABL_RCT_NPC_PetrificusFinisherNoDeath_C.OnCustomEvent"));
    struct Params_OnCustomEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_OnCustomEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
