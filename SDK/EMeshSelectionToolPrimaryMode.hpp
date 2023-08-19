#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshSelectionToolPrimaryMode : int32_t {
    Brush = 0,
    VolumetricBrush = 1,
    AngleFiltered = 2,
    Visible = 3,
    AllConnected = 4,
    AllInGroup = 5,
    ByMaterial = 6,
    ByUVIsland = 7,
    AllWithinAngle = 8,
    EMeshSelectionToolPrimaryMode_MAX = 9,
};
#pragma pack(pop)
