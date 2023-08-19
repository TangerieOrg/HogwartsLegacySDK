#include "UBlueprintAsyncActionBase.hpp"
#include "UFadeInAsyncAction.hpp"
#include "UFunction.hpp"
void UFadeInAsyncAction::OnFadeComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FadeInAsyncAction.OnFadeComplete"));
    struct Params_OnFadeComplete {
    }; // Size: 0x0
    Params_OnFadeComplete params{};
    ProcessEvent(func, &params);
}
UFadeInAsyncAction* UFadeInAsyncAction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FadeInAsyncAction");
    return (UFadeInAsyncAction*)res;
}
UFadeInAsyncAction* UFadeInAsyncAction::FadeIn(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FadeInAsyncAction.FadeIn"));
    struct Params_FadeIn {
        float Duration; // 0x0
        char pad_4[0x4];
        UFadeInAsyncAction* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FadeIn params{};
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UFadeInAsyncAction*)params.ReturnValue;
}
