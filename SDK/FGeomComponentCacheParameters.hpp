#pragma once
#include <cstdint>
#include "EGeometryCollectionCacheType.hpp"
class UGeometryCollectionCache;
#pragma pack(push, 1)
struct FGeomComponentCacheParameters {
    EGeometryCollectionCacheType CacheMode; // 0x0
    char pad_1[0x7];
    UGeometryCollectionCache* TargetCache; // 0x8
    float ReverseCacheBeginTime; // 0x10
    bool SaveCollisionData; // 0x14
    bool DoGenerateCollisionData; // 0x15
    char pad_16[0x2];
    int32_t CollisionDataSizeMax; // 0x18
    bool DoCollisionDataSpatialHash; // 0x1c
    char pad_1d[0x3];
    float CollisionDataSpatialHashRadius; // 0x20
    int32_t MaxCollisionPerCell; // 0x24
    bool SaveBreakingData; // 0x28
    bool DoGenerateBreakingData; // 0x29
    char pad_2a[0x2];
    int32_t BreakingDataSizeMax; // 0x2c
    bool DoBreakingDataSpatialHash; // 0x30
    char pad_31[0x3];
    float BreakingDataSpatialHashRadius; // 0x34
    int32_t MaxBreakingPerCell; // 0x38
    bool SaveTrailingData; // 0x3c
    bool DoGenerateTrailingData; // 0x3d
    char pad_3e[0x2];
    int32_t TrailingDataSizeMax; // 0x40
    float TrailingMinSpeedThreshold; // 0x44
    float TrailingMinVolumeThreshold; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
