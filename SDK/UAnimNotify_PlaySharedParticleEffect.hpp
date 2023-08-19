#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_PlaySharedParticleEffect : public UAnimNotify {
public:
    bool bAttached; // 0x38
    char pad_39[0x3];
    FName SocketName; // 0x3c
    char pad_44[0x54];
    static UAnimNotify_PlaySharedParticleEffect* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
