#pragma once
#include <cstdint>
#include "EFlockPersonalityAxis.hpp"
#include "FFlockPersonalityDistribution.hpp"
#pragma pack(push, 1)
struct FFlockPersonalitySpinner {
    FFlockPersonalityDistribution Distribution; // 0x0
    float MinWaitTime; // 0x8
    float MaxWaitTime; // 0xc
    float MinSpinDuration; // 0x10
    float MaxSpinDuration; // 0x14
    EFlockPersonalityAxis Axis; // 0x18
    char pad_19[0x3];
    float SpinSpeed; // 0x1c
    bool bInWorld; // 0x20
    char pad_21[0x17];
}; // Size: 0x38
#pragma pack(pop)
