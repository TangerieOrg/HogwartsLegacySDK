#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UParticleModuleAccelerationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase {
public:
    FVector Acceleration; // 0x38
    char pad_44[0x4];
    static UParticleModuleAccelerationConstant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
