#pragma once
#include <cstdint>
class ARecastNavMesh;
#pragma pack(push, 1)
struct FRecastGraphWrapper {
    ARecastNavMesh* RecastNavMeshActor; // 0x0
    char pad_8[0x90];
}; // Size: 0x98
#pragma pack(pop)
