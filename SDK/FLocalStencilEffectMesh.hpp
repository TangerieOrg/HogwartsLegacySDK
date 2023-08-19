#pragma once
#include <cstdint>
#include "FLocalStencilEffectMeshBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FLocalStencilEffectMesh : public FLocalStencilEffectMeshBase {
    char pad_28[0x8];
    FTransform LastTransform; // 0x30
}; // Size: 0x60
#pragma pack(pop)
