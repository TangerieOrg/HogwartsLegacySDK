#pragma once
#include <cstdint>
#include "FCacheEventBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBreakingEvent : public FCacheEventBase {
    int32_t Index; // 0x8
    FVector Location; // 0xc
    FVector Velocity; // 0x18
    FVector AngularVelocity; // 0x24
    float Mass; // 0x30
    FVector BoundingBoxMin; // 0x34
    FVector BoundingBoxMax; // 0x40
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
