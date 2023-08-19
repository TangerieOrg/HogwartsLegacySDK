#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARCaptureType : uint8_t {
    Camera = 0,
    QRCode = 1,
    SpatialMapping = 2,
    SceneUnderstanding = 3,
    HandMesh = 4,
    EARCaptureType_MAX = 5,
};
#pragma pack(pop)
