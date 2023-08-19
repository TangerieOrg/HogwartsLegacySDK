#pragma once
#include <cstdint>
#include "FMaterialSwapMeshStatesAndData.hpp"
#include "UMaterialSwap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshPoolBase : public UMaterialSwap {
public:
    char pad_50[0x50];
    FMaterialSwapMeshStatesAndData MeshStates; // 0xa0
    static UMaterialSwapMeshPoolBase* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
