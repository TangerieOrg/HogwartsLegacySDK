#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMeshScreenAlignment : uint8_t {
    PSMA_MeshFaceCameraWithRoll = 0,
    PSMA_MeshFaceCameraWithSpin = 1,
    PSMA_MeshFaceCameraWithLockedAxis = 2,
    PSMA_MAX = 3,
};
#pragma pack(pop)
