#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints {
public:
    FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
    FAIDataProviderFloatValue ConeDegrees; // 0xb8
    FAIDataProviderFloatValue AngleStep; // 0xf0
    FAIDataProviderFloatValue Range; // 0x128
    UClass* CenterActor; // 0x160
    uint8_t bIncludeContextLocation : 1; // 0x168
    uint8_t pad_bitfield_168_1 : 7;
    char pad_169[0x7];
    static UEnvQueryGenerator_Cone* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
