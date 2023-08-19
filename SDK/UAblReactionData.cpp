#include "AActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblReactionData.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAblReactionData* UAblReactionData::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblReactionData");
    return (UAblReactionData*)res;
}
bool UAblReactionData::IsPassive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionData.IsPassive"));
    struct Params_IsPassive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPassive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UAblReactionData::GetTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionData.GetTarget"));
    struct Params_GetTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* UAblReactionData::GetInstigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionData.GetInstigator"));
    struct Params_GetInstigator {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInstigator params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FName UAblReactionData::GetChannelName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblReactionData.GetChannelName"));
    struct Params_GetChannelName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetChannelName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
