#pragma once
#include <cstdint>
class UMaterialInterface;
#pragma pack(push, 1)
struct FARSessionPayload {
    int32_t ConfigFlags; // 0x0
    char pad_4[0x4];
    UMaterialInterface* DefaultMeshMaterial; // 0x8
    UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
}; // Size: 0x18
#pragma pack(pop)
