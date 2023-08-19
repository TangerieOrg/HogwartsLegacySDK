#pragma once
#include <cstdint>
#include "UInputBehavior.hpp"
#pragma pack(push, 1)
class UKeyAsModifierInputBehavior : public UInputBehavior {
public:
    char pad_30[0xe0];
    static UKeyAsModifierInputBehavior* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
