#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMeshSectionInfo {
    int32_t MaterialIndex; // 0x0
    bool bEnableCollision; // 0x4
    bool bCastShadow; // 0x5
    bool bVisibleInRayTracing; // 0x6
    bool bForceOpaque; // 0x7
}; // Size: 0x8
#pragma pack(pop)
