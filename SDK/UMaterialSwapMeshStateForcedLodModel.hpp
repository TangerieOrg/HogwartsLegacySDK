#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateIntMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateForcedLodModel : public UMaterialSwapMeshStateIntMap {
public:
    int32_t ForcedLodModel; // 0x28
    char pad_2c[0x4];
    static UMaterialSwapMeshStateForcedLodModel* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
