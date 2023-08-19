#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSanctuaryBonusStatus {
    FName BonusID; // 0x0
    FString UnlockTextKey; // 0x8
    float Value; // 0x18
    bool bIsMaxedOut; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
