#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleAttractorBase : public UParticleModule {
public:
    static UParticleModuleAttractorBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
