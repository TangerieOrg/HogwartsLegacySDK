#pragma once
#include <cstdint>
#include "FRootMotionSourceSettings.hpp"
#include "FVector_NetQuantize10.hpp"
#pragma pack(push, 1)
struct FRootMotionSourceGroup {
    char pad_0[0x28];
    uint8_t bHasAdditiveSources : 1; // 0x28
    uint8_t bHasOverrideSources : 1; // 0x28
    uint8_t bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
    uint8_t bIsAdditiveVelocityApplied : 1; // 0x28
    uint8_t pad_bitfield_28_4 : 4;
    FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
    char pad_2a[0x2];
    FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
}; // Size: 0x38
#pragma pack(pop)
