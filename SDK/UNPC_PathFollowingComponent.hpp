#pragma once
#include <cstdint>
#include "UPathFollowingComponent.hpp"
class UCharacterMovementComponent;
class UNPC_Component;
struct FVector;
#pragma pack(push, 1)
class UNPC_PathFollowingComponent : public UPathFollowingComponent {
public:
    UCharacterMovementComponent* CharacterMoveComp; // 0x268
    UNPC_Component* NPCComponent; // 0x270
    bool bCanPausePathFollowingWhenBlocked; // 0x278
    char pad_279[0x3];
    float RepulsorRadiusMultiplier; // 0x27c
    float RepulsorRadiusCushionMultiplier; // 0x280
    float RepulsorDetectionRadiusMultiplier; // 0x284
    float ResolveBlockedAllowableAngle; // 0x288
    float DirectionFilterRate; // 0x28c
    float DirectionFilterRateMin; // 0x290
    float DirectionFilterRateMax; // 0x294
    float DirectionAvoidanceInterval; // 0x298
    float AvoidanceSlowdownScale; // 0x29c
    char pad_2a0[0xf0];
    static UNPC_PathFollowingComponent* StaticClass();
    bool FindLinkOnCurrentPath(FVector& OutPos, float MinLookaheadDistance, float LookAheadTime);
}; // Size: 0x390
#pragma pack(pop)
