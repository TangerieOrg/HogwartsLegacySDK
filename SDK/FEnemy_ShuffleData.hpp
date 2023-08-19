#pragma once
#include <cstdint>
#include "FEnemy_IdleData.hpp"
#pragma pack(push, 1)
struct FEnemy_ShuffleData : public FEnemy_IdleData {
    float ReentryCooldown; // 0x60
    char pad_64[0x4];
}; // Size: 0x68
#pragma pack(pop)
