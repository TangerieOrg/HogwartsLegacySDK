#pragma once
#include <cstdint>
class USceneRigStageParameterBlock;
class UObject;
class UTimeRig_StoryGraph;
class UTimeRig_StoryGraphNode;
#pragma pack(push, 1)
struct FSceneRigParameters {
    char pad_0[0x58];
    USceneRigStageParameterBlock* StageParameters; // 0x58
    UObject* WorldContext; // 0x60
    UTimeRig_StoryGraph* StoryGraph; // 0x68
    UTimeRig_StoryGraphNode* StoryNode; // 0x70
    char pad_78[0x10];
}; // Size: 0x88
#pragma pack(pop)
