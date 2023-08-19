#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFXUpdatePostProcessingCurveParameter : uint8_t {
    None = 0,
    BlendWeight = 1,
    AllBlendablesWeight = 2,
    Blendable0Weight = 3,
    Blendable1Weight = 4,
    Blendable2Weight = 5,
    Blendable3Weight = 6,
    EFXUpdatePostProcessingCurveParameter_MAX = 7,
};
#pragma pack(pop)
