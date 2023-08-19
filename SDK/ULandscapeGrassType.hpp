#pragma once
#include <cstdint>
#include "FGrassVariety.hpp"
#include "UObject.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class ULandscapeGrassType : public UObject {
public:
    TArray<FGrassVariety> GrassVarieties; // 0x28
    uint8_t bEnableDensityScaling : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    UStaticMesh* GrassMesh; // 0x40
    float GrassDensity; // 0x48
    float PlacementJitter; // 0x4c
    int32_t StartCullDistance; // 0x50
    int32_t EndCullDistance; // 0x54
    bool RandomRotation; // 0x58
    bool AlignToSurface; // 0x59
    char pad_5a[0x6];
    static ULandscapeGrassType* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
