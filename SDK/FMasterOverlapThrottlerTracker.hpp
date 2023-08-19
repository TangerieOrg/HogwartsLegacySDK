#pragma once
#include <cstdint>
#include "ECollisionEnabled\Type.hpp"
#include "FMasterOverlapThrottlerSettings.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMasterOverlapThrottlerTracker {
    FMasterOverlapThrottlerSettings Settings; // 0x0
    FVector LastLocationComparisonActor; // 0x10
    FVector LastLocationPrimitveComponent; // 0x1c
    uint8_t bDisableThrottling : 1; // 0x28
    uint8_t pad_bitfield_28_1 : 7;
    ECollisionEnabled::Type OriginalCollisionType; // 0x29
    char pad_2a[0x2];
}; // Size: 0x2c
#pragma pack(pop)
