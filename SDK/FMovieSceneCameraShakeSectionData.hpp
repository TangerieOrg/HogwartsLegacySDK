#pragma once
#include <cstdint>
#include "ECameraShakePlaySpace.hpp"
#include "FRotator.hpp"
class UClass;
#pragma pack(push, 1)
struct FMovieSceneCameraShakeSectionData {
    UClass* ShakeClass; // 0x0
    float PlayScale; // 0x8
    ECameraShakePlaySpace PlaySpace; // 0xc
    char pad_d[0x3];
    FRotator UserDefinedPlaySpace; // 0x10
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
