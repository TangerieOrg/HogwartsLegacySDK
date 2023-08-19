#pragma once
#include <cstdint>
#include "UablAttackHitboxTask.hpp"
#pragma pack(push, 1)
class UUAbleCreatureAttackHitboxTask : public UablAttackHitboxTask {
public:
    char pad_d8[0x50];
    bool bAddForMountsOnly; // 0x128
    char pad_129[0x7];
    static UUAbleCreatureAttackHitboxTask* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
