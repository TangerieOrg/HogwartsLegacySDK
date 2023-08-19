#pragma once
#include <cstdint>
#include "EAblPlayAnimationTaskAnimMode.hpp"
#include "FAblBlendTimes.hpp"
#include "FAblRootMode.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UAblAnimationAssetChooser;
class UAblBlendSpaceParameterGetter;
class UAnimationAsset;
class UAblStartPositionGetter;
class UAblAnimRateGetter;
class UAblAnimationModifier;
class UAblBlendWeightMultiplierGetter;
class UAblBoneBlendWeightAsset;
#pragma pack(push, 1)
class UAblPlayAnimationTask : public UAblAbilityTask {
public:
    UAblAnimationAssetChooser* m_AnimationAssetChooser; // 0x70
    UAnimationAsset* m_AnimationAsset; // 0x78
    UAblBlendSpaceParameterGetter* m_BlendSpaceParameterGetter; // 0x80
    UAblAnimRateGetter* m_AnimRateGetter; // 0x88
    UAblStartPositionGetter* m_StartPositionGetter; // 0x90
    UAblBlendWeightMultiplierGetter* m_BlendWeightMultiplierGetter; // 0x98
    TArray<UAblAnimationModifier*> m_AnimationModifiers; // 0xa0
    EAblPlayAnimationTaskAnimMode m_AnimationMode; // 0xb0
    char pad_b1[0x3];
    FName m_StateMachineName; // 0xb4
    FName m_AbilityStateName; // 0xbc
    char pad_c4[0x4];
    FAlphaBlend m_BlendIn; // 0xc8
    bool m_OverrideBlendOut; // 0xf8
    char pad_f9[0x7];
    FAlphaBlend m_BlendOut; // 0x100
    FAlphaBlend m_FadeOut; // 0x130
    bool m_Loop; // 0x160
    char pad_161[0x3];
    FAblBlendTimes m_DynamicMontageBlend; // 0x164
    float m_PlayRate; // 0x16c
    bool m_ScaleWithAbilityPlayRate; // 0x170
    bool m_StopAnimationOnInterrupt; // 0x171
    bool m_MatchPhase; // 0x172
    bool m_PlayOnServer; // 0x173
    bool m_bOverrideAnimGraphRootMotionProperties; // 0x174
    FAblRootMode m_RootMode; // 0x175
    char pad_177[0x1];
    UAblBoneBlendWeightAsset* m_BoneWeightAsset; // 0x178
    bool m_RotationOffsetMeshSpace; // 0x180
    bool m_IsAdditive; // 0x181
    char pad_182[0x6];
    static UAblPlayAnimationTask* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
