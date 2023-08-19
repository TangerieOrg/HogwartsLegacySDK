#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkeletonToMeshLinkup {
    TArray<int32_t> SkeletonToMeshTable; // 0x0
    TArray<int32_t> MeshToSkeletonTable; // 0x10
}; // Size: 0x20
#pragma pack(pop)
