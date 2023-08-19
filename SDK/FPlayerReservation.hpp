#pragma once
#include <cstdint>
#include "FUniqueNetIdRepl.hpp"
#pragma pack(push, 1)
struct FPlayerReservation {
    FUniqueNetIdRepl UniqueId; // 0x0
    FString ValidationStr; // 0x28
    FString Platform; // 0x38
    bool bAllowCrossplay; // 0x48
    char pad_49[0x3];
    float ElapsedTime; // 0x4c
}; // Size: 0x50
#pragma pack(pop)
