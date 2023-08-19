#pragma once
#include <cstdint>
#include "UCrowdManagerBase.hpp"
#pragma pack(push, 1)
class USocialDisplayManager : public UCrowdManagerBase {
public:
    char pad_28[0x48];
    float m_lookAheadTime; // 0x70
    float m_borderLookAheadTime; // 0x74
    bool m_logConstraintAllocation; // 0x78
    bool m_logAgentPairs; // 0x79
    bool m_enableAgentSelection; // 0x7a
    bool m_drawVelocityObstacles; // 0x7b
    bool m_drawOptimalConstraints; // 0x7c
    bool m_drawPenetratingConstraints; // 0x7d
    char pad_7e[0x2];
    uint32_t m_debugFrameCount; // 0x80
    int32_t m_debugFrameOffset; // 0x84
    static USocialDisplayManager* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
