#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCrowdAvoidanceConfig {
    float VelocityBias; // 0x0
    float DesiredVelocityWeight; // 0x4
    float CurrentVelocityWeight; // 0x8
    float SideBiasWeight; // 0xc
    float ImpactTimeWeight; // 0x10
    float ImpactTimeRange; // 0x14
    uint8_t CustomPatternIdx; // 0x18
    uint8_t AdaptiveDivisions; // 0x19
    uint8_t AdaptiveRings; // 0x1a
    uint8_t AdaptiveDepth; // 0x1b
}; // Size: 0x1c
#pragma pack(pop)
