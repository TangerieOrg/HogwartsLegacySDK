#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateDynamicShadow : public UMaterialSwapMeshStateBoolMap {
public:
    bool bCastDynamicShadow; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateDynamicShadow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
