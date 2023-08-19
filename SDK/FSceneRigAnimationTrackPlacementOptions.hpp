#pragma once
#include <cstdint>
#include "ESceneRigAnimationTrackConstraintMode.hpp"
#include "FMovieSceneTransformMask.hpp"
#include "FRichCurve.hpp"
class UTransformProvider;
class UAnimationTransformProvider;
#pragma pack(push, 1)
struct FSceneRigAnimationTrackPlacementOptions {
    bool ConstrainedToPlacement; // 0x0
    bool bUnscaleHipsBone; // 0x1
    ESceneRigAnimationTrackConstraintMode ConstraintMode; // 0x2
    bool PlacementRespectsBlends; // 0x3
    char pad_4[0x4];
    UTransformProvider* Placement; // 0x8
    UAnimationTransformProvider* PlacementOffset; // 0x10
    FMovieSceneTransformMask TransformMask; // 0x18
    char pad_1c[0x4];
    FRichCurve Translation[3]; // 0x20
    FRichCurve Rotation[3]; // 0x1a0
    FRichCurve Scale[3]; // 0x320
}; // Size: 0x4a0
#pragma pack(pop)
