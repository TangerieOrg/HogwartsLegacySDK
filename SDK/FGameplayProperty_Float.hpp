#pragma once
#include <cstdint>
#include "FGameplayPropertyNumeric.hpp"
#pragma pack(push, 1)
struct FGameplayProperty_Float : public FGameplayPropertyNumeric {
    float Current; // 0x50
    float Base; // 0x54
    float Min; // 0x58
    float Max; // 0x5c
    char pad_60[0x30];
}; // Size: 0x90
#pragma pack(pop)
