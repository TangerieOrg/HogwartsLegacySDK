#include "AActor.hpp"
#include "ELockLevel.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULockComponent.hpp"
ULockComponent* ULockComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockComponent");
    return (ULockComponent*)res;
}
void ULockComponent::Lock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.Lock"));
    struct Params_Lock {
    }; // Size: 0x0
    Params_Lock params{};
    ProcessEvent(func, &params);
}
bool ULockComponent::UnlockWithKey(FGameplayTagContainer& Key, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.UnlockWithKey"));
    struct Params_UnlockWithKey {
        FGameplayTagContainer Key; // 0x0
        AActor* Instigator; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_UnlockWithKey params{};
    params.Key = (FGameplayTagContainer)Key;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
    Key = params.Key;
    return (bool)params.ReturnValue;
}
bool ULockComponent::Unlock(float UnlockValue, bool bCompleteAttempt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.Unlock"));
    struct Params_Unlock {
        float UnlockValue; // 0x0
        bool bCompleteAttempt; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_Unlock params{};
    params.UnlockValue = (float)UnlockValue;
    params.bCompleteAttempt = (bool)bCompleteAttempt;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULockComponent::IsLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.IsLocked"));
    struct Params_IsLocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ULockComponent::GetMaxLockValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.GetMaxLockValue"));
    struct Params_GetMaxLockValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxLockValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ULockComponent::GetUnlockedPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.GetUnlockedPercent"));
    struct Params_GetUnlockedPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUnlockedPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ELockLevel ULockComponent::GetLockLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.GetLockLevel"));
    struct Params_GetLockLevel {
        ELockLevel ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLockLevel params{};
    ProcessEvent(func, &params);
    return (ELockLevel)params.ReturnValue;
}
float ULockComponent::GetCurrentLockValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockComponent.GetCurrentLockValue"));
    struct Params_GetCurrentLockValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentLockValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
