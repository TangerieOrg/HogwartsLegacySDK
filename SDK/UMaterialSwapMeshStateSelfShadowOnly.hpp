#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateSelfShadowOnly : public UMaterialSwapMeshStateBoolMap {
public:
    bool bSelfShadowOnly; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateSelfShadowOnly* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
