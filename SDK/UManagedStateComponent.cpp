#include "AActor.hpp"
#include "EManagedVisibilityPriority.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UManagedStateComponent.hpp"
#include "UObject.hpp"
UManagedStateComponent* UManagedStateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.ManagedStateComponent");
    return (UManagedStateComponent*)res;
}
void UManagedStateComponent::BP_TryFinishSettingHiddenUnprioritized(AActor* Actor, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedStateComponent.BP_TryFinishSettingHiddenUnprioritized"));
    struct Params_BP_TryFinishSettingHiddenUnprioritized {
        AActor* Actor; // 0x0
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_BP_TryFinishSettingHiddenUnprioritized params{};
    params.Actor = (AActor*)Actor;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UManagedStateComponent::BP_StartSettingHiddenUnprioritized(AActor* Actor, bool IsHidden, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedStateComponent.BP_StartSettingHiddenUnprioritized"));
    struct Params_BP_StartSettingHiddenUnprioritized {
        AActor* Actor; // 0x0
        bool IsHidden; // 0x8
        char pad_9[0x7];
        UObject* Provider; // 0x10
    }; // Size: 0x18
    Params_BP_StartSettingHiddenUnprioritized params{};
    params.Actor = (AActor*)Actor;
    params.IsHidden = (bool)IsHidden;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UManagedStateComponent::BP_StartSettingHiddenPrioritized(AActor* Actor, bool IsHidden, EManagedVisibilityPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedStateComponent.BP_StartSettingHiddenPrioritized"));
    struct Params_BP_StartSettingHiddenPrioritized {
        AActor* Actor; // 0x0
        bool IsHidden; // 0x8
        EManagedVisibilityPriority Priority; // 0x9
        char pad_a[0x6];
        UObject* Provider; // 0x10
    }; // Size: 0x18
    Params_BP_StartSettingHiddenPrioritized params{};
    params.Actor = (AActor*)Actor;
    params.IsHidden = (bool)IsHidden;
    params.Priority = (EManagedVisibilityPriority)Priority;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UManagedStateComponent::BP_FinishSettingHiddenUnprioritized(AActor* Actor, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedStateComponent.BP_FinishSettingHiddenUnprioritized"));
    struct Params_BP_FinishSettingHiddenUnprioritized {
        AActor* Actor; // 0x0
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_BP_FinishSettingHiddenUnprioritized params{};
    params.Actor = (AActor*)Actor;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UManagedStateComponent::BP_FinishSettingHiddenPrioritized(AActor* Actor, EManagedVisibilityPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.ManagedStateComponent.BP_FinishSettingHiddenPrioritized"));
    struct Params_BP_FinishSettingHiddenPrioritized {
        AActor* Actor; // 0x0
        EManagedVisibilityPriority Priority; // 0x8
        char pad_9[0x7];
        UObject* Provider; // 0x10
    }; // Size: 0x18
    Params_BP_FinishSettingHiddenPrioritized params{};
    params.Actor = (AActor*)Actor;
    params.Priority = (EManagedVisibilityPriority)Priority;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
