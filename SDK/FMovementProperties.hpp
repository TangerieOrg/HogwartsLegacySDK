#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMovementProperties {
    uint8_t bCanCrouch : 1; // 0x0
    uint8_t bCanJump : 1; // 0x0
    uint8_t bCanWalk : 1; // 0x0
    uint8_t bCanSwim : 1; // 0x0
    uint8_t bCanFly : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
}; // Size: 0x1
#pragma pack(pop)
