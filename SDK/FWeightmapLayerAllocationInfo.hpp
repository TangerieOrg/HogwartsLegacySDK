#pragma once
#include <cstdint>
class ULandscapeLayerInfoObject;
#pragma pack(push, 1)
struct FWeightmapLayerAllocationInfo {
    ULandscapeLayerInfoObject* LayerInfo; // 0x0
    uint8_t WeightmapTextureIndex; // 0x8
    uint8_t WeightmapTextureChannel; // 0x9
    char pad_a[0x6];
}; // Size: 0x10
#pragma pack(pop)
