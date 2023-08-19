#pragma once
#include <cstdint>
#include "UParticleModuleVectorFieldBase.hpp"
#pragma pack(push, 1)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase {
public:
    uint8_t bOverrideGlobalVectorFieldTightness : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    float GlobalVectorFieldScale; // 0x34
    float GlobalVectorFieldTightness; // 0x38
    char pad_3c[0x4];
    static UParticleModuleVectorFieldGlobal* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
