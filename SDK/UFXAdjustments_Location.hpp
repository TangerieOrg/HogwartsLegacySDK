#pragma once
#include <cstdint>
#include "EMultiFXLocation.hpp"
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_Location : public UFXAdjustments {
public:
    EMultiFXLocation Location; // 0x28
    bool bFailIfNotFound; // 0x29
    char pad_2a[0x6];
    static UFXAdjustments_Location* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
