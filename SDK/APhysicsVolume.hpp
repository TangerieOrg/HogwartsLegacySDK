#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class APhysicsVolume : public AVolume {
public:
    float TerminalVelocity; // 0x280
    int32_t Priority; // 0x284
    float FluidFriction; // 0x288
    uint8_t bWaterVolume : 1; // 0x28c
    uint8_t bPhysicsOnContact : 1; // 0x28c
    uint8_t pad_bitfield_28c_2 : 6;
    char pad_28d[0x3];
    static APhysicsVolume* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
