#pragma once
#include <cstdint>
#include "UEditableMeshAdapter.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter {
public:
    UStaticMesh* StaticMesh; // 0x28
    UStaticMesh* OriginalStaticMesh; // 0x30
    int32_t StaticMeshLODIndex; // 0x38
    char pad_3c[0xa4];
    static UEditableStaticMeshAdapter* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
