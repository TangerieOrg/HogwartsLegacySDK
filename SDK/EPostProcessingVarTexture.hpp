#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostProcessingVarTexture {
    None = 0,
    BloomDirtMask = 1,
    AutoExposureMeterMask = 2,
    LensFlareBokehShape = 3,
    ColorGradingLUT = 4,
    BloomConvolutionTexture = 5,
    AmbientCubemap = 6,
    EPostProcessingVarTexture_MAX = 7,
};
#pragma pack(pop)
