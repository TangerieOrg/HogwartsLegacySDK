#pragma once
#include <cstdint>
#include "UEdGraphNode.hpp"
#pragma pack(push, 1)
class UEdGraphNode_Documentation : public UEdGraphNode {
public:
    FString Link; // 0x98
    FString Excerpt; // 0xa8
    static UEdGraphNode_Documentation* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
