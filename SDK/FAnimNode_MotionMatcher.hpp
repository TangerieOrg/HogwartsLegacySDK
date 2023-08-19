#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
class UDataTable;
class UObject;
class UAnimSequence;
#pragma pack(push, 1)
struct FAnimNode_MotionMatcher : public FAnimNode_Base {
    UDataTable* PoseTable; // 0x10
    TArray<UAnimSequence*> IdleAnimations; // 0x18
    UObject* GoalDelegate; // 0x28
    float Responsiveness; // 0x30
    float BonusForSameMotion; // 0x34
    float BlendDuration; // 0x38
    bool bAnimationDrivesPill; // 0x3c
    bool bAlignRootDirection; // 0x3d
    bool bStrideWarping; // 0x3e
    bool bHoldFootPositionWhenPlanted; // 0x3f
    bool ShowGoal; // 0x40
    bool ShowTrail; // 0x41
    bool ShowBestPath; // 0x42
    bool ShowFeet; // 0x43
    bool ShowVelocity; // 0x44
    bool ShowCapsuleVsAnimation; // 0x45
    char pad_46[0x2];
    float CandidatesToDrawPerFrame; // 0x48
    float TimeToHoldEachCandidate; // 0x4c
    UAnimSequence* CurrentAnimSequence; // 0x50
    char pad_58[0x1b8];
}; // Size: 0x210
#pragma pack(pop)
