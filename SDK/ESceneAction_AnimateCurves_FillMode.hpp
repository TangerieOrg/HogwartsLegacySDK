#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneAction_AnimateCurves_FillMode : uint8_t {
    Stretch = 0,
    Hold = 1,
    Repeat = 2,
    ESceneAction_AnimateCurves_MAX = 3,
};
#pragma pack(pop)
