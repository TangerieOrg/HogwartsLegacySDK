#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_Offset : public UFXAdjustments {
public:
    FVector Offset; // 0x28
    char pad_34[0x4];
    static UFXAdjustments_Offset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
