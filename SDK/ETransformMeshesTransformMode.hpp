#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformMeshesTransformMode : uint8_t {
    SharedGizmo = 0,
    SharedGizmoLocal = 1,
    PerObjectGizmo = 2,
    LastValue = 3,
    ETransformMeshesTransformMode_MAX = 4,
};
#pragma pack(pop)
