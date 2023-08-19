#pragma once
#include <cstdint>
#include "EAnimBlendTickStyle.hpp"
#include "FAblRootMode.hpp"
#include "FAlphaBlend.hpp"
#include "FBlendTrackInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UAblBlendSpaceParameterGetter;
class UAblAnimationTagChooser;
class UAblAnimationAssetChooser;
class UAblStartPositionGetter;
class UAblAnimTransitionInOverriderer;
class UAblAnimationModifier;
class UAblAnimRateGetter;
class UAblBlendWeightMultiplierGetter;
class UAblAnimationEndCallback;
class UAblBoneBlendWeightAsset;
#pragma pack(push, 1)
class UAblPlayAnimationArchitectTask : public UAblAbilityTask {
public:
    FGameplayTagContainer m_AnimationSet; // 0x70
    UAblAnimationAssetChooser* m_AnimationAssetChooser; // 0x90
    UAblAnimTransitionInOverriderer* m_AnimTransitionInOverriderer; // 0x98
    FGameplayTagContainer m_AnimationTags; // 0xa0
    FGameplayTagContainer m_PreviewAnimationTags; // 0xc0
    UAblAnimationTagChooser* m_AnimationTagChooser; // 0xe0
    UAblBlendSpaceParameterGetter* m_BlendSpaceParameterGetter; // 0xe8
    UAblAnimRateGetter* m_AnimRateGetter; // 0xf0
    UAblStartPositionGetter* m_StartPositionGetter; // 0xf8
    UAblBlendWeightMultiplierGetter* m_BlendWeightMultiplierGetter; // 0x100
    TArray<UAblAnimationModifier*> m_AnimationModifiers; // 0x108
    FName m_StateMachineName; // 0x118
    FName m_AbilityStateName; // 0x120
    UAblAnimationEndCallback* m_EndCallback; // 0x128
    TArray<FBlendTrackInfo> m_BlendTracks; // 0x130
    EAnimBlendTickStyle m_BlendTickStyle; // 0x140
    char pad_141[0x7];
    FAlphaBlend m_BlendIn; // 0x148
    bool m_OverrideBlendOut; // 0x178
    char pad_179[0x7];
    FAlphaBlend m_BlendOut; // 0x180
    FAlphaBlend m_FadeOut; // 0x1b0
    bool bFadeOutToEndOfAnimation; // 0x1e0
    bool m_Loop; // 0x1e1
    char pad_1e2[0x2];
    float m_PlayRate; // 0x1e4
    bool m_ScaleWithAbilityPlayRate; // 0x1e8
    bool m_MatchPhase; // 0x1e9
    bool m_PlayOnServer; // 0x1ea
    char pad_1eb[0x1];
    FAblRootMode m_RootMode; // 0x1ec
    char pad_1ee[0x2];
    UAblBoneBlendWeightAsset* m_BoneWeightAsset; // 0x1f0
    bool m_RotationOffsetMeshSpace; // 0x1f8
    bool m_IsAdditive; // 0x1f9
    bool m_IsFacialAnimation; // 0x1fa
    char pad_1fb[0x5];
    static UAblPlayAnimationArchitectTask* StaticClass();
}; // Size: 0x200
#pragma pack(pop)
