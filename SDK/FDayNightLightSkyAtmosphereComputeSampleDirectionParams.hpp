#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDayNightLightSkyAtmosphereComputeSampleDirectionParams {
    float SampleOffsetAltitudeDegrees; // 0x0
    float MinimumSampleAltitudeDegrees; // 0x4
    float MaximumSampleAltitudeDegrees; // 0x8
    bool bMirrorLowerHemisphere; // 0xc
    bool bUseMinimumSampleAltitudeDegrees; // 0xd
    bool bUseMaximumSampleAltitudeDegrees; // 0xe
    char pad_f[0x1];
}; // Size: 0x10
#pragma pack(pop)
