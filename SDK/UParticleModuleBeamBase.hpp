#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleBeamBase : public UParticleModule {
public:
    static UParticleModuleBeamBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
