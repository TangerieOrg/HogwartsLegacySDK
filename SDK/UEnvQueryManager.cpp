#include "EEnvQueryRunMode\Type.hpp"
#include "FEnvQueryInstanceCache.hpp"
#include "UAISubsystem.hpp"
#include "UClass.hpp"
#include "UEnvQuery.hpp"
#include "UEnvQueryContext.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UEnvQueryManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UEnvQueryManager* UEnvQueryManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryManager");
    return (UEnvQueryManager*)res;
}
UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, EEnvQueryRunMode::Type RunMode, UClass* WrapperClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.EnvQueryManager.RunEQSQuery"));
    struct Params_RunEQSQuery {
        UObject* WorldContextObject; // 0x0
        UEnvQuery* QueryTemplate; // 0x8
        UObject* Querier; // 0x10
        EEnvQueryRunMode::Type RunMode; // 0x18
        char pad_19[0x7];
        UClass* WrapperClass; // 0x20
        UEnvQueryInstanceBlueprintWrapper* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_RunEQSQuery params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.QueryTemplate = (UEnvQuery*)QueryTemplate;
    params.Querier = (UObject*)Querier;
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.WrapperClass = (UClass*)WrapperClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UEnvQueryInstanceBlueprintWrapper*)params.ReturnValue;
}
