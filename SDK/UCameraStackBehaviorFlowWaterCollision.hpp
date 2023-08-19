#pragma once
#include <cstdint>
#include "UCameraStackBehavior.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorFlowWaterCollision : public UCameraStackBehavior {
public:
    float ProbeSize; // 0x50
    bool bCheckForWaterVolumeOverlap; // 0x54
    bool bMaintainArmOriginFraming; // 0x55
    char pad_56[0x22];
    static UCameraStackBehaviorFlowWaterCollision* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
