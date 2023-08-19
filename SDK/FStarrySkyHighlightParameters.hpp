#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStarrySkyHighlightParameters {
    float HighlightIntensity; // 0x0
    float HighlightMagnitudeEmphasis; // 0x4
    float HighlightDesaturate; // 0x8
    float HighlightUseSurge; // 0xc
    float HighlightSurgeSpeed; // 0x10
    float HighlightStarOnlyFactor; // 0x14
}; // Size: 0x18
#pragma pack(pop)
