#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ELockOnReticleType.hpp"
class UAkAudioEvent;
class ABiped_PlayerController;
class UClass;
#pragma pack(push, 1)
class AActor_LockOnReticle : public AActor {
public:
    float AimModeCircleGrowRate; // 0x248
    float AimModeCircleShrinkRate; // 0x24c
    float TargetingHorizontalStickAngle; // 0x250
    float TargetingVerticalStickAngle; // 0x254
    float FootprintRadius; // 0x258
    float StickInnerDeadZone; // 0x25c
    float StickOuterDeadZone; // 0x260
    float MaxStickFlickMag; // 0x264
    bool bFindNewTargetWhenLockonTargetLost; // 0x268
    bool bReleaseTargetWhenLockonGoesInvalid; // 0x269
    bool bFindNewTargetFromCenterOfScreen; // 0x26a
    bool bScaleFootprint; // 0x26b
    float MinCameraDistance; // 0x26c
    float MaxCameraDistance; // 0x270
    float MinFootprintScale; // 0x274
    float MaxFootprintScale; // 0x278
    char pad_27c[0x4];
    UAkAudioEvent* LockOnToTargetSfx; // 0x280
    UAkAudioEvent* FlickToTargetSfx; // 0x288
    UAkAudioEvent* TargetReleasedSfx; // 0x290
    UAkAudioEvent* TargetSwitchedWhenCurrentTargetLostSfx; // 0x298
    char pad_2a0[0x68];
    UClass* LockOnReticleOffScreenWidgetClass; // 0x308
    float StickResetTime; // 0x310
    char pad_314[0x4];
    ABiped_PlayerController* BipedPlayerController; // 0x318
    char pad_320[0x10];
    static AActor_LockOnReticle* StaticClass();
    void StickY(float AxisVal);
    void StickX(float AxisVal);
    bool IsLockedOn();
    ELockOnReticleType GetLockedOnType();
}; // Size: 0x330
#pragma pack(pop)
