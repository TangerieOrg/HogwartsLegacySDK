#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleParameterBase : public UParticleModule {
public:
    static UParticleModuleParameterBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
