#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLiveMaterialsLoadedObjects {
    char pad_0[0xf0];
    int64_t TotalLoadedBytes; // 0xf0
}; // Size: 0xf8
#pragma pack(pop)
