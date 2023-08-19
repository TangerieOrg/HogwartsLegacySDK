#pragma once
#include <cstdint>
#include "EEnvQueryStatus\Type.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UClass;
class AActor;
#pragma pack(push, 1)
class UEnvQueryInstanceBlueprintWrapper : public UObject {
public:
    char pad_28[0x8];
    int32_t QueryID; // 0x30
    char pad_34[0x24];
    UClass* ItemType; // 0x58
    int32_t OptionIndex; // 0x60
    char pad_64[0x14];
    static UEnvQueryInstanceBlueprintWrapper* StaticClass();
    void SetNamedParam(FName ParamName, float Value);
    TArray<FVector> GetResultsAsLocations();
    TArray<AActor*> GetResultsAsActors();
    bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);
    bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);
    float GetItemScore(int32_t ItemIndex);
    void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
}; // Size: 0x78
#pragma pack(pop)
