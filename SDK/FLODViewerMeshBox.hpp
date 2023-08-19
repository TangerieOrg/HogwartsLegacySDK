#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLODViewerMeshBox {
    FString MeshName; // 0x0
    FVector Min; // 0x10
    FVector Max; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
