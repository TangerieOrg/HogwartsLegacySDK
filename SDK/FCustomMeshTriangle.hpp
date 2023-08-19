#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCustomMeshTriangle {
    FVector Vertex0; // 0x0
    FVector Vertex1; // 0xc
    FVector Vertex2; // 0x18
}; // Size: 0x24
#pragma pack(pop)
