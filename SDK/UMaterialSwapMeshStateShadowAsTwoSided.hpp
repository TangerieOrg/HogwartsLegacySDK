#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateShadowAsTwoSided : public UMaterialSwapMeshStateBoolMap {
public:
    bool bCastShadowAsTwoSided; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateShadowAsTwoSided* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
