#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UEnvQueryGenerator.hpp"
class UClass;
class UObject;
class AActor;
#pragma pack(push, 1)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator {
public:
    char pad_50[0x18];
    UClass* Context; // 0x68
    UClass* GeneratedItemType; // 0x70
    char pad_78[0x8];
    static UEnvQueryGenerator_BlueprintBase* StaticClass();
    UObject* GetQuerier();
    void DoItemGeneration(TArray<FVector>& ContextLocations);
    void AddGeneratedVector(FVector GeneratedVector);
    void AddGeneratedActor(AActor* GeneratedActor);
}; // Size: 0x80
#pragma pack(pop)
