#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleEventBase : public UParticleModule {
public:
    static UParticleModuleEventBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
