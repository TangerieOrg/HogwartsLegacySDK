#pragma once
#include <cstdint>
class UEnvQuery;
#pragma pack(push, 1)
struct FEnvQueryInstanceCache {
    UEnvQuery* Template; // 0x0
    char pad_8[0x170];
}; // Size: 0x178
#pragma pack(pop)
