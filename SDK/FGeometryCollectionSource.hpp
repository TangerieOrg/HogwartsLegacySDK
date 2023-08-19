#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "FTransform.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FGeometryCollectionSource {
    FSoftObjectPath SourceGeometryObject; // 0x0
    char pad_18[0x8];
    FTransform LocalTransform; // 0x20
    TArray<UMaterialInterface*> SourceMaterial; // 0x50
}; // Size: 0x60
#pragma pack(pop)
