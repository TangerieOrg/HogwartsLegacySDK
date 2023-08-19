#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablImpulseToTargetTask : public UAblAbilityTask {
public:
    float DistFromTarget; // 0x70
    float MaxTravelDist; // 0x74
    bool bAllowNegative; // 0x78
    bool bAllowPositive; // 0x79
    bool bStopOnTargetHit; // 0x7a
    bool bAddCapsuleRadiusToDistanceFromTarget; // 0x7b
    float CapsuleRadiusMultiplier; // 0x7c
    bool bAddTargetCapsuleRadiusToDistanceFromTarget; // 0x80
    bool bOnlyTowardsAvatar; // 0x81
    bool bApplyCurrentHeightAsOffset; // 0x82
    bool bApplyCustomOffset; // 0x83
    FVector CustomOffset; // 0x84
    bool bUseForImpact; // 0x90
    bool bTrackTarget; // 0x91
    bool bTrackLateral; // 0x92
    char pad_93[0x1];
    float TrackTargetMinDist; // 0x94
    float TrackTargetMaxDist; // 0x98
    bool bUseMaxHeadingFromFwd; // 0x9c
    char pad_9d[0x3];
    float MaxHeadingFromFwd; // 0xa0
    char pad_a4[0x4];
    static UablImpulseToTargetTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
