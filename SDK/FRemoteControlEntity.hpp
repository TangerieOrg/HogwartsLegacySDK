#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FRemoteControlEntity {
    char pad_0[0x58];
    TArray<void*> Bindings; // 0x58
    char pad_68[0x8];
    FName Label; // 0x70
    FGuid ID; // 0x78
    char pad_88[0x10];
}; // Size: 0x98
#pragma pack(pop)
