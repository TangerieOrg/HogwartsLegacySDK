#pragma once
#include <cstdint>
#include "FParticleEvent_GenerateInfo.hpp"
#include "UParticleModuleEventBase.hpp"
#pragma pack(push, 1)
class UParticleModuleEventGenerator : public UParticleModuleEventBase {
public:
    TArray<FParticleEvent_GenerateInfo> Events; // 0x30
    static UParticleModuleEventGenerator* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
