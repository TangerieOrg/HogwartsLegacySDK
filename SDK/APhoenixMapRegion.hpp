#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ERegionType.hpp"
#include "ESplineMeshAxis\Type.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class APhoenixMapRegion : public AActor {
public:
    UMaterialInstanceDynamic* RegionMaterialDynamic; // 0x248
    ERegionType Region; // 0x250
    ERegionType SubRegion; // 0x251
    char pad_252[0x2];
    int32_t SubRegionIndex; // 0x254
    bool IsSubRegion; // 0x258
    bool IsLevelBounds; // 0x259
    bool IsInnerLevelBounds; // 0x25a
    bool IsSpecialCase; // 0x25b
    ESplineMeshAxis::Type RegionFowardAxis; // 0x25c
    char pad_25d[0x3];
    FString RegionName; // 0x260
    FLinearColor HighlightColor; // 0x270
    FVector RegionCenterPoint; // 0x280
    char pad_28c[0x4];
    static APhoenixMapRegion* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
