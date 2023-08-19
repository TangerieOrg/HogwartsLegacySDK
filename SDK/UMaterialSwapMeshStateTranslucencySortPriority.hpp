#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateIntMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateTranslucencySortPriority : public UMaterialSwapMeshStateIntMap {
public:
    int32_t TranslucencySortPriority; // 0x28
    char pad_2c[0x4];
    static UMaterialSwapMeshStateTranslucencySortPriority* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
