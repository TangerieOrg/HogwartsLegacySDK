#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARTextureType : uint8_t {
    Unknown = 0,
    CameraImage = 1,
    CameraDepth = 2,
    EnvironmentCapture = 3,
    PersonSegmentationImage = 4,
    PersonSegmentationDepth = 5,
    SceneDepthMap = 6,
    SceneDepthConfidenceMap = 7,
    EARTextureType_MAX = 8,
};
#pragma pack(pop)
