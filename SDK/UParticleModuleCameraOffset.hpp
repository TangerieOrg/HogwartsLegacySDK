#pragma once
#include <cstdint>
#include "EParticleCameraOffsetUpdateMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleCameraBase.hpp"
#pragma pack(push, 1)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase {
public:
    FRawDistributionFloat CameraOffset; // 0x30
    uint8_t bSpawnTimeOnly : 1; // 0x60
    uint8_t pad_bitfield_60_1 : 7;
    char pad_61[0x3];
    EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
    char pad_65[0x3];
    static UParticleModuleCameraOffset* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
