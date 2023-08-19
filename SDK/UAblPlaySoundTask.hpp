#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class USoundBase;
#pragma pack(push, 1)
class UAblPlaySoundTask : public UAblAbilityTask {
public:
    USoundBase* m_Sound; // 0x70
    bool m_2DSound; // 0x78
    char pad_79[0x3];
    FVector m_LocationOffset; // 0x7c
    FName m_SocketName; // 0x88
    bool m_AttachToSocket; // 0x90
    bool m_DestroyOnEnd; // 0x91
    char pad_92[0x2];
    float m_DestroyFadeOutDuration; // 0x94
    static UAblPlaySoundTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
