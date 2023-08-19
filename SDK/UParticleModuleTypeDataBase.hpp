#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleTypeDataBase : public UParticleModule {
public:
    static UParticleModuleTypeDataBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
