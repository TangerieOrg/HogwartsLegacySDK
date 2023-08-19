#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateCastShadow : public UMaterialSwapMeshStateBoolMap {
public:
    bool bCastShadow; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateCastShadow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
