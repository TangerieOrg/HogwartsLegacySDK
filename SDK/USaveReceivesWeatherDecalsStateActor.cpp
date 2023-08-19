#include "AActor.hpp"
#include "UFunction.hpp"
#include "USaveReceivesWeatherDecalsStateActor.hpp"
#include "USaveReceivesWeatherDecalsStateMesh.hpp"
USaveReceivesWeatherDecalsStateActor* USaveReceivesWeatherDecalsStateActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SaveReceivesWeatherDecalsStateActor");
    return (USaveReceivesWeatherDecalsStateActor*)res;
}
void USaveReceivesWeatherDecalsStateActor::Update(bool markRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateActor.Update"));
    struct Params_Update {
        bool markRenderStateDirty; // 0x0
    }; // Size: 0x1
    Params_Update params{};
    params.markRenderStateDirty = (bool)markRenderStateDirty;
    ProcessEvent(func, &params);
}
USaveReceivesWeatherDecalsStateActor* USaveReceivesWeatherDecalsStateActor::CreateActor(AActor* Actor, bool ReceivesWeatherDecals, bool markRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateActor.CreateActor"));
    struct Params_CreateActor {
        AActor* Actor; // 0x0
        bool ReceivesWeatherDecals; // 0x8
        bool markRenderStateDirty; // 0x9
        char pad_a[0x6];
        USaveReceivesWeatherDecalsStateActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateActor params{};
    params.Actor = (AActor*)Actor;
    params.ReceivesWeatherDecals = (bool)ReceivesWeatherDecals;
    params.markRenderStateDirty = (bool)markRenderStateDirty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USaveReceivesWeatherDecalsStateActor*)params.ReturnValue;
}
