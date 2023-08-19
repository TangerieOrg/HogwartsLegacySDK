#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELandscapeLayerPaintingRestriction {
    None = 0,
    UseMaxLayers = 1,
    ExistingOnly = 2,
    UseComponentWhitelist = 3,
    ELandscapeLayerPaintingRestriction_MAX = 4,
};
#pragma pack(pop)
