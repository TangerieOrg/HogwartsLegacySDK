#pragma once
#include <cstdint>
#include "FCrowdAvoidanceConfig.hpp"
#include "FCrowdAvoidanceSamplingPattern.hpp"
#include "UCrowdManagerBase.hpp"
class ANavigationData;
#pragma pack(push, 1)
class UCrowdManager : public UCrowdManagerBase {
public:
    ANavigationData* MyNavData; // 0x28
    TArray<FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30
    TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40
    int32_t MaxAgents; // 0x50
    float MaxAgentRadius; // 0x54
    int32_t MaxAvoidedAgents; // 0x58
    int32_t MaxAvoidedWalls; // 0x5c
    float NavmeshCheckInterval; // 0x60
    float PathOptimizationInterval; // 0x64
    float SeparationDirClamp; // 0x68
    float PathOffsetRadiusMultiplier; // 0x6c
    uint8_t pad_bitfield_70_0 : 4;
    uint8_t bResolveCollisions : 1; // 0x70
    uint8_t pad_bitfield_70_5 : 3;
    char pad_71[0x7f];
    static UCrowdManager* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
