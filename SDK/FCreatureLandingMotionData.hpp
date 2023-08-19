#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCreatureLandingMotionData {
    float TouchdownTime; // 0x0
    float PreTouchdownSpeed; // 0x4
    float PostTouchdownSpeed; // 0x8
    float PostTouchdownTravelDistance; // 0xc
    float DecelerationDelayTime; // 0x10
    float PreferenceFactor; // 0x14
}; // Size: 0x18
#pragma pack(pop)
