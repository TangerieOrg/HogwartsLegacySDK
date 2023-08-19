#include "EAblNpcReactChannelType.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UAblReactionData.hpp"
#include "UFunction.hpp"
UAblReactionData* UAblReactionAbility::GetReactionData(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionAbility.GetReactionData"));
    struct Params_GetReactionData {
        UAblAbilityContext* Context; // 0x0
        UAblReactionData* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReactionData params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (UAblReactionData*)params.ReturnValue;
}
UAblReactionAbility* UAblReactionAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblReactionAbility");
    return (UAblReactionAbility*)res;
}
