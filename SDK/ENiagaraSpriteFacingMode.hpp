#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraSpriteFacingMode : uint8_t {
    FaceCamera = 0,
    FaceCameraPlane = 1,
    CustomFacingVector = 2,
    FaceCameraPosition = 3,
    FaceCameraDistanceBlend = 4,
    ENiagaraSpriteFacingMode_MAX = 5,
};
#pragma pack(pop)
