#pragma once
#include <cstdint>
#include "FCharacterBoneProjectionMotionType.hpp"
#pragma pack(push, 1)
struct FCharacterBoneProjectionMotion {
    FCharacterBoneProjectionMotionType MotionType; // 0x0
    char pad_1[0x3];
    float RotationSpeedDegreesPerSecond; // 0x4
    float TranslationPeriod; // 0x8
    float MaxExtent; // 0xc
    float CrawlingSpeed; // 0x10
}; // Size: 0x14
#pragma pack(pop)
