#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class USocialAgentComponent : public UActorComponent {
public:
    char pad_c8[0x40];
    float m_FOV; // 0x108
    bool m_participatesInCollisionAvoidance; // 0x10c
    char pad_10d[0x3];
    static USocialAgentComponent* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
