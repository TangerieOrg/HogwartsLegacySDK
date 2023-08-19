#pragma once
#include <cstdint>
#include "ESpringMode.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleAttractorBase.hpp"
#pragma pack(push, 1)
class UParticleModuleAttractorSpring : public UParticleModuleAttractorBase {
public:
    ESpringMode SpringMode; // 0x30
    char pad_31[0x7];
    FRawDistributionFloat RestLength; // 0x38
    FRawDistributionFloat SpringConstant; // 0x68
    FRawDistributionFloat Dampening; // 0x98
    bool UseParticleTime; // 0xc8
    char pad_c9[0x3];
    float MaxAcceleration; // 0xcc
    float MaxVelocity; // 0xd0
    char pad_d4[0x14];
    static UParticleModuleAttractorSpring* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
