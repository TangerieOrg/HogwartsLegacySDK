#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPipelineFileCacheManager.hpp"
bool UPipelineFileCacheManager::IsBatchingPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PipelineFileCacheManager.IsBatchingPaused"));
    struct Params_IsBatchingPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBatchingPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPipelineFileCacheManager* UPipelineFileCacheManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PipelineFileCacheManager");
    return (UPipelineFileCacheManager*)res;
}
void UPipelineFileCacheManager::ResumeBatching() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PipelineFileCacheManager.ResumeBatching"));
    struct Params_ResumeBatching {
    }; // Size: 0x0
    Params_ResumeBatching params{};
    ProcessEvent(func, &params);
}
void UPipelineFileCacheManager::PauseBatching() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PipelineFileCacheManager.PauseBatching"));
    struct Params_PauseBatching {
    }; // Size: 0x0
    Params_PauseBatching params{};
    ProcessEvent(func, &params);
}
UPipelineFileCacheManager* UPipelineFileCacheManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PipelineFileCacheManager.Get"));
    struct Params_Get {
        UPipelineFileCacheManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPipelineFileCacheManager*)params.ReturnValue;
}
bool UPipelineFileCacheManager::IsPrecachingEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PipelineFileCacheManager.IsPrecachingEnabled"));
    struct Params_IsPrecachingEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPrecachingEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPipelineFileCacheManager::IsPipelioneFileCacheManagerEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PipelineFileCacheManager.IsPipelioneFileCacheManagerEnabled"));
    struct Params_IsPipelioneFileCacheManagerEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPipelioneFileCacheManagerEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
