#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigAnimationPlaybackRange : uint8_t {
    FullClipRange = 0,
    StartEndOffsets = 1,
    StartEndFractions = 2,
    StartOffsetWithDuration = 3,
    ESceneRigAnimationPlaybackRange_MAX = 4,
};
#pragma pack(pop)
