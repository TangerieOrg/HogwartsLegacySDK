#pragma once
#include <cstdint>
#include "UInputBehavior.hpp"
#pragma pack(push, 1)
class UMouseHoverBehavior : public UInputBehavior {
public:
    char pad_30[0x68];
    static UMouseHoverBehavior* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
