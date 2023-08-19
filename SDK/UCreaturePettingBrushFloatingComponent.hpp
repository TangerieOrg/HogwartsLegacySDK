#pragma once
#include <cstdint>
#include "ECreaturePettingBrushFloatingState.hpp"
#include "UActorComponent.hpp"
struct FTransform;
struct FVector;
#pragma pack(push, 1)
class UCreaturePettingBrushFloatingComponent : public UActorComponent {
public:
    float FloatingAmplitude; // 0xc8
    float FloatingFrequency; // 0xcc
    float FloatingStiffness; // 0xd0
    float FloatingMaxExtension; // 0xd4
    float FloatingDamping; // 0xd8
    float FloatingScaleInterpolationSpeed; // 0xdc
    float FloatingRotationInterpolationSpeed; // 0xe0
    float FloatingMaxForce; // 0xe4
    bool bClampForce; // 0xe8
    char pad_e9[0x3];
    float AttachedBlendTime; // 0xec
    float AttachedDamping; // 0xf0
    float AttachedLocationInterpolationSpeedMin; // 0xf4
    float AttachedLocationInterpolationSpeedMax; // 0xf8
    float AttachedRotationInterpolationSpeedMin; // 0xfc
    float AttachedRotationInterpolationSpeedMax; // 0x100
    float AttachedScaleInterpolationSpeedMin; // 0x104
    float AttachedScaleInterpolationSpeedMax; // 0x108
    float AttachedInterpolationSpeedAfterBlend; // 0x10c
    bool bApplyScaling; // 0x110
    char pad_111[0x9f];
    static UCreaturePettingBrushFloatingComponent* StaticClass();
    void SetTargetTransformAndVelocity(FTransform& InTargetTransform, FVector& InVelocity);
    void SetOscillationEnabled(bool bInEnabled);
    void SetFloatingState(ECreaturePettingBrushFloatingState InFloatingState);
}; // Size: 0x1b0
#pragma pack(pop)
