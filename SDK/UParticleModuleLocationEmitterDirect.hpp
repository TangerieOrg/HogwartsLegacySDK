#pragma once
#include <cstdint>
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase {
public:
    FName EmitterName; // 0x30
    static UParticleModuleLocationEmitterDirect* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
