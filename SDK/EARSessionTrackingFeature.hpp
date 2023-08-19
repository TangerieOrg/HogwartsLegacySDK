#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARSessionTrackingFeature : uint8_t {
    None = 0,
    PoseDetection2D = 1,
    PersonSegmentation = 2,
    PersonSegmentationWithDepth = 3,
    SceneDepth = 4,
    SmoothedSceneDepth = 5,
    EARSessionTrackingFeature_MAX = 6,
};
#pragma pack(pop)
