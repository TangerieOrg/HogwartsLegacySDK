#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EUIControlEffectTarget : uint8_t {
    Bloom = 0,
    DepthOfField = 1,
    ChromaticAberration = 2,
    MotionBlur = 3,
    EUIControlEffectTarget_MAX = 4,
};
#pragma pack(pop)
