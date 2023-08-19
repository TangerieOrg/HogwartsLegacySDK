#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints {
public:
    FAIDataProviderFloatValue GridSize; // 0x80
    FAIDataProviderFloatValue SpaceBetween; // 0xb8
    UClass* GenerateAround; // 0xf0
    static UEnvQueryGenerator_SimpleGrid* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
