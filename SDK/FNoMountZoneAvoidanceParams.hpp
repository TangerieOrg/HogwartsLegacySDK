#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNoMountZoneAvoidanceParams {
    float FrontTraceLengthGrounded; // 0x0
    float FrontTraceLengthGrounded_Jog; // 0x4
    float FrontTraceLengthGrounded_Sprint; // 0x8
    float FrontTraceLengthGrounded_Charge; // 0xc
    float FrontTraceLengthFlying; // 0x10
    float FrontTraceLengthFlying_Slow; // 0x14
    float FrontTraceLengthFlying_Fast; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
