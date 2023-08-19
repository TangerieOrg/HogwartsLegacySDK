#pragma once
#include <cstdint>
#include "FBoneSwarmProjectionType.hpp"
#include "FBoneSwarmShowType.hpp"
#include "FCharacterBoneProjectionMotionType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBoneSwarmerInitialConditions {
    FBoneSwarmProjectionType ProjectionType; // 0x0
    char pad_1[0x3];
    FVector BaseProjectionDirection; // 0x4
    float MinConeHalfAngle; // 0x10
    float MaxConeHalfAngle; // 0x14
    FCharacterBoneProjectionMotionType MotionType; // 0x18
    char pad_19[0x3];
    float MinRotationSpeed; // 0x1c
    float MaxRotationSpeed; // 0x20
    float MinTranslationPeriod; // 0x24
    float MaxTranslationPeriod; // 0x28
    float MinTranslationExtent; // 0x2c
    float MaxTranslationExtent; // 0x30
    float MinCrawlingSpeed; // 0x34
    float MaxCrawlingSpeed; // 0x38
    FBoneSwarmShowType ShowType; // 0x3c
    char pad_3d[0x3];
    float MinHiddenTime; // 0x40
    float MaxHiddenTime; // 0x44
    float Offset; // 0x48
    float Scale; // 0x4c
    float RandomizeScalePercent; // 0x50
}; // Size: 0x54
#pragma pack(pop)
