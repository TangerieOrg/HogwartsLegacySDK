#pragma once
#include <cstdint>
#include "FSceneRigScriptContainer.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
#pragma pack(push, 1)
class UStoryNode_Script : public UTimeRig_StoryGraphNode {
public:
    FSceneRigScriptContainer Script; // 0x98
    bool RegisteredAvailableNextLineIDs; // 0xa0
    char pad_a1[0x7];
    TArray<FName> AvailableNextLineIDs; // 0xa8
    FName RegisteredLastLineID; // 0xb8
    static UStoryNode_Script* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
