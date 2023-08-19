#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UParticleSystem;
class UAblParticleEffectParam;
#pragma pack(push, 1)
class UAblPlayParticleEffectTask : public UAblAbilityTask {
public:
    UParticleSystem* m_EffectTemplate; // 0x70
    FName m_SocketName; // 0x78
    bool m_AttachToSocket; // 0x80
    bool m_UseSocketRotation; // 0x81
    char pad_82[0x2];
    FVector m_LocationOffset; // 0x84
    FRotator m_RotationOffset; // 0x90
    float m_Scale; // 0x9c
    bool m_DestroyAtEnd; // 0xa0
    char pad_a1[0x7];
    TArray<UAblParticleEffectParam*> m_Parameters; // 0xa8
    static UAblPlayParticleEffectTask* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
