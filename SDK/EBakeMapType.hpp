#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBakeMapType : int32_t {
    TangentSpaceNormalMap = 0,
    Occlusion = 1,
    Curvature = 2,
    Texture2DImage = 3,
    NormalImage = 4,
    FaceNormalImage = 5,
    PositionImage = 6,
    EBakeMapType_MAX = 7,
};
#pragma pack(pop)
