#pragma once
#include <cstdint>
#include "UAnimNotifyState.hpp"
#pragma pack(push, 1)
class UAnimNotifyState_SharedTimedParticleEffect : public UAnimNotifyState {
public:
    FName SocketName; // 0x30
    char pad_38[0x50];
    static UAnimNotifyState_SharedTimedParticleEffect* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
