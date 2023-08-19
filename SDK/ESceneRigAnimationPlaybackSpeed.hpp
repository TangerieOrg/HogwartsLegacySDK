#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigAnimationPlaybackSpeed : uint8_t {
    NaturalSpeed = 0,
    FillActionDuration = 1,
    UseSpeedMultiplier = 2,
    ESceneRigAnimationPlaybackSpeed_MAX = 3,
};
#pragma pack(pop)
