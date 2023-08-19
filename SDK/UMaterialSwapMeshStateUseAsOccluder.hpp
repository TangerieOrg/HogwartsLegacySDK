#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateUseAsOccluder : public UMaterialSwapMeshStateBoolMap {
public:
    bool bUseAsOccluder; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateUseAsOccluder* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
