#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateRenderCustomDepth : public UMaterialSwapMeshStateBoolMap {
public:
    bool bRenderCustomDepth; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateRenderCustomDepth* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
