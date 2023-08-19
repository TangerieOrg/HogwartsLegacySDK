#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateContactShadow : public UMaterialSwapMeshStateBoolMap {
public:
    bool bCastContactShadow; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateContactShadow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
