#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXEffectSwapType : uint8_t {
    UsePermutedMaterials = 0,
    InPlaceMIDs = 1,
    MaterialOverride = 2,
    ESkinFXEffectSwapType_MAX = 3,
};
#pragma pack(pop)
