#pragma once
#include <cstdint>
#include "EEnemy_AttackLocSource.hpp"
#pragma pack(push, 1)
struct FEnemy_MoveStopData {
    EEnemy_AttackLocSource AttackLocSource; // 0x0
    char pad_1[0x3];
    float MaxHeadingChange; // 0x4
    float MaxDistanceChange; // 0x8
}; // Size: 0xc
#pragma pack(pop)
