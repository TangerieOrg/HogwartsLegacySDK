#pragma once
#include <cstdint>
#include "UInputBehavior.hpp"
#pragma pack(push, 1)
class UAnyButtonInputBehavior : public UInputBehavior {
public:
    char pad_30[0x50];
    static UAnyButtonInputBehavior* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
