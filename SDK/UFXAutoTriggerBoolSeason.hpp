#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolSeason : public UFXAutoTriggerBool {
public:
    int32_t Seasons; // 0x28
    char pad_2c[0x4];
    static UFXAutoTriggerBoolSeason* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
