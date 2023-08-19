#pragma once
#include <cstdint>
#include "FPerPlatformBool.hpp"
#include "FPerPlatformFloat.hpp"
#include "FPerPlatformInt.hpp"
#pragma pack(push, 1)
struct FAnimationSharingScalability {
    FPerPlatformBool UseBlendTransitions; // 0x0
    char pad_1[0x3];
    FPerPlatformFloat BlendSignificanceValue; // 0x4
    FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
    FPerPlatformFloat TickSignificanceValue; // 0xc
}; // Size: 0x10
#pragma pack(pop)
