#pragma once
#include <cstdint>
#include "UFXUpdate.hpp"
#pragma pack(push, 1)
class UFXUpdate_SetTimeDilation : public UFXUpdate {
public:
    float TimeDilation; // 0x28
    char pad_2c[0x4];
    static UFXUpdate_SetTimeDilation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
