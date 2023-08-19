#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSubsurfaceProfileStruct {
    FLinearColor SurfaceAlbedo; // 0x0
    FLinearColor MeanFreePathColor; // 0x10
    float MeanFreePathDistance; // 0x20
    float WorldUnitScale; // 0x24
    bool bEnableBurley; // 0x28
    char pad_29[0x3];
    float ScatterRadius; // 0x2c
    FLinearColor SubsurfaceColor; // 0x30
    FLinearColor FalloffColor; // 0x40
    FLinearColor BoundaryColorBleed; // 0x50
    float ExtinctionScale; // 0x60
    float NormalScale; // 0x64
    float ScatteringDistribution; // 0x68
    float IOR; // 0x6c
    float Roughness0; // 0x70
    float Roughness1; // 0x74
    float LobeMix; // 0x78
    FLinearColor TransmissionTintColor; // 0x7c
}; // Size: 0x8c
#pragma pack(pop)
