#pragma once
#include <cstdint>
#include "EOdcAuthoredObstacleShape.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UOdcAuthoredObstacleSetupComponent : public USceneComponent {
public:
    float MaxHeight; // 0x220
    char pad_224[0x4];
    TArray<FVector> HullPoints; // 0x228
    FVector BoxCenter; // 0x238
    char pad_244[0xc];
    FQuat BoxRotation; // 0x250
    FVector BoxExtent; // 0x260
    char pad_26c[0x4];
    static UOdcAuthoredObstacleSetupComponent* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
