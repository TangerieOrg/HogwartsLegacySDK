#pragma once
#include <cstdint>
#include "FModFloatSettings.hpp"
#include "FModIntSettings.hpp"
#include "UGameplayPropertyMod.hpp"
#pragma pack(push, 1)
class UGameplayPropertyModNumeric : public UGameplayPropertyMod {
public:
    FModFloatSettings FloatSettings; // 0xa0
    FModIntSettings IntSettings; // 0x1c0
    static UGameplayPropertyModNumeric* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
