#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FProcMeshVertex.hpp"
#pragma pack(push, 1)
struct FProcMeshSection {
    TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
    TArray<uint32_t> ProcIndexBuffer; // 0x10
    FBox SectionLocalBox; // 0x20
    bool bEnableCollision; // 0x3c
    bool bSectionVisible; // 0x3d
    char pad_3e[0x2];
}; // Size: 0x40
#pragma pack(pop)
