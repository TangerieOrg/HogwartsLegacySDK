#pragma once
#include <cstdint>
#include "FMinimalViewInfo.hpp"
#pragma pack(push, 1)
struct FCameraShakeUpdateParams {
    float DeltaTime; // 0x0
    float ShakeScale; // 0x4
    float DynamicScale; // 0x8
    float BlendingWeight; // 0xc
    FMinimalViewInfo POV; // 0x10
}; // Size: 0x690
#pragma pack(pop)
