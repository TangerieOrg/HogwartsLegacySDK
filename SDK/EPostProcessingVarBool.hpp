#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostProcessingVarBool {
    None = 0,
    AutoExposureApplyPhysicalCameraExposure = 1,
    AmbientOcclusionRadiusInWS = 2,
    EPostProcessingVarBool_MAX = 3,
};
#pragma pack(pop)
