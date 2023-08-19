#pragma once
#include <cstdint>
#include "FMovementProperties.hpp"
#include "FSoftClassPath.hpp"
#pragma pack(push, 1)
struct FNavAgentProperties : public FMovementProperties {
    char pad_1[0x3];
    float AgentRadius; // 0x4
    float AgentHeight; // 0x8
    float AgentStepHeight; // 0xc
    float NavWalkingSearchHeightScale; // 0x10
    char pad_14[0x4];
    FSoftClassPath PreferredNavData; // 0x18
}; // Size: 0x30
#pragma pack(pop)
