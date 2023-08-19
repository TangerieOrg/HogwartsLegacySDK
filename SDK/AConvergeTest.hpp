#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AConvergeTest : public AActor {
public:
    FName m_convergeTag1; // 0x248
    FName m_convergeTag2; // 0x250
    float m_radius; // 0x258
    float m_desiredSpeed; // 0x25c
    uint32_t m_pathCount; // 0x260
    bool m_opposing; // 0x264
    char pad_265[0x33];
    static AConvergeTest* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
