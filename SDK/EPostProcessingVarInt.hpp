#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostProcessingVarInt {
    None = 0,
    ReflectionsType = 1,
    DepthOfFieldBladeCount = 2,
    MotionBlurTargetFPS = 3,
    EPostProcessingVarInt_MAX = 4,
};
#pragma pack(pop)
