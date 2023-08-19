#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Close_QBUpdateData : public UEnemy_QBUpdateData {
public:
    float StartDistance; // 0x30
    float EndDistance; // 0x34
    bool bStopWhenEnding; // 0x38
    bool bOutCanCloseIfInRange; // 0x39
    char pad_3a[0x2];
    float Timeout; // 0x3c
    static UEnemy_Close_QBUpdateData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
