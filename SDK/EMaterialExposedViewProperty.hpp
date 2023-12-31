#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialExposedViewProperty : uint8_t {
    MEVP_BufferSize = 0,
    MEVP_FieldOfView = 1,
    MEVP_TanHalfFieldOfView = 2,
    MEVP_ViewSize = 3,
    MEVP_WorldSpaceViewPosition = 4,
    MEVP_WorldSpaceCameraPosition = 5,
    MEVP_ViewportOffset = 6,
    MEVP_TemporalSampleCount = 7,
    MEVP_TemporalSampleIndex = 8,
    MEVP_TemporalSampleOffset = 9,
    MEVP_RuntimeVirtualTextureOutputLevel = 10,
    MEVP_RuntimeVirtualTextureOutputDerivative = 11,
    MEVP_PreExposure = 12,
    MEVP_RuntimeVirtualTextureMaxLevel = 13,
    MEVP_WBGM_CapturingLightProbes = 14,
    MEVP_MAX = 15,
};
#pragma pack(pop)
