#pragma once
#include <cstdint>
#include "EManagedVisibilityPriority.hpp"
#include "UActorComponent.hpp"
class AActor;
class UObject;
#pragma pack(push, 1)
class UManagedStateComponent : public UActorComponent {
public:
    char pad_c8[0xa8];
    static UManagedStateComponent* StaticClass();
    static void BP_TryFinishSettingHiddenUnprioritized(AActor* Actor, UObject* Provider);
    static void BP_StartSettingHiddenUnprioritized(AActor* Actor, bool IsHidden, UObject* Provider);
    static void BP_StartSettingHiddenPrioritized(AActor* Actor, bool IsHidden, EManagedVisibilityPriority Priority, UObject* Provider);
    static void BP_FinishSettingHiddenUnprioritized(AActor* Actor, UObject* Provider);
    static void BP_FinishSettingHiddenPrioritized(AActor* Actor, EManagedVisibilityPriority Priority, UObject* Provider);
}; // Size: 0x170
#pragma pack(pop)
