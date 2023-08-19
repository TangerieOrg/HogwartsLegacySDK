#pragma once
#include <cstdint>
#include "ESlateBrushDrawType\Type.hpp"
#include "ESlateBrushImageType\Type.hpp"
#include "ESlateBrushMirrorType\Type.hpp"
#include "ESlateBrushTileType\Type.hpp"
#include "FBox2D.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
class UObject;
#pragma pack(push, 1)
struct FSlateBrush {
    char pad_0[0x8];
    FVector2D ImageSize; // 0x8
    FMargin Margin; // 0x10
    FSlateColor TintColor; // 0x20
    UObject* ResourceObject; // 0x48
    FName ResourceName; // 0x50
    FBox2D UVRegion; // 0x58
    ESlateBrushDrawType::Type DrawAs; // 0x6c
    ESlateBrushTileType::Type Tiling; // 0x6d
    ESlateBrushMirrorType::Type Mirroring; // 0x6e
    ESlateBrushImageType::Type ImageType; // 0x6f
    char pad_70[0x10];
    uint8_t bIsDynamicallyLoaded : 1; // 0x80
    uint8_t bHasUObject : 1; // 0x80
    uint8_t pad_bitfield_80_2 : 6;
    char pad_81[0x7];
}; // Size: 0x88
#pragma pack(pop)
