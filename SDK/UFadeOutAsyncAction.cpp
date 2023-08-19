#include "UBlueprintAsyncActionBase.hpp"
#include "UFadeOutAsyncAction.hpp"
#include "UFunction.hpp"
UFadeOutAsyncAction* UFadeOutAsyncAction::FadeOut(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FadeOutAsyncAction.FadeOut"));
    struct Params_FadeOut {
        float Duration; // 0x0
        char pad_4[0x4];
        UFadeOutAsyncAction* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FadeOut params{};
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UFadeOutAsyncAction*)params.ReturnValue;
}
UFadeOutAsyncAction* UFadeOutAsyncAction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FadeOutAsyncAction");
    return (UFadeOutAsyncAction*)res;
}
void UFadeOutAsyncAction::OnFadeComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FadeOutAsyncAction.OnFadeComplete"));
    struct Params_OnFadeComplete {
    }; // Size: 0x0
    Params_OnFadeComplete params{};
    ProcessEvent(func, &params);
}
