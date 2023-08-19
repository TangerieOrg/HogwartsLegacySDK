#pragma once
#include <cstdint>
#include "UMaterialSwapMeshState.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateStencilManagerLockStencilCustomDepth : public UMaterialSwapMeshState {
public:
    int32_t StencilValue; // 0x28
    bool bRenderCustomDepth; // 0x2c
    char pad_2d[0x3];
    static UMaterialSwapMeshStateStencilManagerLockStencilCustomDepth* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
