#pragma once
#include <cstdint>
#include "FMaterialSwapMeshStatesAndData.hpp"
#include "FMeshMaterialSwap.hpp"
#include "UMaterialSwap.hpp"
#pragma pack(push, 1)
class UMaterialSwapSingleMesh : public UMaterialSwap {
public:
    char pad_50[0x8];
    FMeshMaterialSwap SwappedMesh; // 0x58
    FMaterialSwapMeshStatesAndData MeshStates; // 0x68
    static UMaterialSwapSingleMesh* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
