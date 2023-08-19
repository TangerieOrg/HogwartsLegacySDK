#pragma once
#include <cstdint>
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_BroomFlight : public UFXUpdate_Tick {
public:
    float MaxDistance; // 0x80
    float InterpolationWeight; // 0x84
    char pad_88[0x8];
    static UFXUpdate_BroomFlight* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
