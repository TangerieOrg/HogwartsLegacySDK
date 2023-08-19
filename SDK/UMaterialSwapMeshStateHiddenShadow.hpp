#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateHiddenShadow : public UMaterialSwapMeshStateBoolMap {
public:
    bool bCastHiddenShadow; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateHiddenShadow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
