#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateReceivesDecals : public UMaterialSwapMeshStateBoolMap {
public:
    bool bReceivesDecals; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateReceivesDecals* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
