#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
#include "FDialogLineRule_CameraAnimation.hpp"
#include "FDialogLineRule_CameraFixup.hpp"
#include "FSceneRigStage_ActorReference.hpp"
#include "FSceneRigStage_TransformReference.hpp"
class UTransformProvider;
#pragma pack(push, 1)
struct FDialogLineRule_CameraCharacter {
    FSceneRigStage_ActorReference Actor; // 0x0
    TArray<FDialogLineRule_CameraAnimation> Animations; // 0x10
    FDialogLineRule_CameraFixup CameraFixup; // 0x20
    FSceneRigStage_TransformReference Placement; // 0x68
    UTransformProvider* PlacementTransform; // 0x78
    FAnimationRequestLayerReference PlacementLayer; // 0x80
    float OffsetFromDialogueLine; // 0x88
    float SwitchCameraLengthThreshold; // 0x8c
    bool UseWhenSpeaking; // 0x90
    bool UseAtEnd; // 0x91
    char pad_92[0x2];
    float OffsetFromEnd; // 0x94
    float MinimumPreviousCameraLength; // 0x98
    char pad_9c[0x4];
}; // Size: 0xa0
#pragma pack(pop)
