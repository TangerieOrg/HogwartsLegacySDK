#pragma once
#include <cstdint>
#include "EAdditiveAnimationType.hpp"
#include "EAdditiveBasePoseType.hpp"
#include "EAnimInterpolationType.hpp"
#include "ERootMotionRootLock\Type.hpp"
#include "FAnimSyncMarker.hpp"
#include "FBakedCustomAttributePerBoneData.hpp"
#include "FTrackToSkeletonMap.hpp"
#include "FTransform.hpp"
#include "UAnimSequenceBase.hpp"
class UAnimBoneCompressionSettings;
class UAnimCurveCompressionSettings;
#pragma pack(push, 1)
class UAnimSequence : public UAnimSequenceBase {
public:
    int32_t NumFrames; // 0xa8
    char pad_ac[0x4];
    TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xb0
    char pad_c0[0x10];
    UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd0
    UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd8
    char pad_e0[0x70];
    EAdditiveAnimationType AdditiveAnimType; // 0x150
    EAdditiveBasePoseType RefPoseType; // 0x151
    char pad_152[0x6];
    UAnimSequence* RefPoseSeq; // 0x158
    int32_t RefFrameIndex; // 0x160
    FName RetargetSource; // 0x164
    char pad_16c[0x4];
    TArray<FTransform> RetargetSourceAssetReferencePose; // 0x170
    EAnimInterpolationType Interpolation; // 0x180
    bool bEnableRootMotion; // 0x181
    ERootMotionRootLock::Type RootMotionRootLock; // 0x182
    bool bForceRootLock; // 0x183
    bool bUseNormalizedRootMotionScale; // 0x184
    bool bRootMotionSettingsCopiedFromMontage; // 0x185
    char pad_186[0x2];
    TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x188
    char pad_198[0x18];
    TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData; // 0x1b0
    static UAnimSequence* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
