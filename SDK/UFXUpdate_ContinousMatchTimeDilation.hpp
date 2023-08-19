#pragma once
#include <cstdint>
#include "EMultiFXUse.hpp"
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_ContinousMatchTimeDilation : public UFXUpdate_Tick {
public:
    EMultiFXUse UseTimeDilation; // 0x80
    char pad_81[0x7];
    static UFXUpdate_ContinousMatchTimeDilation* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
