#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPolyEditCutPlaneOrientation : int32_t {
    FaceNormals = 0,
    ViewDirection = 1,
    EPolyEditCutPlaneOrientation_MAX = 2,
};
#pragma pack(pop)
