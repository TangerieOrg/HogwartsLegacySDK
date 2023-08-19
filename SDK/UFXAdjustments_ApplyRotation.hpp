#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_ApplyRotation : public UFXAdjustments {
public:
    FRotator Rotation; // 0x28
    char pad_34[0x4];
    static UFXAdjustments_ApplyRotation* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
