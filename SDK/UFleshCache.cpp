#include "AActor.hpp"
#include "UActorComponent.hpp"
#include "UFleshCache.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UFleshCache* UFleshCache::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FleshCache");
    return (UFleshCache*)res;
}
void UFleshCache::OnPreCacheFinished(AActor* InOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FleshCache.OnPreCacheFinished"));
    struct Params_OnPreCacheFinished {
        AActor* InOwner; // 0x0
    }; // Size: 0x8
    Params_OnPreCacheFinished params{};
    params.InOwner = (AActor*)InOwner;
    ProcessEvent(func, &params);
}
void UFleshCache::OnComponentActivated(UActorComponent* InComponent, bool InSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FleshCache.OnComponentActivated"));
    struct Params_OnComponentActivated {
        UActorComponent* InComponent; // 0x0
        bool InSuccess; // 0x8
    }; // Size: 0x9
    Params_OnComponentActivated params{};
    params.InComponent = (UActorComponent*)InComponent;
    params.InSuccess = (bool)InSuccess;
    ProcessEvent(func, &params);
}
void UFleshCache::HandleFastTravelFinished(UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FleshCache.HandleFastTravelFinished"));
    struct Params_HandleFastTravelFinished {
        UObject* InCaller; // 0x0
    }; // Size: 0x8
    Params_HandleFastTravelFinished params{};
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
UFleshCache* UFleshCache::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FleshCache.Get"));
    struct Params_Get {
        UFleshCache* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UFleshCache*)params.ReturnValue;
}
void UFleshCache::HandleFastTravelBegun(UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FleshCache.HandleFastTravelBegun"));
    struct Params_HandleFastTravelBegun {
        UObject* InCaller; // 0x0
    }; // Size: 0x8
    Params_HandleFastTravelBegun params{};
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
