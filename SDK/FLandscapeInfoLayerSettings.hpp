#pragma once
#include <cstdint>
class ULandscapeLayerInfoObject;
#pragma pack(push, 1)
struct FLandscapeInfoLayerSettings {
    ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
    FName LayerName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
