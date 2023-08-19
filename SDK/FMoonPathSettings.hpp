#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMoonPathSettings {
    int32_t SamplePoints; // 0x0
    float CubicTension; // 0x4
    bool bHighAccuracyPosition; // 0x8
    bool bTrueTopoCentric; // 0x9
    bool bRemoveRedundantKeys; // 0xa
    bool bCubicInterpolation; // 0xb
}; // Size: 0xc
#pragma pack(pop)
