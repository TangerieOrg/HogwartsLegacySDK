#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUpdateLevelStreamingLevelStatus {
    FName PackageName; // 0x0
    int32_t LODIndex; // 0x8
    bool bNewShouldBeLoaded; // 0xc
    bool bNewShouldBeVisible; // 0xd
    bool bNewShouldBlockOnLoad; // 0xe
    char pad_f[0x1];
}; // Size: 0x10
#pragma pack(pop)
