#pragma once
#include <cstdint>
#include "EPostCalculationRoundingType.hpp"
#include "FGameplayPropertyNumeric.hpp"
#pragma pack(push, 1)
struct FGameplayProperty_Int : public FGameplayPropertyNumeric {
    int32_t Current; // 0x50
    int32_t Base; // 0x54
    int32_t Min; // 0x58
    int32_t Max; // 0x5c
    EPostCalculationRoundingType RoundingType; // 0x60
    char pad_61[0x1f];
}; // Size: 0x80
#pragma pack(pop)
