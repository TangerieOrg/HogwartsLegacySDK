#pragma once
#include <cstdint>
class UStaticMeshComponent;
class UStaticMesh;
#pragma pack(push, 1)
struct FEarthShadow {
    UStaticMeshComponent* MeshComponent; // 0x0
    UStaticMesh* Mesh; // 0x8
    float ZOffsetMeters; // 0x10
    float ScaleXY; // 0x14
    bool bZOffsetRelativeToWorldMinZ; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
