#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotify.hpp"
class UParticleSystem;
#pragma pack(push, 1)
class UAnimNotify_PlayParticleEffect : public UAnimNotify {
public:
    UParticleSystem* PSTemplate; // 0x38
    FVector LocationOffset; // 0x40
    FRotator RotationOffset; // 0x4c
    FVector Scale; // 0x58
    char pad_64[0x1c];
    uint8_t Attached : 1; // 0x80
    uint8_t pad_bitfield_80_1 : 7;
    char pad_81[0x3];
    FName SocketName; // 0x84
    bool bApplyOwnerTimeScale; // 0x8c
    char pad_8d[0x3];
    float CustomTimeDilation; // 0x90
    char pad_94[0xc];
    static UAnimNotify_PlayParticleEffect* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
