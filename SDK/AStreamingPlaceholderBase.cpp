#include "AActor.hpp"
#include "AStreamingPlaceholderBase.hpp"
#include "UFunction.hpp"
AStreamingPlaceholderBase* AStreamingPlaceholderBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderBase");
    return (AStreamingPlaceholderBase*)res;
}
void AStreamingPlaceholderBase::WaitUntilLoadIsComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamingPlaceholderBase.WaitUntilLoadIsComplete"));
    struct Params_WaitUntilLoadIsComplete {
    }; // Size: 0x0
    Params_WaitUntilLoadIsComplete params{};
    ProcessEvent(func, &params);
}
void AStreamingPlaceholderBase::TriggerLoad(bool bInSpawnWhenReady, bool bForceBlockingLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamingPlaceholderBase.TriggerLoad"));
    struct Params_TriggerLoad {
        bool bInSpawnWhenReady; // 0x0
        bool bForceBlockingLoad; // 0x1
    }; // Size: 0x2
    Params_TriggerLoad params{};
    params.bInSpawnWhenReady = (bool)bInSpawnWhenReady;
    params.bForceBlockingLoad = (bool)bForceBlockingLoad;
    ProcessEvent(func, &params);
}
void AStreamingPlaceholderBase::ReleaseObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamingPlaceholderBase.ReleaseObject"));
    struct Params_ReleaseObject {
    }; // Size: 0x0
    Params_ReleaseObject params{};
    ProcessEvent(func, &params);
}
void AStreamingPlaceholderBase::SpawnObject(bool bBlockingLoadIfNotLoaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamingPlaceholderBase.SpawnObject"));
    struct Params_SpawnObject {
        bool bBlockingLoadIfNotLoaded; // 0x0
    }; // Size: 0x1
    Params_SpawnObject params{};
    params.bBlockingLoadIfNotLoaded = (bool)bBlockingLoadIfNotLoaded;
    ProcessEvent(func, &params);
}
