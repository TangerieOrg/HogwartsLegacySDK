#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UPathFollowingComponent.hpp"
class ACreature_Controller;
class ACreature_Character;
class UCharacterMovementComponent;
#pragma pack(push, 1)
class UCreature_PathFollowingComponent : public UPathFollowingComponent {
public:
    bool bMoveToStopPrediction; // 0x268
    char pad_269[0x3];
    float RepulsorMinimumRadius; // 0x26c
    float RepulsorDetectionRadiusMultiplier; // 0x270
    float RepulsorDetectionRadiusMultiplierVariance; // 0x274
    float RepulsorNavProbeMinLength; // 0x278
    bool bTangentialAcceptance; // 0x27c
    char pad_27d[0x3];
    float bTangentialAcceptanceDefaultRadius; // 0x280
    float LookaheadDistanceMultiplierTune; // 0x284
    FVector2D LookaheadDistanceMultiplierClampRanges[4]; // 0x288
    float TurnAnticipationLookaheadTune; // 0x2a8
    float TurnAnticipationCornerLookaheadTune; // 0x2ac
    float TurnAnticipationCornerOffsetTune; // 0x2b0
    char pad_2b4[0x4];
    FRuntimeFloatCurve RequiredTurnStiffnessOverSpeed; // 0x2b8
    float AdditionalTurningFactor; // 0x340
    float MinNavDistSq2D; // 0x344
    char pad_348[0x80];
    ACreature_Controller* CreatureController; // 0x3c8
    ACreature_Character* CreatureCharacter; // 0x3d0
    UCharacterMovementComponent* MovementComponent; // 0x3d8
    char pad_3e0[0xe0];
    static UCreature_PathFollowingComponent* StaticClass();
    void SetUseRepulsorCollisionAvoidance(bool bEnabled);
}; // Size: 0x4c0
#pragma pack(pop)
