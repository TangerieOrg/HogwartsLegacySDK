#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCachedAnimAssetPlayerData {
    FName StateMachineName; // 0x0
    FName StateName; // 0x8
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
