#pragma once
#include <cstdint>
#include "UNavigationDataChunk.hpp"
#pragma pack(push, 1)
class URecastNavMeshDataChunk : public UNavigationDataChunk {
public:
    char pad_30[0x10];
    static URecastNavMeshDataChunk* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
