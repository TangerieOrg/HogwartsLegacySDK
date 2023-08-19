#pragma once
#include <cstdint>
#include "EMultiFXUse.hpp"
#include "UFXUpdate.hpp"
#pragma pack(push, 1)
class UFXUpdate_InitialMatchTimeDilation : public UFXUpdate {
public:
    EMultiFXUse UseTimeDilation; // 0x28
    char pad_29[0x7];
    static UFXUpdate_InitialMatchTimeDilation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
