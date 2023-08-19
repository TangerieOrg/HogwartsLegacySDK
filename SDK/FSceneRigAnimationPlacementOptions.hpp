#pragma once
#include <cstdint>
#include "EAnimTrackRootMode.hpp"
#include "ESceneRigAnimationRootBlendMode.hpp"
class UBoolProvider;
class UTransformProvider;
class UAnimationTransformProvider;
#pragma pack(push, 1)
struct FSceneRigAnimationPlacementOptions {
    EAnimTrackRootMode RootEvaluationMode; // 0x0
    ESceneRigAnimationRootBlendMode RootBlendMode; // 0x1
    ESceneRigAnimationRootBlendMode BlendInRootBlendMode; // 0x2
    ESceneRigAnimationRootBlendMode BlendOutRootBlendMode; // 0x3
    bool AccumulateRootMotion; // 0x4
    char pad_5[0x3];
    UBoolProvider* ConstrainedToPlacement; // 0x8
    UBoolProvider* PlacementRespectsBlends; // 0x10
    UBoolProvider* PlacementIsMoving; // 0x18
    UTransformProvider* Placement; // 0x20
    UAnimationTransformProvider* PlacementOffset; // 0x28
}; // Size: 0x30
#pragma pack(pop)
