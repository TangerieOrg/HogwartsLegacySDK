#include "AActor.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
TArray<FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations"));
    struct Params_GetResultsAsLocations {
        TArray<FVector> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetResultsAsLocations params{};
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(FName ParamName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam"));
    struct Params_SetNamedParam {
        FName ParamName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetNamedParam params{};
    params.ParamName = (FName)ParamName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
UEnvQueryInstanceBlueprintWrapper* UEnvQueryInstanceBlueprintWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper");
    return (UEnvQueryInstanceBlueprintWrapper*)res;
}
TArray<AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors"));
    struct Params_GetResultsAsActors {
        TArray<AActor*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetResultsAsActors params{};
    ProcessEvent(func, &params);
    return (TArray<AActor*>)params.ReturnValue;
}
float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore"));
    struct Params_GetItemScore {
        int32_t ItemIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetItemScore params{};
    params.ItemIndex = (int32_t)ItemIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<FVector>& ResultLocations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations"));
    struct Params_GetQueryResultsAsLocations {
        TArray<FVector> ResultLocations; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetQueryResultsAsLocations params{};
    params.ResultLocations = (TArray<FVector>)ResultLocations;
    ProcessEvent(func, &params);
    ResultLocations = params.ResultLocations;
    return (bool)params.ReturnValue;
}
bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<AActor*>& ResultActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors"));
    struct Params_GetQueryResultsAsActors {
        TArray<AActor*> ResultActors; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetQueryResultsAsActors params{};
    params.ResultActors = (TArray<AActor*>)ResultActors;
    ProcessEvent(func, &params);
    ResultActors = params.ResultActors;
    return (bool)params.ReturnValue;
}
void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature"));
    struct Params_EQSQueryDoneSignature__DelegateSignature {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_EQSQueryDoneSignature__DelegateSignature params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
