#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneCapturePrimitiveRenderMode : uint8_t {
    PRM_LegacySceneCapture = 0,
    PRM_RenderScenePrimitives = 1,
    PRM_UseShowOnlyList = 2,
    PRM_MAX = 3,
};
#pragma pack(pop)
