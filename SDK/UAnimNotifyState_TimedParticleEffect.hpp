#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
class UParticleSystem;
#pragma pack(push, 1)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState {
public:
    UParticleSystem* PSTemplate; // 0x30
    FName SocketName; // 0x38
    FVector LocationOffset; // 0x40
    FRotator RotationOffset; // 0x4c
    bool bDestroyAtEnd; // 0x58
    char pad_59[0x7];
    static UAnimNotifyState_TimedParticleEffect* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
