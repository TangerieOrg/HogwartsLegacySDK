#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
class UFXFilter;
#pragma pack(push, 1)
class UFXAdjustments_ConditionalAdjustments : public UFXAdjustments {
public:
    TArray<UFXFilter*> Filters; // 0x28
    TArray<UFXAdjustments*> ConitionalAdjustments; // 0x38
    bool bFailIfNotFound; // 0x48
    char pad_49[0x7];
    static UFXAdjustments_ConditionalAdjustments* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
