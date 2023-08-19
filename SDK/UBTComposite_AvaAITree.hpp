#pragma once
#include <cstdint>
#include "UBTCompositeNode.hpp"
#pragma pack(push, 1)
class UBTComposite_AvaAITree : public UBTCompositeNode {
public:
    char pad_90[0x8];
    static UBTComposite_AvaAITree* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
