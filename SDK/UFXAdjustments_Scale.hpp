#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_Scale : public UFXAdjustments {
public:
    FVector Scale; // 0x28
    char pad_34[0x4];
    static UFXAdjustments_Scale* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
