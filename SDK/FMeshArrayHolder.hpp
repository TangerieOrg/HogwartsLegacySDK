#pragma once
#include <cstdint>
class UStaticMesh;
#pragma pack(push, 1)
struct FMeshArrayHolder {
    TArray<UStaticMesh*> Meshes; // 0x0
}; // Size: 0x10
#pragma pack(pop)
