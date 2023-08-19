#pragma once
#include <cstdint>
#include "FGeometryCollectionCollisionTypeData.hpp"
#include "FGeometryCollectionRemovalData.hpp"
#pragma pack(push, 1)
struct FGeometryCollectionSizeSpecificData {
    float MaxSize; // 0x0
    char pad_4[0x4];
    TArray<FGeometryCollectionCollisionTypeData> CollisionShapes; // 0x8
    int32_t DamageThreshold; // 0x18
    FGeometryCollectionRemovalData Removal; // 0x1c
}; // Size: 0x30
#pragma pack(pop)
