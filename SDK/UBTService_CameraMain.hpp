#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FGameplayTag.hpp"
#include "FInputContextWithType.hpp"
#include "UBTService_CameraBase.hpp"
#pragma pack(push, 1)
class UBTService_CameraMain : public UBTService_CameraBase {
public:
    char pad_70[0x8];
    FBlackboardKeySelector DodgingKey; // 0x78
    char pad_a0[0x8];
    FBlackboardKeySelector SlidingKey; // 0xa8
    char pad_d0[0x8];
    FBlackboardKeySelector SwimmingKey; // 0xd8
    char pad_100[0x8];
    FBlackboardKeySelector SprintingKey; // 0x108
    char pad_130[0x8];
    FBlackboardKeySelector LookingKey; // 0x138
    FBlackboardKeySelector TimeSinceLastInputKey; // 0x160
    char pad_188[0x8];
    FBlackboardKeySelector TargetingKey; // 0x190
    char pad_1b8[0x8];
    FBlackboardKeySelector StairGlidingKey; // 0x1c0
    FGameplayTag StairGlidingTag; // 0x1e8
    char pad_1f0[0x8];
    FBlackboardKeySelector FlyingBroomKey; // 0x1f8
    char pad_220[0x8];
    FBlackboardKeySelector BroomIsMountingKey; // 0x228
    char pad_250[0x8];
    FBlackboardKeySelector BroomIsInFastFlightKey; // 0x258
    char pad_280[0x8];
    FBlackboardKeySelector BroomBoostOrTurboKey; // 0x288
    char pad_2b0[0x8];
    FBlackboardKeySelector SplineFlyingBroomKey; // 0x2b8
    char pad_2e0[0x8];
    FBlackboardKeySelector ShadowSprintingKey; // 0x2e8
    char pad_310[0x10];
    FBlackboardKeySelector MountIDKey; // 0x320
    char pad_348[0x8];
    FBlackboardKeySelector ClimbingLedgeKey; // 0x350
    FBlackboardKeySelector ClimbingLedgeStateKey; // 0x378
    char pad_3a0[0x8];
    FBlackboardKeySelector ClimbingLadderKey; // 0x3a8
    char pad_3d0[0x8];
    FBlackboardKeySelector CrouchingKey; // 0x3d8
    char pad_400[0x8];
    FBlackboardKeySelector FallingKey; // 0x408
    char pad_430[0x58];
    FBlackboardKeySelector JumpingKey; // 0x488
    FBlackboardKeySelector JumpingTypeKey; // 0x4b0
    char pad_4d8[0xa8];
    FBlackboardKeySelector MoveFocusSecondaryTargetKey; // 0x580
    char pad_5a8[0x8];
    FBlackboardKeySelector LockOnSecondaryTargetKey; // 0x5b0
    char pad_5d8[0x8];
    FBlackboardKeySelector AimModeSecondaryTargetKey; // 0x5e0
    char pad_608[0x8];
    FBlackboardKeySelector StationaryTransfigSecondaryTargetKey; // 0x610
    char pad_638[0x8];
    FBlackboardKeySelector KillCamSecondaryTargetKey; // 0x640
    char pad_668[0x8];
    FBlackboardKeySelector SpellSecondaryTargetKey; // 0x670
    char pad_698[0x8];
    FBlackboardKeySelector HasSpellCastTargetKey; // 0x6a0
    float SpellCastTargetTimeout; // 0x6c8
    char pad_6cc[0x4];
    FBlackboardKeySelector TransfigIsContextSetKey; // 0x6d0
    FInputContextWithType TransfigIsContextSetType; // 0x6f8
    char pad_704[0x4];
    FBlackboardKeySelector CaptureIsContextSetKey; // 0x708
    FInputContextWithType CaptureIsContextSetType; // 0x730
    char pad_73c[0x4];
    FBlackboardKeySelector CaptureIsSuccessfulKey; // 0x740
    FInputContextWithType CaptureInProgressContextKey; // 0x768
    char pad_774[0x4];
    FBlackboardKeySelector DuelingIsContextSetKey; // 0x778
    FInputContextWithType DuelingIsContextSetType; // 0x7a0
    char pad_7ac[0x4];
    FBlackboardKeySelector IsCreatureInteractionActiveKey; // 0x7b0
    char pad_7d8[0x10];
    FBlackboardKeySelector ActiveSpellKey; // 0x7e8
    char pad_810[0x8];
    FBlackboardKeySelector IsChargingSpellKey; // 0x818
    FInputContextWithType IsChargingSpellContext; // 0x840
    char pad_84c[0x5c];
    FBlackboardKeySelector RequestedAnimationIdKey; // 0x8a8
    char pad_8d0[0x8];
    FBlackboardKeySelector LookAtStrengthKey; // 0x8d8
    char pad_900[0x8];
    FBlackboardKeySelector HasLookAtOverrideActorKey; // 0x908
    char pad_930[0x8];
    FBlackboardKeySelector InFullBodyReactionKey; // 0x938
    FInputContextWithType FullBodyReactionContext; // 0x960
    char pad_96c[0x4];
    FBlackboardKeySelector IsRagdollingKey; // 0x970
    static UBTService_CameraMain* StaticClass();
}; // Size: 0x998
#pragma pack(pop)
