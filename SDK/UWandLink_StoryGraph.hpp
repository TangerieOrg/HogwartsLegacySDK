#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "USceneRig_StoryGraph.hpp"
#pragma pack(push, 1)
class UWandLink_StoryGraph : public USceneRig_StoryGraph {
public:
    FSceneRigStage_Actor Antagonist; // 0x90
    FSceneRigStage_Actor TeleportLocation1; // 0xa8
    FSceneRigStage_Actor TeleportLocation2; // 0xc0
    static UWandLink_StoryGraph* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
