#pragma once
#include <cstdint>
#include "USocialAgentPawnComponent.hpp"
#pragma pack(push, 1)
class USocialAgentPathFollowerComponent : public USocialAgentPawnComponent {
public:
    char pad_120[0x138];
    static USocialAgentPathFollowerComponent* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
