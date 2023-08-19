#pragma once
#include <cstdint>
#include "FSceneRigStage_ActorReference.hpp"
#include "FSceneRigStage_TransformReference.hpp"
#pragma pack(push, 1)
struct FSceneRigStageActorPlacement {
    FSceneRigStage_ActorReference Actor; // 0x0
    FSceneRigStage_TransformReference Placement; // 0x10
}; // Size: 0x20
#pragma pack(pop)
