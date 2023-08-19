#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ACrowdTest : public AActor {
public:
    FName m_targetTag; // 0x248
    float m_minDesiredSpeed; // 0x250
    float m_maxDesiredSpeed; // 0x254
    uint32_t m_spawnCount; // 0x258
    uint32_t m_arrivedCount; // 0x25c
    char pad_260[0x40];
    static ACrowdTest* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
