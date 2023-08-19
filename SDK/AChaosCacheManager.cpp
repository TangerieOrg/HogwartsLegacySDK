#include "AActor.hpp"
#include "AChaosCacheManager.hpp"
#include "ECacheMode.hpp"
#include "EStartMode.hpp"
#include "FObservedComponent.hpp"
#include "UChaosCacheCollection.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
void AChaosCacheManager::TriggerComponent(UPrimitiveComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponent"));
    struct Params_TriggerComponent {
        UPrimitiveComponent* InComponent; // 0x0
    }; // Size: 0x8
    Params_TriggerComponent params{};
    params.InComponent = (UPrimitiveComponent*)InComponent;
    ProcessEvent(func, &params);
}
AChaosCacheManager* AChaosCacheManager::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCaching.ChaosCacheManager");
    return (AChaosCacheManager*)res;
}
void AChaosCacheManager::TriggerComponentByCache(FName InCacheName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponentByCache"));
    struct Params_TriggerComponentByCache {
        FName InCacheName; // 0x0
    }; // Size: 0x8
    Params_TriggerComponentByCache params{};
    params.InCacheName = (FName)InCacheName;
    ProcessEvent(func, &params);
}
void AChaosCacheManager::ResetAllComponentTransforms() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms"));
    struct Params_ResetAllComponentTransforms {
    }; // Size: 0x0
    Params_ResetAllComponentTransforms params{};
    ProcessEvent(func, &params);
}
void AChaosCacheManager::ResetSingleTransform(int32_t InIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCaching.ChaosCacheManager.ResetSingleTransform"));
    struct Params_ResetSingleTransform {
        int32_t InIndex; // 0x0
    }; // Size: 0x4
    Params_ResetSingleTransform params{};
    params.InIndex = (int32_t)InIndex;
    ProcessEvent(func, &params);
}
void AChaosCacheManager::TriggerAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCaching.ChaosCacheManager.TriggerAll"));
    struct Params_TriggerAll {
    }; // Size: 0x0
    Params_TriggerAll params{};
    ProcessEvent(func, &params);
}
void AChaosCacheManager::SetStartTime(float InStartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCaching.ChaosCacheManager.SetStartTime"));
    struct Params_SetStartTime {
        float InStartTime; // 0x0
    }; // Size: 0x4
    Params_SetStartTime params{};
    params.InStartTime = (float)InStartTime;
    ProcessEvent(func, &params);
}
