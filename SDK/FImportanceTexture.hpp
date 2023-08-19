#pragma once
#include <cstdint>
#include "EImportanceWeight\Type.hpp"
#include "FColor.hpp"
#include "FIntPoint.hpp"
#pragma pack(push, 1)
struct FImportanceTexture {
    FIntPoint Size; // 0x0
    int32_t NumMips; // 0x8
    char pad_c[0x4];
    TArray<float> MarginalCDF; // 0x10
    TArray<float> ConditionalCDF; // 0x20
    TArray<FColor> TextureData; // 0x30
    char pad_40[0x8];
    EImportanceWeight::Type Weighting; // 0x48
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
