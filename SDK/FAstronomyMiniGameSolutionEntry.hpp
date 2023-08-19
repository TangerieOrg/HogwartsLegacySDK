#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FAstronomyMiniGameSolutionEntry : public FTableRowBase {
    float FOV; // 0x8
    FRotator Rotator; // 0xc
    float minFOV; // 0x18
    float maxFOV; // 0x1c
    float Log; // 0x20
    float FOVTolerance; // 0x24
    float RotationTolerance; // 0x28
    float HighlightIntensityMod; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
