#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UMiniMapParameters : public UDataAsset {
public:
    FVector2D BottomLeft; // 0x30
    float Width; // 0x38
    float Height; // 0x3c
    static UMiniMapParameters* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
