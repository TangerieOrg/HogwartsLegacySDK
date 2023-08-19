#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLandscapeScalarParameterSeason {
    FName ParameterName; // 0x0
    float SpringScalarValue; // 0x8
    float SummerScalarValue; // 0xc
    float FallScalarValue; // 0x10
    float WinterScalarValue; // 0x14
}; // Size: 0x18
#pragma pack(pop)
