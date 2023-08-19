#pragma once
#include <cstdint>
#include "UTimeRig_StoryGraphNode.hpp"
#pragma pack(push, 1)
class UStoryNode_InputEvent : public UTimeRig_StoryGraphNode {
public:
    FName EventName; // 0x98
    bool bEventCanTriggerMultipleTimes; // 0xa0
    char pad_a1[0x7];
    static UStoryNode_InputEvent* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
