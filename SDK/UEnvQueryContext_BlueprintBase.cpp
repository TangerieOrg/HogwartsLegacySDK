#include "AActor.hpp"
#include "FVector.hpp"
#include "UEnvQueryContext.hpp"
#include "UEnvQueryContext_BlueprintBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UEnvQueryContext_BlueprintBase* UEnvQueryContext_BlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryContext_BlueprintBase");
    return (UEnvQueryContext_BlueprintBase*)res;
}
void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet"));
    struct Params_ProvideLocationsSet {
        UObject* QuerierObject; // 0x0
        AActor* QuerierActor; // 0x8
        TArray<FVector> ResultingLocationSet; // 0x10
    }; // Size: 0x20
    Params_ProvideLocationsSet params{};
    params.QuerierObject = (UObject*)QuerierObject;
    params.QuerierActor = (AActor*)QuerierActor;
    params.ResultingLocationSet = (TArray<FVector>)ResultingLocationSet;
    ProcessEvent(func, &params);
    ResultingLocationSet = params.ResultingLocationSet;
}
void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation"));
    struct Params_ProvideSingleLocation {
        UObject* QuerierObject; // 0x0
        AActor* QuerierActor; // 0x8
        FVector ResultingLocation; // 0x10
    }; // Size: 0x1c
    Params_ProvideSingleLocation params{};
    params.QuerierObject = (UObject*)QuerierObject;
    params.QuerierActor = (AActor*)QuerierActor;
    params.ResultingLocation = (FVector)ResultingLocation;
    ProcessEvent(func, &params);
    ResultingLocation = params.ResultingLocation;
}
void UEnvQueryContext_BlueprintBase::ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor"));
    struct Params_ProvideSingleActor {
        UObject* QuerierObject; // 0x0
        AActor* QuerierActor; // 0x8
        AActor* ResultingActor; // 0x10
    }; // Size: 0x18
    Params_ProvideSingleActor params{};
    params.QuerierObject = (UObject*)QuerierObject;
    params.QuerierActor = (AActor*)QuerierActor;
    params.ResultingActor = (AActor*)ResultingActor;
    ProcessEvent(func, &params);
    ResultingActor = params.ResultingActor;
}
void UEnvQueryContext_BlueprintBase::ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet"));
    struct Params_ProvideActorsSet {
        UObject* QuerierObject; // 0x0
        AActor* QuerierActor; // 0x8
        TArray<AActor*> ResultingActorsSet; // 0x10
    }; // Size: 0x20
    Params_ProvideActorsSet params{};
    params.QuerierObject = (UObject*)QuerierObject;
    params.QuerierActor = (AActor*)QuerierActor;
    params.ResultingActorsSet = (TArray<AActor*>)ResultingActorsSet;
    ProcessEvent(func, &params);
    ResultingActorsSet = params.ResultingActorsSet;
}
