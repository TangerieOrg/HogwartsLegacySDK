#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFXUpdatePostProcessingParameter {
    None = 0,
    BlendWeight = 1,
    AllBlendablesWeight = 2,
    Blendable0Weight = 3,
    Blendable1Weight = 4,
    Blendable2Weight = 5,
    Blendable3Weight = 6,
    BlendInTime = 7,
    BlendOutTime = 8,
    DefaultBlendOutTime = 9,
    EFXUpdatePostProcessingParameter_MAX = 10,
};
#pragma pack(pop)
