#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleSpawnBase.hpp"
#pragma pack(push, 1)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase {
public:
    float UnitScalar; // 0x38
    float MovementTolerance; // 0x3c
    FRawDistributionFloat SpawnPerUnit; // 0x40
    float MaxFrameDistance; // 0x70
    uint8_t bIgnoreSpawnRateWhenMoving : 1; // 0x74
    uint8_t bIgnoreMovementAlongX : 1; // 0x74
    uint8_t bIgnoreMovementAlongY : 1; // 0x74
    uint8_t bIgnoreMovementAlongZ : 1; // 0x74
    uint8_t pad_bitfield_74_4 : 4;
    char pad_75[0x3];
    static UParticleModuleSpawnPerUnit* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
