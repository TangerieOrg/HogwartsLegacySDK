#pragma once
#include <cstdint>
#include "FMIDScalarParameter.hpp"
#include "FMIDTextureParameter.hpp"
#include "FMIDVectorParameter.hpp"
#pragma pack(push, 1)
struct FMIDParameters {
    TArray<FMIDScalarParameter> Scalars; // 0x0
    TArray<FMIDVectorParameter> Vectors; // 0x10
    TArray<FMIDTextureParameter> Textures; // 0x20
}; // Size: 0x30
#pragma pack(pop)
