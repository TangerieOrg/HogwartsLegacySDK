#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FGeometryCollectionEmbeddedExemplar {
    FSoftObjectPath StaticMeshExemplar; // 0x0
    float StartCullDistance; // 0x18
    float EndCullDistance; // 0x1c
    int32_t InstanceCount; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
