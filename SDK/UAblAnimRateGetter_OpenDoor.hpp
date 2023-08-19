#pragma once
#include <cstdint>
#include "UAblAnimRateGetter.hpp"
#pragma pack(push, 1)
class UAblAnimRateGetter_OpenDoor : public UAblAnimRateGetter {
public:
    float MinPlayRate; // 0x28
    float MaxPlayRate; // 0x2c
    static UAblAnimRateGetter_OpenDoor* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
