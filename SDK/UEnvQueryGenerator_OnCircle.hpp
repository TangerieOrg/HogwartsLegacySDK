#pragma once
#include <cstdint>
#include "EPointOnCircleSpacingMethod.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "FEnvDirection.hpp"
#include "FEnvTraceData.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints {
public:
    FAIDataProviderFloatValue CircleRadius; // 0x80
    FAIDataProviderFloatValue SpaceBetween; // 0xb8
    FAIDataProviderIntValue NumberOfPoints; // 0xf0
    EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128
    char pad_129[0x7];
    FEnvDirection ArcDirection; // 0x130
    FAIDataProviderFloatValue ArcAngle; // 0x150
    float AngleRadians; // 0x188
    char pad_18c[0x4];
    UClass* CircleCenter; // 0x190
    bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198
    char pad_199[0x7];
    FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a0
    FEnvTraceData TraceData; // 0x1d8
    uint8_t bDefineArc : 1; // 0x208
    uint8_t pad_bitfield_208_1 : 7;
    char pad_209[0x7];
    static UEnvQueryGenerator_OnCircle* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
