#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimeRig_StoryGraphNode : public UObject {
public:
    TArray<UTimeRig_StoryGraphNode*> ParentNodes; // 0x28
    TArray<UTimeRig_StoryGraphNode*> ChildrenNodes; // 0x38
    char pad_48[0x50];
    static UTimeRig_StoryGraphNode* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
