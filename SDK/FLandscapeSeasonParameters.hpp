#pragma once
#include <cstdint>
#include "FLandscapeScalarParameterSeason.hpp"
#include "FLandscapeTextureSeason.hpp"
#include "FLandscapeVectorParameterSeason.hpp"
#pragma pack(push, 1)
struct FLandscapeSeasonParameters {
    TArray<FLandscapeTextureSeason> TextureParameters; // 0x0
    TArray<FLandscapeVectorParameterSeason> VectorParameters; // 0x10
    TArray<FLandscapeScalarParameterSeason> ScalarParameters; // 0x20
}; // Size: 0x30
#pragma pack(pop)
