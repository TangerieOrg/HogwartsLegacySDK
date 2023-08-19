#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraCollisionMode {
    None = 0,
    SceneGeometry = 1,
    DepthBuffer = 2,
    DistanceField = 3,
    ENiagaraCollisionMode_MAX = 4,
};
#pragma pack(pop)
