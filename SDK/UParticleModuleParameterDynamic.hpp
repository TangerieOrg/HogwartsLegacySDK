#pragma once
#include <cstdint>
#include "FEmitterDynamicParameter.hpp"
#include "UParticleModuleParameterBase.hpp"
#pragma pack(push, 1)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase {
public:
    TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
    int32_t UpdateFlags; // 0x40
    uint8_t bUsesVelocity : 1; // 0x44
    uint8_t pad_bitfield_44_1 : 7;
    char pad_45[0x3];
    static UParticleModuleParameterDynamic* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
