#pragma once
#include <cstdint>
class UActorProvider;
#pragma pack(push, 1)
struct FActorByStat {
    int32_t StatValue; // 0x0
    char pad_4[0x4];
    UActorProvider* Actor; // 0x8
}; // Size: 0x10
#pragma pack(pop)
