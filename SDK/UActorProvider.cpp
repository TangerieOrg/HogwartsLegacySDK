#include "AActor.hpp"
#include "UActorProvider.hpp"
#include "UActorSpawner.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UObjectProvider.hpp"
AActor* UActorProvider::GetActor(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.ActorProvider.GetActor"));
    struct Params_GetActor {
        UObject* Caller; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActor params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UActorProvider* UActorProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ActorProvider");
    return (UActorProvider*)res;
}
