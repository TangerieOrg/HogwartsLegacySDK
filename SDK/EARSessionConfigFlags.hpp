#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARSessionConfigFlags {
    None = 0,
    GenerateMeshData = 1,
    RenderMeshDataInWireframe = 2,
    GenerateCollisionForMeshData = 4,
    GenerateNavMeshForMeshData = 8,
    UseMeshDataForOcclusion = 16,
    EARSessionConfigFlags_MAX = 17,
};
#pragma pack(pop)
