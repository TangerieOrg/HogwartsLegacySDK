#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneSnapQueryTargetType {
    None = 0,
    MeshVertex = 1,
    MeshEdge = 2,
    Grid = 4,
    All = 7,
    ESceneSnapQueryTargetType_MAX = 8,
};
#pragma pack(pop)
