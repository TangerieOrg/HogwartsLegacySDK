#pragma once
#include <cstdint>
#include "EMercunaPointDistribution.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "UEnvQueryGenerator.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_Mercuna_Sphere : public UEnvQueryGenerator {
public:
    FAIDataProviderFloatValue InnerRadius; // 0x50
    FAIDataProviderFloatValue OuterRadius; // 0x88
    FAIDataProviderIntValue NumberOfShells; // 0xc0
    FAIDataProviderIntValue PointsPerShell; // 0xf8
    EMercunaPointDistribution Distribution; // 0x130
    char pad_131[0x7];
    UClass* Center; // 0x138
    static UEnvQueryGenerator_Mercuna_Sphere* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
