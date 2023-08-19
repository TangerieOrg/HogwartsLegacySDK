#pragma once
#include <cstdint>
#include "UAnyButtonInputBehavior.hpp"
#pragma pack(push, 1)
class USingleClickInputBehavior : public UAnyButtonInputBehavior {
public:
    char pad_80[0x40];
    bool HitTestOnRelease; // 0xc0
    char pad_c1[0x6f];
    static USingleClickInputBehavior* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
