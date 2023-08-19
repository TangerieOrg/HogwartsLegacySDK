#pragma once
#include <cstdint>
#include "USelectionSet.hpp"
#pragma pack(push, 1)
class UMeshSelectionSet : public USelectionSet {
public:
    TArray<int32_t> Vertices; // 0x40
    TArray<int32_t> Edges; // 0x50
    TArray<int32_t> Faces; // 0x60
    TArray<int32_t> Groups; // 0x70
    static UMeshSelectionSet* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
