#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneAction_AnimateCurves_BlendMode : uint8_t {
    Replace = 0,
    Multiply = 1,
    Additive = 2,
    ESceneAction_AnimateCurves_MAX = 3,
};
#pragma pack(pop)
