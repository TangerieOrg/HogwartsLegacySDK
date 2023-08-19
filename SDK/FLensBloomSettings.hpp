#pragma once
#include <cstdint>
#include "EBloomMethod.hpp"
#include "FConvolutionBloomSettings.hpp"
#include "FGaussianSumBloomSettings.hpp"
#pragma pack(push, 1)
struct FLensBloomSettings {
    FGaussianSumBloomSettings GaussianSum; // 0x0
    FConvolutionBloomSettings Convolution; // 0x88
    EBloomMethod Method; // 0xb0
    char pad_b1[0x7];
}; // Size: 0xb8
#pragma pack(pop)
