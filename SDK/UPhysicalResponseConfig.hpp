#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FRuntimeCurveVector.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UDataAsset.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UPhysicalResponseConfig : public UDataAsset {
public:
    FRuntimeFloatCurve RotationCurve; // 0x30
    FRuntimeCurveVector AdditiveRotationCurve; // 0xb8
    bool bLockXRotation; // 0x240
    bool bLockYRotation; // 0x241
    bool bLockZRotation; // 0x242
    bool bLockXRotationPositive; // 0x243
    bool bLockXRotationNegative; // 0x244
    bool bLockYRotationPositive; // 0x245
    bool bLockYRotationNegative; // 0x246
    bool bLockZRotationPositive; // 0x247
    bool bLockZRotationNegative; // 0x248
    char pad_249[0x7];
    FRuntimeFloatCurve TranslationCurve; // 0x250
    FRuntimeCurveVector AdditiveTranslationCurve; // 0x2d8
    bool bLockXTranslation; // 0x460
    bool bLockYTranslation; // 0x461
    bool bLockZTranslationUp; // 0x462
    bool bLockZTranslationDown; // 0x463
    char pad_464[0x4];
    FRuntimeFloatCurve DistanceFalloff; // 0x468
    bool bScaleAdditive; // 0x4f0
    char pad_4f1[0x3];
    FRotator RandomRotationRange; // 0x4f4
    FVector2D RandomMagnitudeFactor; // 0x500
    FVector2D RandomTimeFactor; // 0x508
    FRuntimeFloatCurve MagnitudeFromMass; // 0x510
    FRuntimeFloatCurve TimeFactorFromMass; // 0x598
    TArray<UAkAudioEvent*> AudioEvents; // 0x620
    float AudioMinScaleThreshold; // 0x630
    char pad_634[0x4];
    static UPhysicalResponseConfig* StaticClass();
}; // Size: 0x638
#pragma pack(pop)
