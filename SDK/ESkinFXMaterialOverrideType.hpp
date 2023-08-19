#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXMaterialOverrideType : uint8_t {
    UseMeshMaterials = 0,
    UseSingleOverride = 1,
    MatchedIndexOverride = 2,
    ESkinFXMaterialOverrideType_MAX = 3,
};
#pragma pack(pop)
