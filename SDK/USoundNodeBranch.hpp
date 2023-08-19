#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeBranch : public USoundNode {
public:
    FName BoolParameterName; // 0x48
    static USoundNodeBranch* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
