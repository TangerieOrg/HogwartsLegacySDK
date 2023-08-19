#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "USceneComponent.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class ULoopingTransformByCurveComponent : public USceneComponent {
public:
    UCurveFloat* TranslateYCurve; // 0x220
    UCurveFloat* TranslateZCurve; // 0x228
    UCurveFloat* RotateXCurve; // 0x230
    UCurveFloat* RotateYCurve; // 0x238
    UCurveFloat* RotateZCurve; // 0x240
    UCurveFloat* ScaleXCurve; // 0x248
    UCurveFloat* ScaleYCurve; // 0x250
    UCurveFloat* ScaleZCurve; // 0x258
    float CurvePlayRate; // 0x260
    float TranslationWeight; // 0x264
    float RotationWeight; // 0x268
    float ScaleWeight; // 0x26c
    FRotator PerpetualRotationPerSecond; // 0x270
    char pad_27c[0x54];
    static ULoopingTransformByCurveComponent* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
