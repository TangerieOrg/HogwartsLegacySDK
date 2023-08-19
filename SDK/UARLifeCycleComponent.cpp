#include "AARActor.hpp"
#include "FGuid.hpp"
#include "UARLifeCycleComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void UARLifeCycleComponent::ServerDestroyARActor(AARActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor"));
    struct Params_ServerDestroyARActor {
        AARActor* Actor; // 0x0
    }; // Size: 0x8
    Params_ServerDestroyARActor params{};
    params.Actor = (AARActor*)Actor;
    ProcessEvent(func, &params);
}
UARLifeCycleComponent* UARLifeCycleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARLifeCycleComponent");
    return (UARLifeCycleComponent*)res;
}
void UARLifeCycleComponent::ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor"));
    struct Params_ServerSpawnARActor {
        UClass* ComponentClass; // 0x0
        FGuid NativeID; // 0x8
    }; // Size: 0x18
    Params_ServerSpawnARActor params{};
    params.ComponentClass = (UClass*)ComponentClass;
    params.NativeID = (FGuid)NativeID;
    ProcessEvent(func, &params);
}
void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(AARActor* Actor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature"));
    struct Params_InstanceARActorToBeDestroyedDelegate__DelegateSignature {
        AARActor* Actor; // 0x0
    }; // Size: 0x8
    Params_InstanceARActorToBeDestroyedDelegate__DelegateSignature params{};
    params.Actor = (AARActor*)Actor;
    ProcessEvent(func, &params);
}
void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature"));
    struct Params_InstanceARActorSpawnedDelegate__DelegateSignature {
        UClass* ComponentClass; // 0x0
        FGuid NativeID; // 0x8
        AARActor* SpawnedActor; // 0x18
    }; // Size: 0x20
    Params_InstanceARActorSpawnedDelegate__DelegateSignature params{};
    params.ComponentClass = (UClass*)ComponentClass;
    params.NativeID = (FGuid)NativeID;
    params.SpawnedActor = (AARActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
