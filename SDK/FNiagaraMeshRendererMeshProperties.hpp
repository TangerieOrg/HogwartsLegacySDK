#pragma once
#include <cstdint>
#include "ENiagaraMeshPivotOffsetSpace.hpp"
#include "FVector.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FNiagaraMeshRendererMeshProperties {
    UStaticMesh* Mesh; // 0x0
    FVector Scale; // 0x8
    FVector PivotOffset; // 0x14
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
