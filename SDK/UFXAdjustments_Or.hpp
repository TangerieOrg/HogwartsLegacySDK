#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_Or : public UFXAdjustments {
public:
    TArray<UFXAdjustments*> Adjustments; // 0x28
    bool bFailIfNotFound; // 0x38
    char pad_39[0x7];
    static UFXAdjustments_Or* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
