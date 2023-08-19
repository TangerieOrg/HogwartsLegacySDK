#pragma once
#include <cstdint>
#include "FDialogueSequenceReference.hpp"
#include "UStoryNode_SceneRig.hpp"
#pragma pack(push, 1)
class UStoryNode_DialogueSequence : public UStoryNode_SceneRig {
public:
    FDialogueSequenceReference DialogueSequence; // 0xd0
    static UStoryNode_DialogueSequence* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
