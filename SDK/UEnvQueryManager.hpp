#pragma once
#include <cstdint>
#include "EEnvQueryRunMode\Type.hpp"
#include "FEnvQueryInstanceCache.hpp"
#include "UAISubsystem.hpp"
class UEnvQueryContext;
class UEnvQueryInstanceBlueprintWrapper;
class UClass;
class UObject;
class UEnvQuery;
#pragma pack(push, 1)
class UEnvQueryManager : public UAISubsystem {
public:
    char pad_38[0x70];
    TArray<FEnvQueryInstanceCache> InstanceCache; // 0xa8
    TArray<UEnvQueryContext*> LocalContexts; // 0xb8
    TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8
    char pad_d8[0x54];
    float MaxAllowedTestingTime; // 0x12c
    bool bTestQueriesUsingBreadth; // 0x130
    char pad_131[0x3];
    int32_t QueryCountWarningThreshold; // 0x134
    double QueryCountWarningInterval; // 0x138
    static UEnvQueryManager* StaticClass();
    static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, EEnvQueryRunMode::Type RunMode, UClass* WrapperClass);
}; // Size: 0x140
#pragma pack(pop)
