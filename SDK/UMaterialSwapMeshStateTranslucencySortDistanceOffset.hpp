#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateFloatMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateTranslucencySortDistanceOffset : public UMaterialSwapMeshStateFloatMap {
public:
    float TranslucencySortDistanceOffset; // 0x28
    char pad_2c[0x4];
    static UMaterialSwapMeshStateTranslucencySortDistanceOffset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
