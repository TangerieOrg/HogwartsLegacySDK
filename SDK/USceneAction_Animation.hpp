#pragma once
#include <cstdint>
#include "ESceneAction_ClothingTeleportMode.hpp"
#include "FAnimationRequestLayerReference.hpp"
#include "FSceneRigAnimationClipRange.hpp"
#include "FSceneRigAnimationPlacementOptions.hpp"
#include "FSceneRigAnimationPlaybackSpeed.hpp"
#include "FTimeRigInputSymbol.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "FTimeRigScratchAnimation.hpp"
#include "USceneRigObjectActionBase.hpp"
class UAnimationProvider;
class UBlendSpaceInputProvider;
class UAnimMaskAsset;
class UBoolProvider;
class UFloatProvider;
class UTimeRigElement;
#pragma pack(push, 1)
class USceneAction_Animation : public USceneRigObjectActionBase {
public:
    char pad_a0[0x8];
    UAnimationProvider* Animation; // 0xa8
    FName SpecificComponentNameFilter; // 0xb0
    UBlendSpaceInputProvider* BlendSpaceInput; // 0xb8
    FAnimationRequestLayerReference Layer; // 0xc0
    UAnimMaskAsset* Mask; // 0xc8
    bool RegisterWithConversation; // 0xd0
    char pad_d1[0x7];
    FSceneRigAnimationPlacementOptions PlacementOptions; // 0xd8
    FSceneRigAnimationClipRange ClipSubRange; // 0x108
    FSceneRigAnimationPlaybackSpeed PlaybackSpeed; // 0x130
    UBoolProvider* ReselectOnLoopBoundaries; // 0x140
    UFloatProvider* MaxWeight; // 0x148
    UFloatProvider* BlendInTime; // 0x150
    UFloatProvider* BlendOutTime; // 0x158
    UFloatProvider* HoldTime; // 0x160
    UFloatProvider* InertialBlendInTime; // 0x168
    UFloatProvider* InertialBlendOutTime; // 0x170
    bool bBlendOutOnDialogueSkip; // 0x178
    bool bConversationTransitionAnimation; // 0x179
    bool bEnableInertializationIfBlendOutSkipped; // 0x17a
    bool bSuppressCameraCut; // 0x17b
    ESceneAction_ClothingTeleportMode ClothTeleportMode; // 0x17c
    char pad_17d[0x3];
    UBoolProvider* KeepStateOnCompletion; // 0x180
    UBoolProvider* SetupAnimationOnEnter; // 0x188
    bool ScaleRootMotion; // 0x190
    char pad_191[0x7];
    UFloatProvider* FemaleShoulderFixupAlpha; // 0x198
    TArray<UTimeRigElement*> ChildElements; // 0x1a0
    FTimeRigInputSymbol BlendOutFinish; // 0x1b0
    FTimeRigOutputSymbol BlendIn; // 0x1c8
    FTimeRigOutputSymbol BlendOut; // 0x1e0
    FTimeRigOutputSymbol NaturalFinish; // 0x1f8
    TArray<FTimeRigScratchAnimation> ScratchAnimations; // 0x210
    static USceneAction_Animation* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
