#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
#include "FDialogLineRule_CameraAnimation.hpp"
#include "FDialogLineRule_CameraFixup.hpp"
#include "FSceneRigStage_ActorReference.hpp"
#include "UObject.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UDialogueLineRule_MoveCamera_Event : public UObject {
public:
    bool Enabled; // 0x28
    char pad_29[0x7];
    FSceneRigStage_ActorReference Actor; // 0x30
    TArray<FDialogLineRule_CameraAnimation> Animations; // 0x40
    FDialogLineRule_CameraFixup CameraFixup; // 0x50
    UTransformProvider* PlacementTransform; // 0x98
    FAnimationRequestLayerReference PlacementLayer; // 0xa0
    static UDialogueLineRule_MoveCamera_Event* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
