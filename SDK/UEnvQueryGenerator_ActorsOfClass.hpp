#pragma once
#include <cstdint>
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryGenerator.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator {
public:
    UClass* SearchedActorClass; // 0x50
    FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
    FAIDataProviderFloatValue SearchRadius; // 0x90
    UClass* SearchCenter; // 0xc8
    static UEnvQueryGenerator_ActorsOfClass* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
