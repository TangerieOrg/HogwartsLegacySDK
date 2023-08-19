#pragma once
#include <cstdint>
#include "FQuadrupedSpineBoneChain.hpp"
#include "FQuadrupedSpineRebase.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UActorComponent.hpp"
class URootMotionModifier_QuadrupedSpine;
#pragma pack(push, 1)
class UQuadrupedSpineComponent : public UActorComponent {
public:
    bool bAffectPose; // 0xc8
    char pad_c9[0x7];
    FQuadrupedSpineBoneChain NeckChain; // 0xd0
    FQuadrupedSpineBoneChain SpineChain; // 0x108
    FQuadrupedSpineBoneChain TailChain; // 0x140
    TArray<FQuadrupedSpineRebase> RebaseBones; // 0x178
    float SpineInterpTime; // 0x188
    char pad_18c[0x4];
    FRuntimeFloatCurve SpeedToSpineInterpTimeMultiplier; // 0x190
    FRuntimeFloatCurve SpeedToTurnRateMultiplier; // 0x218
    float TurningFactor; // 0x2a0
    char pad_2a4[0x4];
    FRuntimeFloatCurve SpeedToTurningFactor; // 0x2a8
    float BlendDurationIntoRootMotionAnim; // 0x330
    float BlendDurationOutOfRootMotionAnim; // 0x334
    float RootMotionAngleRemainingToStartBlendingIntoBent; // 0x338
    char pad_33c[0xc];
    URootMotionModifier_QuadrupedSpine* RootMotionModifier; // 0x348
    char pad_350[0x70];
    static UQuadrupedSpineComponent* StaticClass();
    static float GetInterpTimeAtSpeed(UQuadrupedSpineComponent* InSpineComponent, float InNormalizedSpeed);
}; // Size: 0x3c0
#pragma pack(pop)
