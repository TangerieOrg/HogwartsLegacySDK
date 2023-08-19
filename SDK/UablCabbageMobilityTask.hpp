#pragma once
#include <cstdint>
#include "ECabbage_Mobility.hpp"
#include "UAblAbilityTask.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UablCabbageMobilityTask : public UAblAbilityTask {
public:
    float Speed; // 0x70
    float Gravity; // 0x74
    float ArcParam; // 0x78
    char pad_7c[0x4];
    UAkAudioEvent* m_actorBounceSfx; // 0x80
    ECabbage_Mobility MobilityState; // 0x88
    char pad_89[0x3];
    float JumpBoost; // 0x8c
    float MinBounceBack; // 0x90
    float MaxBounceBack; // 0x94
    float Deceleration; // 0x98
    float LandingSpeed; // 0x9c
    static UablCabbageMobilityTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
