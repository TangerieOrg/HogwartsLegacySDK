#pragma once
#include <cstdint>
#include "USocialAgentComponent.hpp"
#pragma pack(push, 1)
class USocialAgentObstacleComponent : public USocialAgentComponent {
public:
    char pad_110[0x10];
    static USocialAgentObstacleComponent* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
