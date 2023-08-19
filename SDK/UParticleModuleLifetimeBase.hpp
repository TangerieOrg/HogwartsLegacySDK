#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleLifetimeBase : public UParticleModule {
public:
    static UParticleModuleLifetimeBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
