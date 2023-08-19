#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateData.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateStencilManagerLockStencilCustomDepthData : public UMaterialSwapMeshStateData {
public:
    char pad_28[0x8];
    static UMaterialSwapMeshStateStencilManagerLockStencilCustomDepthData* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
