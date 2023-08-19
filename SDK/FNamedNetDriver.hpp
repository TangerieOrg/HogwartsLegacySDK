#pragma once
#include <cstdint>
class UNetDriver;
#pragma pack(push, 1)
struct FNamedNetDriver {
    UNetDriver* NetDriver; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
