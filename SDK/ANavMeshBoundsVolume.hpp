#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FNavAgentSelector.hpp"
#pragma pack(push, 1)
class ANavMeshBoundsVolume : public AVolume {
public:
    FNavAgentSelector SupportedAgents; // 0x280
    char pad_284[0x4];
    static ANavMeshBoundsVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
