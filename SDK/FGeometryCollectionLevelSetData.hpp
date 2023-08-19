#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGeometryCollectionLevelSetData {
    int32_t MinLevelSetResolution; // 0x0
    int32_t MaxLevelSetResolution; // 0x4
    int32_t MinClusterLevelSetResolution; // 0x8
    int32_t MaxClusterLevelSetResolution; // 0xc
}; // Size: 0x10
#pragma pack(pop)
