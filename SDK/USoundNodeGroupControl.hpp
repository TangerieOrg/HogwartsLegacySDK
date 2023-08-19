#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeGroupControl : public USoundNode {
public:
    TArray<int32_t> GroupSizes; // 0x48
    static USoundNodeGroupControl* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
