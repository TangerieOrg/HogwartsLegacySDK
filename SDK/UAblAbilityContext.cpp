#include "AActor.hpp"
#include "EAnimBlendTickStyle.hpp"
#include "EEvaluatorRootMotion\Mode.hpp"
#include "FAlphaBlend.hpp"
#include "FTransform.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityBaseScratchPad.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAblAbilityContext::SetStackCount(int32_t Stack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.SetStackCount"));
    struct Params_SetStackCount {
        int32_t Stack; // 0x0
    }; // Size: 0x4
    Params_SetStackCount params{};
    params.Stack = (int32_t)Stack;
    ProcessEvent(func, &params);
}
UAblAbilityContext* UAblAbilityContext::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityContext");
    return (UAblAbilityContext*)res;
}
TArray<AActor*> UAblAbilityContext::GetTargetActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetTargetActors"));
    struct Params_GetTargetActors {
        TArray<AActor*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetTargetActors params{};
    ProcessEvent(func, &params);
    return (TArray<AActor*>)params.ReturnValue;
}
AActor* UAblAbilityContext::GetSelfActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetSelfActor"));
    struct Params_GetSelfActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSelfActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UAblAbilityComponent* UAblAbilityContext::GetSelfAbilityComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetSelfAbilityComponent"));
    struct Params_GetSelfAbilityComponent {
        UAblAbilityComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSelfAbilityComponent params{};
    ProcessEvent(func, &params);
    return (UAblAbilityComponent*)params.ReturnValue;
}
AActor* UAblAbilityContext::GetOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetOwner"));
    struct Params_GetOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
float UAblAbilityContext::GetCurrentTimeRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetCurrentTimeRatio"));
    struct Params_GetCurrentTimeRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentTimeRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AActor* UAblAbilityContext::GetInstigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetInstigator"));
    struct Params_GetInstigator {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInstigator params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
float UAblAbilityContext::GetCurrentTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetCurrentTime"));
    struct Params_GetCurrentTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UAblAbilityContext::GetCurrentStackCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityContext.GetCurrentStackCount"));
    struct Params_GetCurrentStackCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentStackCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
