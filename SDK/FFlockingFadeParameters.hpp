#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFlockingFadeParameters {
    float AutoStartFade; // 0x0
    bool bAutoStartFade; // 0x4
    char pad_5[0x3];
    FName FadeEnable; // 0x8
    FName FadeDrawSphereCenter; // 0x10
    FName FadeDrawSphereRadius; // 0x18
    FName FadeDrawTransition; // 0x20
    float TransitionWidth; // 0x28
    float RadiusTimeConstant; // 0x2c
    bool bDynamicBounds; // 0x30
    bool bKillActorWhenDone; // 0x31
    char pad_32[0x2];
}; // Size: 0x34
#pragma pack(pop)
