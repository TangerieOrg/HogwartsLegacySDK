#pragma once
#include <cstdint>
#include "ERootMotionRootLock\Type.hpp"
#include "FAlphaBlend.hpp"
#include "FBranchingPoint.hpp"
#include "FBranchingPointMarker.hpp"
#include "FCompositeSection.hpp"
#include "FMarkerSyncData.hpp"
#include "FSlotAnimationTrack.hpp"
#include "FTimeStretchCurve.hpp"
#include "UAnimCompositeBase.hpp"
#pragma pack(push, 1)
class UAnimMontage : public UAnimCompositeBase {
public:
    FAlphaBlend BlendIn; // 0xa8
    float BlendInTime; // 0xd8
    char pad_dc[0x4];
    FAlphaBlend BlendOut; // 0xe0
    float BlendOutTime; // 0x110
    float BlendOutTriggerTime; // 0x114
    FName SyncGroup; // 0x118
    int32_t SyncSlotIndex; // 0x120
    char pad_124[0x4];
    FMarkerSyncData MarkerData; // 0x128
    TArray<FCompositeSection> CompositeSections; // 0x148
    TArray<FSlotAnimationTrack> SlotAnimTracks; // 0x158
    TArray<FBranchingPoint> BranchingPoints; // 0x168
    bool bEnableRootMotionTranslation; // 0x178
    bool bEnableRootMotionRotation; // 0x179
    bool bEnableAutoBlendOut; // 0x17a
    ERootMotionRootLock::Type RootMotionRootLock; // 0x17b
    char pad_17c[0x4];
    TArray<FBranchingPointMarker> BranchingPointMarkers; // 0x180
    TArray<int32_t> BranchingPointStateNotifyIndices; // 0x190
    FTimeStretchCurve TimeStretchCurve; // 0x1a0
    FName TimeStretchCurveName; // 0x1c8
    static UAnimMontage* StaticClass();
    float GetDefaultBlendOutTime();
}; // Size: 0x1d0
#pragma pack(pop)
