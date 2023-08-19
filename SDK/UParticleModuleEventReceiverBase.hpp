#pragma once
#include <cstdint>
#include "EParticleEventType.hpp"
#include "UParticleModuleEventBase.hpp"
#pragma pack(push, 1)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase {
public:
    EParticleEventType EventGeneratorType; // 0x30
    char pad_31[0x3];
    FName EventName; // 0x34
    char pad_3c[0x4];
    static UParticleModuleEventReceiverBase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
