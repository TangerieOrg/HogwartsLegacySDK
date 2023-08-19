#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPlayerMountOverlaySettings : public UObject {
public:
    float TeleportTimer; // 0x28
    float FadeOutTimer; // 0x2c
    float FadeInTeleportTimer; // 0x30
    float FadeInExitTimer; // 0x34
    float FadeHoldTimer; // 0x38
    bool bDisableSpeedupInside; // 0x3c
    bool bDisableSpeedupUnlessFacing; // 0x3d
    bool bPauseTimerWhenFacing; // 0x3e
    char pad_3f[0x1];
    float FacingAngle; // 0x40
    float FadeAlpha; // 0x44
    float ResetTimer; // 0x48
    char pad_4c[0x4];
    static UPlayerMountOverlaySettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
