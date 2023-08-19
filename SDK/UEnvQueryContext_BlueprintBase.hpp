#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UEnvQueryContext.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext {
public:
    char pad_28[0x8];
    static UEnvQueryContext_BlueprintBase* StaticClass();
    void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation);
    void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor);
    void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet);
    void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet);
}; // Size: 0x30
#pragma pack(pop)
