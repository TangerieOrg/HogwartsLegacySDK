#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGlobalLightingMasterStack {
    char pad_0[0x8];
    TArray<void*> MasterList; // 0x8
    char pad_18[0x8];
}; // Size: 0x20
#pragma pack(pop)
