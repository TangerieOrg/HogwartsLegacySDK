#pragma once
#include <cstdint>
#include "FFluidSimParams.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FCompiledFluidSimParams {
    FFluidSimParams Params; // 0x0
    UTexture2D* ColorMap; // 0x88
}; // Size: 0x90
#pragma pack(pop)
