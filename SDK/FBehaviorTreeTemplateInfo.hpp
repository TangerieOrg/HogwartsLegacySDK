#pragma once
#include <cstdint>
class UBehaviorTree;
class UBTCompositeNode;
#pragma pack(push, 1)
struct FBehaviorTreeTemplateInfo {
    UBehaviorTree* Asset; // 0x0
    UBTCompositeNode* Template; // 0x8
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
