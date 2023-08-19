#include "AActor.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_BlueprintBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(AActor* GeneratedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor"));
    struct Params_AddGeneratedActor {
        AActor* GeneratedActor; // 0x0
    }; // Size: 0x8
    Params_AddGeneratedActor params{};
    params.GeneratedActor = (AActor*)GeneratedActor;
    ProcessEvent(func, &params);
}
UEnvQueryGenerator_BlueprintBase* UEnvQueryGenerator_BlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_BlueprintBase");
    return (UEnvQueryGenerator_BlueprintBase*)res;
}
UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier"));
    struct Params_GetQuerier {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetQuerier params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<FVector>& ContextLocations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration"));
    struct Params_DoItemGeneration {
        TArray<FVector> ContextLocations; // 0x0
    }; // Size: 0x10
    Params_DoItemGeneration params{};
    params.ContextLocations = (TArray<FVector>)ContextLocations;
    ProcessEvent(func, &params);
    ContextLocations = params.ContextLocations;
}
void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(FVector GeneratedVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector"));
    struct Params_AddGeneratedVector {
        FVector GeneratedVector; // 0x0
    }; // Size: 0xc
    Params_AddGeneratedVector params{};
    params.GeneratedVector = (FVector)GeneratedVector;
    ProcessEvent(func, &params);
}
