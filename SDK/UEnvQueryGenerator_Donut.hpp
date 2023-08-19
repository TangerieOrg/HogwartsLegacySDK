#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "FEnvDirection.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints {
public:
    FAIDataProviderFloatValue InnerRadius; // 0x80
    FAIDataProviderFloatValue OuterRadius; // 0xb8
    FAIDataProviderIntValue NumberOfRings; // 0xf0
    FAIDataProviderIntValue PointsPerRing; // 0x128
    FEnvDirection ArcDirection; // 0x160
    FAIDataProviderFloatValue ArcAngle; // 0x180
    bool bUseSpiralPattern; // 0x1b8
    char pad_1b9[0x7];
    UClass* Center; // 0x1c0
    uint8_t bDefineArc : 1; // 0x1c8
    uint8_t pad_bitfield_1c8_1 : 7;
    char pad_1c9[0x7];
    static UEnvQueryGenerator_Donut* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
