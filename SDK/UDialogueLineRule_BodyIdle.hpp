#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
#include "FGameplayTagContainer.hpp"
#include "UDialogueLineRule.hpp"
class UPoseGroupProvider;
class UBaseArchitectAsset;
#pragma pack(push, 1)
class UDialogueLineRule_BodyIdle : public UDialogueLineRule {
public:
    char pad_38[0x8];
    UPoseGroupProvider* DefaultPoseGroup; // 0x40
    UBaseArchitectAsset* PoseGroupLookup; // 0x48
    FGameplayTagContainer PoseGroupTags; // 0x50
    FAnimationRequestLayerReference IdleLayer; // 0x70
    FAnimationRequestLayerReference TransitionLayer; // 0x78
    float BlendTime; // 0x80
    float BlendInTime; // 0x84
    float BlendOutTime; // 0x88
    char pad_8c[0x4];
    static UDialogueLineRule_BodyIdle* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
