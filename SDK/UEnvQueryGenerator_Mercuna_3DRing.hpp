#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "UEnvQueryGenerator.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_Mercuna_3DRing : public UEnvQueryGenerator {
public:
    FAIDataProviderFloatValue InnerRadius; // 0x50
    FAIDataProviderFloatValue OuterRadius; // 0x88
    FAIDataProviderIntValue NumberOfRings; // 0xc0
    FAIDataProviderIntValue PointsPerRing; // 0xf8
    FAIDataProviderFloatValue MinHeight; // 0x130
    FAIDataProviderFloatValue MaxHeight; // 0x168
    FAIDataProviderIntValue NumberOfLayers; // 0x1a0
    UClass* Center; // 0x1d8
    static UEnvQueryGenerator_Mercuna_3DRing* StaticClass();
}; // Size: 0x1e0
#pragma pack(pop)
